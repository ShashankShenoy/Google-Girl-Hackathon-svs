// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSigned_Multiplier_4bit__Syms.h"


//======================

void VSigned_Multiplier_4bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSigned_Multiplier_4bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSigned_Multiplier_4bit__Syms* __restrict vlSymsp = static_cast<VSigned_Multiplier_4bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSigned_Multiplier_4bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSigned_Multiplier_4bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSigned_Multiplier_4bit__Syms* __restrict vlSymsp = static_cast<VSigned_Multiplier_4bit__Syms*>(userp);
    VSigned_Multiplier_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSigned_Multiplier_4bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSigned_Multiplier_4bit__Syms* __restrict vlSymsp = static_cast<VSigned_Multiplier_4bit__Syms*>(userp);
    VSigned_Multiplier_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"A", false,-1, 3,0);
        tracep->declBus(c+2,"B", false,-1, 3,0);
        tracep->declBus(c+3,"product", false,-1, 7,0);
        tracep->declBus(c+1,"Signed_Multiplier_4bit A", false,-1, 3,0);
        tracep->declBus(c+2,"Signed_Multiplier_4bit B", false,-1, 3,0);
        tracep->declBus(c+3,"Signed_Multiplier_4bit product", false,-1, 7,0);
    }
}

void VSigned_Multiplier_4bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSigned_Multiplier_4bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSigned_Multiplier_4bit__Syms* __restrict vlSymsp = static_cast<VSigned_Multiplier_4bit__Syms*>(userp);
    VSigned_Multiplier_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSigned_Multiplier_4bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSigned_Multiplier_4bit__Syms* __restrict vlSymsp = static_cast<VSigned_Multiplier_4bit__Syms*>(userp);
    VSigned_Multiplier_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->A),4);
        tracep->fullCData(oldp+2,(vlTOPp->B),4);
        tracep->fullCData(oldp+3,(vlTOPp->product),8);
    }
}
