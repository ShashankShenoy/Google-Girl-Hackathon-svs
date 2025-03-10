// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgray_to_binary_converter__Syms.h"


void Vgray_to_binary_converter::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vgray_to_binary_converter::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->gray),4);
        tracep->chgCData(oldp+1,(vlTOPp->binary),4);
    }
}

void Vgray_to_binary_converter::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vgray_to_binary_converter__Syms* __restrict vlSymsp = static_cast<Vgray_to_binary_converter__Syms*>(userp);
    Vgray_to_binary_converter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
