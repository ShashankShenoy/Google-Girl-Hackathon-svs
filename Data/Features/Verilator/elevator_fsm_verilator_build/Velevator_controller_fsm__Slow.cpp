// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Velevator_controller_fsm.h for the primary calling header

#include "Velevator_controller_fsm.h"
#include "Velevator_controller_fsm__Syms.h"

//==========

VL_CTOR_IMP(Velevator_controller_fsm) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Velevator_controller_fsm__Syms(this, name());
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Velevator_controller_fsm::__Vconfigure(Velevator_controller_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Velevator_controller_fsm::~Velevator_controller_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Velevator_controller_fsm::_eval_initial(Velevator_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_eval_initial\n"); );
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Velevator_controller_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::final\n"); );
    // Variables
    Velevator_controller_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Velevator_controller_fsm::_eval_settle(Velevator_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_eval_settle\n"); );
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Velevator_controller_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    requested_floor = VL_RAND_RESET_I(2);
    door_sensor = VL_RAND_RESET_I(1);
    current_floor = VL_RAND_RESET_I(2);
    moving_up = VL_RAND_RESET_I(1);
    moving_down = VL_RAND_RESET_I(1);
    door_open = VL_RAND_RESET_I(1);
    elevator_controller_fsm__DOT__state = VL_RAND_RESET_I(2);
    elevator_controller_fsm__DOT__timer = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
