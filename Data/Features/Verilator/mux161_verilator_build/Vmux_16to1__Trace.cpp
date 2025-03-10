// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_16to1__Syms.h"


void Vmux_16to1::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmux_16to1::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgSData(oldp+0,(vlTOPp->data_in),16);
        tracep->chgCData(oldp+1,(vlTOPp->select),4);
        tracep->chgBit(oldp+2,(vlTOPp->out));
    }
}

void Vmux_16to1::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
