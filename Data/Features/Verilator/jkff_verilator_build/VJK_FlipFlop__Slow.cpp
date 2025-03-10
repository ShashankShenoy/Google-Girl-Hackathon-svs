// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VJK_FlipFlop.h for the primary calling header

#include "VJK_FlipFlop.h"
#include "VJK_FlipFlop__Syms.h"

//==========

VL_CTOR_IMP(VJK_FlipFlop) {
    VJK_FlipFlop__Syms* __restrict vlSymsp = __VlSymsp = new VJK_FlipFlop__Syms(this, name());
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VJK_FlipFlop::__Vconfigure(VJK_FlipFlop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VJK_FlipFlop::~VJK_FlipFlop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VJK_FlipFlop::_eval_initial(VJK_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJK_FlipFlop::_eval_initial\n"); );
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VJK_FlipFlop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJK_FlipFlop::final\n"); );
    // Variables
    VJK_FlipFlop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VJK_FlipFlop::_eval_settle(VJK_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJK_FlipFlop::_eval_settle\n"); );
    VJK_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VJK_FlipFlop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VJK_FlipFlop::_ctor_var_reset\n"); );
    // Body
    J = VL_RAND_RESET_I(1);
    K = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
