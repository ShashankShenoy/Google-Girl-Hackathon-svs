// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vor_and_inverter__Syms.h"


//======================

void Vor_and_inverter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vor_and_inverter::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vor_and_inverter__Syms* __restrict vlSymsp = static_cast<Vor_and_inverter__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vor_and_inverter::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vor_and_inverter::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vor_and_inverter__Syms* __restrict vlSymsp = static_cast<Vor_and_inverter__Syms*>(userp);
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vor_and_inverter::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vor_and_inverter__Syms* __restrict vlSymsp = static_cast<Vor_and_inverter__Syms*>(userp);
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"or_and_inverter a", false,-1);
        tracep->declBit(c+2,"or_and_inverter b", false,-1);
        tracep->declBit(c+3,"or_and_inverter c", false,-1);
        tracep->declBit(c+4,"or_and_inverter y", false,-1);
        tracep->declBit(c+5,"or_and_inverter or_out", false,-1);
        tracep->declBit(c+6,"or_and_inverter and_out", false,-1);
    }
}

void Vor_and_inverter::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vor_and_inverter::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vor_and_inverter__Syms* __restrict vlSymsp = static_cast<Vor_and_inverter__Syms*>(userp);
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vor_and_inverter::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vor_and_inverter__Syms* __restrict vlSymsp = static_cast<Vor_and_inverter__Syms*>(userp);
    Vor_and_inverter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->y));
        tracep->fullBit(oldp+5,(((IData)(vlTOPp->a) 
                                 | (IData)(vlTOPp->b))));
        tracep->fullBit(oldp+6,((((IData)(vlTOPp->a) 
                                  | (IData)(vlTOPp->b)) 
                                 & (IData)(vlTOPp->c))));
    }
}
