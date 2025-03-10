// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtoggle_fsm.h for the primary calling header

#include "Vtoggle_fsm.h"
#include "Vtoggle_fsm__Syms.h"

//==========

VL_CTOR_IMP(Vtoggle_fsm) {
    Vtoggle_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Vtoggle_fsm__Syms(this, name());
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtoggle_fsm::__Vconfigure(Vtoggle_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtoggle_fsm::~Vtoggle_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtoggle_fsm::_settle__TOP__2(Vtoggle_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoggle_fsm::_settle__TOP__2\n"); );
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->state_out = vlTOPp->toggle_fsm__DOT__current_state;
    vlTOPp->toggle_fsm__DOT__next_state = ((IData)(vlTOPp->toggle_fsm__DOT__current_state)
                                            ? ((IData)(vlTOPp->toggle_fsm__DOT__current_state) 
                                               & (~ (IData)(vlTOPp->trigger)))
                                            : (IData)(vlTOPp->trigger));
}

void Vtoggle_fsm::_eval_initial(Vtoggle_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoggle_fsm::_eval_initial\n"); );
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vtoggle_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoggle_fsm::final\n"); );
    // Variables
    Vtoggle_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtoggle_fsm::_eval_settle(Vtoggle_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoggle_fsm::_eval_settle\n"); );
    Vtoggle_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vtoggle_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtoggle_fsm::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    trigger = VL_RAND_RESET_I(1);
    state_out = VL_RAND_RESET_I(1);
    toggle_fsm__DOT__current_state = VL_RAND_RESET_I(1);
    toggle_fsm__DOT__next_state = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
