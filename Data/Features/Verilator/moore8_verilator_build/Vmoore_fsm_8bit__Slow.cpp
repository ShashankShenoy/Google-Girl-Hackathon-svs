// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmoore_fsm_8bit.h for the primary calling header

#include "Vmoore_fsm_8bit.h"
#include "Vmoore_fsm_8bit__Syms.h"

//==========

VL_CTOR_IMP(Vmoore_fsm_8bit) {
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = __VlSymsp = new Vmoore_fsm_8bit__Syms(this, name());
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmoore_fsm_8bit::__Vconfigure(Vmoore_fsm_8bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmoore_fsm_8bit::~Vmoore_fsm_8bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmoore_fsm_8bit::_settle__TOP__2(Vmoore_fsm_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore_fsm_8bit::_settle__TOP__2\n"); );
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out = (0xabU == (IData)(vlTOPp->moore_fsm_8bit__DOT__state));
    vlTOPp->moore_fsm_8bit__DOT__next_state = ((0xfeU 
                                                & ((IData)(vlTOPp->moore_fsm_8bit__DOT__state) 
                                                   << 1U)) 
                                               | (IData)(vlTOPp->in));
}

void Vmoore_fsm_8bit::_eval_initial(Vmoore_fsm_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore_fsm_8bit::_eval_initial\n"); );
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vmoore_fsm_8bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore_fsm_8bit::final\n"); );
    // Variables
    Vmoore_fsm_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmoore_fsm_8bit::_eval_settle(Vmoore_fsm_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore_fsm_8bit::_eval_settle\n"); );
    Vmoore_fsm_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vmoore_fsm_8bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmoore_fsm_8bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    moore_fsm_8bit__DOT__state = VL_RAND_RESET_I(8);
    moore_fsm_8bit__DOT__next_state = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
