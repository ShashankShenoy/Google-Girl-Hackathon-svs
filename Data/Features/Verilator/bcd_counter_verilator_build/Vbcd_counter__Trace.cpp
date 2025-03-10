// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbcd_counter__Syms.h"


void Vbcd_counter::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vbcd_counter::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->reset));
        tracep->chgBit(oldp+2,(vlTOPp->enable));
        tracep->chgCData(oldp+3,(vlTOPp->count),4);
        tracep->chgBit(oldp+4,(vlTOPp->carry));
    }
}

void Vbcd_counter::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vbcd_counter__Syms* __restrict vlSymsp = static_cast<Vbcd_counter__Syms*>(userp);
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
