// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFull_Subtractor.h for the primary calling header

#include "VFull_Subtractor.h"
#include "VFull_Subtractor__Syms.h"

//==========

VL_CTOR_IMP(VFull_Subtractor) {
    VFull_Subtractor__Syms* __restrict vlSymsp = __VlSymsp = new VFull_Subtractor__Syms(this, name());
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFull_Subtractor::__Vconfigure(VFull_Subtractor__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VFull_Subtractor::~VFull_Subtractor() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VFull_Subtractor::_eval_initial(VFull_Subtractor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_eval_initial\n"); );
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFull_Subtractor::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::final\n"); );
    // Variables
    VFull_Subtractor__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFull_Subtractor::_eval_settle(VFull_Subtractor__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_eval_settle\n"); );
    VFull_Subtractor* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VFull_Subtractor::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFull_Subtractor::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Bin = VL_RAND_RESET_I(1);
    Diff = VL_RAND_RESET_I(1);
    Borrow = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
