// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMUX_2to1__Syms.h"


void VMUX_2to1::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    VMUX_2to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VMUX_2to1::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    VMUX_2to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->S));
        tracep->chgBit(oldp+3,(vlTOPp->Y));
    }
}

void VMUX_2to1::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    VMUX_2to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
