// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplier_8bit__Syms.h"


void VMultiplier_8bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VMultiplier_8bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),8);
        tracep->chgCData(oldp+1,(vlTOPp->B),8);
        tracep->chgSData(oldp+2,(vlTOPp->Product),16);
        tracep->chgSData(oldp+3,(vlTOPp->Multiplier_8bit__DOT__P),16);
    }
}

void VMultiplier_8bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VMultiplier_8bit__Syms* __restrict vlSymsp = static_cast<VMultiplier_8bit__Syms*>(userp);
    VMultiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
