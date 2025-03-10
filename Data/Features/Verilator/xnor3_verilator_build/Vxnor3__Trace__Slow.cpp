// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxnor3__Syms.h"


//======================

void Vxnor3::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vxnor3::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vxnor3::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vxnor3::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vxnor3::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"out", false,-1);
        tracep->declBit(c+1,"xnor3 a", false,-1);
        tracep->declBit(c+2,"xnor3 b", false,-1);
        tracep->declBit(c+3,"xnor3 c", false,-1);
        tracep->declBit(c+4,"xnor3 out", false,-1);
    }
}

void Vxnor3::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vxnor3::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vxnor3::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vxnor3__Syms* __restrict vlSymsp = static_cast<Vxnor3__Syms*>(userp);
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
