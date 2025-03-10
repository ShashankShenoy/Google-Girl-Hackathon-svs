// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vupdown_counter_16bit.h for the primary calling header

#include "Vupdown_counter_16bit.h"
#include "Vupdown_counter_16bit__Syms.h"

//==========

VL_CTOR_IMP(Vupdown_counter_16bit) {
    Vupdown_counter_16bit__Syms* __restrict vlSymsp = __VlSymsp = new Vupdown_counter_16bit__Syms(this, name());
    Vupdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vupdown_counter_16bit::__Vconfigure(Vupdown_counter_16bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vupdown_counter_16bit::~Vupdown_counter_16bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vupdown_counter_16bit::_eval_initial(Vupdown_counter_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupdown_counter_16bit::_eval_initial\n"); );
    Vupdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vupdown_counter_16bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupdown_counter_16bit::final\n"); );
    // Variables
    Vupdown_counter_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vupdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vupdown_counter_16bit::_eval_settle(Vupdown_counter_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupdown_counter_16bit::_eval_settle\n"); );
    Vupdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vupdown_counter_16bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vupdown_counter_16bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    up_down = VL_RAND_RESET_I(1);
    count = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
