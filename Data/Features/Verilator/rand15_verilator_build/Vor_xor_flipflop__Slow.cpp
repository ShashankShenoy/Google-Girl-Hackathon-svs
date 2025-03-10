// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vor_xor_flipflop.h for the primary calling header

#include "Vor_xor_flipflop.h"
#include "Vor_xor_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vor_xor_flipflop) {
    Vor_xor_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vor_xor_flipflop__Syms(this, name());
    Vor_xor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vor_xor_flipflop::__Vconfigure(Vor_xor_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vor_xor_flipflop::~Vor_xor_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vor_xor_flipflop::_eval_initial(Vor_xor_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_xor_flipflop::_eval_initial\n"); );
    Vor_xor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vor_xor_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_xor_flipflop::final\n"); );
    // Variables
    Vor_xor_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vor_xor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor_xor_flipflop::_eval_settle(Vor_xor_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_xor_flipflop::_eval_settle\n"); );
    Vor_xor_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vor_xor_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vor_xor_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
