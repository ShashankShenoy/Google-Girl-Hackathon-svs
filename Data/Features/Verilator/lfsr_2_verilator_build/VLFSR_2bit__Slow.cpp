// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSR_2bit.h for the primary calling header

#include "VLFSR_2bit.h"
#include "VLFSR_2bit__Syms.h"

//==========

VL_CTOR_IMP(VLFSR_2bit) {
    VLFSR_2bit__Syms* __restrict vlSymsp = __VlSymsp = new VLFSR_2bit__Syms(this, name());
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VLFSR_2bit::__Vconfigure(VLFSR_2bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VLFSR_2bit::~VLFSR_2bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VLFSR_2bit::_eval_initial(VLFSR_2bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR_2bit::_eval_initial\n"); );
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void VLFSR_2bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR_2bit::final\n"); );
    // Variables
    VLFSR_2bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSR_2bit::_eval_settle(VLFSR_2bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR_2bit::_eval_settle\n"); );
    VLFSR_2bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSR_2bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR_2bit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    Q = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
