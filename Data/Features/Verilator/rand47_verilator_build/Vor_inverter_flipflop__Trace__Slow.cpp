// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vor_inverter_flipflop__Syms.h"


//======================

void Vor_inverter_flipflop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vor_inverter_flipflop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vor_inverter_flipflop__Syms* __restrict vlSymsp = static_cast<Vor_inverter_flipflop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vor_inverter_flipflop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vor_inverter_flipflop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vor_inverter_flipflop__Syms* __restrict vlSymsp = static_cast<Vor_inverter_flipflop__Syms*>(userp);
    Vor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vor_inverter_flipflop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vor_inverter_flipflop__Syms* __restrict vlSymsp = static_cast<Vor_inverter_flipflop__Syms*>(userp);
    Vor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"a", false,-1);
        tracep->declBit(c+4,"b", false,-1);
        tracep->declBit(c+5,"q", false,-1);
        tracep->declBit(c+1,"or_inverter_flipflop clk", false,-1);
        tracep->declBit(c+2,"or_inverter_flipflop rst", false,-1);
        tracep->declBit(c+3,"or_inverter_flipflop a", false,-1);
        tracep->declBit(c+4,"or_inverter_flipflop b", false,-1);
        tracep->declBit(c+5,"or_inverter_flipflop q", false,-1);
        tracep->declBit(c+6,"or_inverter_flipflop or_out", false,-1);
        tracep->declBit(c+7,"or_inverter_flipflop inv_out", false,-1);
    }
}

void Vor_inverter_flipflop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vor_inverter_flipflop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vor_inverter_flipflop__Syms* __restrict vlSymsp = static_cast<Vor_inverter_flipflop__Syms*>(userp);
    Vor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vor_inverter_flipflop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vor_inverter_flipflop__Syms* __restrict vlSymsp = static_cast<Vor_inverter_flipflop__Syms*>(userp);
    Vor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->a));
        tracep->fullBit(oldp+4,(vlTOPp->b));
        tracep->fullBit(oldp+5,(vlTOPp->q));
        tracep->fullBit(oldp+6,(((IData)(vlTOPp->a) 
                                 | (IData)(vlTOPp->b))));
        tracep->fullBit(oldp+7,((1U & (~ ((IData)(vlTOPp->a) 
                                          | (IData)(vlTOPp->b))))));
    }
}
