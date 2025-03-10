// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vparity_checker__Syms.h"


//======================

void Vparity_checker::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vparity_checker::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vparity_checker__Syms* __restrict vlSymsp = static_cast<Vparity_checker__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vparity_checker::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vparity_checker::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vparity_checker__Syms* __restrict vlSymsp = static_cast<Vparity_checker__Syms*>(userp);
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vparity_checker::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vparity_checker__Syms* __restrict vlSymsp = static_cast<Vparity_checker__Syms*>(userp);
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"parity", false,-1);
        tracep->declBit(c+1,"parity_checker a", false,-1);
        tracep->declBit(c+2,"parity_checker b", false,-1);
        tracep->declBit(c+3,"parity_checker c", false,-1);
        tracep->declBit(c+4,"parity_checker parity", false,-1);
    }
}

void Vparity_checker::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vparity_checker::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vparity_checker__Syms* __restrict vlSymsp = static_cast<Vparity_checker__Syms*>(userp);
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vparity_checker::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vparity_checker__Syms* __restrict vlSymsp = static_cast<Vparity_checker__Syms*>(userp);
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->parity));
    }
}
