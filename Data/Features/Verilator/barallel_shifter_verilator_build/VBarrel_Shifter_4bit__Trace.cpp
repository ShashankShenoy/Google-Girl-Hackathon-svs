// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBarrel_Shifter_4bit__Syms.h"


void VBarrel_Shifter_4bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VBarrel_Shifter_4bit__Syms* __restrict vlSymsp = static_cast<VBarrel_Shifter_4bit__Syms*>(userp);
    VBarrel_Shifter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VBarrel_Shifter_4bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VBarrel_Shifter_4bit__Syms* __restrict vlSymsp = static_cast<VBarrel_Shifter_4bit__Syms*>(userp);
    VBarrel_Shifter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),4);
        tracep->chgCData(oldp+1,(vlTOPp->ShAmt),2);
        tracep->chgCData(oldp+2,(vlTOPp->Y),4);
    }
}

void VBarrel_Shifter_4bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VBarrel_Shifter_4bit__Syms* __restrict vlSymsp = static_cast<VBarrel_Shifter_4bit__Syms*>(userp);
    VBarrel_Shifter_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
