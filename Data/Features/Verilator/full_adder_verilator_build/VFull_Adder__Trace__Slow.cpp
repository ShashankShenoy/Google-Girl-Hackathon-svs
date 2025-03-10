// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFull_Adder__Syms.h"


//======================

void VFull_Adder::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VFull_Adder::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFull_Adder::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VFull_Adder::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VFull_Adder::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"A", false,-1);
        tracep->declBit(c+2,"B", false,-1);
        tracep->declBit(c+3,"Cin", false,-1);
        tracep->declBit(c+4,"Sum", false,-1);
        tracep->declBit(c+5,"Carry", false,-1);
        tracep->declBit(c+1,"Full_Adder A", false,-1);
        tracep->declBit(c+2,"Full_Adder B", false,-1);
        tracep->declBit(c+3,"Full_Adder Cin", false,-1);
        tracep->declBit(c+4,"Full_Adder Sum", false,-1);
        tracep->declBit(c+5,"Full_Adder Carry", false,-1);
    }
}

void VFull_Adder::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VFull_Adder::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VFull_Adder::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VFull_Adder__Syms* __restrict vlSymsp = static_cast<VFull_Adder__Syms*>(userp);
    VFull_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->A));
        tracep->fullBit(oldp+2,(vlTOPp->B));
        tracep->fullBit(oldp+3,(vlTOPp->Cin));
        tracep->fullBit(oldp+4,(vlTOPp->Sum));
        tracep->fullBit(oldp+5,(vlTOPp->Carry));
    }
}
