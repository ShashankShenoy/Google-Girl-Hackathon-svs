// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHalf_Subtractor__Syms.h"


//======================

void VHalf_Subtractor::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VHalf_Subtractor::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VHalf_Subtractor::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VHalf_Subtractor::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    VHalf_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VHalf_Subtractor::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    VHalf_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"Diff", false,-1);
        tracep->declBit(c+4,"Borrow", false,-1);
        tracep->declBit(c+1,"Half_Subtractor A", false,-1);
        tracep->declBit(c+2,"Half_Subtractor B", false,-1);
        tracep->declBit(c+3,"Half_Subtractor Diff", false,-1);
        tracep->declBit(c+4,"Half_Subtractor Borrow", false,-1);
    }
}

void VHalf_Subtractor::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VHalf_Subtractor::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    VHalf_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VHalf_Subtractor::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VHalf_Subtractor__Syms* __restrict vlSymsp = static_cast<VHalf_Subtractor__Syms*>(userp);
    VHalf_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->Diff));
        tracep->fullBit(oldp+4,(vlTOPp->Borrow));
    }
}
