// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFull_Subtractor__Syms.h"


void VFull_Subtractor::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFull_Subtractor::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->Bin));
        tracep->chgBit(oldp+3,(vlTOPp->Diff));
        tracep->chgBit(oldp+4,(vlTOPp->Borrow));
    }
}

void VFull_Subtractor::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
