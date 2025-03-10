// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriority_encoder_8bit.h for the primary calling header

#include "Vpriority_encoder_8bit.h"
#include "Vpriority_encoder_8bit__Syms.h"

//==========
CData/*2:0*/ Vpriority_encoder_8bit::__Vtable1_encoded_out[256];

VL_CTOR_IMP(Vpriority_encoder_8bit) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = __VlSymsp = new Vpriority_encoder_8bit__Syms(this, name());
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpriority_encoder_8bit::__Vconfigure(Vpriority_encoder_8bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vpriority_encoder_8bit::~Vpriority_encoder_8bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpriority_encoder_8bit::_eval_initial(Vpriority_encoder_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder_8bit::_eval_initial\n"); );
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpriority_encoder_8bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder_8bit::final\n"); );
    // Variables
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpriority_encoder_8bit::_eval_settle(Vpriority_encoder_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder_8bit::_eval_settle\n"); );
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vpriority_encoder_8bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriority_encoder_8bit::_ctor_var_reset\n"); );
    // Body
    data_in = VL_RAND_RESET_I(8);
    encoded_out = VL_RAND_RESET_I(3);
    valid = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_encoded_out[0] = 0U;
    __Vtable1_encoded_out[1] = 0U;
    __Vtable1_encoded_out[2] = 1U;
    __Vtable1_encoded_out[3] = 1U;
    __Vtable1_encoded_out[4] = 2U;
    __Vtable1_encoded_out[5] = 2U;
    __Vtable1_encoded_out[6] = 2U;
    __Vtable1_encoded_out[7] = 2U;
    __Vtable1_encoded_out[8] = 3U;
    __Vtable1_encoded_out[9] = 3U;
    __Vtable1_encoded_out[10] = 3U;
    __Vtable1_encoded_out[11] = 3U;
    __Vtable1_encoded_out[12] = 3U;
    __Vtable1_encoded_out[13] = 3U;
    __Vtable1_encoded_out[14] = 3U;
    __Vtable1_encoded_out[15] = 3U;
    __Vtable1_encoded_out[16] = 4U;
    __Vtable1_encoded_out[17] = 4U;
    __Vtable1_encoded_out[18] = 4U;
    __Vtable1_encoded_out[19] = 4U;
    __Vtable1_encoded_out[20] = 4U;
    __Vtable1_encoded_out[21] = 4U;
    __Vtable1_encoded_out[22] = 4U;
    __Vtable1_encoded_out[23] = 4U;
    __Vtable1_encoded_out[24] = 4U;
    __Vtable1_encoded_out[25] = 4U;
    __Vtable1_encoded_out[26] = 4U;
    __Vtable1_encoded_out[27] = 4U;
    __Vtable1_encoded_out[28] = 4U;
    __Vtable1_encoded_out[29] = 4U;
    __Vtable1_encoded_out[30] = 4U;
    __Vtable1_encoded_out[31] = 4U;
    __Vtable1_encoded_out[32] = 5U;
    __Vtable1_encoded_out[33] = 5U;
    __Vtable1_encoded_out[34] = 5U;
    __Vtable1_encoded_out[35] = 5U;
    __Vtable1_encoded_out[36] = 5U;
    __Vtable1_encoded_out[37] = 5U;
    __Vtable1_encoded_out[38] = 5U;
    __Vtable1_encoded_out[39] = 5U;
    __Vtable1_encoded_out[40] = 5U;
    __Vtable1_encoded_out[41] = 5U;
    __Vtable1_encoded_out[42] = 5U;
    __Vtable1_encoded_out[43] = 5U;
    __Vtable1_encoded_out[44] = 5U;
    __Vtable1_encoded_out[45] = 5U;
    __Vtable1_encoded_out[46] = 5U;
    __Vtable1_encoded_out[47] = 5U;
    __Vtable1_encoded_out[48] = 5U;
    __Vtable1_encoded_out[49] = 5U;
    __Vtable1_encoded_out[50] = 5U;
    __Vtable1_encoded_out[51] = 5U;
    __Vtable1_encoded_out[52] = 5U;
    __Vtable1_encoded_out[53] = 5U;
    __Vtable1_encoded_out[54] = 5U;
    __Vtable1_encoded_out[55] = 5U;
    __Vtable1_encoded_out[56] = 5U;
    __Vtable1_encoded_out[57] = 5U;
    __Vtable1_encoded_out[58] = 5U;
    __Vtable1_encoded_out[59] = 5U;
    __Vtable1_encoded_out[60] = 5U;
    __Vtable1_encoded_out[61] = 5U;
    __Vtable1_encoded_out[62] = 5U;
    __Vtable1_encoded_out[63] = 5U;
    __Vtable1_encoded_out[64] = 6U;
    __Vtable1_encoded_out[65] = 6U;
    __Vtable1_encoded_out[66] = 6U;
    __Vtable1_encoded_out[67] = 6U;
    __Vtable1_encoded_out[68] = 6U;
    __Vtable1_encoded_out[69] = 6U;
    __Vtable1_encoded_out[70] = 6U;
    __Vtable1_encoded_out[71] = 6U;
    __Vtable1_encoded_out[72] = 6U;
    __Vtable1_encoded_out[73] = 6U;
    __Vtable1_encoded_out[74] = 6U;
    __Vtable1_encoded_out[75] = 6U;
    __Vtable1_encoded_out[76] = 6U;
    __Vtable1_encoded_out[77] = 6U;
    __Vtable1_encoded_out[78] = 6U;
    __Vtable1_encoded_out[79] = 6U;
    __Vtable1_encoded_out[80] = 6U;
    __Vtable1_encoded_out[81] = 6U;
    __Vtable1_encoded_out[82] = 6U;
    __Vtable1_encoded_out[83] = 6U;
    __Vtable1_encoded_out[84] = 6U;
    __Vtable1_encoded_out[85] = 6U;
    __Vtable1_encoded_out[86] = 6U;
    __Vtable1_encoded_out[87] = 6U;
    __Vtable1_encoded_out[88] = 6U;
    __Vtable1_encoded_out[89] = 6U;
    __Vtable1_encoded_out[90] = 6U;
    __Vtable1_encoded_out[91] = 6U;
    __Vtable1_encoded_out[92] = 6U;
    __Vtable1_encoded_out[93] = 6U;
    __Vtable1_encoded_out[94] = 6U;
    __Vtable1_encoded_out[95] = 6U;
    __Vtable1_encoded_out[96] = 6U;
    __Vtable1_encoded_out[97] = 6U;
    __Vtable1_encoded_out[98] = 6U;
    __Vtable1_encoded_out[99] = 6U;
    __Vtable1_encoded_out[100] = 6U;
    __Vtable1_encoded_out[101] = 6U;
    __Vtable1_encoded_out[102] = 6U;
    __Vtable1_encoded_out[103] = 6U;
    __Vtable1_encoded_out[104] = 6U;
    __Vtable1_encoded_out[105] = 6U;
    __Vtable1_encoded_out[106] = 6U;
    __Vtable1_encoded_out[107] = 6U;
    __Vtable1_encoded_out[108] = 6U;
    __Vtable1_encoded_out[109] = 6U;
    __Vtable1_encoded_out[110] = 6U;
    __Vtable1_encoded_out[111] = 6U;
    __Vtable1_encoded_out[112] = 6U;
    __Vtable1_encoded_out[113] = 6U;
    __Vtable1_encoded_out[114] = 6U;
    __Vtable1_encoded_out[115] = 6U;
    __Vtable1_encoded_out[116] = 6U;
    __Vtable1_encoded_out[117] = 6U;
    __Vtable1_encoded_out[118] = 6U;
    __Vtable1_encoded_out[119] = 6U;
    __Vtable1_encoded_out[120] = 6U;
    __Vtable1_encoded_out[121] = 6U;
    __Vtable1_encoded_out[122] = 6U;
    __Vtable1_encoded_out[123] = 6U;
    __Vtable1_encoded_out[124] = 6U;
    __Vtable1_encoded_out[125] = 6U;
    __Vtable1_encoded_out[126] = 6U;
    __Vtable1_encoded_out[127] = 6U;
    __Vtable1_encoded_out[128] = 7U;
    __Vtable1_encoded_out[129] = 7U;
    __Vtable1_encoded_out[130] = 7U;
    __Vtable1_encoded_out[131] = 7U;
    __Vtable1_encoded_out[132] = 7U;
    __Vtable1_encoded_out[133] = 7U;
    __Vtable1_encoded_out[134] = 7U;
    __Vtable1_encoded_out[135] = 7U;
    __Vtable1_encoded_out[136] = 7U;
    __Vtable1_encoded_out[137] = 7U;
    __Vtable1_encoded_out[138] = 7U;
    __Vtable1_encoded_out[139] = 7U;
    __Vtable1_encoded_out[140] = 7U;
    __Vtable1_encoded_out[141] = 7U;
    __Vtable1_encoded_out[142] = 7U;
    __Vtable1_encoded_out[143] = 7U;
    __Vtable1_encoded_out[144] = 7U;
    __Vtable1_encoded_out[145] = 7U;
    __Vtable1_encoded_out[146] = 7U;
    __Vtable1_encoded_out[147] = 7U;
    __Vtable1_encoded_out[148] = 7U;
    __Vtable1_encoded_out[149] = 7U;
    __Vtable1_encoded_out[150] = 7U;
    __Vtable1_encoded_out[151] = 7U;
    __Vtable1_encoded_out[152] = 7U;
    __Vtable1_encoded_out[153] = 7U;
    __Vtable1_encoded_out[154] = 7U;
    __Vtable1_encoded_out[155] = 7U;
    __Vtable1_encoded_out[156] = 7U;
    __Vtable1_encoded_out[157] = 7U;
    __Vtable1_encoded_out[158] = 7U;
    __Vtable1_encoded_out[159] = 7U;
    __Vtable1_encoded_out[160] = 7U;
    __Vtable1_encoded_out[161] = 7U;
    __Vtable1_encoded_out[162] = 7U;
    __Vtable1_encoded_out[163] = 7U;
    __Vtable1_encoded_out[164] = 7U;
    __Vtable1_encoded_out[165] = 7U;
    __Vtable1_encoded_out[166] = 7U;
    __Vtable1_encoded_out[167] = 7U;
    __Vtable1_encoded_out[168] = 7U;
    __Vtable1_encoded_out[169] = 7U;
    __Vtable1_encoded_out[170] = 7U;
    __Vtable1_encoded_out[171] = 7U;
    __Vtable1_encoded_out[172] = 7U;
    __Vtable1_encoded_out[173] = 7U;
    __Vtable1_encoded_out[174] = 7U;
    __Vtable1_encoded_out[175] = 7U;
    __Vtable1_encoded_out[176] = 7U;
    __Vtable1_encoded_out[177] = 7U;
    __Vtable1_encoded_out[178] = 7U;
    __Vtable1_encoded_out[179] = 7U;
    __Vtable1_encoded_out[180] = 7U;
    __Vtable1_encoded_out[181] = 7U;
    __Vtable1_encoded_out[182] = 7U;
    __Vtable1_encoded_out[183] = 7U;
    __Vtable1_encoded_out[184] = 7U;
    __Vtable1_encoded_out[185] = 7U;
    __Vtable1_encoded_out[186] = 7U;
    __Vtable1_encoded_out[187] = 7U;
    __Vtable1_encoded_out[188] = 7U;
    __Vtable1_encoded_out[189] = 7U;
    __Vtable1_encoded_out[190] = 7U;
    __Vtable1_encoded_out[191] = 7U;
    __Vtable1_encoded_out[192] = 7U;
    __Vtable1_encoded_out[193] = 7U;
    __Vtable1_encoded_out[194] = 7U;
    __Vtable1_encoded_out[195] = 7U;
    __Vtable1_encoded_out[196] = 7U;
    __Vtable1_encoded_out[197] = 7U;
    __Vtable1_encoded_out[198] = 7U;
    __Vtable1_encoded_out[199] = 7U;
    __Vtable1_encoded_out[200] = 7U;
    __Vtable1_encoded_out[201] = 7U;
    __Vtable1_encoded_out[202] = 7U;
    __Vtable1_encoded_out[203] = 7U;
    __Vtable1_encoded_out[204] = 7U;
    __Vtable1_encoded_out[205] = 7U;
    __Vtable1_encoded_out[206] = 7U;
    __Vtable1_encoded_out[207] = 7U;
    __Vtable1_encoded_out[208] = 7U;
    __Vtable1_encoded_out[209] = 7U;
    __Vtable1_encoded_out[210] = 7U;
    __Vtable1_encoded_out[211] = 7U;
    __Vtable1_encoded_out[212] = 7U;
    __Vtable1_encoded_out[213] = 7U;
    __Vtable1_encoded_out[214] = 7U;
    __Vtable1_encoded_out[215] = 7U;
    __Vtable1_encoded_out[216] = 7U;
    __Vtable1_encoded_out[217] = 7U;
    __Vtable1_encoded_out[218] = 7U;
    __Vtable1_encoded_out[219] = 7U;
    __Vtable1_encoded_out[220] = 7U;
    __Vtable1_encoded_out[221] = 7U;
    __Vtable1_encoded_out[222] = 7U;
    __Vtable1_encoded_out[223] = 7U;
    __Vtable1_encoded_out[224] = 7U;
    __Vtable1_encoded_out[225] = 7U;
    __Vtable1_encoded_out[226] = 7U;
    __Vtable1_encoded_out[227] = 7U;
    __Vtable1_encoded_out[228] = 7U;
    __Vtable1_encoded_out[229] = 7U;
    __Vtable1_encoded_out[230] = 7U;
    __Vtable1_encoded_out[231] = 7U;
    __Vtable1_encoded_out[232] = 7U;
    __Vtable1_encoded_out[233] = 7U;
    __Vtable1_encoded_out[234] = 7U;
    __Vtable1_encoded_out[235] = 7U;
    __Vtable1_encoded_out[236] = 7U;
    __Vtable1_encoded_out[237] = 7U;
    __Vtable1_encoded_out[238] = 7U;
    __Vtable1_encoded_out[239] = 7U;
    __Vtable1_encoded_out[240] = 7U;
    __Vtable1_encoded_out[241] = 7U;
    __Vtable1_encoded_out[242] = 7U;
    __Vtable1_encoded_out[243] = 7U;
    __Vtable1_encoded_out[244] = 7U;
    __Vtable1_encoded_out[245] = 7U;
    __Vtable1_encoded_out[246] = 7U;
    __Vtable1_encoded_out[247] = 7U;
    __Vtable1_encoded_out[248] = 7U;
    __Vtable1_encoded_out[249] = 7U;
    __Vtable1_encoded_out[250] = 7U;
    __Vtable1_encoded_out[251] = 7U;
    __Vtable1_encoded_out[252] = 7U;
    __Vtable1_encoded_out[253] = 7U;
    __Vtable1_encoded_out[254] = 7U;
    __Vtable1_encoded_out[255] = 7U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
