// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VXOR_gate__Syms.h"


//======================

void VXOR_gate::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VXOR_gate::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VXOR_gate__Syms* __restrict vlSymsp = static_cast<VXOR_gate__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VXOR_gate::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VXOR_gate::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VXOR_gate__Syms* __restrict vlSymsp = static_cast<VXOR_gate__Syms*>(userp);
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VXOR_gate::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VXOR_gate__Syms* __restrict vlSymsp = static_cast<VXOR_gate__Syms*>(userp);
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"Y", false,-1);
        tracep->declBit(c+1,"XOR_gate A", false,-1);
        tracep->declBit(c+2,"XOR_gate B", false,-1);
        tracep->declBit(c+3,"XOR_gate Y", false,-1);
    }
}

void VXOR_gate::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VXOR_gate::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VXOR_gate__Syms* __restrict vlSymsp = static_cast<VXOR_gate__Syms*>(userp);
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VXOR_gate::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VXOR_gate__Syms* __restrict vlSymsp = static_cast<VXOR_gate__Syms*>(userp);
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->Y));
    }
}
