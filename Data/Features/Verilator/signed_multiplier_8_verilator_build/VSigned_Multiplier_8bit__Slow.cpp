// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSigned_Multiplier_8bit.h for the primary calling header

#include "VSigned_Multiplier_8bit.h"
#include "VSigned_Multiplier_8bit__Syms.h"

//==========

VL_CTOR_IMP(VSigned_Multiplier_8bit) {
    VSigned_Multiplier_8bit__Syms* __restrict vlSymsp = __VlSymsp = new VSigned_Multiplier_8bit__Syms(this, name());
    VSigned_Multiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSigned_Multiplier_8bit::__Vconfigure(VSigned_Multiplier_8bit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSigned_Multiplier_8bit::~VSigned_Multiplier_8bit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSigned_Multiplier_8bit::_eval_initial(VSigned_Multiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSigned_Multiplier_8bit::_eval_initial\n"); );
    VSigned_Multiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSigned_Multiplier_8bit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSigned_Multiplier_8bit::final\n"); );
    // Variables
    VSigned_Multiplier_8bit__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSigned_Multiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSigned_Multiplier_8bit::_eval_settle(VSigned_Multiplier_8bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSigned_Multiplier_8bit::_eval_settle\n"); );
    VSigned_Multiplier_8bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VSigned_Multiplier_8bit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSigned_Multiplier_8bit::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(8);
    B = VL_RAND_RESET_I(8);
    product = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
