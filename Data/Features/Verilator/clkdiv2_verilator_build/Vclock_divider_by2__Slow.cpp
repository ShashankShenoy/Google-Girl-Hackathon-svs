// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_divider_by2.h for the primary calling header

#include "Vclock_divider_by2.h"
#include "Vclock_divider_by2__Syms.h"

//==========

VL_CTOR_IMP(Vclock_divider_by2) {
    Vclock_divider_by2__Syms* __restrict vlSymsp = __VlSymsp = new Vclock_divider_by2__Syms(this, name());
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vclock_divider_by2::__Vconfigure(Vclock_divider_by2__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vclock_divider_by2::~Vclock_divider_by2() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vclock_divider_by2::_eval_initial(Vclock_divider_by2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by2::_eval_initial\n"); );
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vclock_divider_by2::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by2::final\n"); );
    // Variables
    Vclock_divider_by2__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vclock_divider_by2::_eval_settle(Vclock_divider_by2__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by2::_eval_settle\n"); );
    Vclock_divider_by2* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vclock_divider_by2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by2::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    clk_div2 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
