// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHalf_Adder__Syms.h"


//======================

void VHalf_Adder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VHalf_Adder::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHalf_Adder__Syms* __restrict vlSymsp = static_cast<VHalf_Adder__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VHalf_Adder::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VHalf_Adder::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VHalf_Adder__Syms* __restrict vlSymsp = static_cast<VHalf_Adder__Syms*>(userp);
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VHalf_Adder::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VHalf_Adder__Syms* __restrict vlSymsp = static_cast<VHalf_Adder__Syms*>(userp);
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"Sum", false,-1);
        tracep->declBit(c+4,"Carry", false,-1);
        tracep->declBit(c+1,"Half_Adder A", false,-1);
        tracep->declBit(c+2,"Half_Adder B", false,-1);
        tracep->declBit(c+3,"Half_Adder Sum", false,-1);
        tracep->declBit(c+4,"Half_Adder Carry", false,-1);
    }
}

void VHalf_Adder::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VHalf_Adder::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VHalf_Adder__Syms* __restrict vlSymsp = static_cast<VHalf_Adder__Syms*>(userp);
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VHalf_Adder::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VHalf_Adder__Syms* __restrict vlSymsp = static_cast<VHalf_Adder__Syms*>(userp);
    VHalf_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->Sum));
        tracep->fullBit(oldp+4,(vlTOPp->Carry));
    }
}
