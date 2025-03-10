// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRing_Counter_4bit.h for the primary calling header

#include "VRing_Counter_4bit.h"
#include "VRing_Counter_4bit__Syms.h"

//==========

VL_CTOR_IMP(VRing_Counter_4bit) {
    VRing_Counter_4bit__Syms* __restrict vlSymsp = __VlSymsp = new VRing_Counter_4bit__Syms(this, name());
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRing_Counter_4bit::__Vconfigure(VRing_Counter_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VRing_Counter_4bit::~VRing_Counter_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VRing_Counter_4bit::_eval_initial(VRing_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRing_Counter_4bit::_eval_initial\n"); );
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VRing_Counter_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRing_Counter_4bit::final\n"); );
    // Variables
    VRing_Counter_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRing_Counter_4bit::_eval_settle(VRing_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRing_Counter_4bit::_eval_settle\n"); );
    VRing_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRing_Counter_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRing_Counter_4bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
