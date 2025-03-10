// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSR_2bit__Syms.h"


void VLFSR_2bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VLFSR_2bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgCData(oldp+2,(vlTOPp->Q),2);
    }
}

void VLFSR_2bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VLFSR_2bit__Syms* __restrict vlSymsp = static_cast<VLFSR_2bit__Syms*>(userp);
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
