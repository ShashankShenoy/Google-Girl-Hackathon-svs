// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram_32x8__Syms.h"


//======================

void Vram_32x8::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vram_32x8::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vram_32x8::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vram_32x8::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vram_32x8::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+33,"clk", false,-1);
        tracep->declBit(c+34,"write_enable", false,-1);
        tracep->declBus(c+35,"address", false,-1, 4,0);
        tracep->declBus(c+36,"data_in", false,-1, 7,0);
        tracep->declBus(c+37,"data_out", false,-1, 7,0);
        tracep->declBit(c+33,"ram_32x8 clk", false,-1);
        tracep->declBit(c+34,"ram_32x8 write_enable", false,-1);
        tracep->declBus(c+35,"ram_32x8 address", false,-1, 4,0);
        tracep->declBus(c+36,"ram_32x8 data_in", false,-1, 7,0);
        tracep->declBus(c+37,"ram_32x8 data_out", false,-1, 7,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1+i*1,"ram_32x8 memory", true,(i+0), 7,0);}}
    }
}

void Vram_32x8::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vram_32x8::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vram_32x8::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->ram_32x8__DOT__memory[0]),8);
        tracep->fullCData(oldp+2,(vlTOPp->ram_32x8__DOT__memory[1]),8);
        tracep->fullCData(oldp+3,(vlTOPp->ram_32x8__DOT__memory[2]),8);
        tracep->fullCData(oldp+4,(vlTOPp->ram_32x8__DOT__memory[3]),8);
        tracep->fullCData(oldp+5,(vlTOPp->ram_32x8__DOT__memory[4]),8);
        tracep->fullCData(oldp+6,(vlTOPp->ram_32x8__DOT__memory[5]),8);
        tracep->fullCData(oldp+7,(vlTOPp->ram_32x8__DOT__memory[6]),8);
        tracep->fullCData(oldp+8,(vlTOPp->ram_32x8__DOT__memory[7]),8);
        tracep->fullCData(oldp+9,(vlTOPp->ram_32x8__DOT__memory[8]),8);
        tracep->fullCData(oldp+10,(vlTOPp->ram_32x8__DOT__memory[9]),8);
        tracep->fullCData(oldp+11,(vlTOPp->ram_32x8__DOT__memory[10]),8);
        tracep->fullCData(oldp+12,(vlTOPp->ram_32x8__DOT__memory[11]),8);
        tracep->fullCData(oldp+13,(vlTOPp->ram_32x8__DOT__memory[12]),8);
        tracep->fullCData(oldp+14,(vlTOPp->ram_32x8__DOT__memory[13]),8);
        tracep->fullCData(oldp+15,(vlTOPp->ram_32x8__DOT__memory[14]),8);
        tracep->fullCData(oldp+16,(vlTOPp->ram_32x8__DOT__memory[15]),8);
        tracep->fullCData(oldp+17,(vlTOPp->ram_32x8__DOT__memory[16]),8);
        tracep->fullCData(oldp+18,(vlTOPp->ram_32x8__DOT__memory[17]),8);
        tracep->fullCData(oldp+19,(vlTOPp->ram_32x8__DOT__memory[18]),8);
        tracep->fullCData(oldp+20,(vlTOPp->ram_32x8__DOT__memory[19]),8);
        tracep->fullCData(oldp+21,(vlTOPp->ram_32x8__DOT__memory[20]),8);
        tracep->fullCData(oldp+22,(vlTOPp->ram_32x8__DOT__memory[21]),8);
        tracep->fullCData(oldp+23,(vlTOPp->ram_32x8__DOT__memory[22]),8);
        tracep->fullCData(oldp+24,(vlTOPp->ram_32x8__DOT__memory[23]),8);
        tracep->fullCData(oldp+25,(vlTOPp->ram_32x8__DOT__memory[24]),8);
        tracep->fullCData(oldp+26,(vlTOPp->ram_32x8__DOT__memory[25]),8);
        tracep->fullCData(oldp+27,(vlTOPp->ram_32x8__DOT__memory[26]),8);
        tracep->fullCData(oldp+28,(vlTOPp->ram_32x8__DOT__memory[27]),8);
        tracep->fullCData(oldp+29,(vlTOPp->ram_32x8__DOT__memory[28]),8);
        tracep->fullCData(oldp+30,(vlTOPp->ram_32x8__DOT__memory[29]),8);
        tracep->fullCData(oldp+31,(vlTOPp->ram_32x8__DOT__memory[30]),8);
        tracep->fullCData(oldp+32,(vlTOPp->ram_32x8__DOT__memory[31]),8);
        tracep->fullBit(oldp+33,(vlTOPp->clk));
        tracep->fullBit(oldp+34,(vlTOPp->write_enable));
        tracep->fullCData(oldp+35,(vlTOPp->address),5);
        tracep->fullCData(oldp+36,(vlTOPp->data_in),8);
        tracep->fullCData(oldp+37,(vlTOPp->data_out),8);
    }
}
