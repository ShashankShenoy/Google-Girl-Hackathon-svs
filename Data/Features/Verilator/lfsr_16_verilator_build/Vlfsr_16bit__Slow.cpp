// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr_16bit.h for the primary calling header

#include "Vlfsr_16bit.h"
#include "Vlfsr_16bit__Syms.h"

//==========

VL_CTOR_IMP(Vlfsr_16bit) {
    Vlfsr_16bit__Syms* __restrict vlSymsp = __VlSymsp = new Vlfsr_16bit__Syms(this, name());
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vlfsr_16bit::__Vconfigure(Vlfsr_16bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vlfsr_16bit::~Vlfsr_16bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vlfsr_16bit::_settle__TOP__2(Vlfsr_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_16bit::_settle__TOP__2\n"); );
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->lfsr_16bit__DOT__feedback = (1U & (((((IData)(vlTOPp->lfsr) 
                                                  >> 0xfU) 
                                                 ^ 
                                                 ((IData)(vlTOPp->lfsr) 
                                                  >> 0xeU)) 
                                                ^ ((IData)(vlTOPp->lfsr) 
                                                   >> 0xcU)) 
                                               ^ ((IData)(vlTOPp->lfsr) 
                                                  >> 3U)));
}

void Vlfsr_16bit::_eval_initial(Vlfsr_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_16bit::_eval_initial\n"); );
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vlfsr_16bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_16bit::final\n"); );
    // Variables
    Vlfsr_16bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vlfsr_16bit::_eval_settle(Vlfsr_16bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_16bit::_eval_settle\n"); );
    Vlfsr_16bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vlfsr_16bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr_16bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    lfsr = VL_RAND_RESET_I(16);
    lfsr_16bit__DOT__feedback = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
