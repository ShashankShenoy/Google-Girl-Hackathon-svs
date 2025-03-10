// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_32bit.h for the primary calling header

#include "Vlfsr_32bit.h"
#include "Vlfsr_32bit__Syms.h"

//==========

VL_CTOR_IMP(Vlfsr_32bit) {
    Vlfsr_32bit__Syms* __restrict vlSymsp = __VlSymsp = new Vlfsr_32bit__Syms(this, name());
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vlfsr_32bit::__Vconfigure(Vlfsr_32bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vlfsr_32bit::~Vlfsr_32bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vlfsr_32bit::_settle__TOP__2(Vlfsr_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_32bit::_settle__TOP__2\n"); );
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->lfsr_32bit__DOT__feedback = (1U & ((((vlTOPp->lfsr 
                                                  >> 0x1fU) 
                                                 ^ 
                                                 (vlTOPp->lfsr 
                                                  >> 0x15U)) 
                                                ^ (vlTOPp->lfsr 
                                                   >> 1U)) 
                                               ^ vlTOPp->lfsr));
}

void Vlfsr_32bit::_eval_initial(Vlfsr_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_32bit::_eval_initial\n"); );
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vlfsr_32bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_32bit::final\n"); );
    // Variables
    Vlfsr_32bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vlfsr_32bit::_eval_settle(Vlfsr_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_32bit::_eval_settle\n"); );
    Vlfsr_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vlfsr_32bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_32bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    lfsr = VL_RAND_RESET_I(32);
    lfsr_32bit__DOT__feedback = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
