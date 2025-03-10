// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlfsr_16bit__Syms.h"


void Vlfsr_16bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vlfsr_16bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_16bit__Syms*>(userp);
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vlfsr_16bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vlfsr_16bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_16bit__Syms*>(userp);
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->enable));
        tracep->chgSData(oldp+3,(vlTOPp->lfsr),16);
        tracep->chgBit(oldp+4,((1U & (((((IData)(vlTOPp->lfsr) 
                                         >> 0xfU) ^ 
                                        ((IData)(vlTOPp->lfsr) 
                                         >> 0xeU)) 
                                       ^ ((IData)(vlTOPp->lfsr) 
                                          >> 0xcU)) 
                                      ^ ((IData)(vlTOPp->lfsr) 
                                         >> 3U)))));
    }
}

void Vlfsr_16bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vlfsr_16bit__Syms* __restrict vlSymsp = static_cast<Vlfsr_16bit__Syms*>(userp);
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
