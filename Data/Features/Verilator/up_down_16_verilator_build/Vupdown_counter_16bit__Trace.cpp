// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vupdown_counter_16bit__Syms.h"


void Vupdown_counter_16bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vupdown_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_16bit__Syms*>(userp);
    Vupdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vupdown_counter_16bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vupdown_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_16bit__Syms*>(userp);
    Vupdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->enable));
        tracep->chgBit(oldp+3,(vlTOPp->up_down));
        tracep->chgSData(oldp+4,(vlTOPp->count),16);
    }
}

void Vupdown_counter_16bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vupdown_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vupdown_counter_16bit__Syms*>(userp);
    Vupdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
