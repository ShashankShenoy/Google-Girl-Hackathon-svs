// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRAM_8x8__Syms.h"


//======================

void VRAM_8x8::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VRAM_8x8::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VRAM_8x8::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VRAM_8x8::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VRAM_8x8::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"clk", false,-1);
        tracep->declBus(c+10,"addr", false,-1, 2,0);
        tracep->declBus(c+11,"data_in", false,-1, 7,0);
        tracep->declBit(c+12,"write", false,-1);
        tracep->declBus(c+13,"data_out", false,-1, 7,0);
        tracep->declBit(c+9,"RAM_8x8 clk", false,-1);
        tracep->declBus(c+10,"RAM_8x8 addr", false,-1, 2,0);
        tracep->declBus(c+11,"RAM_8x8 data_in", false,-1, 7,0);
        tracep->declBit(c+12,"RAM_8x8 write", false,-1);
        tracep->declBus(c+13,"RAM_8x8 data_out", false,-1, 7,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"RAM_8x8 mem", true,(i+0), 7,0);}}
    }
}

void VRAM_8x8::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VRAM_8x8::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VRAM_8x8::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->RAM_8x8__DOT__mem[0]),8);
        tracep->fullCData(oldp+2,(vlTOPp->RAM_8x8__DOT__mem[1]),8);
        tracep->fullCData(oldp+3,(vlTOPp->RAM_8x8__DOT__mem[2]),8);
        tracep->fullCData(oldp+4,(vlTOPp->RAM_8x8__DOT__mem[3]),8);
        tracep->fullCData(oldp+5,(vlTOPp->RAM_8x8__DOT__mem[4]),8);
        tracep->fullCData(oldp+6,(vlTOPp->RAM_8x8__DOT__mem[5]),8);
        tracep->fullCData(oldp+7,(vlTOPp->RAM_8x8__DOT__mem[6]),8);
        tracep->fullCData(oldp+8,(vlTOPp->RAM_8x8__DOT__mem[7]),8);
        tracep->fullBit(oldp+9,(vlTOPp->clk));
        tracep->fullCData(oldp+10,(vlTOPp->addr),3);
        tracep->fullCData(oldp+11,(vlTOPp->data_in),8);
        tracep->fullBit(oldp+12,(vlTOPp->write));
        tracep->fullCData(oldp+13,(vlTOPp->data_out),8);
    }
}
