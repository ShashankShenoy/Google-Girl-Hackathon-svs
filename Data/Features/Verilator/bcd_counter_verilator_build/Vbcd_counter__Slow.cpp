// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbcd_counter.h for the primary calling header

#include "Vbcd_counter.h"
#include "Vbcd_counter__Syms.h"

//==========

VL_CTOR_IMP(Vbcd_counter) {
    Vbcd_counter__Syms* __restrict vlSymsp = __VlSymsp = new Vbcd_counter__Syms(this, name());
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbcd_counter::__Vconfigure(Vbcd_counter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vbcd_counter::~Vbcd_counter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vbcd_counter::_eval_initial(Vbcd_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_counter::_eval_initial\n"); );
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vbcd_counter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_counter::final\n"); );
    // Variables
    Vbcd_counter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbcd_counter::_eval_settle(Vbcd_counter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_counter::_eval_settle\n"); );
    Vbcd_counter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbcd_counter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbcd_counter::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    count = VL_RAND_RESET_I(4);
    carry = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
