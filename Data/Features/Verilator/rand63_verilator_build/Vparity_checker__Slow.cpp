// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vparity_checker.h for the primary calling header

#include "Vparity_checker.h"
#include "Vparity_checker__Syms.h"

//==========

VL_CTOR_IMP(Vparity_checker) {
    Vparity_checker__Syms* __restrict vlSymsp = __VlSymsp = new Vparity_checker__Syms(this, name());
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vparity_checker::__Vconfigure(Vparity_checker__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vparity_checker::~Vparity_checker() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vparity_checker::_eval_initial(Vparity_checker__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparity_checker::_eval_initial\n"); );
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vparity_checker::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparity_checker::final\n"); );
    // Variables
    Vparity_checker__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vparity_checker::_eval_settle(Vparity_checker__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparity_checker::_eval_settle\n"); );
    Vparity_checker* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vparity_checker::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vparity_checker::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    parity = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
