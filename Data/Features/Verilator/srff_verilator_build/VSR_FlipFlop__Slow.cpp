// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSR_FlipFlop.h for the primary calling header

#include "VSR_FlipFlop.h"
#include "VSR_FlipFlop__Syms.h"

//==========

VL_CTOR_IMP(VSR_FlipFlop) {
    VSR_FlipFlop__Syms* __restrict vlSymsp = __VlSymsp = new VSR_FlipFlop__Syms(this, name());
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSR_FlipFlop::__Vconfigure(VSR_FlipFlop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSR_FlipFlop::~VSR_FlipFlop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSR_FlipFlop::_eval_initial(VSR_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSR_FlipFlop::_eval_initial\n"); );
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VSR_FlipFlop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSR_FlipFlop::final\n"); );
    // Variables
    VSR_FlipFlop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSR_FlipFlop::_eval_settle(VSR_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSR_FlipFlop::_eval_settle\n"); );
    VSR_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSR_FlipFlop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSR_FlipFlop::_ctor_var_reset\n"); );
    // Body
    S = VL_RAND_RESET_I(1);
    R = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
