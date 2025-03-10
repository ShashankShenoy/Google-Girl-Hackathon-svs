// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfull_adder_flipflop__Syms.h"


//======================

void Vfull_adder_flipflop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vfull_adder_flipflop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vfull_adder_flipflop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vfull_adder_flipflop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vfull_adder_flipflop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"a", false,-1);
        tracep->declBit(c+4,"b", false,-1);
        tracep->declBit(c+5,"cin", false,-1);
        tracep->declBit(c+6,"sum", false,-1);
        tracep->declBit(c+1,"full_adder_flipflop clk", false,-1);
        tracep->declBit(c+2,"full_adder_flipflop rst", false,-1);
        tracep->declBit(c+3,"full_adder_flipflop a", false,-1);
        tracep->declBit(c+4,"full_adder_flipflop b", false,-1);
        tracep->declBit(c+5,"full_adder_flipflop cin", false,-1);
        tracep->declBit(c+6,"full_adder_flipflop sum", false,-1);
        tracep->declBit(c+7,"full_adder_flipflop sum_out", false,-1);
        tracep->declBit(c+8,"full_adder_flipflop carry_out", false,-1);
    }
}

void Vfull_adder_flipflop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vfull_adder_flipflop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vfull_adder_flipflop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vfull_adder_flipflop__Syms* __restrict vlSymsp = static_cast<Vfull_adder_flipflop__Syms*>(userp);
    Vfull_adder_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->a));
        tracep->fullBit(oldp+4,(vlTOPp->b));
        tracep->fullBit(oldp+5,(vlTOPp->cin));
        tracep->fullBit(oldp+6,(vlTOPp->sum));
        tracep->fullBit(oldp+7,((((IData)(vlTOPp->a) 
                                  ^ (IData)(vlTOPp->b)) 
                                 ^ (IData)(vlTOPp->cin))));
        tracep->fullBit(oldp+8,(((((IData)(vlTOPp->a) 
                                   & (IData)(vlTOPp->b)) 
                                  | ((IData)(vlTOPp->b) 
                                     & (IData)(vlTOPp->cin))) 
                                 | ((IData)(vlTOPp->a) 
                                    & (IData)(vlTOPp->cin)))));
    }
}
