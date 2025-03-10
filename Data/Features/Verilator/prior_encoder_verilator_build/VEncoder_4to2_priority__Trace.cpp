// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEncoder_4to2_priority__Syms.h"


void VEncoder_4to2_priority::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VEncoder_4to2_priority::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),4);
        tracep->chgCData(oldp+1,(vlTOPp->Y),2);
        tracep->chgBit(oldp+2,(vlTOPp->valid));
    }
}

void VEncoder_4to2_priority::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VEncoder_4to2_priority__Syms* __restrict vlSymsp = static_cast<VEncoder_4to2_priority__Syms*>(userp);
    VEncoder_4to2_priority* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
