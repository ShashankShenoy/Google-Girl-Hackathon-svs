// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vxor_nand_flipflop__Syms.h"


void Vxor_nand_flipflop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    Vxor_nand_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vxor_nand_flipflop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    Vxor_nand_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->x));
        tracep->chgBit(oldp+3,(vlTOPp->y));
        tracep->chgBit(oldp+4,(vlTOPp->q));
        tracep->chgBit(oldp+5,(((IData)(vlTOPp->x) 
                                ^ (IData)(vlTOPp->y))));
        tracep->chgBit(oldp+6,((1U & (~ (((IData)(vlTOPp->x) 
                                          ^ (IData)(vlTOPp->y)) 
                                         & (IData)(vlTOPp->y))))));
    }
}

void Vxor_nand_flipflop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vxor_nand_flipflop__Syms* __restrict vlSymsp = static_cast<Vxor_nand_flipflop__Syms*>(userp);
    Vxor_nand_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
