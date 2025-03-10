// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vripple_carry_adder_16bit__Syms.h"


void Vripple_carry_adder_16bit::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vripple_carry_adder_16bit::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlTOPp->ripple_carry_adder_16bit__DOT__carry),16);
            tracep->chgBit(oldp+1,((1U & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 1U))));
            tracep->chgBit(oldp+3,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 2U))));
            tracep->chgBit(oldp+4,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 3U))));
            tracep->chgBit(oldp+5,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 4U))));
            tracep->chgBit(oldp+6,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 5U))));
            tracep->chgBit(oldp+7,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 6U))));
            tracep->chgBit(oldp+8,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 7U))));
            tracep->chgBit(oldp+9,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                          >> 8U))));
            tracep->chgBit(oldp+10,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 9U))));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+12,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 0xbU))));
            tracep->chgBit(oldp+13,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 0xcU))));
            tracep->chgBit(oldp+14,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 0xdU))));
            tracep->chgBit(oldp+15,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 0xeU))));
        }
        tracep->chgSData(oldp+16,(vlTOPp->a),16);
        tracep->chgSData(oldp+17,(vlTOPp->b),16);
        tracep->chgBit(oldp+18,(vlTOPp->cin));
        tracep->chgSData(oldp+19,(vlTOPp->sum),16);
        tracep->chgBit(oldp+20,(vlTOPp->cout));
        tracep->chgBit(oldp+21,((1U & (IData)(vlTOPp->a))));
        tracep->chgBit(oldp+22,((1U & (IData)(vlTOPp->b))));
        tracep->chgBit(oldp+23,((1U & (((IData)(vlTOPp->a) 
                                        ^ (IData)(vlTOPp->b)) 
                                       ^ (IData)(vlTOPp->cin)))));
        tracep->chgBit(oldp+24,((1U & (((IData)(vlTOPp->a) 
                                        & ((IData)(vlTOPp->b) 
                                           | (IData)(vlTOPp->cin))) 
                                       | ((IData)(vlTOPp->b) 
                                          & (IData)(vlTOPp->cin))))));
        tracep->chgBit(oldp+25,((1U & ((IData)(vlTOPp->a) 
                                       >> 1U))));
        tracep->chgBit(oldp+26,((1U & ((IData)(vlTOPp->b) 
                                       >> 1U))));
        tracep->chgBit(oldp+27,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 1U) ^ (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)))));
        tracep->chgBit(oldp+28,((1U & ((((IData)(vlTOPp->a) 
                                         >> 1U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 1U) 
                                                   | (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 1U) & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))))));
        tracep->chgBit(oldp+29,((1U & ((IData)(vlTOPp->a) 
                                       >> 2U))));
        tracep->chgBit(oldp+30,((1U & ((IData)(vlTOPp->b) 
                                       >> 2U))));
        tracep->chgBit(oldp+31,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 2U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 1U)))));
        tracep->chgBit(oldp+32,((1U & ((((IData)(vlTOPp->a) 
                                         >> 2U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 2U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 1U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 2U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 1U))))));
        tracep->chgBit(oldp+33,((1U & ((IData)(vlTOPp->a) 
                                       >> 3U))));
        tracep->chgBit(oldp+34,((1U & ((IData)(vlTOPp->b) 
                                       >> 3U))));
        tracep->chgBit(oldp+35,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 3U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 2U)))));
        tracep->chgBit(oldp+36,((1U & ((((IData)(vlTOPp->a) 
                                         >> 3U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 3U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 2U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 3U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 2U))))));
        tracep->chgBit(oldp+37,((1U & ((IData)(vlTOPp->a) 
                                       >> 4U))));
        tracep->chgBit(oldp+38,((1U & ((IData)(vlTOPp->b) 
                                       >> 4U))));
        tracep->chgBit(oldp+39,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 4U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 3U)))));
        tracep->chgBit(oldp+40,((1U & ((((IData)(vlTOPp->a) 
                                         >> 4U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 4U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 3U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 4U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 3U))))));
        tracep->chgBit(oldp+41,((1U & ((IData)(vlTOPp->a) 
                                       >> 5U))));
        tracep->chgBit(oldp+42,((1U & ((IData)(vlTOPp->b) 
                                       >> 5U))));
        tracep->chgBit(oldp+43,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 5U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 4U)))));
        tracep->chgBit(oldp+44,((1U & ((((IData)(vlTOPp->a) 
                                         >> 5U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 5U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 4U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 5U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 4U))))));
        tracep->chgBit(oldp+45,((1U & ((IData)(vlTOPp->a) 
                                       >> 6U))));
        tracep->chgBit(oldp+46,((1U & ((IData)(vlTOPp->b) 
                                       >> 6U))));
        tracep->chgBit(oldp+47,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 6U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 5U)))));
        tracep->chgBit(oldp+48,((1U & ((((IData)(vlTOPp->a) 
                                         >> 6U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 6U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 5U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 6U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 5U))))));
        tracep->chgBit(oldp+49,((1U & ((IData)(vlTOPp->a) 
                                       >> 7U))));
        tracep->chgBit(oldp+50,((1U & ((IData)(vlTOPp->b) 
                                       >> 7U))));
        tracep->chgBit(oldp+51,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 7U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 6U)))));
        tracep->chgBit(oldp+52,((1U & ((((IData)(vlTOPp->a) 
                                         >> 7U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 7U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 6U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 7U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 6U))))));
        tracep->chgBit(oldp+53,((1U & ((IData)(vlTOPp->a) 
                                       >> 8U))));
        tracep->chgBit(oldp+54,((1U & ((IData)(vlTOPp->b) 
                                       >> 8U))));
        tracep->chgBit(oldp+55,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 8U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 7U)))));
        tracep->chgBit(oldp+56,((1U & ((((IData)(vlTOPp->a) 
                                         >> 8U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 8U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 7U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 8U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 7U))))));
        tracep->chgBit(oldp+57,((1U & ((IData)(vlTOPp->a) 
                                       >> 9U))));
        tracep->chgBit(oldp+58,((1U & ((IData)(vlTOPp->b) 
                                       >> 9U))));
        tracep->chgBit(oldp+59,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 9U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                  >> 8U)))));
        tracep->chgBit(oldp+60,((1U & ((((IData)(vlTOPp->a) 
                                         >> 9U) & (
                                                   ((IData)(vlTOPp->b) 
                                                    >> 9U) 
                                                   | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                      >> 8U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 9U) & 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 8U))))));
        tracep->chgBit(oldp+61,((1U & ((IData)(vlTOPp->a) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+62,((1U & ((IData)(vlTOPp->b) 
                                       >> 0xaU))));
        tracep->chgBit(oldp+63,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 0xaU) ^ 
                                       ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 9U)))));
        tracep->chgBit(oldp+64,((1U & ((((IData)(vlTOPp->a) 
                                         >> 0xaU) & 
                                        (((IData)(vlTOPp->b) 
                                          >> 0xaU) 
                                         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                            >> 9U))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 0xaU) 
                                          & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                             >> 9U))))));
        tracep->chgBit(oldp+65,((1U & ((IData)(vlTOPp->a) 
                                       >> 0xbU))));
        tracep->chgBit(oldp+66,((1U & ((IData)(vlTOPp->b) 
                                       >> 0xbU))));
        tracep->chgBit(oldp+67,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 0xbU) ^ 
                                       ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xaU)))));
        tracep->chgBit(oldp+68,((1U & ((((IData)(vlTOPp->a) 
                                         >> 0xbU) & 
                                        (((IData)(vlTOPp->b) 
                                          >> 0xbU) 
                                         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                            >> 0xaU))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 0xbU) 
                                          & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                             >> 0xaU))))));
        tracep->chgBit(oldp+69,((1U & ((IData)(vlTOPp->a) 
                                       >> 0xcU))));
        tracep->chgBit(oldp+70,((1U & ((IData)(vlTOPp->b) 
                                       >> 0xcU))));
        tracep->chgBit(oldp+71,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 0xcU) ^ 
                                       ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xbU)))));
        tracep->chgBit(oldp+72,((1U & ((((IData)(vlTOPp->a) 
                                         >> 0xcU) & 
                                        (((IData)(vlTOPp->b) 
                                          >> 0xcU) 
                                         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                            >> 0xbU))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 0xcU) 
                                          & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                             >> 0xbU))))));
        tracep->chgBit(oldp+73,((1U & ((IData)(vlTOPp->a) 
                                       >> 0xdU))));
        tracep->chgBit(oldp+74,((1U & ((IData)(vlTOPp->b) 
                                       >> 0xdU))));
        tracep->chgBit(oldp+75,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 0xdU) ^ 
                                       ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xcU)))));
        tracep->chgBit(oldp+76,((1U & ((((IData)(vlTOPp->a) 
                                         >> 0xdU) & 
                                        (((IData)(vlTOPp->b) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                            >> 0xcU))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 0xdU) 
                                          & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                             >> 0xcU))))));
        tracep->chgBit(oldp+77,((1U & ((IData)(vlTOPp->a) 
                                       >> 0xeU))));
        tracep->chgBit(oldp+78,((1U & ((IData)(vlTOPp->b) 
                                       >> 0xeU))));
        tracep->chgBit(oldp+79,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 0xeU) ^ 
                                       ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xdU)))));
        tracep->chgBit(oldp+80,((1U & ((((IData)(vlTOPp->a) 
                                         >> 0xeU) & 
                                        (((IData)(vlTOPp->b) 
                                          >> 0xeU) 
                                         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                            >> 0xdU))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 0xeU) 
                                          & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                             >> 0xdU))))));
        tracep->chgBit(oldp+81,((1U & ((IData)(vlTOPp->a) 
                                       >> 0xfU))));
        tracep->chgBit(oldp+82,((1U & ((IData)(vlTOPp->b) 
                                       >> 0xfU))));
        tracep->chgBit(oldp+83,((1U & ((((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        >> 0xfU) ^ 
                                       ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xeU)))));
        tracep->chgBit(oldp+84,((1U & ((((IData)(vlTOPp->a) 
                                         >> 0xfU) & 
                                        (((IData)(vlTOPp->b) 
                                          >> 0xfU) 
                                         | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                            >> 0xeU))) 
                                       | (((IData)(vlTOPp->b) 
                                           >> 0xfU) 
                                          & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                             >> 0xeU))))));
    }
}

void Vripple_carry_adder_16bit::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
