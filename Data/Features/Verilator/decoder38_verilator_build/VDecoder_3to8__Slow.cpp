// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoder_3to8.h for the primary calling header

#include "VDecoder_3to8.h"
#include "VDecoder_3to8__Syms.h"

//==========
CData/*7:0*/ VDecoder_3to8::__Vtable1_Y[8];

VL_CTOR_IMP(VDecoder_3to8) {
    VDecoder_3to8__Syms* __restrict vlSymsp = __VlSymsp = new VDecoder_3to8__Syms(this, name());
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDecoder_3to8::__Vconfigure(VDecoder_3to8__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VDecoder_3to8::~VDecoder_3to8() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VDecoder_3to8::_eval_initial(VDecoder_3to8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_3to8::_eval_initial\n"); );
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoder_3to8::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_3to8::final\n"); );
    // Variables
    VDecoder_3to8__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoder_3to8::_eval_settle(VDecoder_3to8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_3to8::_eval_settle\n"); );
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VDecoder_3to8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoder_3to8::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(3);
    Y = VL_RAND_RESET_I(8);
    __Vtableidx1 = 0;
    __Vtable1_Y[0] = 1U;
    __Vtable1_Y[1] = 2U;
    __Vtable1_Y[2] = 4U;
    __Vtable1_Y[3] = 8U;
    __Vtable1_Y[4] = 0x10U;
    __Vtable1_Y[5] = 0x20U;
    __Vtable1_Y[6] = 0x40U;
    __Vtable1_Y[7] = 0x80U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
