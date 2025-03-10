// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram_32x8__Syms.h"


void Vram_32x8::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vram_32x8::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->ram_32x8__DOT__memory[0]),8);
            tracep->chgCData(oldp+1,(vlTOPp->ram_32x8__DOT__memory[1]),8);
            tracep->chgCData(oldp+2,(vlTOPp->ram_32x8__DOT__memory[2]),8);
            tracep->chgCData(oldp+3,(vlTOPp->ram_32x8__DOT__memory[3]),8);
            tracep->chgCData(oldp+4,(vlTOPp->ram_32x8__DOT__memory[4]),8);
            tracep->chgCData(oldp+5,(vlTOPp->ram_32x8__DOT__memory[5]),8);
            tracep->chgCData(oldp+6,(vlTOPp->ram_32x8__DOT__memory[6]),8);
            tracep->chgCData(oldp+7,(vlTOPp->ram_32x8__DOT__memory[7]),8);
            tracep->chgCData(oldp+8,(vlTOPp->ram_32x8__DOT__memory[8]),8);
            tracep->chgCData(oldp+9,(vlTOPp->ram_32x8__DOT__memory[9]),8);
            tracep->chgCData(oldp+10,(vlTOPp->ram_32x8__DOT__memory[10]),8);
            tracep->chgCData(oldp+11,(vlTOPp->ram_32x8__DOT__memory[11]),8);
            tracep->chgCData(oldp+12,(vlTOPp->ram_32x8__DOT__memory[12]),8);
            tracep->chgCData(oldp+13,(vlTOPp->ram_32x8__DOT__memory[13]),8);
            tracep->chgCData(oldp+14,(vlTOPp->ram_32x8__DOT__memory[14]),8);
            tracep->chgCData(oldp+15,(vlTOPp->ram_32x8__DOT__memory[15]),8);
            tracep->chgCData(oldp+16,(vlTOPp->ram_32x8__DOT__memory[16]),8);
            tracep->chgCData(oldp+17,(vlTOPp->ram_32x8__DOT__memory[17]),8);
            tracep->chgCData(oldp+18,(vlTOPp->ram_32x8__DOT__memory[18]),8);
            tracep->chgCData(oldp+19,(vlTOPp->ram_32x8__DOT__memory[19]),8);
            tracep->chgCData(oldp+20,(vlTOPp->ram_32x8__DOT__memory[20]),8);
            tracep->chgCData(oldp+21,(vlTOPp->ram_32x8__DOT__memory[21]),8);
            tracep->chgCData(oldp+22,(vlTOPp->ram_32x8__DOT__memory[22]),8);
            tracep->chgCData(oldp+23,(vlTOPp->ram_32x8__DOT__memory[23]),8);
            tracep->chgCData(oldp+24,(vlTOPp->ram_32x8__DOT__memory[24]),8);
            tracep->chgCData(oldp+25,(vlTOPp->ram_32x8__DOT__memory[25]),8);
            tracep->chgCData(oldp+26,(vlTOPp->ram_32x8__DOT__memory[26]),8);
            tracep->chgCData(oldp+27,(vlTOPp->ram_32x8__DOT__memory[27]),8);
            tracep->chgCData(oldp+28,(vlTOPp->ram_32x8__DOT__memory[28]),8);
            tracep->chgCData(oldp+29,(vlTOPp->ram_32x8__DOT__memory[29]),8);
            tracep->chgCData(oldp+30,(vlTOPp->ram_32x8__DOT__memory[30]),8);
            tracep->chgCData(oldp+31,(vlTOPp->ram_32x8__DOT__memory[31]),8);
        }
        tracep->chgBit(oldp+32,(vlTOPp->clk));
        tracep->chgBit(oldp+33,(vlTOPp->write_enable));
        tracep->chgCData(oldp+34,(vlTOPp->address),5);
        tracep->chgCData(oldp+35,(vlTOPp->data_in),8);
        tracep->chgCData(oldp+36,(vlTOPp->data_out),8);
    }
}

void Vram_32x8::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vram_32x8__Syms* __restrict vlSymsp = static_cast<Vram_32x8__Syms*>(userp);
    Vram_32x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
