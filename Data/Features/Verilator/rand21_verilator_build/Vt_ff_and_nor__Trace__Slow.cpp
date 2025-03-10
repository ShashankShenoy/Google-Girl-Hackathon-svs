// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vt_ff_and_nor__Syms.h"


//======================

void Vt_ff_and_nor::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vt_ff_and_nor::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vt_ff_and_nor::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vt_ff_and_nor::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vt_ff_and_nor::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"t", false,-1);
        tracep->declBit(c+4,"q", false,-1);
        tracep->declBit(c+1,"t_ff_and_nor clk", false,-1);
        tracep->declBit(c+2,"t_ff_and_nor rst", false,-1);
        tracep->declBit(c+3,"t_ff_and_nor t", false,-1);
        tracep->declBit(c+4,"t_ff_and_nor q", false,-1);
        tracep->declBit(c+5,"t_ff_and_nor nor_out", false,-1);
        tracep->declBit(c+6,"t_ff_and_nor and_out", false,-1);
    }
}

void Vt_ff_and_nor::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vt_ff_and_nor::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vt_ff_and_nor::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vt_ff_and_nor__Syms* __restrict vlSymsp = static_cast<Vt_ff_and_nor__Syms*>(userp);
    Vt_ff_and_nor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->t));
        tracep->fullBit(oldp+4,(vlTOPp->q));
        tracep->fullBit(oldp+5,((1U & (~ ((IData)(vlTOPp->q) 
                                          | (IData)(vlTOPp->t))))));
        tracep->fullBit(oldp+6,(((~ ((IData)(vlTOPp->q) 
                                     | (IData)(vlTOPp->t))) 
                                 & (IData)(vlTOPp->q))));
    }
}
