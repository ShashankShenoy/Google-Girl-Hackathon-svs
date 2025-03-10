// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vand4_or__Syms.h"


//======================

void Vand4_or::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vand4_or::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vand4_or::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vand4_or::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vand4_or::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"d", false,-1);
        tracep->declBit(c+5,"y", false,-1);
        tracep->declBit(c+1,"and4_or a", false,-1);
        tracep->declBit(c+2,"and4_or b", false,-1);
        tracep->declBit(c+3,"and4_or c", false,-1);
        tracep->declBit(c+4,"and4_or d", false,-1);
        tracep->declBit(c+5,"and4_or y", false,-1);
    }
}

void Vand4_or::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vand4_or::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vand4_or::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vand4_or__Syms* __restrict vlSymsp = static_cast<Vand4_or__Syms*>(userp);
    Vand4_or* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->d));
        tracep->fullBit(oldp+5,(vlTOPp->y));
    }
}
