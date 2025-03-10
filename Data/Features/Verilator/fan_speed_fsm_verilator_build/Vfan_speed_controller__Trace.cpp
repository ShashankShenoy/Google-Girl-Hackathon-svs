// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfan_speed_controller__Syms.h"


void Vfan_speed_controller::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vfan_speed_controller::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->button));
        tracep->chgCData(oldp+3,(vlTOPp->speed),2);
        tracep->chgCData(oldp+4,(vlTOPp->fan_speed_controller__DOT__current_state),2);
        tracep->chgCData(oldp+5,(vlTOPp->fan_speed_controller__DOT__next_state),2);
        tracep->chgBit(oldp+6,(vlTOPp->fan_speed_controller__DOT__button_prev));
        tracep->chgBit(oldp+7,(((IData)(vlTOPp->button) 
                                & (~ (IData)(vlTOPp->fan_speed_controller__DOT__button_prev)))));
    }
}

void Vfan_speed_controller::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = static_cast<Vfan_speed_controller__Syms*>(userp);
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
