// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_32bit__Syms.h"


void Valu_32bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Valu_32bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,((IData)(vlTOPp->alu_32bit__DOT__adder_result)),32);
            tracep->chgBit(oldp+1,((1U & (IData)((vlTOPp->alu_32bit__DOT__adder_result 
                                                  >> 0x20U)))));
            tracep->chgBit(oldp+2,(vlTOPp->alu_32bit__DOT__add_overflow));
            tracep->chgIData(oldp+3,(vlTOPp->alu_32bit__DOT__adder_b),32);
            tracep->chgQData(oldp+4,(vlTOPp->alu_32bit__DOT__adder_result),33);
        }
        tracep->chgIData(oldp+6,(vlTOPp->a),32);
        tracep->chgIData(oldp+7,(vlTOPp->b),32);
        tracep->chgCData(oldp+8,(vlTOPp->op),4);
        tracep->chgIData(oldp+9,(vlTOPp->result),32);
        tracep->chgBit(oldp+10,(vlTOPp->zero));
        tracep->chgBit(oldp+11,(vlTOPp->overflow));
        tracep->chgBit(oldp+12,(vlTOPp->carry_out));
        tracep->chgBit(oldp+13,(((1U == (IData)(vlTOPp->op)) 
                                 | (6U == (IData)(vlTOPp->op)))));
        tracep->chgBit(oldp+14,((1U & (((1U & (vlTOPp->a 
                                               >> 0x1fU)) 
                                        != (1U & (vlTOPp->b 
                                                  >> 0x1fU)))
                                        ? (vlTOPp->a 
                                           >> 0x1fU)
                                        : (IData)((vlTOPp->alu_32bit__DOT__adder_result 
                                                   >> 0x1fU))))));
    }
}

void Valu_32bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Valu_32bit__Syms* __restrict vlSymsp = static_cast<Valu_32bit__Syms*>(userp);
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
