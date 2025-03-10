// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmajority_circuit__Syms.h"


//======================

void Vmajority_circuit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmajority_circuit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmajority_circuit__Syms* __restrict vlSymsp = static_cast<Vmajority_circuit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmajority_circuit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmajority_circuit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmajority_circuit__Syms* __restrict vlSymsp = static_cast<Vmajority_circuit__Syms*>(userp);
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmajority_circuit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmajority_circuit__Syms* __restrict vlSymsp = static_cast<Vmajority_circuit__Syms*>(userp);
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"majority_circuit a", false,-1);
        tracep->declBit(c+2,"majority_circuit b", false,-1);
        tracep->declBit(c+3,"majority_circuit c", false,-1);
        tracep->declBit(c+4,"majority_circuit y", false,-1);
    }
}

void Vmajority_circuit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmajority_circuit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmajority_circuit__Syms* __restrict vlSymsp = static_cast<Vmajority_circuit__Syms*>(userp);
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmajority_circuit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmajority_circuit__Syms* __restrict vlSymsp = static_cast<Vmajority_circuit__Syms*>(userp);
    Vmajority_circuit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->y));
    }
}
