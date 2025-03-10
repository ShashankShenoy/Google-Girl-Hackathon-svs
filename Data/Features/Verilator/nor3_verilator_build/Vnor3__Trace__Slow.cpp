// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnor3__Syms.h"


//======================

void Vnor3::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vnor3::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnor3__Syms* __restrict vlSymsp = static_cast<Vnor3__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vnor3::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vnor3::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vnor3__Syms* __restrict vlSymsp = static_cast<Vnor3__Syms*>(userp);
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vnor3::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vnor3__Syms* __restrict vlSymsp = static_cast<Vnor3__Syms*>(userp);
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"out", false,-1);
        tracep->declBit(c+1,"nor3 a", false,-1);
        tracep->declBit(c+2,"nor3 b", false,-1);
        tracep->declBit(c+3,"nor3 c", false,-1);
        tracep->declBit(c+4,"nor3 out", false,-1);
    }
}

void Vnor3::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vnor3::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vnor3__Syms* __restrict vlSymsp = static_cast<Vnor3__Syms*>(userp);
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vnor3::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vnor3__Syms* __restrict vlSymsp = static_cast<Vnor3__Syms*>(userp);
    Vnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->out));
    }
}
