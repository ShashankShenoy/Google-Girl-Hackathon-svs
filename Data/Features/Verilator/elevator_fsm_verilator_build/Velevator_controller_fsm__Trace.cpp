// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Velevator_controller_fsm__Syms.h"


void Velevator_controller_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Velevator_controller_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgCData(oldp+2,(vlTOPp->requested_floor),2);
        tracep->chgBit(oldp+3,(vlTOPp->door_sensor));
        tracep->chgCData(oldp+4,(vlTOPp->current_floor),2);
        tracep->chgBit(oldp+5,(vlTOPp->moving_up));
        tracep->chgBit(oldp+6,(vlTOPp->moving_down));
        tracep->chgBit(oldp+7,(vlTOPp->door_open));
        tracep->chgCData(oldp+8,(vlTOPp->elevator_controller_fsm__DOT__state),2);
        tracep->chgCData(oldp+9,(vlTOPp->elevator_controller_fsm__DOT__timer),5);
    }
}

void Velevator_controller_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Velevator_controller_fsm__Syms* __restrict vlSymsp = static_cast<Velevator_controller_fsm__Syms*>(userp);
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
