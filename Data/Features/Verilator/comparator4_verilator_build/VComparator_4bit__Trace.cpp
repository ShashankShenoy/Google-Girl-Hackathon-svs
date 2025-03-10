// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComparator_4bit__Syms.h"


void VComparator_4bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    VComparator_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VComparator_4bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    VComparator_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),4);
        tracep->chgCData(oldp+1,(vlTOPp->B),4);
        tracep->chgBit(oldp+2,(vlTOPp->A_eq_B));
        tracep->chgBit(oldp+3,(vlTOPp->A_gt_B));
        tracep->chgBit(oldp+4,(vlTOPp->A_lt_B));
    }
}

void VComparator_4bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VComparator_4bit__Syms* __restrict vlSymsp = static_cast<VComparator_4bit__Syms*>(userp);
    VComparator_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
