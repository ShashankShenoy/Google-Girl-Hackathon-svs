// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdown_counter_16bit__Syms.h"


void Vdown_counter_16bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vdown_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_16bit__Syms*>(userp);
    Vdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vdown_counter_16bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vdown_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_16bit__Syms*>(userp);
    Vdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->enable));
        tracep->chgSData(oldp+3,(vlTOPp->count),16);
    }
}

void Vdown_counter_16bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vdown_counter_16bit__Syms* __restrict vlSymsp = static_cast<Vdown_counter_16bit__Syms*>(userp);
    Vdown_counter_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
