#ifndef SHELTON_TABLES_H
#define SHELTON_TABLES_H

#include "encode.h"

// Lookup tables for the steno layer
const uint8_t PROGMEM g_left_hand_table[256][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _1(_A),                                 // [1]
    _1(_S),                                 // [2]
    _2(_A, _S),                             // [3]
    _1(_C),                                 // [4]
    _2(_A, _C),                             // [5]
    _2(_S, _C),                             // [6]
    _3(_A, _S, _C),                         // [7]
    _1(_T),                                 // [8]
    _2(_A, _T),                             // [9]
    _2(_S, _T),                             // [10]
    _3(_A, _S, _T),                         // [11]
    _1(_D),                                 // [12]
    _2(_A, _D),                             // [13]
    _1(_G),                                 // [14]
    _2(_A, _G),                             // [15]
    _1(_W),                                 // [16]
    _2(_A, _W),                             // [17]
    _2(_S, _W),                             // [18]
    NO_ENTRY,                               // [19]
    _1(_P),                                 // [20]
    _2(_A, _P),                             // [21]
    _2(_S, _P),                             // [22]
    _3(_A, _S, _P),                         // [23]
    _2(_T, _W),                             // [24]
    _3(_A, _T, _T),                         // [25]
    _1(_X),                                 // [26]
    _2(_A, _X),                             // [27]
    _2(_D, _W),                             // [28]
    _3(_A, _D, _D),                         // [29]
    _2(_G, _W),                             // [30]
    _3(_A, _G, _G),                         // [31]
    _1(_H),                                 // [32]
    _2(_A, _H),                             // [33]
    _2(_S, _H),                             // [34]
    _3(_A, _S, _H),                         // [35]
    _2(_C, _H),                             // [36]
    _3(_A, _C, _H),                         // [37]
    _3(_S, _C, _H),                         // [38]
    NO_ENTRY,                               // [39]
    _2(_T, _H),                             // [40]
    _3(_A, _T, _H),                         // [41]
    NO_ENTRY,                               // [42]
    _4(_A, _S, _T, _H),                     // [43]
    _1(_F),                                 // [44]
    _2(_A, _F),                             // [45]
    _2(_G, _H),                             // [46]
    _3(_A, _G, _H),                         // [47]
    _2(_W, _H),                             // [48]
    _3(_A, _W, _H),                         // [49]
    NO_ENTRY,                               // [50]
    NO_ENTRY,                               // [51]
    _2(_P, _H),                             // [52]
    _3(_A, _P, _H),                         // [53]
    _3(_S, _P, _H),                         // [54]
    _4(_A, _S, _P, _H),                     // [55]
    _1(_K),                                 // [56]
    _2(_A, _K),                             // [57]
    _2(_S, _K),                             // [58]
    _3(_A, _S, _K),                         // [59]
    _1(_B),                                 // [60]
    _2(_A, _B),                             // [61]
    NO_ENTRY,                               // [62]
    _3(_A, _B, _B),                         // [63]
    _1(_N),                                 // [64]
    _2(_A, _N),                             // [65]
    _2(_S, _N),                             // [66]
    _3(_A, _N, _N),                         // [67]
    _1(_Z),                                 // [68]
    _2(_A, _Z),                             // [69]
    _2(_S, _S),                             // [70]
    _3(_A, _S, _S),                         // [71]
    _1(_V),                                 // [72]
    _2(_A, _V),                             // [73]
    _2(_S, _V),                             // [74]
    NO_ENTRY,                               // [75]
    _3(_D, _E, _V),                         // [76]
    _3(_A, _D, _V),                         // [77]
    _2(_G, _N),                             // [78]
    _3(_A, _G, _N),                         // [79]
    _1(_M),                                 // [80]
    _2(_A, _M),                             // [81]
    _2(_S, _M),                             // [82]
    _3(_A, _S, _M),                         // [83]
    _2(_P, _N),                             // [84]
    _3(_A, _M, _M),                         // [85]
    NO_ENTRY,                               // [86]
    _3(_A, _P, _P),                         // [87]
    _1(_J),                                 // [88]
    _2(_A, _J),                             // [89]
    NO_ENTRY,                               // [90]
    NO_ENTRY,                               // [91]
    _3(_D, _E, _M),                         // [92]
    _3(_A, _D, _M),                         // [93]
    NO_ENTRY,                               // [94]
    _3(_A, _D, _J),                         // [95]
    _1(_Y),                                 // [96]
    _2(_A, _Y),                             // [97]
    _2(_S, _Y),                             // [98]
    _3(_A, _S, _Y),                         // [99]
    _2(_C, _Y),                             // [100]
    _3(_A, _C, _C),                         // [101]
    NO_ENTRY,                               // [102]
    NO_ENTRY,                               // [103]
    _2(_T, _Y),                             // [104]
    NO_ENTRY,                               // [105]
    _3(_S, _T, _Y),                         // [106]
    NO_ENTRY,                               // [107]
    _2(_D, _Y),                             // [108]
    _3(_A, _F, _F),                         // [109]
    _2(_G, _Y),                             // [110]
    _3(_A, _F, _T),                         // [111]
    _2(_M, _Y),                             // [112]
    NO_ENTRY,                               // [113]
    NO_ENTRY,                               // [114]
    NO_ENTRY,                               // [115]
    _2(_P, _Y),                             // [116]
    NO_ENTRY,                               // [117]
    _3(_S, _P, _Y),                         // [118]
    _5(_A, _S, _P, _H, _Y),                 // [119]
    _2(_K, _N),                             // [120]
    _4(_A, _C, _K, _N),                     // [121]
    _2(_X, _Y),                             // [122]
    NO_ENTRY,                               // [123]
    _2(_B, _Y),                             // [124]
    _3(_A, _B, _Y),                         // [125]
    NO_ENTRY,                               // [126]
    NO_ENTRY,                               // [127]
    _1(_R),                                 // [128]
    _2(_A, _R),                             // [129]
    _3(_S, _E, _R),                         // [130]
    _3(_A, _R, _R),                         // [131]
    _2(_C, _R),                             // [132]
    _3(_A, _C, _R),                         // [133]
    _3(_S, _C, _R),                         // [134]
    _4(_A, _S, _C, _R),                     // [135]
    _2(_T, _R),                             // [136]
    _3(_A, _T, _R),                         // [137]
    _3(_S, _T, _R),                         // [138]
    NO_ENTRY,                               // [139]
    _2(_D, _R),                             // [140]
    _3(_A, _D, _R),                         // [141]
    _2(_G, _R),                             // [142]
    _3(_A, _G, _R),                         // [143]
    _2(_W, _R),                             // [144]
    NO_ENTRY,                               // [145]
    NO_ENTRY,                               // [146]
    NO_ENTRY,                               // [147]
    _2(_P, _R),                             // [148]
    _3(_A, _P, _R),                         // [149]
    _3(_S, _P, _R),                         // [150]
    _4(_A, _P, _P, _R),                     // [151]
    NO_ENTRY,                               // [152]
    _4(_A, _T, _T, _R),                     // [153]
    _2(_X, _R),                             // [154]
    NO_ENTRY,                               // [155]
    _3(_D, _E, _R),                         // [156]
    _4(_A, _D, _D, _R),                     // [157]
    NO_ENTRY,                               // [158]
    _4(_A, _G, _G, _R),                     // [159]
    _2(_R, _H),                             // [160]
    NO_ENTRY,                               // [161]
    _3(_S, _H, _R),                         // [162]
    NO_ENTRY,                               // [163]
    _3(_C, _H, _R),                         // [164]
    _4(_A, _C, _C, _R),                     // [165]
    NO_ENTRY,                               // [166]
    NO_ENTRY,                               // [167]
    _3(_T, _H, _R),                         // [168]
    _4(_A, _T, _H, _L),                     // [169]
    NO_ENTRY,                               // [170]
    NO_ENTRY,                               // [171]
    _2(_F, _R),                             // [172]
    _3(_A, _F, _R),                         // [173]
    NO_ENTRY,                               // [174]
    _4(_A, _F, _F, _R),                     // [175]
    NO_ENTRY,                               // [176]
    NO_ENTRY,                               // [177]
    NO_ENTRY,                               // [178]
    NO_ENTRY,                               // [179]
    _3(_P, _H, _R),                         // [180]
    _4(_A, _P, _H, _R),                     // [181]
    NO_ENTRY,                               // [182]
    NO_ENTRY,                               // [183]
    _2(_K, _R),                             // [184]
    NO_ENTRY,                               // [185]
    NO_ENTRY,                               // [186]
    NO_ENTRY,                               // [187]
    _2(_B, _R),                             // [188]
    _3(_A, _B, _R),                         // [189]
    NO_ENTRY,                               // [190]
    _4(_A, _B, _B, _R),                     // [191]
    _1(_L),                                 // [192]
    _2(_A, _L),                             // [193]
    _2(_S, _L),                             // [194]
    _3(_A, _S, _L),                         // [195]
    _2(_C, _L),                             // [196]
    NO_ENTRY,                               // [197]
    NO_ENTRY,                               // [198]
    NO_ENTRY,                               // [199]
    _1(_Q),                                 // [200]
    _2(_A, _Q),                             // [201]
    _2(_S, _Q),                             // [202]
    _3(_A, _S, _Q),                         // [203]
    _3(_D, _E, _L),                         // [204]
    _3(_A, _C, _Q),                         // [205]
    _2(_G, _L),                             // [206]
    _3(_A, _G, _L),                         // [207]
    _2(_M, _R),                             // [208]
    _3(_A, _L, _L),                         // [209]
    NO_ENTRY,                               // [210]
    NO_ENTRY,                               // [211]
    _2(_P, _L),                             // [212]
    _3(_A, _P, _L),                         // [213]
    _3(_S, _P, _L),                         // [214]
    _4(_A, _P, _P, _L),                     // [215]
    _3(_J, _E, _R),                         // [216]
    NO_ENTRY,                               // [217]
    _4(_S, _E, _R, _V),                     // [218]
    NO_ENTRY,                               // [219]
    NO_ENTRY,                               // [220]
    _4(_A, _D, _D, _L),                     // [221]
    NO_ENTRY,                               // [222]
    _4(_A, _G, _G, _L),                     // [223]
    _2(_L, _Y),                             // [224]
    NO_ENTRY,                               // [225]
    _3(_S, _L, _Y),                         // [226]
    NO_ENTRY,                               // [227]
    _3(_C, _R, _Y),                         // [228]
    _4(_A, _C, _C, _L),                     // [229]
    NO_ENTRY,                               // [230]
    NO_ENTRY,                               // [231]
    _3(_T, _R, _Y),                         // [232]
    NO_ENTRY,                               // [233]
    _4(_S, _T, _R, _Y),                     // [234]
    NO_ENTRY,                               // [235]
    _2(_F, _L),                             // [236]
    _3(_A, _F, _L),                         // [237]
    NO_ENTRY,                               // [238]
    _4(_A, _F, _F, _L),                     // [239]
    NO_ENTRY,                               // [240]
    NO_ENTRY,                               // [241]
    NO_ENTRY,                               // [242]
    NO_ENTRY,                               // [243]
    _3(_P, _H, _L),                         // [244]
    NO_ENTRY,                               // [245]
    NO_ENTRY,                               // [246]
    NO_ENTRY,                               // [247]
    _2(_K, _L),                             // [248]
    NO_ENTRY,                               // [249]
    NO_ENTRY,                               // [250]
    NO_ENTRY,                               // [251]
    _2(_B, _L),                             // [252]
    _3(_A, _B, _L),                         // [253]
    NO_ENTRY,                               // [254]
    NO_ENTRY                                // [255]
};

// From Jackdaw (the 4 vowels version)
const uint8_t PROGMEM g_thumbs_table_1[16][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _1(_A),                                 // [1]
    _1(_O),                                 // [2]
    _2(_I, _O),                             // [3]
    _1(_E),                                 // [4]
    _2(_E, _A),                             // [5]
    _2(_I, _E),                             // [6]
    _2(_E, _E),                             // [7]
    _1(_U),                                 // [8]
    _2(_A, _U),                             // [9]
    _2(_O, _U),                             // [10]
    _2(_O, _O),                             // [11]
    _1(_I),                                 // [12]
    _2(_A, _I),                             // [13]
    _2(_O, _I),                             // [14]
    _2(_O, _A)                              // [15]
};

// Double single vowels and invert bigrams
const uint8_t PROGMEM g_thumbs_table_2[16][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _2(_A, _A),                             // [1]
    _2(_O, _O),                             // [2]
    _2(_O, _I),                             // [3]
    _2(_E, _E),                             // [4]
    _2(_A, _E),                             // [5]
    _2(_E, _I),                             // [6]
    _2(_E, _Y),                             // [7]
    _2(_U, _U),                             // [8]
    _2(_U, _A),                             // [9]
    _2(_U, _O),                             // [10]
    _2(_O, _Y),                             // [11]
    _2(_I, _I),                             // [12]
    _2(_I, _A),                             // [13]
    _2(_I, _O),                             // [14]
    _2(_A, _O)                              // [15]
};

const uint8_t PROGMEM g_right_hand_table[256][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _1(_R),                                 // [1]
    _1(_N),                                 // [2]
    _2(_R, _N),                             // [3]
    _1(_L),                                 // [4]
    _2(_R, _L),                             // [5]
    _1(_S),                                 // [6]
    _2(_L, _L),                             // [7]
    _1(_G),                                 // [8]
    _2(_R, _G),                             // [9]
    _2(_N, _G),                             // [10]
    _2(_G, _N),                             // [11]
    _2(_L, _G),                             // [12]
    NO_ENTRY,                               // [13]
    _1(_D),                                 // [14]
    _2(_D, _L),                             // [15]
    _1(_C),                                 // [16]
    _2(_R, _C),                             // [17]
    _2(_N, _C),                             // [18]
    NO_ENTRY,                               // [19]
    _1(_P),                                 // [20]
    _2(_R, _P),                             // [21]
    _2(_S, _P),                             // [22]
    _2(_P, _L),                             // [23]
    _1(_B),                                 // [24]
    _2(_R, _B),                             // [25]
    _2(_G, _G),                             // [26]
    NO_ENTRY,                               // [27]
    _2(_B, _L),                             // [28]
    NO_ENTRY,                               // [29]
    NO_ENTRY,                               // [30]
    _2(_L, _B),                             // [31]
    _1(_H),                                 // [32]
    _1(_W),                                 // [33]
    _1(_V),                                 // [34]
    _2(_W, _N),                             // [35]
    _1(_Z),                                 // [36]
    _2(_W, _L),                             // [37]
    _2(_S, _H),                             // [38]
    _2(_L, _V),                             // [39]
    _2(_G, _H),                             // [40]
    _3(_R, _G, _H),                         // [41]
    _1(_M),                                 // [42]
    _2(_R, _M),                             // [43]
    _1(_X),                                 // [44]
    NO_ENTRY,                               // [45]
    _2(_S, _M),                             // [46]
    _2(_L, _M),                             // [47]
    _2(_C, _H),                             // [48]
    _3(_R, _C, _H),                         // [49]
    _3(_N, _C, _H),                         // [50]
    _2(_R, _V),                             // [51]
    _2(_P, _H),                             // [52]
    NO_ENTRY,                               // [53]
    NO_ENTRY,                               // [54]
    _3(_L, _C, _H),                         // [55]
    _1(_F),                                 // [56]
    _2(_R, _F),                             // [57]
    _2(_M, _B),                             // [58]
    NO_ENTRY,                               // [59]
    _2(_L, _F),                             // [60]
    NO_ENTRY,                               // [61]
    _2(_M, _P),                             // [62]
    NO_ENTRY,                               // [63]
    _1(_T),                                 // [64]
    _2(_R, _T),                             // [65]
    _2(_N, _T),                             // [66]
    _3(_R, _N, _T),                         // [67]
    _2(_L, _T),                             // [68]
    NO_ENTRY,                               // [69]
    _2(_S, _T),                             // [70]
    _3(_R, _S, _T),                         // [71]
    _1(_K),                                 // [72]
    _2(_R, _K),                             // [73]
    _2(_N, _K),                             // [74]
    NO_ENTRY,                               // [75]
    _2(_K, _L),                             // [76]
    NO_ENTRY,                               // [77]
    _2(_S, _K),                             // [78]
    _2(_L, _K),                             // [79]
    _2(_C, _T),                             // [80]
    NO_ENTRY,                               // [81]
    _4(_T, _I, _O, _N),                     // [82]
    NO_ENTRY,                               // [83]
    _2(_P, _T),                             // [84]
    NO_ENTRY,                               // [85]
    _3(_N, _S, _T),                         // [86]
    _2(_L, _P),                             // [87]
    _2(_C, _K),                             // [88]
    NO_ENTRY,                               // [89]
    _2(_B, _T),                             // [90]
    NO_ENTRY,                               // [91]
    _3(_C, _K, _L),                         // [92]
    NO_ENTRY,                               // [93]
    NO_ENTRY,                               // [94]
    NO_ENTRY,                               // [95]
    _2(_T, _H),                             // [96]
    _3(_R, _T, _H),                         // [97]
    _3(_N, _T, _H),                         // [98]
    _3(_W, _T, _H),                         // [99]
    _3(_L, _T, _H),                         // [100]
    NO_ENTRY,                               // [101]
    NO_ENTRY,                               // [102]
    NO_ENTRY,                               // [103]
    _3(_G, _H, _T),                         // [104]
    _2(_W, _K),                             // [105]
    _4(_N, _G, _T, _H),                     // [106]
    NO_ENTRY,                               // [107]
    _2(_X, _T),                             // [108]
    NO_ENTRY,                               // [109]
    _3(_D, _T, _H),                         // [110]
    NO_ENTRY,                               // [111]
    _3(_T, _C, _H),                         // [112]
    NO_ENTRY,                               // [113]
    NO_ENTRY,                               // [114]
    NO_ENTRY,                               // [115]
    _3(_P, _T, _H),                         // [116]
    NO_ENTRY,                               // [117]
    NO_ENTRY,                               // [118]
    NO_ENTRY,                               // [119]
    _2(_F, _T),                             // [120]
    NO_ENTRY,                               // [121]
    NO_ENTRY,                               // [122]
    NO_ENTRY,                               // [123]
    NO_ENTRY,                               // [124]
    NO_ENTRY,                               // [125]
    _3(_M, _P, _T),                         // [126]
    NO_ENTRY,                               // [127]
    _1(_S),                                 // [128]
    _2(_R, _S),                             // [129]
    _2(_N, _S),                             // [130]
    _3(_R, _N, _S),                         // [131]
    _2(_L, _S),                             // [132]
    _3(_R, _L, _S),                         // [133]
    _2(_S, _S),                             // [134]
    _3(_L, _L, _S),                         // [135]
    _2(_G, _S),                             // [136]
    _3(_R, _G, _S),                         // [137]
    _3(_N, _G, _S),                         // [138]
    _3(_G, _N, _S),                         // [139]
    NO_ENTRY,                               // [140]
    NO_ENTRY,                               // [141]
    _2(_D, _S),                             // [142]
    NO_ENTRY,                               // [143]
    _2(_C, _S),                             // [144]
    _3(_R, _C, _S),                         // [145]
    _4(_N, _C, _E, _S),                     // [146]
    NO_ENTRY,                               // [147]
    _2(_P, _S),                             // [148]
    _3(_R, _P, _S),                         // [149]
    _3(_S, _P, _S),                         // [150]
    _4(_P, _L, _E, _S),                     // [151]
    _2(_B, _S),                             // [152]
    _3(_R, _B, _S),                         // [153]
    _3(_G, _G, _S),                         // [154]
    NO_ENTRY,                               // [155]
    _4(_B, _L, _E, _S),                     // [156]
    NO_ENTRY,                               // [157]
    NO_ENTRY,                               // [158]
    _3(_L, _B, _S),                         // [159]
    _2(_H, _S),                             // [160]
    _2(_W, _S),                             // [161]
    _3(_V, _E, _S),                         // [162]
    _3(_W, _N, _S),                         // [163]
    _3(_Z, _E, _S),                         // [164]
    _3(_W, _L, _S),                         // [165]
    _4(_S, _H, _E, _S),                     // [166]
    _4(_L, _V, _E, _S),                     // [167]
    _3(_G, _H, _S),                         // [168]
    NO_ENTRY,                               // [169]
    _2(_M, _S),                             // [170]
    _3(_R, _M, _S),                         // [171]
    _3(_X, _E, _S),                         // [172]
    _3(_R, _L, _D),                         // [173]
    _3(_S, _M, _S),                         // [174]
    _3(_L, _M, _S),                         // [175]
    _1(_D),                                 // [176]
    _2(_R, _D),                             // [177]
    _2(_N, _D),                             // [178]
    _2(_W, _D),                             // [179]
    _3(_P, _H, _S),                         // [180]
    NO_ENTRY,                               // [181]
    NO_ENTRY,                               // [182]
    _2(_L, _D),                             // [183]
    _2(_D, _G),                             // [184]
    NO_ENTRY,                               // [185]
    _3(_M, _B, _S),                         // [186]
    NO_ENTRY,                               // [187]
    NO_ENTRY,                               // [188]
    NO_ENTRY,                               // [189]
    _3(_M, _P, _S),                         // [190]
    NO_ENTRY,                               // [191]
    _2(_T, _S),                             // [192]
    _3(_R, _T, _S),                         // [193]
    _3(_N, _T, _S),                         // [194]
    NO_ENTRY,                               // [195]
    _3(_L, _T, _S),                         // [196]
    NO_ENTRY,                               // [197]
    _3(_S, _T, _S),                         // [198]
    _4(_R, _S, _T, _S),                     // [199]
    _2(_K, _S),                             // [200]
    _3(_R, _K, _S),                         // [201]
    _3(_N, _K, _S),                         // [202]
    NO_ENTRY,                               // [203]
    NO_ENTRY,                               // [204]
    NO_ENTRY,                               // [205]
    _3(_S, _K, _S),                         // [206]
    _3(_L, _K, _S),                         // [207]
    _3(_C, _T, _S),                         // [208]
    NO_ENTRY,                               // [209]
    NO_ENTRY,                               // [210]
    NO_ENTRY,                               // [211]
    NO_ENTRY,                               // [212]
    NO_ENTRY,                               // [213]
    NO_ENTRY,                               // [214]
    _3(_L, _P, _S),                         // [215]
    _3(_C, _K, _S),                         // [216]
    NO_ENTRY,                               // [217]
    _3(_B, _T, _S),                         // [218]
    NO_ENTRY,                               // [219]
    _5(_C, _K, _L, _E, _S),                 // [220]
    NO_ENTRY,                               // [221]
    NO_ENTRY,                               // [222]
    NO_ENTRY,                               // [223]
    _3(_T, _H, _S),                         // [224]
    _4(_R, _T, _H, _S),                     // [225]
    _4(_N, _T, _H, _S),                     // [226]
    _4(_W, _T, _H, _S),                     // [227]
    NO_ENTRY,                               // [228]
    NO_ENTRY,                               // [229]
    NO_ENTRY,                               // [230]
    NO_ENTRY,                               // [231]
    _4(_G, _H, _T, _S),                     // [232]
    _3(_W, _K, _S),                         // [233]
    _5(_N, _G, _T, _H, _S),                 // [234]
    NO_ENTRY,                               // [235]
    NO_ENTRY,                               // [236]
    NO_ENTRY,                               // [237]
    _4(_D, _T, _H, _S),                     // [238]
    NO_ENTRY,                               // [239]
    _2(_D, _S),                             // [240]
    _3(_R, _D, _S),                         // [241]
    _3(_N, _D, _S),                         // [242]
    _3(_W, _D, _S),                         // [243]
    _4(_P, _T, _H, _S),                     // [244]
    _4(_R, _L, _D, _S),                     // [245]
    NO_ENTRY,                               // [246]
    _3(_L, _D, _S),                         // [247]
    NO_ENTRY,                               // [248]
    NO_ENTRY,                               // [249]
    NO_ENTRY,                               // [250]
    NO_ENTRY,                               // [251]
    NO_ENTRY,                               // [252]
    NO_ENTRY,                               // [253]
    _4(_M, _P, _T, _S),                     // [254]
    NO_ENTRY                                // [255]
};

const uint8_t PROGMEM g_right_pinky_table[4][MAX_LETTERS] =
{
    NO_ENTRY,                               // [0]
    _1(KC_E),                               // [1]
    _1(KC_Y),                               // [2]
    _2(KC_E, KC_Y)                          // [3]
};

#endif
