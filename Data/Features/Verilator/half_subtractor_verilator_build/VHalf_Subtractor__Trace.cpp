// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHalf_Subtractor__Syms.h"


void VHalf_Subtractor::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    VHalf_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VHalf_Subtractor::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    VHalf_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->Diff));
        tracep->chgBit(oldp+3,(vlTOPp->Borrow));
    }
}

void VHalf_Subtractor::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    VHalf_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
