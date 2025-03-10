// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdown_counter_8bit.h for the primary calling header

#include "Vdown_counter_8bit.h"
#include "Vdown_counter_8bit__Syms.h"

//==========

VL_CTOR_IMP(Vdown_counter_8bit) {
    Vdown_counter_8bit__Syms* __restrict vlSymsp = __VlSymsp = new Vdown_counter_8bit__Syms(this, name());
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdown_counter_8bit::__Vconfigure(Vdown_counter_8bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vdown_counter_8bit::~Vdown_counter_8bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vdown_counter_8bit::_eval_initial(Vdown_counter_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_8bit::_eval_initial\n"); );
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vdown_counter_8bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_8bit::final\n"); );
    // Variables
    Vdown_counter_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdown_counter_8bit::_eval_settle(Vdown_counter_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_8bit::_eval_settle\n"); );
    Vdown_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdown_counter_8bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdown_counter_8bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    count = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
