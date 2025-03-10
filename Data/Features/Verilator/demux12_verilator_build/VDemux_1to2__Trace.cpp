// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDemux_1to2__Syms.h"


void VDemux_1to2::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VDemux_1to2::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->S));
        tracep->chgBit(oldp+2,(vlTOPp->Y0));
        tracep->chgBit(oldp+3,(vlTOPp->Y1));
    }
}

void VDemux_1to2::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VDemux_1to2__Syms* __restrict vlSymsp = static_cast<VDemux_1to2__Syms*>(userp);
    VDemux_1to2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
