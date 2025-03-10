// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShift_Register_Left_8bit__Syms.h"


void VShift_Register_Left_8bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    VShift_Register_Left_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VShift_Register_Left_8bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    VShift_Register_Left_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->D),8);
        tracep->chgBit(oldp+1,(vlTOPp->clk));
        tracep->chgBit(oldp+2,(vlTOPp->rst));
        tracep->chgBit(oldp+3,(vlTOPp->shift));
        tracep->chgCData(oldp+4,(vlTOPp->Q),8);
    }
}

void VShift_Register_Left_8bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VShift_Register_Left_8bit__Syms* __restrict vlSymsp = static_cast<VShift_Register_Left_8bit__Syms*>(userp);
    VShift_Register_Left_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
