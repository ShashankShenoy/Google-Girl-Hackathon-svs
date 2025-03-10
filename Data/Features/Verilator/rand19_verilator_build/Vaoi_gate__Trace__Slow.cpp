// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaoi_gate__Syms.h"


//======================

void Vaoi_gate::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vaoi_gate::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaoi_gate__Syms* __restrict vlSymsp = static_cast<Vaoi_gate__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vaoi_gate::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vaoi_gate::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vaoi_gate__Syms* __restrict vlSymsp = static_cast<Vaoi_gate__Syms*>(userp);
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vaoi_gate::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vaoi_gate__Syms* __restrict vlSymsp = static_cast<Vaoi_gate__Syms*>(userp);
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"aoi_gate a", false,-1);
        tracep->declBit(c+2,"aoi_gate b", false,-1);
        tracep->declBit(c+3,"aoi_gate c", false,-1);
        tracep->declBit(c+4,"aoi_gate y", false,-1);
    }
}

void Vaoi_gate::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vaoi_gate::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vaoi_gate__Syms* __restrict vlSymsp = static_cast<Vaoi_gate__Syms*>(userp);
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vaoi_gate::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vaoi_gate__Syms* __restrict vlSymsp = static_cast<Vaoi_gate__Syms*>(userp);
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
