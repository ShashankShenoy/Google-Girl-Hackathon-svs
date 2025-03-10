// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMUX_8to1__Syms.h"


//======================

void VMUX_8to1::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VMUX_8to1::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMUX_8to1__Syms* __restrict vlSymsp = static_cast<VMUX_8to1__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VMUX_8to1::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VMUX_8to1::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VMUX_8to1__Syms* __restrict vlSymsp = static_cast<VMUX_8to1__Syms*>(userp);
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VMUX_8to1::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_8to1__Syms* __restrict vlSymsp = static_cast<VMUX_8to1__Syms*>(userp);
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"C", false,-1);
        tracep->declBit(c+4,"D", false,-1);
        tracep->declBit(c+5,"E", false,-1);
        tracep->declBit(c+6,"F", false,-1);
        tracep->declBit(c+7,"G", false,-1);
        tracep->declBit(c+8,"H", false,-1);
        tracep->declBus(c+9,"S", false,-1, 2,0);
        tracep->declBit(c+10,"Y", false,-1);
        tracep->declBit(c+1,"MUX_8to1 A", false,-1);
        tracep->declBit(c+2,"MUX_8to1 B", false,-1);
        tracep->declBit(c+3,"MUX_8to1 C", false,-1);
        tracep->declBit(c+4,"MUX_8to1 D", false,-1);
        tracep->declBit(c+5,"MUX_8to1 E", false,-1);
        tracep->declBit(c+6,"MUX_8to1 F", false,-1);
        tracep->declBit(c+7,"MUX_8to1 G", false,-1);
        tracep->declBit(c+8,"MUX_8to1 H", false,-1);
        tracep->declBus(c+9,"MUX_8to1 S", false,-1, 2,0);
        tracep->declBit(c+10,"MUX_8to1 Y", false,-1);
    }
}

void VMUX_8to1::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VMUX_8to1::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VMUX_8to1__Syms* __restrict vlSymsp = static_cast<VMUX_8to1__Syms*>(userp);
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VMUX_8to1::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VMUX_8to1__Syms* __restrict vlSymsp = static_cast<VMUX_8to1__Syms*>(userp);
    VMUX_8to1* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->C));
        tracep->fullBit(oldp+4,(vlTOPp->D));
        tracep->fullBit(oldp+5,(vlTOPp->E));
        tracep->fullBit(oldp+6,(vlTOPp->F));
        tracep->fullBit(oldp+7,(vlTOPp->G));
        tracep->fullBit(oldp+8,(vlTOPp->H));
        tracep->fullCData(oldp+9,(vlTOPp->S),3);
        tracep->fullBit(oldp+10,(vlTOPp->Y));
    }
}
