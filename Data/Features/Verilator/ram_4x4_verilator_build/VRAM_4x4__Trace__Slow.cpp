// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRAM_4x4__Syms.h"


//======================

void VRAM_4x4::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VRAM_4x4::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRAM_4x4::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VRAM_4x4::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VRAM_4x4::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clk", false,-1);
        tracep->declBus(c+6,"addr", false,-1, 1,0);
        tracep->declBus(c+7,"data_in", false,-1, 3,0);
        tracep->declBit(c+8,"write", false,-1);
        tracep->declBus(c+9,"data_out", false,-1, 3,0);
        tracep->declBit(c+5,"RAM_4x4 clk", false,-1);
        tracep->declBus(c+6,"RAM_4x4 addr", false,-1, 1,0);
        tracep->declBus(c+7,"RAM_4x4 data_in", false,-1, 3,0);
        tracep->declBit(c+8,"RAM_4x4 write", false,-1);
        tracep->declBus(c+9,"RAM_4x4 data_out", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1+i*1,"RAM_4x4 mem", true,(i+0), 3,0);}}
    }
}

void VRAM_4x4::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VRAM_4x4::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VRAM_4x4::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->RAM_4x4__DOT__mem[0]),4);
        tracep->fullCData(oldp+2,(vlTOPp->RAM_4x4__DOT__mem[1]),4);
        tracep->fullCData(oldp+3,(vlTOPp->RAM_4x4__DOT__mem[2]),4);
        tracep->fullCData(oldp+4,(vlTOPp->RAM_4x4__DOT__mem[3]),4);
        tracep->fullBit(oldp+5,(vlTOPp->clk));
        tracep->fullCData(oldp+6,(vlTOPp->addr),2);
        tracep->fullCData(oldp+7,(vlTOPp->data_in),4);
        tracep->fullBit(oldp+8,(vlTOPp->write));
        tracep->fullCData(oldp+9,(vlTOPp->data_out),4);
    }
}
