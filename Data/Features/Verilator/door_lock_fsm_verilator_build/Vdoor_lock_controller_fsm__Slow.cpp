// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoor_lock_controller_fsm.h for the primary calling header

#include "Vdoor_lock_controller_fsm.h"
#include "Vdoor_lock_controller_fsm__Syms.h"

//==========

VL_CTOR_IMP(Vdoor_lock_controller_fsm) {
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Vdoor_lock_controller_fsm__Syms(this, name());
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdoor_lock_controller_fsm::__Vconfigure(Vdoor_lock_controller_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vdoor_lock_controller_fsm::~Vdoor_lock_controller_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vdoor_lock_controller_fsm::_eval_initial(Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_eval_initial\n"); );
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vdoor_lock_controller_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::final\n"); );
    // Variables
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdoor_lock_controller_fsm::_eval_settle(Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_eval_settle\n"); );
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdoor_lock_controller_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    password = VL_RAND_RESET_I(4);
    try_unlock = VL_RAND_RESET_I(1);
    unlocked = VL_RAND_RESET_I(1);
    error = VL_RAND_RESET_I(1);
    door_lock_controller_fsm__DOT__state = VL_RAND_RESET_I(2);
    door_lock_controller_fsm__DOT__failed_attempts = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
