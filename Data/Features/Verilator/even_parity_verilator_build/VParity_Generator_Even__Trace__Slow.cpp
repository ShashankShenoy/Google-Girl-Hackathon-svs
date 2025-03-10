// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParity_Generator_Even__Syms.h"


//======================

void VParity_Generator_Even::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VParity_Generator_Even::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VParity_Generator_Even__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Even__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VParity_Generator_Even::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VParity_Generator_Even::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VParity_Generator_Even__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Even__Syms*>(userp);
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VParity_Generator_Even::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VParity_Generator_Even__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Even__Syms*>(userp);
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 7,0);
        tracep->declBit(c+2,"parity", false,-1);
        tracep->declBus(c+1,"Parity_Generator_Even A", false,-1, 7,0);
        tracep->declBit(c+2,"Parity_Generator_Even parity", false,-1);
    }
}

void VParity_Generator_Even::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VParity_Generator_Even::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VParity_Generator_Even__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Even__Syms*>(userp);
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VParity_Generator_Even::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VParity_Generator_Even__Syms* __restrict vlSymsp = static_cast<VParity_Generator_Even__Syms*>(userp);
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),8);
        tracep->fullBit(oldp+2,(vlTOPp->parity));
    }
}
