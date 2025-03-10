// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_xor.h for the primary calling header

#include "Vdual_xor.h"
#include "Vdual_xor__Syms.h"

//==========

VL_CTOR_IMP(Vdual_xor) {
    Vdual_xor__Syms* __restrict vlSymsp = __VlSymsp = new Vdual_xor__Syms(this, name());
    Vdual_xor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdual_xor::__Vconfigure(Vdual_xor__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vdual_xor::~Vdual_xor() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vdual_xor::_eval_initial(Vdual_xor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_xor::_eval_initial\n"); );
    Vdual_xor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdual_xor::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_xor::final\n"); );
    // Variables
    Vdual_xor__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdual_xor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdual_xor::_eval_settle(Vdual_xor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_xor::_eval_settle\n"); );
    Vdual_xor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vdual_xor::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_xor::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
