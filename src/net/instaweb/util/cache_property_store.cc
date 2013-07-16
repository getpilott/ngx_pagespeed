/*
 * Copyright 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Author: pulkitg@google.com (Pulkit Goyal)

#include "net/instaweb/util/public/cache_property_store.h"

#include <algorithm>
#include <utility>

#include "base/logging.h"
#include "net/instaweb/http/public/log_record.h"
#include "net/instaweb/util/property_cache.pb.h"
#include "net/instaweb/util/public/cache_stats.h"
#include "net/instaweb/util/public/proto_util.h"
#include "net/instaweb/util/public/stl_util.h"
#include "pagespeed/kernel/base/cache_interface.h"
#include "pagespeed/kernel/base/callback.h"
#include "pagespeed/kernel/base/shared_string.h"

namespace net_instaweb {

// Property cache key prefixes.
const char CachePropertyStore::kPagePropertyCacheKeyPrefix[] = "prop_page/";

CachePropertyStore::CachePropertyStore(const GoogleString& cache_key_prefix,
                                       CacheInterface* cache,
                                       Timer* timer,
                                       Statistics* stats)
    : cache_key_prefix_(cache_key_prefix),
      default_cache_(cache),
      timer_(timer),
      stats_(stats) {
}

CachePropertyStore::~CachePropertyStore() {
  STLDeleteValues(&cohort_cache_map_);
}

namespace {

// Helper class to receive low-level cache callbacks, decode them
// as properties.
class CachePropertyStoreCacheCallback : public CacheInterface::Callback {
 public:
  CachePropertyStoreCacheCallback(const PropertyCache::Cohort* cohort,
                                  PropertyPage* page,
                                  Callback1<bool>* done)
      : cohort_(cohort),
        page_(page),
        done_(done) {
  }
  virtual ~CachePropertyStoreCacheCallback() {}
  virtual void Done(CacheInterface::KeyState state) {
    bool valid = false;
    if (state == CacheInterface::kAvailable) {
      StringPiece value_string = value()->Value();
      ArrayInputStream input(value_string.data(), value_string.size());
      PropertyCacheValues values;
      if (values.ParseFromZeroCopyStream(&input)) {
        valid = true;
        int64 min_write_timestamp_ms = kint64max;
        // The values in a cohort could have different write_timestamp_ms
        // values, since it is populated in UpdateValue.  But since all values
        // in a cohort are written (and read) together we need to treat either
        // all as valid or none as valid.  Hence we look at the oldest write
        // timestamp to make this decision.
        for (int i = 0; i < values.value_size(); ++i) {
          min_write_timestamp_ms = std::min(
              min_write_timestamp_ms, values.value(i).write_timestamp_ms());
        }
        // Return valid for empty cohort, and if IsCacheValid returns true for
        // Value with oldest timestamp.
        if (values.value_size() == 0 ||
            page_->IsCacheValid(min_write_timestamp_ms)) {
          valid = true;
          for (int i = 0; i < values.value_size(); ++i) {
            const PropertyValueProtobuf& pcache_value = values.value(i);
            page_->AddValueFromProtobuf(cohort_, pcache_value);
          }
        } else {
          valid = false;
        }
      }
    }

    page_->log_record()->SetCacheStatusForCohortInfo(
        page_->page_type(), cohort_->name(), valid, state);
    page_->SetCacheState(cohort_, state);
    done_->Run(valid);
    delete this;
  }

 private:
  const PropertyCache::Cohort* cohort_;
  PropertyPage* page_;
  Callback1<bool>* done_;
};

}  // namespace

GoogleString CachePropertyStore::CacheKey(
    const StringPiece& key, const PropertyCache::Cohort* cohort) const {
  return StrCat(cache_key_prefix_, key, "@", cohort->name());
}

void CachePropertyStore::Get(const GoogleString& key,
                             const PropertyCache::Cohort* cohort,
                             PropertyPage* page,
                             BoolCallback* done) {
  CohortCacheMap::iterator cohort_itr = cohort_cache_map_.find(cohort->name());
  CHECK(cohort_itr != cohort_cache_map_.end());
  const GoogleString cache_key = CacheKey(key, cohort);
  cohort_itr->second->Get(
      cache_key, new CachePropertyStoreCacheCallback(cohort, page, done));
}

void CachePropertyStore::Put(const GoogleString& key,
                             const PropertyCache::Cohort* cohort,
                             const PropertyCacheValues* values) {
  GoogleString value;
  StringOutputStream sstream(&value);
  values->SerializeToZeroCopyStream(&sstream);
  CohortCacheMap::iterator cohort_itr = cohort_cache_map_.find(cohort->name());
  CHECK(cohort_itr != cohort_cache_map_.end());
  const GoogleString cache_key = CacheKey(key, cohort);
  cohort_itr->second->PutSwappingString(cache_key, &value);
}

void CachePropertyStore::AddCohort(const GoogleString& cohort) {
  AddCohortWithCache(cohort, default_cache_);
}

void CachePropertyStore::AddCohortWithCache(
    const GoogleString& cohort, CacheInterface* cache) {
  std::pair<CohortCacheMap::iterator, bool> insertions =
      cohort_cache_map_.insert(
        make_pair(cohort, static_cast<CacheInterface*>(NULL)));
  CHECK(insertions.second) << cohort << " is added twice.";
  // Create a new CacheStats for every cohort so that we can track cache
  // statistics independently for every cohort.
  CacheInterface* cache_stats = new CacheStats(
        PropertyCache::GetStatsPrefix(cohort), cache, timer_, stats_);
  insertions.first->second = cache_stats;
}

}  // namespace net_instaweb