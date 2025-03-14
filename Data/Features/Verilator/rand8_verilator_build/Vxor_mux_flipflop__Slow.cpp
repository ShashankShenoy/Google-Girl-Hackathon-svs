// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxor_mux_flipflop.h for the primary calling header

#include "Vxor_mux_flipflop.h"
#include "Vxor_mux_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vxor_mux_flipflop) {
    Vxor_mux_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vxor_mux_flipflop__Syms(this, name());
    Vxor_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vxor_mux_flipflop::__Vconfigure(Vxor_mux_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vxor_mux_flipflop::~Vxor_mux_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vxor_mux_flipflop::_eval_initial(Vxor_mux_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_mux_flipflop::_eval_initial\n"); );
    Vxor_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vxor_mux_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_mux_flipflop::final\n"); );
    // Variables
    Vxor_mux_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vxor_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxor_mux_flipflop::_eval_settle(Vxor_mux_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_mux_flipflop::_eval_settle\n"); );
    Vxor_mux_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxor_mux_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxor_mux_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    x = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    sel = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
