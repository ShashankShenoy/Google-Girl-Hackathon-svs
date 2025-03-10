// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParity_Generator_Odd__Syms.h"


void VParity_Generator_Odd::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VParity_Generator_Odd__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Odd__Syms*>(userp);
    VParity_Generator_Odd* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VParity_Generator_Odd::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VParity_Generator_Odd__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Odd__Syms*>(userp);
    VParity_Generator_Odd* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),8);
        tracep->chgBit(oldp+1,(vlTOPp->parity));
    }
}

void VParity_Generator_Odd::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VParity_Generator_Odd__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Odd__Syms*>(userp);
    VParity_Generator_Odd* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
