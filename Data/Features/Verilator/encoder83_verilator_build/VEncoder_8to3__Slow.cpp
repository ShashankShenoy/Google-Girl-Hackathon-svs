// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncoder_8to3.h for the primary calling header

#include "VEncoder_8to3.h"
#include "VEncoder_8to3__Syms.h"

//==========
CData/*2:0*/ VEncoder_8to3::__Vtable1_Y[256];

VL_CTOR_IMP(VEncoder_8to3) {
    VEncoder_8to3__Syms* __restrict vlSymsp = __VlSymsp = new VEncoder_8to3__Syms(this, name());
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VEncoder_8to3::__Vconfigure(VEncoder_8to3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VEncoder_8to3::~VEncoder_8to3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VEncoder_8to3::_eval_initial(VEncoder_8to3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_8to3::_eval_initial\n"); );
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEncoder_8to3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_8to3::final\n"); );
    // Variables
    VEncoder_8to3__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEncoder_8to3::_eval_settle(VEncoder_8to3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_8to3::_eval_settle\n"); );
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VEncoder_8to3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder_8to3::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(8);
    Y = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_Y[0] = 0U;
    __Vtable1_Y[1] = 0U;
    __Vtable1_Y[2] = 1U;
    __Vtable1_Y[3] = 0U;
    __Vtable1_Y[4] = 2U;
    __Vtable1_Y[5] = 0U;
    __Vtable1_Y[6] = 0U;
    __Vtable1_Y[7] = 0U;
    __Vtable1_Y[8] = 3U;
    __Vtable1_Y[9] = 0U;
    __Vtable1_Y[10] = 0U;
    __Vtable1_Y[11] = 0U;
    __Vtable1_Y[12] = 0U;
    __Vtable1_Y[13] = 0U;
    __Vtable1_Y[14] = 0U;
    __Vtable1_Y[15] = 0U;
    __Vtable1_Y[16] = 4U;
    __Vtable1_Y[17] = 0U;
    __Vtable1_Y[18] = 0U;
    __Vtable1_Y[19] = 0U;
    __Vtable1_Y[20] = 0U;
    __Vtable1_Y[21] = 0U;
    __Vtable1_Y[22] = 0U;
    __Vtable1_Y[23] = 0U;
    __Vtable1_Y[24] = 0U;
    __Vtable1_Y[25] = 0U;
    __Vtable1_Y[26] = 0U;
    __Vtable1_Y[27] = 0U;
    __Vtable1_Y[28] = 0U;
    __Vtable1_Y[29] = 0U;
    __Vtable1_Y[30] = 0U;
    __Vtable1_Y[31] = 0U;
    __Vtable1_Y[32] = 5U;
    __Vtable1_Y[33] = 0U;
    __Vtable1_Y[34] = 0U;
    __Vtable1_Y[35] = 0U;
    __Vtable1_Y[36] = 0U;
    __Vtable1_Y[37] = 0U;
    __Vtable1_Y[38] = 0U;
    __Vtable1_Y[39] = 0U;
    __Vtable1_Y[40] = 0U;
    __Vtable1_Y[41] = 0U;
    __Vtable1_Y[42] = 0U;
    __Vtable1_Y[43] = 0U;
    __Vtable1_Y[44] = 0U;
    __Vtable1_Y[45] = 0U;
    __Vtable1_Y[46] = 0U;
    __Vtable1_Y[47] = 0U;
    __Vtable1_Y[48] = 0U;
    __Vtable1_Y[49] = 0U;
    __Vtable1_Y[50] = 0U;
    __Vtable1_Y[51] = 0U;
    __Vtable1_Y[52] = 0U;
    __Vtable1_Y[53] = 0U;
    __Vtable1_Y[54] = 0U;
    __Vtable1_Y[55] = 0U;
    __Vtable1_Y[56] = 0U;
    __Vtable1_Y[57] = 0U;
    __Vtable1_Y[58] = 0U;
    __Vtable1_Y[59] = 0U;
    __Vtable1_Y[60] = 0U;
    __Vtable1_Y[61] = 0U;
    __Vtable1_Y[62] = 0U;
    __Vtable1_Y[63] = 0U;
    __Vtable1_Y[64] = 6U;
    __Vtable1_Y[65] = 0U;
    __Vtable1_Y[66] = 0U;
    __Vtable1_Y[67] = 0U;
    __Vtable1_Y[68] = 0U;
    __Vtable1_Y[69] = 0U;
    __Vtable1_Y[70] = 0U;
    __Vtable1_Y[71] = 0U;
    __Vtable1_Y[72] = 0U;
    __Vtable1_Y[73] = 0U;
    __Vtable1_Y[74] = 0U;
    __Vtable1_Y[75] = 0U;
    __Vtable1_Y[76] = 0U;
    __Vtable1_Y[77] = 0U;
    __Vtable1_Y[78] = 0U;
    __Vtable1_Y[79] = 0U;
    __Vtable1_Y[80] = 0U;
    __Vtable1_Y[81] = 0U;
    __Vtable1_Y[82] = 0U;
    __Vtable1_Y[83] = 0U;
    __Vtable1_Y[84] = 0U;
    __Vtable1_Y[85] = 0U;
    __Vtable1_Y[86] = 0U;
    __Vtable1_Y[87] = 0U;
    __Vtable1_Y[88] = 0U;
    __Vtable1_Y[89] = 0U;
    __Vtable1_Y[90] = 0U;
    __Vtable1_Y[91] = 0U;
    __Vtable1_Y[92] = 0U;
    __Vtable1_Y[93] = 0U;
    __Vtable1_Y[94] = 0U;
    __Vtable1_Y[95] = 0U;
    __Vtable1_Y[96] = 0U;
    __Vtable1_Y[97] = 0U;
    __Vtable1_Y[98] = 0U;
    __Vtable1_Y[99] = 0U;
    __Vtable1_Y[100] = 0U;
    __Vtable1_Y[101] = 0U;
    __Vtable1_Y[102] = 0U;
    __Vtable1_Y[103] = 0U;
    __Vtable1_Y[104] = 0U;
    __Vtable1_Y[105] = 0U;
    __Vtable1_Y[106] = 0U;
    __Vtable1_Y[107] = 0U;
    __Vtable1_Y[108] = 0U;
    __Vtable1_Y[109] = 0U;
    __Vtable1_Y[110] = 0U;
    __Vtable1_Y[111] = 0U;
    __Vtable1_Y[112] = 0U;
    __Vtable1_Y[113] = 0U;
    __Vtable1_Y[114] = 0U;
    __Vtable1_Y[115] = 0U;
    __Vtable1_Y[116] = 0U;
    __Vtable1_Y[117] = 0U;
    __Vtable1_Y[118] = 0U;
    __Vtable1_Y[119] = 0U;
    __Vtable1_Y[120] = 0U;
    __Vtable1_Y[121] = 0U;
    __Vtable1_Y[122] = 0U;
    __Vtable1_Y[123] = 0U;
    __Vtable1_Y[124] = 0U;
    __Vtable1_Y[125] = 0U;
    __Vtable1_Y[126] = 0U;
    __Vtable1_Y[127] = 0U;
    __Vtable1_Y[128] = 7U;
    __Vtable1_Y[129] = 0U;
    __Vtable1_Y[130] = 0U;
    __Vtable1_Y[131] = 0U;
    __Vtable1_Y[132] = 0U;
    __Vtable1_Y[133] = 0U;
    __Vtable1_Y[134] = 0U;
    __Vtable1_Y[135] = 0U;
    __Vtable1_Y[136] = 0U;
    __Vtable1_Y[137] = 0U;
    __Vtable1_Y[138] = 0U;
    __Vtable1_Y[139] = 0U;
    __Vtable1_Y[140] = 0U;
    __Vtable1_Y[141] = 0U;
    __Vtable1_Y[142] = 0U;
    __Vtable1_Y[143] = 0U;
    __Vtable1_Y[144] = 0U;
    __Vtable1_Y[145] = 0U;
    __Vtable1_Y[146] = 0U;
    __Vtable1_Y[147] = 0U;
    __Vtable1_Y[148] = 0U;
    __Vtable1_Y[149] = 0U;
    __Vtable1_Y[150] = 0U;
    __Vtable1_Y[151] = 0U;
    __Vtable1_Y[152] = 0U;
    __Vtable1_Y[153] = 0U;
    __Vtable1_Y[154] = 0U;
    __Vtable1_Y[155] = 0U;
    __Vtable1_Y[156] = 0U;
    __Vtable1_Y[157] = 0U;
    __Vtable1_Y[158] = 0U;
    __Vtable1_Y[159] = 0U;
    __Vtable1_Y[160] = 0U;
    __Vtable1_Y[161] = 0U;
    __Vtable1_Y[162] = 0U;
    __Vtable1_Y[163] = 0U;
    __Vtable1_Y[164] = 0U;
    __Vtable1_Y[165] = 0U;
    __Vtable1_Y[166] = 0U;
    __Vtable1_Y[167] = 0U;
    __Vtable1_Y[168] = 0U;
    __Vtable1_Y[169] = 0U;
    __Vtable1_Y[170] = 0U;
    __Vtable1_Y[171] = 0U;
    __Vtable1_Y[172] = 0U;
    __Vtable1_Y[173] = 0U;
    __Vtable1_Y[174] = 0U;
    __Vtable1_Y[175] = 0U;
    __Vtable1_Y[176] = 0U;
    __Vtable1_Y[177] = 0U;
    __Vtable1_Y[178] = 0U;
    __Vtable1_Y[179] = 0U;
    __Vtable1_Y[180] = 0U;
    __Vtable1_Y[181] = 0U;
    __Vtable1_Y[182] = 0U;
    __Vtable1_Y[183] = 0U;
    __Vtable1_Y[184] = 0U;
    __Vtable1_Y[185] = 0U;
    __Vtable1_Y[186] = 0U;
    __Vtable1_Y[187] = 0U;
    __Vtable1_Y[188] = 0U;
    __Vtable1_Y[189] = 0U;
    __Vtable1_Y[190] = 0U;
    __Vtable1_Y[191] = 0U;
    __Vtable1_Y[192] = 0U;
    __Vtable1_Y[193] = 0U;
    __Vtable1_Y[194] = 0U;
    __Vtable1_Y[195] = 0U;
    __Vtable1_Y[196] = 0U;
    __Vtable1_Y[197] = 0U;
    __Vtable1_Y[198] = 0U;
    __Vtable1_Y[199] = 0U;
    __Vtable1_Y[200] = 0U;
    __Vtable1_Y[201] = 0U;
    __Vtable1_Y[202] = 0U;
    __Vtable1_Y[203] = 0U;
    __Vtable1_Y[204] = 0U;
    __Vtable1_Y[205] = 0U;
    __Vtable1_Y[206] = 0U;
    __Vtable1_Y[207] = 0U;
    __Vtable1_Y[208] = 0U;
    __Vtable1_Y[209] = 0U;
    __Vtable1_Y[210] = 0U;
    __Vtable1_Y[211] = 0U;
    __Vtable1_Y[212] = 0U;
    __Vtable1_Y[213] = 0U;
    __Vtable1_Y[214] = 0U;
    __Vtable1_Y[215] = 0U;
    __Vtable1_Y[216] = 0U;
    __Vtable1_Y[217] = 0U;
    __Vtable1_Y[218] = 0U;
    __Vtable1_Y[219] = 0U;
    __Vtable1_Y[220] = 0U;
    __Vtable1_Y[221] = 0U;
    __Vtable1_Y[222] = 0U;
    __Vtable1_Y[223] = 0U;
    __Vtable1_Y[224] = 0U;
    __Vtable1_Y[225] = 0U;
    __Vtable1_Y[226] = 0U;
    __Vtable1_Y[227] = 0U;
    __Vtable1_Y[228] = 0U;
    __Vtable1_Y[229] = 0U;
    __Vtable1_Y[230] = 0U;
    __Vtable1_Y[231] = 0U;
    __Vtable1_Y[232] = 0U;
    __Vtable1_Y[233] = 0U;
    __Vtable1_Y[234] = 0U;
    __Vtable1_Y[235] = 0U;
    __Vtable1_Y[236] = 0U;
    __Vtable1_Y[237] = 0U;
    __Vtable1_Y[238] = 0U;
    __Vtable1_Y[239] = 0U;
    __Vtable1_Y[240] = 0U;
    __Vtable1_Y[241] = 0U;
    __Vtable1_Y[242] = 0U;
    __Vtable1_Y[243] = 0U;
    __Vtable1_Y[244] = 0U;
    __Vtable1_Y[245] = 0U;
    __Vtable1_Y[246] = 0U;
    __Vtable1_Y[247] = 0U;
    __Vtable1_Y[248] = 0U;
    __Vtable1_Y[249] = 0U;
    __Vtable1_Y[250] = 0U;
    __Vtable1_Y[251] = 0U;
    __Vtable1_Y[252] = 0U;
    __Vtable1_Y[253] = 0U;
    __Vtable1_Y[254] = 0U;
    __Vtable1_Y[255] = 0U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
