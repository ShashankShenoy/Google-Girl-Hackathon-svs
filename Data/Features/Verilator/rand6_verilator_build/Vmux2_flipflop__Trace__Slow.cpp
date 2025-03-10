// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2_flipflop__Syms.h"


//======================

void Vmux2_flipflop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmux2_flipflop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmux2_flipflop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmux2_flipflop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmux2_flipflop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"sel", false,-1);
        tracep->declBit(c+4,"d0", false,-1);
        tracep->declBit(c+5,"d1", false,-1);
        tracep->declBit(c+6,"q", false,-1);
        tracep->declBit(c+1,"mux2_flipflop clk", false,-1);
        tracep->declBit(c+2,"mux2_flipflop rst", false,-1);
        tracep->declBit(c+3,"mux2_flipflop sel", false,-1);
        tracep->declBit(c+4,"mux2_flipflop d0", false,-1);
        tracep->declBit(c+5,"mux2_flipflop d1", false,-1);
        tracep->declBit(c+6,"mux2_flipflop q", false,-1);
        tracep->declBit(c+7,"mux2_flipflop mux_out", false,-1);
    }
}

void Vmux2_flipflop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmux2_flipflop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmux2_flipflop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = static_cast<Vmux2_flipflop__Syms*>(userp);
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->sel));
        tracep->fullBit(oldp+4,(vlTOPp->d0));
        tracep->fullBit(oldp+5,(vlTOPp->d1));
        tracep->fullBit(oldp+6,(vlTOPp->q));
        tracep->fullBit(oldp+7,(((IData)(vlTOPp->sel)
                                  ? (IData)(vlTOPp->d1)
                                  : (IData)(vlTOPp->d0))));
    }
}
