// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnand_and_cascade__Syms.h"


//======================

void Vnand_and_cascade::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vnand_and_cascade::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vnand_and_cascade::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vnand_and_cascade::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vnand_and_cascade::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"nand_and_cascade a", false,-1);
        tracep->declBit(c+2,"nand_and_cascade b", false,-1);
        tracep->declBit(c+3,"nand_and_cascade c", false,-1);
        tracep->declBit(c+4,"nand_and_cascade y", false,-1);
        tracep->declBit(c+5,"nand_and_cascade nand_out", false,-1);
    }
}

void Vnand_and_cascade::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vnand_and_cascade::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vnand_and_cascade::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vnand_and_cascade__Syms* __restrict vlSymsp = static_cast<Vnand_and_cascade__Syms*>(userp);
    Vnand_and_cascade* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->y));
        tracep->fullBit(oldp+5,((1U & (~ ((IData)(vlTOPp->a) 
                                          & (IData)(vlTOPp->b))))));
    }
}
