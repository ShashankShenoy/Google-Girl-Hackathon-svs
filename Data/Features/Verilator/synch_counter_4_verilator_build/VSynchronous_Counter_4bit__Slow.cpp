// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSynchronous_Counter_4bit.h for the primary calling header

#include "VSynchronous_Counter_4bit.h"
#include "VSynchronous_Counter_4bit__Syms.h"

//==========

VL_CTOR_IMP(VSynchronous_Counter_4bit) {
    VSynchronous_Counter_4bit__Syms* __restrict vlSymsp = __VlSymsp = new VSynchronous_Counter_4bit__Syms(this, name());
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSynchronous_Counter_4bit::__Vconfigure(VSynchronous_Counter_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSynchronous_Counter_4bit::~VSynchronous_Counter_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSynchronous_Counter_4bit::_eval_initial(VSynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_eval_initial\n"); );
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VSynchronous_Counter_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::final\n"); );
    // Variables
    VSynchronous_Counter_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSynchronous_Counter_4bit::_eval_settle(VSynchronous_Counter_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_eval_settle\n"); );
    VSynchronous_Counter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSynchronous_Counter_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSynchronous_Counter_4bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
