// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vup_counter_8bit__Syms.h"


void Vup_counter_8bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vup_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_8bit__Syms*>(userp);
    Vup_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vup_counter_8bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vup_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_8bit__Syms*>(userp);
    Vup_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->enable));
        tracep->chgCData(oldp+3,(vlTOPp->count),8);
    }
}

void Vup_counter_8bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vup_counter_8bit__Syms* __restrict vlSymsp = static_cast<Vup_counter_8bit__Syms*>(userp);
    Vup_counter_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
