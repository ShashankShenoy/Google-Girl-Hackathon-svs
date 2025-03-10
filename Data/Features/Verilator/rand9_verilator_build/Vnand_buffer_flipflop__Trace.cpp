// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnand_buffer_flipflop__Syms.h"


void Vnand_buffer_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vnand_buffer_flipflop__Syms* __restrict vlSymsp = static_cast<Vnand_buffer_flipflop__Syms*>(userp);
    Vnand_buffer_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vnand_buffer_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vnand_buffer_flipflop__Syms* __restrict vlSymsp = static_cast<Vnand_buffer_flipflop__Syms*>(userp);
    Vnand_buffer_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->a));
        tracep->chgBit(oldp+3,(vlTOPp->b));
        tracep->chgBit(oldp+4,(vlTOPp->q));
        tracep->chgBit(oldp+5,((1U & (~ ((IData)(vlTOPp->a) 
                                         & (IData)(vlTOPp->b))))));
    }
}

void Vnand_buffer_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vnand_buffer_flipflop__Syms* __restrict vlSymsp = static_cast<Vnand_buffer_flipflop__Syms*>(userp);
    Vnand_buffer_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
