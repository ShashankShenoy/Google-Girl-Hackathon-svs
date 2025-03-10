// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsr_latch_nand__Syms.h"


void Vsr_latch_nand::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vsr_latch_nand::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->s));
        tracep->chgBit(oldp+1,(vlTOPp->r));
        tracep->chgBit(oldp+2,(vlTOPp->q));
        tracep->chgBit(oldp+3,(vlTOPp->q_bar));
    }
}

void Vsr_latch_nand::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vsr_latch_nand__Syms* __restrict vlSymsp = static_cast<Vsr_latch_nand__Syms*>(userp);
    Vsr_latch_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
