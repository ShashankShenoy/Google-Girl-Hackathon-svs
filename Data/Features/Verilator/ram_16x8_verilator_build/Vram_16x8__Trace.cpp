// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram_16x8__Syms.h"


void Vram_16x8::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vram_16x8::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->ram_16x8__DOT__memory[0]),8);
            tracep->chgCData(oldp+1,(vlTOPp->ram_16x8__DOT__memory[1]),8);
            tracep->chgCData(oldp+2,(vlTOPp->ram_16x8__DOT__memory[2]),8);
            tracep->chgCData(oldp+3,(vlTOPp->ram_16x8__DOT__memory[3]),8);
            tracep->chgCData(oldp+4,(vlTOPp->ram_16x8__DOT__memory[4]),8);
            tracep->chgCData(oldp+5,(vlTOPp->ram_16x8__DOT__memory[5]),8);
            tracep->chgCData(oldp+6,(vlTOPp->ram_16x8__DOT__memory[6]),8);
            tracep->chgCData(oldp+7,(vlTOPp->ram_16x8__DOT__memory[7]),8);
            tracep->chgCData(oldp+8,(vlTOPp->ram_16x8__DOT__memory[8]),8);
            tracep->chgCData(oldp+9,(vlTOPp->ram_16x8__DOT__memory[9]),8);
            tracep->chgCData(oldp+10,(vlTOPp->ram_16x8__DOT__memory[10]),8);
            tracep->chgCData(oldp+11,(vlTOPp->ram_16x8__DOT__memory[11]),8);
            tracep->chgCData(oldp+12,(vlTOPp->ram_16x8__DOT__memory[12]),8);
            tracep->chgCData(oldp+13,(vlTOPp->ram_16x8__DOT__memory[13]),8);
            tracep->chgCData(oldp+14,(vlTOPp->ram_16x8__DOT__memory[14]),8);
            tracep->chgCData(oldp+15,(vlTOPp->ram_16x8__DOT__memory[15]),8);
        }
        tracep->chgBit(oldp+16,(vlTOPp->clk));
        tracep->chgBit(oldp+17,(vlTOPp->write_enable));
        tracep->chgCData(oldp+18,(vlTOPp->address),4);
        tracep->chgCData(oldp+19,(vlTOPp->data_in),8);
        tracep->chgCData(oldp+20,(vlTOPp->data_out),8);
    }
}

void Vram_16x8::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vram_16x8__Syms* __restrict vlSymsp = static_cast<Vram_16x8__Syms*>(userp);
    Vram_16x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
