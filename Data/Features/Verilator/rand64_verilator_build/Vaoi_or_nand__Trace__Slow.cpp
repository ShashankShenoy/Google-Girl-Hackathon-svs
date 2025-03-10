// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaoi_or_nand__Syms.h"


//======================

void Vaoi_or_nand::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vaoi_or_nand::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaoi_or_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_or_nand__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vaoi_or_nand::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vaoi_or_nand::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vaoi_or_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_or_nand__Syms*>(userp);
    Vaoi_or_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vaoi_or_nand::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vaoi_or_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_or_nand__Syms*>(userp);
    Vaoi_or_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"c", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"aoi_or_nand a", false,-1);
        tracep->declBit(c+2,"aoi_or_nand b", false,-1);
        tracep->declBit(c+3,"aoi_or_nand c", false,-1);
        tracep->declBit(c+4,"aoi_or_nand y", false,-1);
        tracep->declBit(c+5,"aoi_or_nand aoi_or", false,-1);
    }
}

void Vaoi_or_nand::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vaoi_or_nand::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vaoi_or_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_or_nand__Syms*>(userp);
    Vaoi_or_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vaoi_or_nand::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vaoi_or_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_or_nand__Syms*>(userp);
    Vaoi_or_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->c));
        tracep->fullBit(oldp+4,(vlTOPp->y));
        tracep->fullBit(oldp+5,((1U & (~ (((IData)(vlTOPp->a) 
                                           | (IData)(vlTOPp->b)) 
                                          & (IData)(vlTOPp->c))))));
    }
}
