// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoder_3to8__Syms.h"


void VDecoder_3to8::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VDecoder_3to8::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->A),3);
        tracep->chgCData(oldp+1,(vlTOPp->Y),8);
    }
}

void VDecoder_3to8::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VDecoder_3to8__Syms* __restrict vlSymsp = static_cast<VDecoder_3to8__Syms*>(userp);
    VDecoder_3to8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
