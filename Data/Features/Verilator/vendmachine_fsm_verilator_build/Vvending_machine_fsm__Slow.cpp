// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine_fsm.h for the primary calling header

#include "Vvending_machine_fsm.h"
#include "Vvending_machine_fsm__Syms.h"

//==========

VL_CTOR_IMP(Vvending_machine_fsm) {
    Vvending_machine_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Vvending_machine_fsm__Syms(this, name());
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vvending_machine_fsm::__Vconfigure(Vvending_machine_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vvending_machine_fsm::~Vvending_machine_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vvending_machine_fsm::_eval_initial(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_eval_initial\n"); );
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vvending_machine_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::final\n"); );
    // Variables
    Vvending_machine_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vvending_machine_fsm::_eval_settle(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_eval_settle\n"); );
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vvending_machine_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    nickel = VL_RAND_RESET_I(1);
    dime = VL_RAND_RESET_I(1);
    quarter = VL_RAND_RESET_I(1);
    dispense = VL_RAND_RESET_I(1);
    credit = VL_RAND_RESET_I(6);
    vending_machine_fsm__DOT__state = VL_RAND_RESET_I(2);
    vending_machine_fsm__DOT__next_state = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
