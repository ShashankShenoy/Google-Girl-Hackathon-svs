// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VT_FlipFlop.h for the primary calling header

#include "VT_FlipFlop.h"
#include "VT_FlipFlop__Syms.h"

//==========

VL_CTOR_IMP(VT_FlipFlop) {
    VT_FlipFlop__Syms* __restrict vlSymsp = __VlSymsp = new VT_FlipFlop__Syms(this, name());
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VT_FlipFlop::__Vconfigure(VT_FlipFlop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VT_FlipFlop::~VT_FlipFlop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VT_FlipFlop::_eval_initial(VT_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_FlipFlop::_eval_initial\n"); );
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VT_FlipFlop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_FlipFlop::final\n"); );
    // Variables
    VT_FlipFlop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VT_FlipFlop::_eval_settle(VT_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_FlipFlop::_eval_settle\n"); );
    VT_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VT_FlipFlop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_FlipFlop::_ctor_var_reset\n"); );
    // Body
    T = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
