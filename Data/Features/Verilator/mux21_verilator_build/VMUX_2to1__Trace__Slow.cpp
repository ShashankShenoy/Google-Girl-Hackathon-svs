// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMUX_2to1__Syms.h"


//======================

void VMUX_2to1::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMUX_2to1::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMUX_2to1::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMUX_2to1::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    VMUX_2to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMUX_2to1::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    VMUX_2to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"S", false,-1);
        tracep->declBit(c+4,"Y", false,-1);
        tracep->declBit(c+1,"MUX_2to1 A", false,-1);
        tracep->declBit(c+2,"MUX_2to1 B", false,-1);
        tracep->declBit(c+3,"MUX_2to1 S", false,-1);
        tracep->declBit(c+4,"MUX_2to1 Y", false,-1);
    }
}

void VMUX_2to1::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMUX_2to1::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    VMUX_2to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMUX_2to1::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_2to1__Syms* __restrict vlSymsp = static_cast<VMUX_2to1__Syms*>(userp);
    VMUX_2to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->S));
        tracep->fullBit(oldp+4,(vlTOPp->Y));
    }
}
