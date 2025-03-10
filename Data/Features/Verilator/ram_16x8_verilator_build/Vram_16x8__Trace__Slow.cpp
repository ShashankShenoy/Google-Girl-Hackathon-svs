// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram_16x8__Syms.h"


//======================

void Vram_16x8::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vram_16x8::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vram_16x8::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vram_16x8::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vram_16x8::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+17,"clk", false,-1);
        tracep->declBit(c+18,"write_enable", false,-1);
        tracep->declBus(c+19,"address", false,-1, 3,0);
        tracep->declBus(c+20,"data_in", false,-1, 7,0);
        tracep->declBus(c+21,"data_out", false,-1, 7,0);
        tracep->declBit(c+17,"ram_16x8 clk", false,-1);
        tracep->declBit(c+18,"ram_16x8 write_enable", false,-1);
        tracep->declBus(c+19,"ram_16x8 address", false,-1, 3,0);
        tracep->declBus(c+20,"ram_16x8 data_in", false,-1, 7,0);
        tracep->declBus(c+21,"ram_16x8 data_out", false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+1+i*1,"ram_16x8 memory", true,(i+0), 7,0);}}
    }
}

void Vram_16x8::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vram_16x8::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vram_16x8::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->ram_16x8__DOT__memory[0]),8);
        tracep->fullCData(oldp+2,(vlTOPp->ram_16x8__DOT__memory[1]),8);
        tracep->fullCData(oldp+3,(vlTOPp->ram_16x8__DOT__memory[2]),8);
        tracep->fullCData(oldp+4,(vlTOPp->ram_16x8__DOT__memory[3]),8);
        tracep->fullCData(oldp+5,(vlTOPp->ram_16x8__DOT__memory[4]),8);
        tracep->fullCData(oldp+6,(vlTOPp->ram_16x8__DOT__memory[5]),8);
        tracep->fullCData(oldp+7,(vlTOPp->ram_16x8__DOT__memory[6]),8);
        tracep->fullCData(oldp+8,(vlTOPp->ram_16x8__DOT__memory[7]),8);
        tracep->fullCData(oldp+9,(vlTOPp->ram_16x8__DOT__memory[8]),8);
        tracep->fullCData(oldp+10,(vlTOPp->ram_16x8__DOT__memory[9]),8);
        tracep->fullCData(oldp+11,(vlTOPp->ram_16x8__DOT__memory[10]),8);
        tracep->fullCData(oldp+12,(vlTOPp->ram_16x8__DOT__memory[11]),8);
        tracep->fullCData(oldp+13,(vlTOPp->ram_16x8__DOT__memory[12]),8);
        tracep->fullCData(oldp+14,(vlTOPp->ram_16x8__DOT__memory[13]),8);
        tracep->fullCData(oldp+15,(vlTOPp->ram_16x8__DOT__memory[14]),8);
        tracep->fullCData(oldp+16,(vlTOPp->ram_16x8__DOT__memory[15]),8);
        tracep->fullBit(oldp+17,(vlTOPp->clk));
        tracep->fullBit(oldp+18,(vlTOPp->write_enable));
        tracep->fullCData(oldp+19,(vlTOPp->address),4);
        tracep->fullCData(oldp+20,(vlTOPp->data_in),8);
        tracep->fullCData(oldp+21,(vlTOPp->data_out),8);
    }
}
