// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebounce.h for the primary calling header

#include "Vdebounce.h"
#include "Vdebounce__Syms.h"

//==========

VL_CTOR_IMP(Vdebounce) {
    Vdebounce__Syms* __restrict vlSymsp = __VlSymsp = new Vdebounce__Syms(this, name());
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdebounce::__Vconfigure(Vdebounce__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vdebounce::~Vdebounce() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vdebounce::_eval_initial(Vdebounce__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce::_eval_initial\n"); );
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vdebounce::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce::final\n"); );
    // Variables
    Vdebounce__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdebounce::_eval_settle(Vdebounce__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce::_eval_settle\n"); );
    Vdebounce* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdebounce::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    in = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    debounce__DOT__count = VL_RAND_RESET_I(20);
    debounce__DOT__sync_0 = VL_RAND_RESET_I(1);
    debounce__DOT__sync_1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
