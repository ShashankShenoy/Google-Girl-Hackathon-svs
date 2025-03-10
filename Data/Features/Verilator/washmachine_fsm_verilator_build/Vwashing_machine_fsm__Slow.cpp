// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwashing_machine_fsm.h for the primary calling header

#include "Vwashing_machine_fsm.h"
#include "Vwashing_machine_fsm__Syms.h"

//==========
CData/*1:0*/ Vwashing_machine_fsm::__Vtable1_state[16];
CData/*0:0*/ Vwashing_machine_fsm::__Vtable1_motor[16];
CData/*0:0*/ Vwashing_machine_fsm::__Vtable1_water_valve[16];
CData/*0:0*/ Vwashing_machine_fsm::__Vtable1_drain_valve[16];
CData/*0:0*/ Vwashing_machine_fsm::__Vtable1_complete[16];

VL_CTOR_IMP(Vwashing_machine_fsm) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Vwashing_machine_fsm__Syms(this, name());
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vwashing_machine_fsm::__Vconfigure(Vwashing_machine_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vwashing_machine_fsm::~Vwashing_machine_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vwashing_machine_fsm::_eval_initial(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_eval_initial\n"); );
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vwashing_machine_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::final\n"); );
    // Variables
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vwashing_machine_fsm::_eval_settle(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_eval_settle\n"); );
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vwashing_machine_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    start = VL_RAND_RESET_I(1);
    door_closed = VL_RAND_RESET_I(1);
    state = VL_RAND_RESET_I(2);
    motor = VL_RAND_RESET_I(1);
    water_valve = VL_RAND_RESET_I(1);
    drain_valve = VL_RAND_RESET_I(1);
    complete = VL_RAND_RESET_I(1);
    washing_machine_fsm__DOT__current_state = VL_RAND_RESET_I(2);
    washing_machine_fsm__DOT__next_state = VL_RAND_RESET_I(2);
    washing_machine_fsm__DOT__timer = VL_RAND_RESET_I(8);
    __Vtableidx1 = 0;
    __Vtable1_state[0] = 0U;
    __Vtable1_state[1] = 1U;
    __Vtable1_state[2] = 2U;
    __Vtable1_state[3] = 3U;
    __Vtable1_state[4] = 0U;
    __Vtable1_state[5] = 1U;
    __Vtable1_state[6] = 2U;
    __Vtable1_state[7] = 3U;
    __Vtable1_state[8] = 0U;
    __Vtable1_state[9] = 1U;
    __Vtable1_state[10] = 2U;
    __Vtable1_state[11] = 3U;
    __Vtable1_state[12] = 0U;
    __Vtable1_state[13] = 1U;
    __Vtable1_state[14] = 2U;
    __Vtable1_state[15] = 3U;
    __Vtable1_motor[0] = 0U;
    __Vtable1_motor[1] = 1U;
    __Vtable1_motor[2] = 1U;
    __Vtable1_motor[3] = 1U;
    __Vtable1_motor[4] = 0U;
    __Vtable1_motor[5] = 1U;
    __Vtable1_motor[6] = 1U;
    __Vtable1_motor[7] = 1U;
    __Vtable1_motor[8] = 0U;
    __Vtable1_motor[9] = 1U;
    __Vtable1_motor[10] = 1U;
    __Vtable1_motor[11] = 1U;
    __Vtable1_motor[12] = 0U;
    __Vtable1_motor[13] = 1U;
    __Vtable1_motor[14] = 1U;
    __Vtable1_motor[15] = 1U;
    __Vtable1_water_valve[0] = 0U;
    __Vtable1_water_valve[1] = 1U;
    __Vtable1_water_valve[2] = 1U;
    __Vtable1_water_valve[3] = 0U;
    __Vtable1_water_valve[4] = 0U;
    __Vtable1_water_valve[5] = 1U;
    __Vtable1_water_valve[6] = 1U;
    __Vtable1_water_valve[7] = 0U;
    __Vtable1_water_valve[8] = 0U;
    __Vtable1_water_valve[9] = 1U;
    __Vtable1_water_valve[10] = 1U;
    __Vtable1_water_valve[11] = 0U;
    __Vtable1_water_valve[12] = 0U;
    __Vtable1_water_valve[13] = 1U;
    __Vtable1_water_valve[14] = 1U;
    __Vtable1_water_valve[15] = 0U;
    __Vtable1_drain_valve[0] = 0U;
    __Vtable1_drain_valve[1] = 0U;
    __Vtable1_drain_valve[2] = 1U;
    __Vtable1_drain_valve[3] = 1U;
    __Vtable1_drain_valve[4] = 0U;
    __Vtable1_drain_valve[5] = 0U;
    __Vtable1_drain_valve[6] = 1U;
    __Vtable1_drain_valve[7] = 1U;
    __Vtable1_drain_valve[8] = 0U;
    __Vtable1_drain_valve[9] = 0U;
    __Vtable1_drain_valve[10] = 1U;
    __Vtable1_drain_valve[11] = 1U;
    __Vtable1_drain_valve[12] = 0U;
    __Vtable1_drain_valve[13] = 0U;
    __Vtable1_drain_valve[14] = 1U;
    __Vtable1_drain_valve[15] = 1U;
    __Vtable1_complete[0] = 0U;
    __Vtable1_complete[1] = 0U;
    __Vtable1_complete[2] = 0U;
    __Vtable1_complete[3] = 0U;
    __Vtable1_complete[4] = 0U;
    __Vtable1_complete[5] = 0U;
    __Vtable1_complete[6] = 0U;
    __Vtable1_complete[7] = 0U;
    __Vtable1_complete[8] = 0U;
    __Vtable1_complete[9] = 0U;
    __Vtable1_complete[10] = 0U;
    __Vtable1_complete[11] = 0U;
    __Vtable1_complete[12] = 0U;
    __Vtable1_complete[13] = 0U;
    __Vtable1_complete[14] = 0U;
    __Vtable1_complete[15] = 0U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
