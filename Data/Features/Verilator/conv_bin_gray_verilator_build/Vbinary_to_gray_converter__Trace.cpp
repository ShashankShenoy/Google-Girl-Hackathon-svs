// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbinary_to_gray_converter__Syms.h"


void Vbinary_to_gray_converter::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vbinary_to_gray_converter__Syms* __restrict vlSymsp = static_cast<Vbinary_to_gray_converter__Syms*>(userp);
    Vbinary_to_gray_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vbinary_to_gray_converter::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vbinary_to_gray_converter__Syms* __restrict vlSymsp = static_cast<Vbinary_to_gray_converter__Syms*>(userp);
    Vbinary_to_gray_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->binary),4);
        tracep->chgCData(oldp+1,(vlTOPp->gray),4);
    }
}

void Vbinary_to_gray_converter::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vbinary_to_gray_converter__Syms* __restrict vlSymsp = static_cast<Vbinary_to_gray_converter__Syms*>(userp);
    Vbinary_to_gray_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
