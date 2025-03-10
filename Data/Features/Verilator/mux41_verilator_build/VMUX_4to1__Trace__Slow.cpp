// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMUX_4to1__Syms.h"


//======================

void VMUX_4to1::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMUX_4to1::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMUX_4to1::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMUX_4to1::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    VMUX_4to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMUX_4to1::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    VMUX_4to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"C", false,-1);
        tracep->declBit(c+4,"D", false,-1);
        tracep->declBus(c+5,"S", false,-1, 1,0);
        tracep->declBit(c+6,"Y", false,-1);
        tracep->declBit(c+1,"MUX_4to1 A", false,-1);
        tracep->declBit(c+2,"MUX_4to1 B", false,-1);
        tracep->declBit(c+3,"MUX_4to1 C", false,-1);
        tracep->declBit(c+4,"MUX_4to1 D", false,-1);
        tracep->declBus(c+5,"MUX_4to1 S", false,-1, 1,0);
        tracep->declBit(c+6,"MUX_4to1 Y", false,-1);
    }
}

void VMUX_4to1::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMUX_4to1::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    VMUX_4to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMUX_4to1::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_4to1__Syms* __restrict vlSymsp = static_cast<VMUX_4to1__Syms*>(userp);
    VMUX_4to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->C));
        tracep->fullBit(oldp+4,(vlTOPp->D));
        tracep->fullCData(oldp+5,(vlTOPp->S),2);
        tracep->fullBit(oldp+6,(vlTOPp->Y));
    }
}
