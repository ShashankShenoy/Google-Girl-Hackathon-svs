// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMUX_4to1__Syms.h"


void VMUX_4to1::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    VMUX_4to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VMUX_4to1::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    VMUX_4to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->C));
        tracep->chgBit(oldp+3,(vlTOPp->D));
        tracep->chgCData(oldp+4,(vlTOPp->S),2);
        tracep->chgBit(oldp+5,(vlTOPp->Y));
    }
}

void VMUX_4to1::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    VMUX_4to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
