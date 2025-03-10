// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpriority_encoder_8bit__Syms.h"


void Vpriority_encoder_8bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vpriority_encoder_8bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->data_in),8);
        tracep->chgCData(oldp+1,(vlTOPp->encoded_out),3);
        tracep->chgBit(oldp+2,(vlTOPp->valid));
    }
}

void Vpriority_encoder_8bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vpriority_encoder_8bit__Syms* __restrict vlSymsp = static_cast<Vpriority_encoder_8bit__Syms*>(userp);
    Vpriority_encoder_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
