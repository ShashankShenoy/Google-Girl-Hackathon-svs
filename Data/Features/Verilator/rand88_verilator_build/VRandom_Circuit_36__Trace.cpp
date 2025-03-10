// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRandom_Circuit_36__Syms.h"


void VRandom_Circuit_36::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VRandom_Circuit_36__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_36__Syms*>(userp);
    VRandom_Circuit_36* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VRandom_Circuit_36::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VRandom_Circuit_36__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_36__Syms*>(userp);
    VRandom_Circuit_36* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->A));
        tracep->chgBit(oldp+1,(vlTOPp->B));
        tracep->chgBit(oldp+2,(vlTOPp->clk));
        tracep->chgBit(oldp+3,(vlTOPp->rst));
        tracep->chgBit(oldp+4,(vlTOPp->Q));
    }
}

void VRandom_Circuit_36::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VRandom_Circuit_36__Syms* __restrict vlSymsp = static_cast<VRandom_Circuit_36__Syms*>(userp);
    VRandom_Circuit_36* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
