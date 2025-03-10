// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vripple_carry_adder_16bit__Syms.h"


//======================

void Vripple_carry_adder_16bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vripple_carry_adder_16bit::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vripple_carry_adder_16bit::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vripple_carry_adder_16bit::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vripple_carry_adder_16bit::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+17,"a", false,-1, 15,0);
        tracep->declBus(c+18,"b", false,-1, 15,0);
        tracep->declBit(c+19,"cin", false,-1);
        tracep->declBus(c+20,"sum", false,-1, 15,0);
        tracep->declBit(c+21,"cout", false,-1);
        tracep->declBus(c+17,"ripple_carry_adder_16bit a", false,-1, 15,0);
        tracep->declBus(c+18,"ripple_carry_adder_16bit b", false,-1, 15,0);
        tracep->declBit(c+19,"ripple_carry_adder_16bit cin", false,-1);
        tracep->declBus(c+20,"ripple_carry_adder_16bit sum", false,-1, 15,0);
        tracep->declBit(c+21,"ripple_carry_adder_16bit cout", false,-1);
        tracep->declBus(c+1,"ripple_carry_adder_16bit carry", false,-1, 15,0);
        tracep->declBit(c+22,"ripple_carry_adder_16bit fa0 a", false,-1);
        tracep->declBit(c+23,"ripple_carry_adder_16bit fa0 b", false,-1);
        tracep->declBit(c+19,"ripple_carry_adder_16bit fa0 cin", false,-1);
        tracep->declBit(c+24,"ripple_carry_adder_16bit fa0 sum", false,-1);
        tracep->declBit(c+25,"ripple_carry_adder_16bit fa0 cout", false,-1);
        tracep->declBit(c+26,"ripple_carry_adder_16bit gen_adders[1] fa a", false,-1);
        tracep->declBit(c+27,"ripple_carry_adder_16bit gen_adders[1] fa b", false,-1);
        tracep->declBit(c+2,"ripple_carry_adder_16bit gen_adders[1] fa cin", false,-1);
        tracep->declBit(c+28,"ripple_carry_adder_16bit gen_adders[1] fa sum", false,-1);
        tracep->declBit(c+29,"ripple_carry_adder_16bit gen_adders[1] fa cout", false,-1);
        tracep->declBit(c+30,"ripple_carry_adder_16bit gen_adders[2] fa a", false,-1);
        tracep->declBit(c+31,"ripple_carry_adder_16bit gen_adders[2] fa b", false,-1);
        tracep->declBit(c+3,"ripple_carry_adder_16bit gen_adders[2] fa cin", false,-1);
        tracep->declBit(c+32,"ripple_carry_adder_16bit gen_adders[2] fa sum", false,-1);
        tracep->declBit(c+33,"ripple_carry_adder_16bit gen_adders[2] fa cout", false,-1);
        tracep->declBit(c+34,"ripple_carry_adder_16bit gen_adders[3] fa a", false,-1);
        tracep->declBit(c+35,"ripple_carry_adder_16bit gen_adders[3] fa b", false,-1);
        tracep->declBit(c+4,"ripple_carry_adder_16bit gen_adders[3] fa cin", false,-1);
        tracep->declBit(c+36,"ripple_carry_adder_16bit gen_adders[3] fa sum", false,-1);
        tracep->declBit(c+37,"ripple_carry_adder_16bit gen_adders[3] fa cout", false,-1);
        tracep->declBit(c+38,"ripple_carry_adder_16bit gen_adders[4] fa a", false,-1);
        tracep->declBit(c+39,"ripple_carry_adder_16bit gen_adders[4] fa b", false,-1);
        tracep->declBit(c+5,"ripple_carry_adder_16bit gen_adders[4] fa cin", false,-1);
        tracep->declBit(c+40,"ripple_carry_adder_16bit gen_adders[4] fa sum", false,-1);
        tracep->declBit(c+41,"ripple_carry_adder_16bit gen_adders[4] fa cout", false,-1);
        tracep->declBit(c+42,"ripple_carry_adder_16bit gen_adders[5] fa a", false,-1);
        tracep->declBit(c+43,"ripple_carry_adder_16bit gen_adders[5] fa b", false,-1);
        tracep->declBit(c+6,"ripple_carry_adder_16bit gen_adders[5] fa cin", false,-1);
        tracep->declBit(c+44,"ripple_carry_adder_16bit gen_adders[5] fa sum", false,-1);
        tracep->declBit(c+45,"ripple_carry_adder_16bit gen_adders[5] fa cout", false,-1);
        tracep->declBit(c+46,"ripple_carry_adder_16bit gen_adders[6] fa a", false,-1);
        tracep->declBit(c+47,"ripple_carry_adder_16bit gen_adders[6] fa b", false,-1);
        tracep->declBit(c+7,"ripple_carry_adder_16bit gen_adders[6] fa cin", false,-1);
        tracep->declBit(c+48,"ripple_carry_adder_16bit gen_adders[6] fa sum", false,-1);
        tracep->declBit(c+49,"ripple_carry_adder_16bit gen_adders[6] fa cout", false,-1);
        tracep->declBit(c+50,"ripple_carry_adder_16bit gen_adders[7] fa a", false,-1);
        tracep->declBit(c+51,"ripple_carry_adder_16bit gen_adders[7] fa b", false,-1);
        tracep->declBit(c+8,"ripple_carry_adder_16bit gen_adders[7] fa cin", false,-1);
        tracep->declBit(c+52,"ripple_carry_adder_16bit gen_adders[7] fa sum", false,-1);
        tracep->declBit(c+53,"ripple_carry_adder_16bit gen_adders[7] fa cout", false,-1);
        tracep->declBit(c+54,"ripple_carry_adder_16bit gen_adders[8] fa a", false,-1);
        tracep->declBit(c+55,"ripple_carry_adder_16bit gen_adders[8] fa b", false,-1);
        tracep->declBit(c+9,"ripple_carry_adder_16bit gen_adders[8] fa cin", false,-1);
        tracep->declBit(c+56,"ripple_carry_adder_16bit gen_adders[8] fa sum", false,-1);
        tracep->declBit(c+57,"ripple_carry_adder_16bit gen_adders[8] fa cout", false,-1);
        tracep->declBit(c+58,"ripple_carry_adder_16bit gen_adders[9] fa a", false,-1);
        tracep->declBit(c+59,"ripple_carry_adder_16bit gen_adders[9] fa b", false,-1);
        tracep->declBit(c+10,"ripple_carry_adder_16bit gen_adders[9] fa cin", false,-1);
        tracep->declBit(c+60,"ripple_carry_adder_16bit gen_adders[9] fa sum", false,-1);
        tracep->declBit(c+61,"ripple_carry_adder_16bit gen_adders[9] fa cout", false,-1);
        tracep->declBit(c+62,"ripple_carry_adder_16bit gen_adders[10] fa a", false,-1);
        tracep->declBit(c+63,"ripple_carry_adder_16bit gen_adders[10] fa b", false,-1);
        tracep->declBit(c+11,"ripple_carry_adder_16bit gen_adders[10] fa cin", false,-1);
        tracep->declBit(c+64,"ripple_carry_adder_16bit gen_adders[10] fa sum", false,-1);
        tracep->declBit(c+65,"ripple_carry_adder_16bit gen_adders[10] fa cout", false,-1);
        tracep->declBit(c+66,"ripple_carry_adder_16bit gen_adders[11] fa a", false,-1);
        tracep->declBit(c+67,"ripple_carry_adder_16bit gen_adders[11] fa b", false,-1);
        tracep->declBit(c+12,"ripple_carry_adder_16bit gen_adders[11] fa cin", false,-1);
        tracep->declBit(c+68,"ripple_carry_adder_16bit gen_adders[11] fa sum", false,-1);
        tracep->declBit(c+69,"ripple_carry_adder_16bit gen_adders[11] fa cout", false,-1);
        tracep->declBit(c+70,"ripple_carry_adder_16bit gen_adders[12] fa a", false,-1);
        tracep->declBit(c+71,"ripple_carry_adder_16bit gen_adders[12] fa b", false,-1);
        tracep->declBit(c+13,"ripple_carry_adder_16bit gen_adders[12] fa cin", false,-1);
        tracep->declBit(c+72,"ripple_carry_adder_16bit gen_adders[12] fa sum", false,-1);
        tracep->declBit(c+73,"ripple_carry_adder_16bit gen_adders[12] fa cout", false,-1);
        tracep->declBit(c+74,"ripple_carry_adder_16bit gen_adders[13] fa a", false,-1);
        tracep->declBit(c+75,"ripple_carry_adder_16bit gen_adders[13] fa b", false,-1);
        tracep->declBit(c+14,"ripple_carry_adder_16bit gen_adders[13] fa cin", false,-1);
        tracep->declBit(c+76,"ripple_carry_adder_16bit gen_adders[13] fa sum", false,-1);
        tracep->declBit(c+77,"ripple_carry_adder_16bit gen_adders[13] fa cout", false,-1);
        tracep->declBit(c+78,"ripple_carry_adder_16bit gen_adders[14] fa a", false,-1);
        tracep->declBit(c+79,"ripple_carry_adder_16bit gen_adders[14] fa b", false,-1);
        tracep->declBit(c+15,"ripple_carry_adder_16bit gen_adders[14] fa cin", false,-1);
        tracep->declBit(c+80,"ripple_carry_adder_16bit gen_adders[14] fa sum", false,-1);
        tracep->declBit(c+81,"ripple_carry_adder_16bit gen_adders[14] fa cout", false,-1);
        tracep->declBit(c+82,"ripple_carry_adder_16bit gen_adders[15] fa a", false,-1);
        tracep->declBit(c+83,"ripple_carry_adder_16bit gen_adders[15] fa b", false,-1);
        tracep->declBit(c+16,"ripple_carry_adder_16bit gen_adders[15] fa cin", false,-1);
        tracep->declBit(c+84,"ripple_carry_adder_16bit gen_adders[15] fa sum", false,-1);
        tracep->declBit(c+85,"ripple_carry_adder_16bit gen_adders[15] fa cout", false,-1);
    }
}

void Vripple_carry_adder_16bit::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vripple_carry_adder_16bit::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vripple_carry_adder_16bit::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vripple_carry_adder_16bit__Syms* __restrict vlSymsp = static_cast<Vripple_carry_adder_16bit__Syms*>(userp);
    Vripple_carry_adder_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlTOPp->ripple_carry_adder_16bit__DOT__carry),16);
        tracep->fullBit(oldp+2,((1U & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                       >> 1U))));
        tracep->fullBit(oldp+4,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                       >> 2U))));
        tracep->fullBit(oldp+5,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                       >> 3U))));
        tracep->fullBit(oldp+6,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                       >> 4U))));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                       >> 5U))));
        tracep->fullBit(oldp+8,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                       >> 6U))));
        tracep->fullBit(oldp+9,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                       >> 7U))));
        tracep->fullBit(oldp+10,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 8U))));
        tracep->fullBit(oldp+11,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 9U))));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xaU))));
        tracep->fullBit(oldp+13,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xbU))));
        tracep->fullBit(oldp+14,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xcU))));
        tracep->fullBit(oldp+15,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xdU))));
        tracep->fullBit(oldp+16,((1U & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                        >> 0xeU))));
        tracep->fullSData(oldp+17,(vlTOPp->a),16);
        tracep->fullSData(oldp+18,(vlTOPp->b),16);
        tracep->fullBit(oldp+19,(vlTOPp->cin));
        tracep->fullSData(oldp+20,(vlTOPp->sum),16);
        tracep->fullBit(oldp+21,(vlTOPp->cout));
        tracep->fullBit(oldp+22,((1U & (IData)(vlTOPp->a))));
        tracep->fullBit(oldp+23,((1U & (IData)(vlTOPp->b))));
        tracep->fullBit(oldp+24,((1U & (((IData)(vlTOPp->a) 
                                         ^ (IData)(vlTOPp->b)) 
                                        ^ (IData)(vlTOPp->cin)))));
        tracep->fullBit(oldp+25,((1U & (((IData)(vlTOPp->a) 
                                         & ((IData)(vlTOPp->b) 
                                            | (IData)(vlTOPp->cin))) 
                                        | ((IData)(vlTOPp->b) 
                                           & (IData)(vlTOPp->cin))))));
        tracep->fullBit(oldp+26,((1U & ((IData)(vlTOPp->a) 
                                        >> 1U))));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlTOPp->b) 
                                        >> 1U))));
        tracep->fullBit(oldp+28,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 1U) ^ (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry)))));
        tracep->fullBit(oldp+29,((1U & ((((IData)(vlTOPp->a) 
                                          >> 1U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 1U) | (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry))))));
        tracep->fullBit(oldp+30,((1U & ((IData)(vlTOPp->a) 
                                        >> 2U))));
        tracep->fullBit(oldp+31,((1U & ((IData)(vlTOPp->b) 
                                        >> 2U))));
        tracep->fullBit(oldp+32,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 2U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 1U)))));
        tracep->fullBit(oldp+33,((1U & ((((IData)(vlTOPp->a) 
                                          >> 2U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 2U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 1U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 2U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 1U))))));
        tracep->fullBit(oldp+34,((1U & ((IData)(vlTOPp->a) 
                                        >> 3U))));
        tracep->fullBit(oldp+35,((1U & ((IData)(vlTOPp->b) 
                                        >> 3U))));
        tracep->fullBit(oldp+36,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 3U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 2U)))));
        tracep->fullBit(oldp+37,((1U & ((((IData)(vlTOPp->a) 
                                          >> 3U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 3U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 2U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 3U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 2U))))));
        tracep->fullBit(oldp+38,((1U & ((IData)(vlTOPp->a) 
                                        >> 4U))));
        tracep->fullBit(oldp+39,((1U & ((IData)(vlTOPp->b) 
                                        >> 4U))));
        tracep->fullBit(oldp+40,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 4U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 3U)))));
        tracep->fullBit(oldp+41,((1U & ((((IData)(vlTOPp->a) 
                                          >> 4U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 4U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 3U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 4U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 3U))))));
        tracep->fullBit(oldp+42,((1U & ((IData)(vlTOPp->a) 
                                        >> 5U))));
        tracep->fullBit(oldp+43,((1U & ((IData)(vlTOPp->b) 
                                        >> 5U))));
        tracep->fullBit(oldp+44,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 5U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 4U)))));
        tracep->fullBit(oldp+45,((1U & ((((IData)(vlTOPp->a) 
                                          >> 5U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 5U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 4U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 5U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 4U))))));
        tracep->fullBit(oldp+46,((1U & ((IData)(vlTOPp->a) 
                                        >> 6U))));
        tracep->fullBit(oldp+47,((1U & ((IData)(vlTOPp->b) 
                                        >> 6U))));
        tracep->fullBit(oldp+48,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 6U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 5U)))));
        tracep->fullBit(oldp+49,((1U & ((((IData)(vlTOPp->a) 
                                          >> 6U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 6U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 5U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 6U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 5U))))));
        tracep->fullBit(oldp+50,((1U & ((IData)(vlTOPp->a) 
                                        >> 7U))));
        tracep->fullBit(oldp+51,((1U & ((IData)(vlTOPp->b) 
                                        >> 7U))));
        tracep->fullBit(oldp+52,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 7U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 6U)))));
        tracep->fullBit(oldp+53,((1U & ((((IData)(vlTOPp->a) 
                                          >> 7U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 7U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 6U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 7U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 6U))))));
        tracep->fullBit(oldp+54,((1U & ((IData)(vlTOPp->a) 
                                        >> 8U))));
        tracep->fullBit(oldp+55,((1U & ((IData)(vlTOPp->b) 
                                        >> 8U))));
        tracep->fullBit(oldp+56,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 8U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 7U)))));
        tracep->fullBit(oldp+57,((1U & ((((IData)(vlTOPp->a) 
                                          >> 8U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 8U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 7U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 8U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 7U))))));
        tracep->fullBit(oldp+58,((1U & ((IData)(vlTOPp->a) 
                                        >> 9U))));
        tracep->fullBit(oldp+59,((1U & ((IData)(vlTOPp->b) 
                                        >> 9U))));
        tracep->fullBit(oldp+60,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 9U) ^ ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                                   >> 8U)))));
        tracep->fullBit(oldp+61,((1U & ((((IData)(vlTOPp->a) 
                                          >> 9U) & 
                                         (((IData)(vlTOPp->b) 
                                           >> 9U) | 
                                          ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                           >> 8U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 9U) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 8U))))));
        tracep->fullBit(oldp+62,((1U & ((IData)(vlTOPp->a) 
                                        >> 0xaU))));
        tracep->fullBit(oldp+63,((1U & ((IData)(vlTOPp->b) 
                                        >> 0xaU))));
        tracep->fullBit(oldp+64,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 0xaU) ^ 
                                        ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                         >> 9U)))));
        tracep->fullBit(oldp+65,((1U & ((((IData)(vlTOPp->a) 
                                          >> 0xaU) 
                                         & (((IData)(vlTOPp->b) 
                                             >> 0xaU) 
                                            | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                               >> 9U))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 0xaU) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 9U))))));
        tracep->fullBit(oldp+66,((1U & ((IData)(vlTOPp->a) 
                                        >> 0xbU))));
        tracep->fullBit(oldp+67,((1U & ((IData)(vlTOPp->b) 
                                        >> 0xbU))));
        tracep->fullBit(oldp+68,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 0xbU) ^ 
                                        ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                         >> 0xaU)))));
        tracep->fullBit(oldp+69,((1U & ((((IData)(vlTOPp->a) 
                                          >> 0xbU) 
                                         & (((IData)(vlTOPp->b) 
                                             >> 0xbU) 
                                            | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                               >> 0xaU))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 0xbU) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 0xaU))))));
        tracep->fullBit(oldp+70,((1U & ((IData)(vlTOPp->a) 
                                        >> 0xcU))));
        tracep->fullBit(oldp+71,((1U & ((IData)(vlTOPp->b) 
                                        >> 0xcU))));
        tracep->fullBit(oldp+72,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 0xcU) ^ 
                                        ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                         >> 0xbU)))));
        tracep->fullBit(oldp+73,((1U & ((((IData)(vlTOPp->a) 
                                          >> 0xcU) 
                                         & (((IData)(vlTOPp->b) 
                                             >> 0xcU) 
                                            | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                               >> 0xbU))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 0xcU) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 0xbU))))));
        tracep->fullBit(oldp+74,((1U & ((IData)(vlTOPp->a) 
                                        >> 0xdU))));
        tracep->fullBit(oldp+75,((1U & ((IData)(vlTOPp->b) 
                                        >> 0xdU))));
        tracep->fullBit(oldp+76,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 0xdU) ^ 
                                        ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                         >> 0xcU)))));
        tracep->fullBit(oldp+77,((1U & ((((IData)(vlTOPp->a) 
                                          >> 0xdU) 
                                         & (((IData)(vlTOPp->b) 
                                             >> 0xdU) 
                                            | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                               >> 0xcU))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 0xdU) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 0xcU))))));
        tracep->fullBit(oldp+78,((1U & ((IData)(vlTOPp->a) 
                                        >> 0xeU))));
        tracep->fullBit(oldp+79,((1U & ((IData)(vlTOPp->b) 
                                        >> 0xeU))));
        tracep->fullBit(oldp+80,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 0xeU) ^ 
                                        ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                         >> 0xdU)))));
        tracep->fullBit(oldp+81,((1U & ((((IData)(vlTOPp->a) 
                                          >> 0xeU) 
                                         & (((IData)(vlTOPp->b) 
                                             >> 0xeU) 
                                            | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                               >> 0xdU))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 0xeU) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 0xdU))))));
        tracep->fullBit(oldp+82,((1U & ((IData)(vlTOPp->a) 
                                        >> 0xfU))));
        tracep->fullBit(oldp+83,((1U & ((IData)(vlTOPp->b) 
                                        >> 0xfU))));
        tracep->fullBit(oldp+84,((1U & ((((IData)(vlTOPp->a) 
                                          ^ (IData)(vlTOPp->b)) 
                                         >> 0xfU) ^ 
                                        ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                         >> 0xeU)))));
        tracep->fullBit(oldp+85,((1U & ((((IData)(vlTOPp->a) 
                                          >> 0xfU) 
                                         & (((IData)(vlTOPp->b) 
                                             >> 0xfU) 
                                            | ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                               >> 0xeU))) 
                                        | (((IData)(vlTOPp->b) 
                                            >> 0xfU) 
                                           & ((IData)(vlTOPp->ripple_carry_adder_16bit__DOT__carry) 
                                              >> 0xeU))))));
    }
}
