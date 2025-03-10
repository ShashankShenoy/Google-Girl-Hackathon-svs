// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_divider_by8.h for the primary calling header

#include "Vclock_divider_by8.h"
#include "Vclock_divider_by8__Syms.h"

//==========

VL_CTOR_IMP(Vclock_divider_by8) {
    Vclock_divider_by8__Syms* __restrict vlSymsp = __VlSymsp = new Vclock_divider_by8__Syms(this, name());
    Vclock_divider_by8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vclock_divider_by8::__Vconfigure(Vclock_divider_by8__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vclock_divider_by8::~Vclock_divider_by8() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vclock_divider_by8::_eval_initial(Vclock_divider_by8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by8::_eval_initial\n"); );
    Vclock_divider_by8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vclock_divider_by8::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by8::final\n"); );
    // Variables
    Vclock_divider_by8__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vclock_divider_by8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vclock_divider_by8::_eval_settle(Vclock_divider_by8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by8::_eval_settle\n"); );
    Vclock_divider_by8* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vclock_divider_by8::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_divider_by8::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    clk_div8 = VL_RAND_RESET_I(1);
    clock_divider_by8__DOT__count = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
