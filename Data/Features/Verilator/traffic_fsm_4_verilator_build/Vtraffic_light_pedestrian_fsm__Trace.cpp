// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtraffic_light_pedestrian_fsm__Syms.h"


void Vtraffic_light_pedestrian_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtraffic_light_pedestrian_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->pedestrian_request));
        tracep->chgCData(oldp+3,(vlTOPp->traffic_light),3);
        tracep->chgBit(oldp+4,(vlTOPp->pedestrian_light));
        tracep->chgCData(oldp+5,(vlTOPp->traffic_light_pedestrian_fsm__DOT__current_state),2);
        tracep->chgCData(oldp+6,(vlTOPp->traffic_light_pedestrian_fsm__DOT__next_state),2);
        tracep->chgCData(oldp+7,(vlTOPp->traffic_light_pedestrian_fsm__DOT__timer),5);
    }
}

void Vtraffic_light_pedestrian_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_pedestrian_fsm__Syms*>(userp);
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
