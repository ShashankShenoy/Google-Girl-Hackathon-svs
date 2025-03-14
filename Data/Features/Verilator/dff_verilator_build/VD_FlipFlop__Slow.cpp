// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VD_FlipFlop.h for the primary calling header

#include "VD_FlipFlop.h"
#include "VD_FlipFlop__Syms.h"

//==========

VL_CTOR_IMP(VD_FlipFlop) {
    VD_FlipFlop__Syms* __restrict vlSymsp = __VlSymsp = new VD_FlipFlop__Syms(this, name());
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VD_FlipFlop::__Vconfigure(VD_FlipFlop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VD_FlipFlop::~VD_FlipFlop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VD_FlipFlop::_eval_initial(VD_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_FlipFlop::_eval_initial\n"); );
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VD_FlipFlop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_FlipFlop::final\n"); );
    // Variables
    VD_FlipFlop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VD_FlipFlop::_eval_settle(VD_FlipFlop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_FlipFlop::_eval_settle\n"); );
    VD_FlipFlop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VD_FlipFlop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VD_FlipFlop::_ctor_var_reset\n"); );
    // Body
    D = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
