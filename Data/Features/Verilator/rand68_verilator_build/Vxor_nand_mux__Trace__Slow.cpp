// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxor_nand_mux__Syms.h"


//======================

void Vxor_nand_mux::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vxor_nand_mux::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vxor_nand_mux__Syms* __restrict vlSymsp = static_cast<Vxor_nand_mux__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vxor_nand_mux::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vxor_nand_mux::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_mux__Syms* __restrict vlSymsp = static_cast<Vxor_nand_mux__Syms*>(userp);
    Vxor_nand_mux* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vxor_nand_mux::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_mux__Syms* __restrict vlSymsp = static_cast<Vxor_nand_mux__Syms*>(userp);
    Vxor_nand_mux* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"sel", false,-1);
        tracep->declBit(c+4,"y", false,-1);
        tracep->declBit(c+1,"xor_nand_mux a", false,-1);
        tracep->declBit(c+2,"xor_nand_mux b", false,-1);
        tracep->declBit(c+3,"xor_nand_mux sel", false,-1);
        tracep->declBit(c+4,"xor_nand_mux y", false,-1);
    }
}

void Vxor_nand_mux::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vxor_nand_mux::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_mux__Syms* __restrict vlSymsp = static_cast<Vxor_nand_mux__Syms*>(userp);
    Vxor_nand_mux* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vxor_nand_mux::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_mux__Syms* __restrict vlSymsp = static_cast<Vxor_nand_mux__Syms*>(userp);
    Vxor_nand_mux* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->a));
        tracep->fullBit(oldp+2,(vlTOPp->b));
        tracep->fullBit(oldp+3,(vlTOPp->sel));
        tracep->fullBit(oldp+4,(vlTOPp->y));
    }
}
