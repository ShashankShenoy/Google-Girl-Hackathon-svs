// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRAM_4x4__Syms.h"


void VRAM_4x4::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VRAM_4x4::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->RAM_4x4__DOT__mem[0]),4);
            tracep->chgCData(oldp+1,(vlTOPp->RAM_4x4__DOT__mem[1]),4);
            tracep->chgCData(oldp+2,(vlTOPp->RAM_4x4__DOT__mem[2]),4);
            tracep->chgCData(oldp+3,(vlTOPp->RAM_4x4__DOT__mem[3]),4);
        }
        tracep->chgBit(oldp+4,(vlTOPp->clk));
        tracep->chgCData(oldp+5,(vlTOPp->addr),2);
        tracep->chgCData(oldp+6,(vlTOPp->data_in),4);
        tracep->chgBit(oldp+7,(vlTOPp->write));
        tracep->chgCData(oldp+8,(vlTOPp->data_out),4);
    }
}

void VRAM_4x4::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VRAM_4x4__Syms* __restrict vlSymsp = static_cast<VRAM_4x4__Syms*>(userp);
    VRAM_4x4* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
