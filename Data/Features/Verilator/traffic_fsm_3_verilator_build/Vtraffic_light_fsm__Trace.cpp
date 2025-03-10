// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtraffic_light_fsm__Syms.h"


void Vtraffic_light_fsm::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtraffic_light_fsm::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->traffic_light_fsm__DOT__current_state),2);
            tracep->chgCData(oldp+1,(((0U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                                       ? 1U : ((1U 
                                                == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                                                ? 2U
                                                : 0U))),2);
            tracep->chgCData(oldp+2,(vlTOPp->traffic_light_fsm__DOT__timer),4);
        }
        tracep->chgBit(oldp+3,(vlTOPp->clk));
        tracep->chgBit(oldp+4,(vlTOPp->reset));
        tracep->chgCData(oldp+5,(vlTOPp->light),3);
    }
}

void Vtraffic_light_fsm::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = static_cast<Vtraffic_light_fsm__Syms*>(userp);
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
