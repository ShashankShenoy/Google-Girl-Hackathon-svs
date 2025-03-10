// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFloating_Point_Adder.h for the primary calling header

#include "VFloating_Point_Adder.h"
#include "VFloating_Point_Adder__Syms.h"

//==========

VL_CTOR_IMP(VFloating_Point_Adder) {
    VFloating_Point_Adder__Syms* __restrict vlSymsp = __VlSymsp = new VFloating_Point_Adder__Syms(this, name());
    VFloating_Point_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFloating_Point_Adder::__Vconfigure(VFloating_Point_Adder__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VFloating_Point_Adder::~VFloating_Point_Adder() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VFloating_Point_Adder::_eval_initial(VFloating_Point_Adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFloating_Point_Adder::_eval_initial\n"); );
    VFloating_Point_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFloating_Point_Adder::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFloating_Point_Adder::final\n"); );
    // Variables
    VFloating_Point_Adder__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFloating_Point_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFloating_Point_Adder::_eval_settle(VFloating_Point_Adder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFloating_Point_Adder::_eval_settle\n"); );
    VFloating_Point_Adder* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VFloating_Point_Adder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFloating_Point_Adder::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(8);
    B = VL_RAND_RESET_I(8);
    result = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
