// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwashing_machine_fsm__Syms.h"


void Vwashing_machine_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vwashing_machine_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->start));
        tracep->chgBit(oldp+3,(vlTOPp->door_closed));
        tracep->chgCData(oldp+4,(vlTOPp->state),2);
        tracep->chgBit(oldp+5,(vlTOPp->motor));
        tracep->chgBit(oldp+6,(vlTOPp->water_valve));
        tracep->chgBit(oldp+7,(vlTOPp->drain_valve));
        tracep->chgBit(oldp+8,(vlTOPp->complete));
        tracep->chgCData(oldp+9,(vlTOPp->washing_machine_fsm__DOT__current_state),2);
        tracep->chgCData(oldp+10,(vlTOPp->washing_machine_fsm__DOT__next_state),2);
        tracep->chgCData(oldp+11,(vlTOPp->washing_machine_fsm__DOT__timer),8);
    }
}

void Vwashing_machine_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = static_cast<Vwashing_machine_fsm__Syms*>(userp);
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
