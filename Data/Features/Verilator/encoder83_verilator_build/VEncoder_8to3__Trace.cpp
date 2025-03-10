// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEncoder_8to3__Syms.h"


void VEncoder_8to3::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VEncoder_8to3::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),8);
        tracep->chgCData(oldp+1,(vlTOPp->Y),3);
    }
}

void VEncoder_8to3::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
