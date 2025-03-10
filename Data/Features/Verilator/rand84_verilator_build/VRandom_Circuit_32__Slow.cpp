// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRandom_Circuit_32.h for the primary calling header

#include "VRandom_Circuit_32.h"
#include "VRandom_Circuit_32__Syms.h"

//==========

VL_CTOR_IMP(VRandom_Circuit_32) {
    VRandom_Circuit_32__Syms* __restrict vlSymsp = __VlSymsp = new VRandom_Circuit_32__Syms(this, name());
    VRandom_Circuit_32* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRandom_Circuit_32::__Vconfigure(VRandom_Circuit_32__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VRandom_Circuit_32::~VRandom_Circuit_32() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VRandom_Circuit_32::_eval_initial(VRandom_Circuit_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandom_Circuit_32::_eval_initial\n"); );
    VRandom_Circuit_32* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VRandom_Circuit_32::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandom_Circuit_32::final\n"); );
    // Variables
    VRandom_Circuit_32__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRandom_Circuit_32* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRandom_Circuit_32::_eval_settle(VRandom_Circuit_32__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandom_Circuit_32::_eval_settle\n"); );
    VRandom_Circuit_32* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRandom_Circuit_32::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandom_Circuit_32::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
