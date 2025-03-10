// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxor_nand_flipflop__Syms.h"


//======================

void Vxor_nand_flipflop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vxor_nand_flipflop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vxor_nand_flipflop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vxor_nand_flipflop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    Vxor_nand_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vxor_nand_flipflop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    Vxor_nand_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"x", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+5,"q", false,-1);
        tracep->declBit(c+1,"xor_nand_flipflop clk", false,-1);
        tracep->declBit(c+2,"xor_nand_flipflop rst", false,-1);
        tracep->declBit(c+3,"xor_nand_flipflop x", false,-1);
        tracep->declBit(c+4,"xor_nand_flipflop y", false,-1);
        tracep->declBit(c+5,"xor_nand_flipflop q", false,-1);
        tracep->declBit(c+6,"xor_nand_flipflop xor_out", false,-1);
        tracep->declBit(c+7,"xor_nand_flipflop nand_out", false,-1);
    }
}

void Vxor_nand_flipflop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vxor_nand_flipflop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    Vxor_nand_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vxor_nand_flipflop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    Vxor_nand_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->x));
        tracep->fullBit(oldp+4,(vlTOPp->y));
        tracep->fullBit(oldp+5,(vlTOPp->q));
        tracep->fullBit(oldp+6,(((IData)(vlTOPp->x) 
                                 ^ (IData)(vlTOPp->y))));
        tracep->fullBit(oldp+7,((1U & (~ (((IData)(vlTOPp->x) 
                                           ^ (IData)(vlTOPp->y)) 
                                          & (IData)(vlTOPp->y))))));
    }
}
