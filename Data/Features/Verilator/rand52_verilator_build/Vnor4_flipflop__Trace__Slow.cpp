// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnor4_flipflop__Syms.h"


//======================

void Vnor4_flipflop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vnor4_flipflop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnor4_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor4_flipflop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vnor4_flipflop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vnor4_flipflop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vnor4_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor4_flipflop__Syms*>(userp);
    Vnor4_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vnor4_flipflop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vnor4_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor4_flipflop__Syms*>(userp);
    Vnor4_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"a", false,-1);
        tracep->declBit(c+4,"b", false,-1);
        tracep->declBit(c+5,"c", false,-1);
        tracep->declBit(c+6,"d", false,-1);
        tracep->declBit(c+7,"q", false,-1);
        tracep->declBit(c+1,"nor4_flipflop clk", false,-1);
        tracep->declBit(c+2,"nor4_flipflop rst", false,-1);
        tracep->declBit(c+3,"nor4_flipflop a", false,-1);
        tracep->declBit(c+4,"nor4_flipflop b", false,-1);
        tracep->declBit(c+5,"nor4_flipflop c", false,-1);
        tracep->declBit(c+6,"nor4_flipflop d", false,-1);
        tracep->declBit(c+7,"nor4_flipflop q", false,-1);
        tracep->declBit(c+8,"nor4_flipflop nor_out", false,-1);
    }
}

void Vnor4_flipflop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vnor4_flipflop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vnor4_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor4_flipflop__Syms*>(userp);
    Vnor4_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vnor4_flipflop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vnor4_flipflop__Syms* __restrict vlSymsp = static_cast<Vnor4_flipflop__Syms*>(userp);
    Vnor4_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->a));
        tracep->fullBit(oldp+4,(vlTOPp->b));
        tracep->fullBit(oldp+5,(vlTOPp->c));
        tracep->fullBit(oldp+6,(vlTOPp->d));
        tracep->fullBit(oldp+7,(vlTOPp->q));
        tracep->fullBit(oldp+8,((1U & (~ ((((IData)(vlTOPp->a) 
                                            | (IData)(vlTOPp->b)) 
                                           | (IData)(vlTOPp->c)) 
                                          | (IData)(vlTOPp->d))))));
    }
}
