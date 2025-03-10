// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2_flipflop.h for the primary calling header

#include "Vmux2_flipflop.h"
#include "Vmux2_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vmux2_flipflop) {
    Vmux2_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vmux2_flipflop__Syms(this, name());
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmux2_flipflop::__Vconfigure(Vmux2_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmux2_flipflop::~Vmux2_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmux2_flipflop::_eval_initial(Vmux2_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_flipflop::_eval_initial\n"); );
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vmux2_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_flipflop::final\n"); );
    // Variables
    Vmux2_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux2_flipflop::_eval_settle(Vmux2_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_flipflop::_eval_settle\n"); );
    Vmux2_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux2_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    sel = VL_RAND_RESET_I(1);
    d0 = VL_RAND_RESET_I(1);
    d1 = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
