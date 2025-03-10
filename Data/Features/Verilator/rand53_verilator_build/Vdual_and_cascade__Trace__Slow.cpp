// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_and_cascade__Syms.h"


//======================

void Vdual_and_cascade::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vdual_and_cascade::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdual_and_cascade::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vdual_and_cascade::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    Vdual_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vdual_and_cascade::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    Vdual_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"dual_and_cascade a", false,-1);
        tracep->declBit(c+2,"dual_and_cascade b", false,-1);
        tracep->declBit(c+3,"dual_and_cascade c", false,-1);
        tracep->declBit(c+4,"dual_and_cascade y", false,-1);
        tracep->declBit(c+5,"dual_and_cascade and1_out", false,-1);
    }
}

void Vdual_and_cascade::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vdual_and_cascade::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    Vdual_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vdual_and_cascade::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vdual_and_cascade__Syms* __restrict vlSymsp = static_cast<Vdual_and_cascade__Syms*>(userp);
    Vdual_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->y));
        tracep->fullBit(oldp+5,(((IData)(vlTOPp->a) 
                                 & (IData)(vlTOPp->b))));
    }
}
