// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEncoder_8to3__Syms.h"


//======================

void VEncoder_8to3::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VEncoder_8to3::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VEncoder_8to3::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VEncoder_8to3::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VEncoder_8to3::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 7,0);
        tracep->declBus(c+2,"Y", false,-1, 2,0);
        tracep->declBus(c+1,"Encoder_8to3 A", false,-1, 7,0);
        tracep->declBus(c+2,"Encoder_8to3 Y", false,-1, 2,0);
    }
}

void VEncoder_8to3::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VEncoder_8to3::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VEncoder_8to3::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VEncoder_8to3__Syms* __restrict vlSymsp = static_cast<VEncoder_8to3__Syms*>(userp);
    VEncoder_8to3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),8);
        tracep->fullCData(oldp+2,(vlTOPp->Y),3);
    }
}
