// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsynchronous_Counter_4bit.h for the primary calling header

#include "VAsynchronous_Counter_4bit.h"
#include "VAsynchronous_Counter_4bit__Syms.h"

//==========

VL_CTOR_IMP(VAsynchronous_Counter_4bit) {
    VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp = __VlSymsp = new VAsynchronous_Counter_4bit__Syms(this, name());
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAsynchronous_Counter_4bit::__Vconfigure(VAsynchronous_Counter_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VAsynchronous_Counter_4bit::~VAsynchronous_Counter_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VAsynchronous_Counter_4bit::_eval_initial(VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsynchronous_Counter_4bit::_eval_initial\n"); );
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VAsynchronous_Counter_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsynchronous_Counter_4bit::final\n"); );
    // Variables
    VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsynchronous_Counter_4bit::_eval_settle(VAsynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsynchronous_Counter_4bit::_eval_settle\n"); );
    VAsynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsynchronous_Counter_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsynchronous_Counter_4bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
