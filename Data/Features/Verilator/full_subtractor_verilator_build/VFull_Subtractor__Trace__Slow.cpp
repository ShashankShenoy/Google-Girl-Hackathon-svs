// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFull_Subtractor__Syms.h"


//======================

void VFull_Subtractor::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VFull_Subtractor::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFull_Subtractor::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VFull_Subtractor::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VFull_Subtractor::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"Bin", false,-1);
        tracep->declBit(c+4,"Diff", false,-1);
        tracep->declBit(c+5,"Borrow", false,-1);
        tracep->declBit(c+1,"Full_Subtractor A", false,-1);
        tracep->declBit(c+2,"Full_Subtractor B", false,-1);
        tracep->declBit(c+3,"Full_Subtractor Bin", false,-1);
        tracep->declBit(c+4,"Full_Subtractor Diff", false,-1);
        tracep->declBit(c+5,"Full_Subtractor Borrow", false,-1);
    }
}

void VFull_Subtractor::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VFull_Subtractor::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VFull_Subtractor::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VFull_Subtractor__Syms* __restrict vlSymsp = static_cast<VFull_Subtractor__Syms*>(userp);
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->Bin));
        tracep->fullBit(oldp+4,(vlTOPp->Diff));
        tracep->fullBit(oldp+5,(vlTOPp->Borrow));
    }
}
