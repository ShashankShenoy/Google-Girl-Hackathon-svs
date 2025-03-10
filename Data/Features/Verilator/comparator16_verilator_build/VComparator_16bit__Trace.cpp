// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComparator_16bit__Syms.h"


void VComparator_16bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VComparator_16bit__Syms* __restrict vlSymsp = static_cast<VComparator_16bit__Syms*>(userp);
    VComparator_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VComparator_16bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VComparator_16bit__Syms* __restrict vlSymsp = static_cast<VComparator_16bit__Syms*>(userp);
    VComparator_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgSData(oldp+0,(vlTOPp->A),16);
        tracep->chgSData(oldp+1,(vlTOPp->B),16);
        tracep->chgBit(oldp+2,(vlTOPp->A_eq_B));
        tracep->chgBit(oldp+3,(vlTOPp->A_gt_B));
        tracep->chgBit(oldp+4,(vlTOPp->A_lt_B));
    }
}

void VComparator_16bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VComparator_16bit__Syms* __restrict vlSymsp = static_cast<VComparator_16bit__Syms*>(userp);
    VComparator_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
