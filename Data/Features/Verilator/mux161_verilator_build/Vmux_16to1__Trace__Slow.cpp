// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_16to1__Syms.h"


//======================

void Vmux_16to1::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmux_16to1::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmux_16to1::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmux_16to1::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmux_16to1::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"data_in", false,-1, 15,0);
        tracep->declBus(c+2,"select", false,-1, 3,0);
        tracep->declBit(c+3,"out", false,-1);
        tracep->declBus(c+1,"mux_16to1 data_in", false,-1, 15,0);
        tracep->declBus(c+2,"mux_16to1 select", false,-1, 3,0);
        tracep->declBit(c+3,"mux_16to1 out", false,-1);
    }
}

void Vmux_16to1::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmux_16to1::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmux_16to1::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmux_16to1__Syms* __restrict vlSymsp = static_cast<Vmux_16to1__Syms*>(userp);
    Vmux_16to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->data_in),16);
        tracep->fullCData(oldp+2,(vlTOPp->select),4);
        tracep->fullBit(oldp+3,(vlTOPp->out));
    }
}
