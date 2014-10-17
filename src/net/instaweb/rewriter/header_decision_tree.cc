// Generated 2014-10-07
// Automatically generated.  Do not edit.
#include "net/instaweb/rewriter/public/decision_tree.h"
#include "net/instaweb/rewriter/public/mobilize_decision_trees.h"
#include "pagespeed/kernel/base/basictypes.h"

namespace net_instaweb {

const net_instaweb::DecisionTree::Node kHeaderTree[] = {
  {kHasAttrString + kHeadAttr, 0.5000, -1.0, &kHeaderTree[1], &kHeaderTree[410]},
  {kPreviousTagCount, 2.5000, -1.0, &kHeaderTree[2], &kHeaderTree[43]},
  {kRelevantTagPercent + kDivTag, 71.5000, -1.0, &kHeaderTree[3], &kHeaderTree[38]},
  {kRelevantTagPercent + kDivTag, 13.5000, -1.0, &kHeaderTree[4], &kHeaderTree[25]},
  {kContainedTagRelativeDepth, 1.5000, -1.0, &kHeaderTree[5], &kHeaderTree[10]},
  {kRelevantTagPercent + kDivTag, 5.5000, -1.0, &kHeaderTree[6], &kHeaderTree[9]},
  {kContainedTagPercent, 0.2450, -1.0, &kHeaderTree[7], &kHeaderTree[8]},
  {-1, -1.0, 0.0166666666667, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.119402985075, NULL, NULL},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[11], &kHeaderTree[20]},
  {kRelevantTagCount + kH1Tag, 0.5000, -1.0, &kHeaderTree[12], &kHeaderTree[19]},
  {kContainedTagPercent, 2.8200, -1.0, &kHeaderTree[13], &kHeaderTree[14]},
  {-1, -1.0, 0.0606060606061, NULL, NULL},
  {kElementTagDepth, 1.5000, -1.0, &kHeaderTree[15], &kHeaderTree[16]},
  {-1, -1.0, 0.4, NULL, NULL},
  {kPreviousTagPercent, 0.5500, -1.0, &kHeaderTree[17], &kHeaderTree[18]},
  {-1, -1.0, 0.138461538462, NULL, NULL},
  {-1, -1.0, 0.306451612903, NULL, NULL},
  {-1, -1.0, 0.407766990291, NULL, NULL},
  {kContainedTagPercent, 4.5650, -1.0, &kHeaderTree[21], &kHeaderTree[22]},
  {-1, -1.0, 0.0113636363636, NULL, NULL},
  {kContainedNonBlankPercent, 4.0700, -1.0, &kHeaderTree[23], &kHeaderTree[24]},
  {-1, -1.0, 0.157894736842, NULL, NULL},
  {-1, -1.0, 0.0266666666667, NULL, NULL},
  {kPreviousTagCount, 1.5000, -1.0, &kHeaderTree[26], &kHeaderTree[35]},
  {kContainedTagRelativeDepth, 4.5000, -1.0, &kHeaderTree[27], &kHeaderTree[32]},
  {kRelevantTagPercent + kATag, 24.5000, -1.0, &kHeaderTree[28], &kHeaderTree[29]},
  {-1, -1.0, 0.569620253165, NULL, NULL},
  {kContainedTagPercent, 35.2200, -1.0, &kHeaderTree[30], &kHeaderTree[31]},
  {-1, -1.0, 0.844827586207, NULL, NULL},
  {-1, -1.0, 0.68253968254, NULL, NULL},
  {kRelevantTagPercent + kDivTag, 29.5000, -1.0, &kHeaderTree[33], &kHeaderTree[34]},
  {-1, -1.0, 0.5, NULL, NULL},
  {-1, -1.0, 0.229508196721, NULL, NULL},
  {kContainedContentBytes, 129.5000, -1.0, &kHeaderTree[36], &kHeaderTree[37]},
  {-1, -1.0, 0.159420289855, NULL, NULL},
  {-1, -1.0, 0.333333333333, NULL, NULL},
  {kContainedContentBytes, 315.5000, -1.0, &kHeaderTree[39], &kHeaderTree[40]},
  {-1, -1.0, 0.0877192982456, NULL, NULL},
  {kContainedContentPercent, 89.7550, -1.0, &kHeaderTree[41], &kHeaderTree[42]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kRelevantTagPercent + kH1Tag, 0.5000, -1.0, &kHeaderTree[44], &kHeaderTree[361]},
  {kPreviousTagCount, 3.5000, -1.0, &kHeaderTree[45], &kHeaderTree[52]},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[46], &kHeaderTree[49]},
  {kRelevantTagCount + kATag, 4.5000, -1.0, &kHeaderTree[47], &kHeaderTree[48]},
  {-1, -1.0, 0.137931034483, NULL, NULL},
  {-1, -1.0, 0.245614035088, NULL, NULL},
  {kContainedTagCount, 22.5000, -1.0, &kHeaderTree[50], &kHeaderTree[51]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0882352941176, NULL, NULL},
  {kRelevantTagPercent + kH2Tag, 0.5000, -1.0, &kHeaderTree[53], &kHeaderTree[312]},
  {kPreviousTagPercent, 7.7650, -1.0, &kHeaderTree[54], &kHeaderTree[97]},
  {kContainedTagRelativeDepth, 4.5000, -1.0, &kHeaderTree[55], &kHeaderTree[88]},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[56], &kHeaderTree[61]},
  {kRelevantTagPercent + kImgTag, 1.5000, -1.0, &kHeaderTree[57], &kHeaderTree[60]},
  {kRelevantTagPercent + kSpanTag, 2.5000, -1.0, &kHeaderTree[58], &kHeaderTree[59]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.05, NULL, NULL},
  {-1, -1.0, 0.100917431193, NULL, NULL},
  {kRelevantTagCount + kDivTag, 7.5000, -1.0, &kHeaderTree[62], &kHeaderTree[85]},
  {kPreviousContentBytes, 324.5000, -1.0, &kHeaderTree[63], &kHeaderTree[80]},
  {kPreviousTagPercent, 0.5750, -1.0, &kHeaderTree[64], &kHeaderTree[65]},
  {-1, -1.0, 0.016393442623, NULL, NULL},
  {kContainedTagCount, 1.5000, -1.0, &kHeaderTree[66], &kHeaderTree[71]},
  {kContainedTagPercent, 0.3950, -1.0, &kHeaderTree[67], &kHeaderTree[68]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousTagPercent, 4.7800, -1.0, &kHeaderTree[69], &kHeaderTree[70]},
  {-1, -1.0, 0.0344827586207, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousTagCount, 4.5000, -1.0, &kHeaderTree[72], &kHeaderTree[75]},
  {kPreviousTagPercent, 1.4450, -1.0, &kHeaderTree[73], &kHeaderTree[74]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kRelevantTagCount + kDivTag, 3.5000, -1.0, &kHeaderTree[76], &kHeaderTree[77]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagCount, 8.5000, -1.0, &kHeaderTree[78], &kHeaderTree[79]},
  {-1, -1.0, 0.0166666666667, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagPercent, 0.2050, -1.0, &kHeaderTree[81], &kHeaderTree[84]},
  {kContainedContentBytes, 2.5000, -1.0, &kHeaderTree[82], &kHeaderTree[83]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0862068965517, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousNonBlankBytes, 44.5000, -1.0, &kHeaderTree[86], &kHeaderTree[87]},
  {-1, -1.0, 0.0701754385965, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[89], &kHeaderTree[90]},
  {-1, -1.0, 0.218390804598, NULL, NULL},
  {kPreviousNonBlankBytes, 17.5000, -1.0, &kHeaderTree[91], &kHeaderTree[94]},
  {kRelevantTagPercent + kATag, 21.0000, -1.0, &kHeaderTree[92], &kHeaderTree[93]},
  {-1, -1.0, 0.0333333333333, NULL, NULL},
  {-1, -1.0, 0.120689655172, NULL, NULL},
  {kRelevantTagCount + kATag, 24.5000, -1.0, &kHeaderTree[95], &kHeaderTree[96]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0172413793103, NULL, NULL},
  {kRelevantTagPercent + kATag, 88.5000, -1.0, &kHeaderTree[98], &kHeaderTree[311]},
  {kContainedNonBlankBytes, 2.5000, -1.0, &kHeaderTree[99], &kHeaderTree[138]},
  {kRelevantTagPercent + kDivTag, 28.5000, -1.0, &kHeaderTree[100], &kHeaderTree[137]},
  {kPreviousNonBlankPercent, 19.7450, -1.0, &kHeaderTree[101], &kHeaderTree[118]},
  {kPreviousTagCount, 251.5000, -1.0, &kHeaderTree[102], &kHeaderTree[115]},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[103], &kHeaderTree[106]},
  {kPreviousNonBlankPercent, 2.6350, -1.0, &kHeaderTree[104], &kHeaderTree[105]},
  {-1, -1.0, 0.0333333333333, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentBytes, 8.5000, -1.0, &kHeaderTree[107], &kHeaderTree[110]},
  {kPreviousTagPercent, 18.9250, -1.0, &kHeaderTree[108], &kHeaderTree[109]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {kRelevantTagPercent + kDivTag, 0.5000, -1.0, &kHeaderTree[111], &kHeaderTree[114]},
  {kPreviousNonBlankPercent, 14.3000, -1.0, &kHeaderTree[112], &kHeaderTree[113]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagPercent, 0.2050, -1.0, &kHeaderTree[116], &kHeaderTree[117]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0340909090909, NULL, NULL},
  {kPreviousNonBlankBytes, 52.5000, -1.0, &kHeaderTree[119], &kHeaderTree[120]},
  {-1, -1.0, 0.0138888888889, NULL, NULL},
  {kRelevantTagPercent + kSpanTag, 11.5000, -1.0, &kHeaderTree[121], &kHeaderTree[136]},
  {kPreviousNonBlankBytes, 651.5000, -1.0, &kHeaderTree[122], &kHeaderTree[127]},
  {kPreviousContentBytes, 715.5000, -1.0, &kHeaderTree[123], &kHeaderTree[126]},
  {kContainedTagPercent, 0.2750, -1.0, &kHeaderTree[124], &kHeaderTree[125]},
  {-1, -1.0, 0.0169491525424, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0172413793103, NULL, NULL},
  {kPreviousContentBytes, 5501.0000, -1.0, &kHeaderTree[128], &kHeaderTree[129]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentBytes, 5588.0000, -1.0, &kHeaderTree[130], &kHeaderTree[131]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {kPreviousContentBytes, 5945.5000, -1.0, &kHeaderTree[132], &kHeaderTree[135]},
  {kPreviousTagCount, 750.5000, -1.0, &kHeaderTree[133], &kHeaderTree[134]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.00970873786408, NULL, NULL},
  {-1, -1.0, 0.0344827586207, NULL, NULL},
  {kPreviousContentBytes, 1.0000, -1.0, &kHeaderTree[139], &kHeaderTree[142]},
  {kRelevantTagPercent + kDivTag, 10.5000, -1.0, &kHeaderTree[140], &kHeaderTree[141]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.1, NULL, NULL},
  {kContainedContentPercent, 1.0450, -1.0, &kHeaderTree[143], &kHeaderTree[238]},
  {kRelevantTagCount + kSpanTag, 10.5000, -1.0, &kHeaderTree[144], &kHeaderTree[237]},
  {kRelevantTagPercent + kH3Tag, 6.5000, -1.0, &kHeaderTree[145], &kHeaderTree[228]},
  {kRelevantTagPercent + kH4Tag, 29.0000, -1.0, &kHeaderTree[146], &kHeaderTree[227]},
  {kRelevantTagPercent + kH6Tag, 2.5000, -1.0, &kHeaderTree[147], &kHeaderTree[226]},
  {kRelevantTagPercent + kH4Tag, 2.5000, -1.0, &kHeaderTree[148], &kHeaderTree[221]},
  {kContainedTagPercent, 0.5750, -1.0, &kHeaderTree[149], &kHeaderTree[196]},
  {kRelevantTagPercent + kPTag, 3.5000, -1.0, &kHeaderTree[150], &kHeaderTree[195]},
  {kRelevantTagPercent + kH3Tag, 0.5000, -1.0, &kHeaderTree[151], &kHeaderTree[192]},
  {kRelevantTagPercent + kSpanTag, 2.5000, -1.0, &kHeaderTree[152], &kHeaderTree[189]},
  {kElementTagDepth, 6.5000, -1.0, &kHeaderTree[153], &kHeaderTree[172]},
  {kContainedNonBlankPercent, 0.1950, -1.0, &kHeaderTree[154], &kHeaderTree[155]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousNonBlankBytes, 1633.0000, -1.0, &kHeaderTree[156], &kHeaderTree[159]},
  {kPreviousTagPercent, 13.8700, -1.0, &kHeaderTree[157], &kHeaderTree[158]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentBytes, 2535.0000, -1.0, &kHeaderTree[160], &kHeaderTree[161]},
  {-1, -1.0, 0.0568181818182, NULL, NULL},
  {kContainedTagPercent, 0.2950, -1.0, &kHeaderTree[162], &kHeaderTree[169]},
  {kPreviousTagPercent, 78.4200, -1.0, &kHeaderTree[163], &kHeaderTree[166]},
  {kPreviousTagPercent, 57.4400, -1.0, &kHeaderTree[164], &kHeaderTree[165]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0701754385965, NULL, NULL},
  {kPreviousTagCount, 903.0000, -1.0, &kHeaderTree[167], &kHeaderTree[168]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {kPreviousNonBlankBytes, 3105.0000, -1.0, &kHeaderTree[170], &kHeaderTree[171]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentPercent, 89.4350, -1.0, &kHeaderTree[173], &kHeaderTree[184]},
  {kPreviousNonBlankPercent, 26.4150, -1.0, &kHeaderTree[174], &kHeaderTree[179]},
  {kPreviousTagCount, 508.5000, -1.0, &kHeaderTree[175], &kHeaderTree[178]},
  {kRelevantTagPercent + kSpanTag, 0.5000, -1.0, &kHeaderTree[176], &kHeaderTree[177]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.00892857142857, NULL, NULL},
  {-1, -1.0, 0.032967032967, NULL, NULL},
  {kContainedTagPercent, 0.4350, -1.0, &kHeaderTree[180], &kHeaderTree[181]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagPercent, 0.4650, -1.0, &kHeaderTree[182], &kHeaderTree[183]},
  {-1, -1.0, 0.0105263157895, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagDepth, 9.5000, -1.0, &kHeaderTree[185], &kHeaderTree[188]},
  {kPreviousContentBytes, 8552.0000, -1.0, &kHeaderTree[186], &kHeaderTree[187]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0597014925373, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedContentPercent, 0.1650, -1.0, &kHeaderTree[190], &kHeaderTree[191]},
  {-1, -1.0, 0.0666666666667, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousTagCount, 710.0000, -1.0, &kHeaderTree[193], &kHeaderTree[194]},
  {-1, -1.0, 0.0701754385965, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0550458715596, NULL, NULL},
  {kContainedContentPercent, 1.0150, -1.0, &kHeaderTree[197], &kHeaderTree[218]},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[198], &kHeaderTree[203]},
  {kPreviousTagPercent, 84.9600, -1.0, &kHeaderTree[199], &kHeaderTree[202]},
  {kPreviousNonBlankPercent, 48.4600, -1.0, &kHeaderTree[200], &kHeaderTree[201]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0526315789474, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kHasAttrString + kCommentAttr, 0.5000, -1.0, &kHeaderTree[204], &kHeaderTree[217]},
  {kContainedTagCount, 1.5000, -1.0, &kHeaderTree[205], &kHeaderTree[206]},
  {-1, -1.0, 0.010101010101, NULL, NULL},
  {kElementTagDepth, 10.5000, -1.0, &kHeaderTree[207], &kHeaderTree[212]},
  {kContainedNonBlankPercent, 0.9750, -1.0, &kHeaderTree[208], &kHeaderTree[209]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedContentPercent, 0.9250, -1.0, &kHeaderTree[210], &kHeaderTree[211]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousTagCount, 456.5000, -1.0, &kHeaderTree[213], &kHeaderTree[214]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousTagCount, 560.5000, -1.0, &kHeaderTree[215], &kHeaderTree[216]},
  {-1, -1.0, 0.0350877192982, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0153846153846, NULL, NULL},
  {kContainedTagCount, 10.5000, -1.0, &kHeaderTree[219], &kHeaderTree[220]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0350877192982, NULL, NULL},
  {kContainedContentBytes, 39.5000, -1.0, &kHeaderTree[222], &kHeaderTree[225]},
  {kContainedTagPercent, 0.6450, -1.0, &kHeaderTree[223], &kHeaderTree[224]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0681818181818, NULL, NULL},
  {-1, -1.0, 0.0806451612903, NULL, NULL},
  {-1, -1.0, 0.0847457627119, NULL, NULL},
  {kContainedTagCount, 3.5000, -1.0, &kHeaderTree[229], &kHeaderTree[232]},
  {kContainedNonBlankPercent, 0.4350, -1.0, &kHeaderTree[230], &kHeaderTree[231]},
  {-1, -1.0, 0.16393442623, NULL, NULL},
  {-1, -1.0, 0.0327868852459, NULL, NULL},
  {kPreviousTagPercent, 60.1150, -1.0, &kHeaderTree[233], &kHeaderTree[236]},
  {kContainedTagPercent, 1.6650, -1.0, &kHeaderTree[234], &kHeaderTree[235]},
  {-1, -1.0, 0.0701754385965, NULL, NULL},
  {-1, -1.0, 0.0131578947368, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.123076923077, NULL, NULL},
  {kPreviousContentBytes, 195.5000, -1.0, &kHeaderTree[239], &kHeaderTree[262]},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[240], &kHeaderTree[247]},
  {kContainedContentPercent, 2.8600, -1.0, &kHeaderTree[241], &kHeaderTree[242]},
  {-1, -1.0, 0.0701754385965, NULL, NULL},
  {kRelevantTagCount + kSpanTag, 1.5000, -1.0, &kHeaderTree[243], &kHeaderTree[246]},
  {kPreviousContentBytes, 142.5000, -1.0, &kHeaderTree[244], &kHeaderTree[245]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.027027027027, NULL, NULL},
  {kContainedTagPercent, 3.9550, -1.0, &kHeaderTree[248], &kHeaderTree[257]},
  {kPreviousNonBlankBytes, 88.5000, -1.0, &kHeaderTree[249], &kHeaderTree[250]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentBytes, 113.5000, -1.0, &kHeaderTree[251], &kHeaderTree[252]},
  {-1, -1.0, 0.05, NULL, NULL},
  {kPreviousContentBytes, 157.5000, -1.0, &kHeaderTree[253], &kHeaderTree[254]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagPercent, 2.0450, -1.0, &kHeaderTree[255], &kHeaderTree[256]},
  {-1, -1.0, 0.0350877192982, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kRelevantTagPercent + kATag, 49.5000, -1.0, &kHeaderTree[258], &kHeaderTree[259]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousNonBlankPercent, 13.1100, -1.0, &kHeaderTree[260], &kHeaderTree[261]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {kContainedContentPercent, 1.7450, -1.0, &kHeaderTree[263], &kHeaderTree[278]},
  {kRelevantTagPercent + kPTag, 20.5000, -1.0, &kHeaderTree[264], &kHeaderTree[277]},
  {kRelevantTagPercent + kH4Tag, 2.5000, -1.0, &kHeaderTree[265], &kHeaderTree[274]},
  {kRelevantTagPercent + kH5Tag, 7.0000, -1.0, &kHeaderTree[266], &kHeaderTree[273]},
  {kContainedTagPercent, 1.0250, -1.0, &kHeaderTree[267], &kHeaderTree[272]},
  {kContainedTagCount, 8.5000, -1.0, &kHeaderTree[268], &kHeaderTree[271]},
  {kContainedNonBlankBytes, 16.5000, -1.0, &kHeaderTree[269], &kHeaderTree[270]},
  {-1, -1.0, 0.0166666666667, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0204081632653, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {kContainedTagCount, 6.5000, -1.0, &kHeaderTree[275], &kHeaderTree[276]},
  {-1, -1.0, 0.047619047619, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0508474576271, NULL, NULL},
  {kPreviousTagCount, 23.5000, -1.0, &kHeaderTree[279], &kHeaderTree[280]},
  {-1, -1.0, 0.015625, NULL, NULL},
  {kPreviousNonBlankPercent, 15.1450, -1.0, &kHeaderTree[281], &kHeaderTree[290]},
  {kPreviousContentPercent, 14.2650, -1.0, &kHeaderTree[282], &kHeaderTree[289]},
  {kPreviousTagPercent, 38.3450, -1.0, &kHeaderTree[283], &kHeaderTree[286]},
  {kRelevantTagPercent + kATag, 41.5000, -1.0, &kHeaderTree[284], &kHeaderTree[285]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0108695652174, NULL, NULL},
  {kPreviousTagPercent, 43.9500, -1.0, &kHeaderTree[287], &kHeaderTree[288]},
  {-1, -1.0, 0.0350877192982, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0350877192982, NULL, NULL},
  {kRelevantTagPercent + kH3Tag, 8.5000, -1.0, &kHeaderTree[291], &kHeaderTree[300]},
  {kRelevantTagPercent + kH5Tag, 97.0000, -1.0, &kHeaderTree[292], &kHeaderTree[297]},
  {kRelevantTagPercent + kImgTag, 24.5000, -1.0, &kHeaderTree[293], &kHeaderTree[294]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagPercent, 4.9750, -1.0, &kHeaderTree[295], &kHeaderTree[296]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousNonBlankBytes, 1733.5000, -1.0, &kHeaderTree[298], &kHeaderTree[299]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagPercent, 1.8150, -1.0, &kHeaderTree[301], &kHeaderTree[306]},
  {kPreviousTagCount, 205.5000, -1.0, &kHeaderTree[302], &kHeaderTree[303]},
  {-1, -1.0, 0.041095890411, NULL, NULL},
  {kContainedNonBlankPercent, 2.3250, -1.0, &kHeaderTree[304], &kHeaderTree[305]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousNonBlankBytes, 5350.5000, -1.0, &kHeaderTree[307], &kHeaderTree[308]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentBytes, 7545.5000, -1.0, &kHeaderTree[309], &kHeaderTree[310]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.046875, NULL, NULL},
  {kContainedTagCount, 3.5000, -1.0, &kHeaderTree[313], &kHeaderTree[324]},
  {kPreviousTagCount, 30.5000, -1.0, &kHeaderTree[314], &kHeaderTree[315]},
  {-1, -1.0, 0.322580645161, NULL, NULL},
  {kRelevantTagCount + kATag, 0.5000, -1.0, &kHeaderTree[316], &kHeaderTree[323]},
  {kContainedTagCount, 2.5000, -1.0, &kHeaderTree[317], &kHeaderTree[320]},
  {kRelevantTagPercent + kH2Tag, 13.0000, -1.0, &kHeaderTree[318], &kHeaderTree[319]},
  {-1, -1.0, 0.228070175439, NULL, NULL},
  {-1, -1.0, 0.0987654320988, NULL, NULL},
  {kContainedNonBlankBytes, 55.5000, -1.0, &kHeaderTree[321], &kHeaderTree[322]},
  {-1, -1.0, 0.0337078651685, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.21, NULL, NULL},
  {kContainedNonBlankPercent, 3.0250, -1.0, &kHeaderTree[325], &kHeaderTree[346]},
  {kContainedTagCount, 8.5000, -1.0, &kHeaderTree[326], &kHeaderTree[337]},
  {kRelevantTagCount + kATag, 1.5000, -1.0, &kHeaderTree[327], &kHeaderTree[334]},
  {kRelevantTagPercent + kDivTag, 1.5000, -1.0, &kHeaderTree[328], &kHeaderTree[331]},
  {kPreviousTagPercent, 45.3750, -1.0, &kHeaderTree[329], &kHeaderTree[330]},
  {-1, -1.0, 0.152777777778, NULL, NULL},
  {-1, -1.0, 0.0275229357798, NULL, NULL},
  {kContainedContentBytes, 82.5000, -1.0, &kHeaderTree[332], &kHeaderTree[333]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0350877192982, NULL, NULL},
  {kRelevantTagPercent + kH2Tag, 9.5000, -1.0, &kHeaderTree[335], &kHeaderTree[336]},
  {-1, -1.0, 0.0634920634921, NULL, NULL},
  {-1, -1.0, 0.245614035088, NULL, NULL},
  {kPreviousContentBytes, 6958.0000, -1.0, &kHeaderTree[338], &kHeaderTree[343]},
  {kRelevantTagPercent + kH2Tag, 48.0000, -1.0, &kHeaderTree[339], &kHeaderTree[342]},
  {kRelevantTagPercent + kPTag, 6.5000, -1.0, &kHeaderTree[340], &kHeaderTree[341]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0172413793103, NULL, NULL},
  {-1, -1.0, 0.0224719101124, NULL, NULL},
  {kPreviousContentPercent, 76.1500, -1.0, &kHeaderTree[344], &kHeaderTree[345]},
  {-1, -1.0, 0.0877192982456, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentPercent, 0.1600, -1.0, &kHeaderTree[347], &kHeaderTree[348]},
  {-1, -1.0, 0.0689655172414, NULL, NULL},
  {kContainedTagCount, 7.5000, -1.0, &kHeaderTree[349], &kHeaderTree[354]},
  {kRelevantTagPercent + kPTag, 5.5000, -1.0, &kHeaderTree[350], &kHeaderTree[353]},
  {kRelevantTagPercent + kH2Tag, 15.5000, -1.0, &kHeaderTree[351], &kHeaderTree[352]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0408163265306, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedTagRelativeDepth, 11.5000, -1.0, &kHeaderTree[355], &kHeaderTree[360]},
  {kPreviousContentPercent, 81.9200, -1.0, &kHeaderTree[356], &kHeaderTree[357]},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousContentBytes, 1866.5000, -1.0, &kHeaderTree[358], &kHeaderTree[359]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.00934579439252, NULL, NULL},
  {kContainedTagCount, 3.5000, -1.0, &kHeaderTree[362], &kHeaderTree[369]},
  {kContainedTagCount, 2.5000, -1.0, &kHeaderTree[363], &kHeaderTree[366]},
  {kContainedTagPercent, 0.7850, -1.0, &kHeaderTree[364], &kHeaderTree[365]},
  {-1, -1.0, 0.177419354839, NULL, NULL},
  {-1, -1.0, 0.434210526316, NULL, NULL},
  {kPreviousTagPercent, 45.0650, -1.0, &kHeaderTree[367], &kHeaderTree[368]},
  {-1, -1.0, 0.0860215053763, NULL, NULL},
  {-1, -1.0, 0.246376811594, NULL, NULL},
  {kPreviousTagCount, 13.5000, -1.0, &kHeaderTree[370], &kHeaderTree[379]},
  {kRelevantTagPercent + kPTag, 13.0000, -1.0, &kHeaderTree[371], &kHeaderTree[376]},
  {kRelevantTagPercent + kDivTag, 6.5000, -1.0, &kHeaderTree[372], &kHeaderTree[373]},
  {-1, -1.0, 0.0366972477064, NULL, NULL},
  {kRelevantTagPercent + kImgTag, 3.5000, -1.0, &kHeaderTree[374], &kHeaderTree[375]},
  {-1, -1.0, 0.116883116883, NULL, NULL},
  {-1, -1.0, 0.329545454545, NULL, NULL},
  {kRelevantTagPercent + kPTag, 55.0000, -1.0, &kHeaderTree[377], &kHeaderTree[378]},
  {-1, -1.0, 0.0526315789474, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedContentPercent, 4.5150, -1.0, &kHeaderTree[380], &kHeaderTree[397]},
  {kRelevantTagCount + kDivTag, 2.5000, -1.0, &kHeaderTree[381], &kHeaderTree[392]},
  {kRelevantTagPercent + kImgTag, 0.5000, -1.0, &kHeaderTree[382], &kHeaderTree[389]},
  {kContainedTagRelativeDepth, 1.5000, -1.0, &kHeaderTree[383], &kHeaderTree[384]},
  {-1, -1.0, 0.0275229357798, NULL, NULL},
  {kRelevantTagPercent + kPTag, 2.5000, -1.0, &kHeaderTree[385], &kHeaderTree[388]},
  {kRelevantTagPercent + kH1Tag, 18.5000, -1.0, &kHeaderTree[386], &kHeaderTree[387]},
  {-1, -1.0, 0.285714285714, NULL, NULL},
  {-1, -1.0, 0.116666666667, NULL, NULL},
  {-1, -1.0, 0.0365853658537, NULL, NULL},
  {kContainedNonBlankPercent, 0.8000, -1.0, &kHeaderTree[390], &kHeaderTree[391]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousTagCount, 34.5000, -1.0, &kHeaderTree[393], &kHeaderTree[394]},
  {-1, -1.0, 0.0862068965517, NULL, NULL},
  {kContainedContentBytes, 30.5000, -1.0, &kHeaderTree[395], &kHeaderTree[396]},
  {-1, -1.0, 0.02, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kPreviousTagPercent, 4.6550, -1.0, &kHeaderTree[398], &kHeaderTree[399]},
  {-1, -1.0, 0.0526315789474, NULL, NULL},
  {kContainedTagCount, 10.5000, -1.0, &kHeaderTree[400], &kHeaderTree[405]},
  {kPreviousNonBlankBytes, 553.0000, -1.0, &kHeaderTree[401], &kHeaderTree[404]},
  {kPreviousContentPercent, 8.9150, -1.0, &kHeaderTree[402], &kHeaderTree[403]},
  {-1, -1.0, 0.0175438596491, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0480769230769, NULL, NULL},
  {kPreviousNonBlankBytes, 58.5000, -1.0, &kHeaderTree[406], &kHeaderTree[409]},
  {kContainedNonBlankPercent, 43.4100, -1.0, &kHeaderTree[407], &kHeaderTree[408]},
  {-1, -1.0, 0.0526315789474, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kRelevantTagCount + kH1Tag, 0.5000, -1.0, &kHeaderTree[411], &kHeaderTree[462]},
  {kPreviousTagCount, 2.5000, -1.0, &kHeaderTree[412], &kHeaderTree[423]},
  {kRelevantTagPercent + kDivTag, 6.5000, -1.0, &kHeaderTree[413], &kHeaderTree[414]},
  {-1, -1.0, 0.243243243243, NULL, NULL},
  {kContainedNonBlankPercent, 1.9450, -1.0, &kHeaderTree[415], &kHeaderTree[416]},
  {-1, -1.0, 0.415384615385, NULL, NULL},
  {kContainedTagDepth, 5.5000, -1.0, &kHeaderTree[417], &kHeaderTree[418]},
  {-1, -1.0, 0.768115942029, NULL, NULL},
  {kRelevantTagCount + kSpanTag, 0.5000, -1.0, &kHeaderTree[419], &kHeaderTree[420]},
  {-1, -1.0, 0.444444444444, NULL, NULL},
  {kRelevantTagCount + kDivTag, 11.5000, -1.0, &kHeaderTree[421], &kHeaderTree[422]},
  {-1, -1.0, 0.771929824561, NULL, NULL},
  {-1, -1.0, 0.590163934426, NULL, NULL},
  {kRelevantTagPercent + kH2Tag, 1.5000, -1.0, &kHeaderTree[424], &kHeaderTree[457]},
  {kRelevantTagPercent + kDivTag, 8.5000, -1.0, &kHeaderTree[425], &kHeaderTree[452]},
  {kRelevantTagPercent + kH3Tag, 2.5000, -1.0, &kHeaderTree[426], &kHeaderTree[449]},
  {kContainedTagRelativeDepth, 2.5000, -1.0, &kHeaderTree[427], &kHeaderTree[444]},
  {kContainedTagCount, 2.5000, -1.0, &kHeaderTree[428], &kHeaderTree[437]},
  {kContainedTagPercent, 0.7250, -1.0, &kHeaderTree[429], &kHeaderTree[436]},
  {kElementTagDepth, 6.5000, -1.0, &kHeaderTree[430], &kHeaderTree[433]},
  {kContainedTagDepth, 4.5000, -1.0, &kHeaderTree[431], &kHeaderTree[432]},
  {-1, -1.0, 0.0379746835443, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kContainedContentPercent, 0.1150, -1.0, &kHeaderTree[434], &kHeaderTree[435]},
  {-1, -1.0, 0.125, NULL, NULL},
  {-1, -1.0, 0.0384615384615, NULL, NULL},
  {-1, -1.0, 0.140845070423, NULL, NULL},
  {kContainedNonBlankPercent, 0.2450, -1.0, &kHeaderTree[438], &kHeaderTree[441]},
  {kPreviousTagCount, 29.5000, -1.0, &kHeaderTree[439], &kHeaderTree[440]},
  {-1, -1.0, 0.0, NULL, NULL},
  {-1, -1.0, 0.075, NULL, NULL},
  {kPreviousContentPercent, 0.9450, -1.0, &kHeaderTree[442], &kHeaderTree[443]},
  {-1, -1.0, 0.031746031746, NULL, NULL},
  {-1, -1.0, 0.0, NULL, NULL},
  {kRelevantTagPercent + kImgTag, 3.5000, -1.0, &kHeaderTree[445], &kHeaderTree[448]},
  {kContainedNonBlankBytes, 49.5000, -1.0, &kHeaderTree[446], &kHeaderTree[447]},
  {-1, -1.0, 0.0120481927711, NULL, NULL},
  {-1, -1.0, 0.136363636364, NULL, NULL},
  {-1, -1.0, 0.1875, NULL, NULL},
  {kPreviousTagCount, 177.0000, -1.0, &kHeaderTree[450], &kHeaderTree[451]},
  {-1, -1.0, 0.105263157895, NULL, NULL},
  {-1, -1.0, 0.245901639344, NULL, NULL},
  {kRelevantTagCount + kATag, 4.5000, -1.0, &kHeaderTree[453], &kHeaderTree[454]},
  {-1, -1.0, 0.151162790698, NULL, NULL},
  {kPreviousTagCount, 13.5000, -1.0, &kHeaderTree[455], &kHeaderTree[456]},
  {-1, -1.0, 0.458333333333, NULL, NULL},
  {-1, -1.0, 0.277108433735, NULL, NULL},
  {kRelevantTagCount + kATag, 0.5000, -1.0, &kHeaderTree[458], &kHeaderTree[459]},
  {-1, -1.0, 0.185185185185, NULL, NULL},
  {kRelevantTagPercent + kDivTag, 2.5000, -1.0, &kHeaderTree[460], &kHeaderTree[461]},
  {-1, -1.0, 0.780821917808, NULL, NULL},
  {-1, -1.0, 0.485714285714, NULL, NULL},
  {kRelevantTagPercent + kH1Tag, 53.5000, -1.0, &kHeaderTree[463], &kHeaderTree[474]},
  {kRelevantTagCount + kDivTag, 3.5000, -1.0, &kHeaderTree[464], &kHeaderTree[471]},
  {kElementTagDepth, 5.5000, -1.0, &kHeaderTree[465], &kHeaderTree[466]},
  {-1, -1.0, 0.718181818182, NULL, NULL},
  {kContainedTagPercent, 1.9600, -1.0, &kHeaderTree[467], &kHeaderTree[468]},
  {-1, -1.0, 0.87, NULL, NULL},
  {kPreviousNonBlankBytes, 103.5000, -1.0, &kHeaderTree[469], &kHeaderTree[470]},
  {-1, -1.0, 0.982456140351, NULL, NULL},
  {-1, -1.0, 1.0, NULL, NULL},
  {kPreviousTagCount, 1.5000, -1.0, &kHeaderTree[472], &kHeaderTree[473]},
  {-1, -1.0, 0.774193548387, NULL, NULL},
  {-1, -1.0, 0.352272727273, NULL, NULL},
  {kElementTagDepth, 2.5000, -1.0, &kHeaderTree[475], &kHeaderTree[478]},
  {kContainedNonBlankPercent, 6.6200, -1.0, &kHeaderTree[476], &kHeaderTree[477]},
  {-1, -1.0, 0.786885245902, NULL, NULL},
  {-1, -1.0, 0.537313432836, NULL, NULL},
  {kContainedTagCount, 4.5000, -1.0, &kHeaderTree[479], &kHeaderTree[480]},
  {-1, -1.0, 0.460317460317, NULL, NULL},
  {-1, -1.0, 0.219047619048, NULL, NULL},
};
const double kHeaderTreeThreshold = 0.418604651163;
const int kHeaderTreeSize = arraysize(kHeaderTree);

}  // namespace net_instaweb