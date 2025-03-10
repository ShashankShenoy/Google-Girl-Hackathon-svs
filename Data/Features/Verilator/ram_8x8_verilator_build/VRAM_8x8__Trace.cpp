// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRAM_8x8__Syms.h"


void VRAM_8x8::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VRAM_8x8::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->RAM_8x8__DOT__mem[0]),8);
            tracep->chgCData(oldp+1,(vlTOPp->RAM_8x8__DOT__mem[1]),8);
            tracep->chgCData(oldp+2,(vlTOPp->RAM_8x8__DOT__mem[2]),8);
            tracep->chgCData(oldp+3,(vlTOPp->RAM_8x8__DOT__mem[3]),8);
            tracep->chgCData(oldp+4,(vlTOPp->RAM_8x8__DOT__mem[4]),8);
            tracep->chgCData(oldp+5,(vlTOPp->RAM_8x8__DOT__mem[5]),8);
            tracep->chgCData(oldp+6,(vlTOPp->RAM_8x8__DOT__mem[6]),8);
            tracep->chgCData(oldp+7,(vlTOPp->RAM_8x8__DOT__mem[7]),8);
        }
        tracep->chgBit(oldp+8,(vlTOPp->clk));
        tracep->chgCData(oldp+9,(vlTOPp->addr),3);
        tracep->chgCData(oldp+10,(vlTOPp->data_in),8);
        tracep->chgBit(oldp+11,(vlTOPp->write));
        tracep->chgCData(oldp+12,(vlTOPp->data_out),8);
    }
}

void VRAM_8x8::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VRAM_8x8__Syms* __restrict vlSymsp = static_cast<VRAM_8x8__Syms*>(userp);
    VRAM_8x8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
