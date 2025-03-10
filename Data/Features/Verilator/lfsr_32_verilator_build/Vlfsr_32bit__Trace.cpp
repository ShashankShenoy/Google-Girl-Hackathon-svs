// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlfsr_32bit__Syms.h"


void Vlfsr_32bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vlfsr_32bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->enable));
        tracep->chgIData(oldp+3,(vlTOPp->lfsr),32);
        tracep->chgBit(oldp+4,((1U & ((((vlTOPp->lfsr 
                                         >> 0x1fU) 
                                        ^ (vlTOPp->lfsr 
                                           >> 0x15U)) 
                                       ^ (vlTOPp->lfsr 
                                          >> 1U)) ^ vlTOPp->lfsr))));
    }
}

void Vlfsr_32bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_32bit__Syms*>(userp);
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
