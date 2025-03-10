// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBarrel_Shifter_4bit.h for the primary calling header

#include "VBarrel_Shifter_4bit.h"
#include "VBarrel_Shifter_4bit__Syms.h"

//==========
CData/*3:0*/ VBarrel_Shifter_4bit::__Vtable1_Y[64];

VL_CTOR_IMP(VBarrel_Shifter_4bit) {
    VBarrel_Shifter_4bit__Syms* __restrict vlSymsp = __VlSymsp = new VBarrel_Shifter_4bit__Syms(this, name());
    VBarrel_Shifter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBarrel_Shifter_4bit::__Vconfigure(VBarrel_Shifter_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VBarrel_Shifter_4bit::~VBarrel_Shifter_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VBarrel_Shifter_4bit::_eval_initial(VBarrel_Shifter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrel_Shifter_4bit::_eval_initial\n"); );
    VBarrel_Shifter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBarrel_Shifter_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrel_Shifter_4bit::final\n"); );
    // Variables
    VBarrel_Shifter_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBarrel_Shifter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBarrel_Shifter_4bit::_eval_settle(VBarrel_Shifter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrel_Shifter_4bit::_eval_settle\n"); );
    VBarrel_Shifter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VBarrel_Shifter_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrel_Shifter_4bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(4);
    ShAmt = VL_RAND_RESET_I(2);
    Y = VL_RAND_RESET_I(4);
    __Vtableidx1 = 0;
    __Vtable1_Y[0] = 0U;
    __Vtable1_Y[1] = 0U;
    __Vtable1_Y[2] = 0U;
    __Vtable1_Y[3] = 0U;
    __Vtable1_Y[4] = 1U;
    __Vtable1_Y[5] = 2U;
    __Vtable1_Y[6] = 4U;
    __Vtable1_Y[7] = 8U;
    __Vtable1_Y[8] = 2U;
    __Vtable1_Y[9] = 4U;
    __Vtable1_Y[10] = 8U;
    __Vtable1_Y[11] = 0U;
    __Vtable1_Y[12] = 3U;
    __Vtable1_Y[13] = 6U;
    __Vtable1_Y[14] = 0xcU;
    __Vtable1_Y[15] = 8U;
    __Vtable1_Y[16] = 4U;
    __Vtable1_Y[17] = 8U;
    __Vtable1_Y[18] = 0U;
    __Vtable1_Y[19] = 0U;
    __Vtable1_Y[20] = 5U;
    __Vtable1_Y[21] = 0xaU;
    __Vtable1_Y[22] = 4U;
    __Vtable1_Y[23] = 8U;
    __Vtable1_Y[24] = 6U;
    __Vtable1_Y[25] = 0xcU;
    __Vtable1_Y[26] = 8U;
    __Vtable1_Y[27] = 0U;
    __Vtable1_Y[28] = 7U;
    __Vtable1_Y[29] = 0xeU;
    __Vtable1_Y[30] = 0xcU;
    __Vtable1_Y[31] = 8U;
    __Vtable1_Y[32] = 8U;
    __Vtable1_Y[33] = 0U;
    __Vtable1_Y[34] = 0U;
    __Vtable1_Y[35] = 0U;
    __Vtable1_Y[36] = 9U;
    __Vtable1_Y[37] = 2U;
    __Vtable1_Y[38] = 4U;
    __Vtable1_Y[39] = 8U;
    __Vtable1_Y[40] = 0xaU;
    __Vtable1_Y[41] = 4U;
    __Vtable1_Y[42] = 8U;
    __Vtable1_Y[43] = 0U;
    __Vtable1_Y[44] = 0xbU;
    __Vtable1_Y[45] = 6U;
    __Vtable1_Y[46] = 0xcU;
    __Vtable1_Y[47] = 8U;
    __Vtable1_Y[48] = 0xcU;
    __Vtable1_Y[49] = 8U;
    __Vtable1_Y[50] = 0U;
    __Vtable1_Y[51] = 0U;
    __Vtable1_Y[52] = 0xdU;
    __Vtable1_Y[53] = 0xaU;
    __Vtable1_Y[54] = 4U;
    __Vtable1_Y[55] = 8U;
    __Vtable1_Y[56] = 0xeU;
    __Vtable1_Y[57] = 0xcU;
    __Vtable1_Y[58] = 8U;
    __Vtable1_Y[59] = 0U;
    __Vtable1_Y[60] = 0xfU;
    __Vtable1_Y[61] = 0xeU;
    __Vtable1_Y[62] = 0xcU;
    __Vtable1_Y[63] = 8U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
