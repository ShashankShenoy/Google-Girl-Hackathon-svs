// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaoi_xor_nand__Syms.h"


void Vaoi_xor_nand::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vaoi_xor_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_xor_nand__Syms*>(userp);
    Vaoi_xor_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vaoi_xor_nand::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vaoi_xor_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_xor_nand__Syms*>(userp);
    Vaoi_xor_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->a));
        tracep->chgBit(oldp+1,(vlTOPp->b));
        tracep->chgBit(oldp+2,(vlTOPp->y));
        tracep->chgBit(oldp+3,((1U & (~ (((IData)(vlTOPp->a) 
                                          & (~ (IData)(vlTOPp->b))) 
                                         | ((~ (IData)(vlTOPp->a)) 
                                            & (IData)(vlTOPp->b)))))));
    }
}

void Vaoi_xor_nand::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vaoi_xor_nand__Syms* __restrict vlSymsp = static_cast<Vaoi_xor_nand__Syms*>(userp);
    Vaoi_xor_nand* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
