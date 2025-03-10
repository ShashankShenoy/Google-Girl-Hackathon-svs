// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmealy_fsm_4bit.h for the primary calling header

#include "Vmealy_fsm_4bit.h"
#include "Vmealy_fsm_4bit__Syms.h"

//==========

VL_CTOR_IMP(Vmealy_fsm_4bit) {
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = __VlSymsp = new Vmealy_fsm_4bit__Syms(this, name());
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmealy_fsm_4bit::__Vconfigure(Vmealy_fsm_4bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmealy_fsm_4bit::~Vmealy_fsm_4bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmealy_fsm_4bit::_eval_initial(Vmealy_fsm_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy_fsm_4bit::_eval_initial\n"); );
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vmealy_fsm_4bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy_fsm_4bit::final\n"); );
    // Variables
    Vmealy_fsm_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmealy_fsm_4bit::_eval_settle(Vmealy_fsm_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy_fsm_4bit::_eval_settle\n"); );
    Vmealy_fsm_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vmealy_fsm_4bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmealy_fsm_4bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    mealy_fsm_4bit__DOT__state = VL_RAND_RESET_I(4);
    mealy_fsm_4bit__DOT__next_state = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
