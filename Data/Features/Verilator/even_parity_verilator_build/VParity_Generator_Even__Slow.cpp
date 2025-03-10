// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParity_Generator_Even.h for the primary calling header

#include "VParity_Generator_Even.h"
#include "VParity_Generator_Even__Syms.h"

//==========

VL_CTOR_IMP(VParity_Generator_Even) {
    VParity_Generator_Even__Syms* __restrict vlSymsp = __VlSymsp = new VParity_Generator_Even__Syms(this, name());
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VParity_Generator_Even::__Vconfigure(VParity_Generator_Even__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VParity_Generator_Even::~VParity_Generator_Even() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VParity_Generator_Even::_eval_initial(VParity_Generator_Even__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParity_Generator_Even::_eval_initial\n"); );
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParity_Generator_Even::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParity_Generator_Even::final\n"); );
    // Variables
    VParity_Generator_Even__Syms* __restrict vlSymsp = this->__VlSymsp;
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VParity_Generator_Even::_eval_settle(VParity_Generator_Even__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParity_Generator_Even::_eval_settle\n"); );
    VParity_Generator_Even* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VParity_Generator_Even::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParity_Generator_Even::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(8);
    parity = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
