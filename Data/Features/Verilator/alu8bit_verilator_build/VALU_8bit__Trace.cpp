// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_8bit__Syms.h"


void VALU_8bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VALU_8bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),8);
        tracep->chgCData(oldp+1,(vlTOPp->B),8);
        tracep->chgCData(oldp+2,(vlTOPp->ALUControl),3);
        tracep->chgCData(oldp+3,(vlTOPp->Result),8);
        tracep->chgBit(oldp+4,(vlTOPp->Zero));
    }
}

void VALU_8bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VALU_8bit__Syms* __restrict vlSymsp = static_cast<VALU_8bit__Syms*>(userp);
    VALU_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
