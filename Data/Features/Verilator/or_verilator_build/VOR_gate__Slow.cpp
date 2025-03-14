// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOR_gate.h for the primary calling header

#include "VOR_gate.h"
#include "VOR_gate__Syms.h"

//==========

VL_CTOR_IMP(VOR_gate) {
    VOR_gate__Syms* __restrict vlSymsp = __VlSymsp = new VOR_gate__Syms(this, name());
    VOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VOR_gate::__Vconfigure(VOR_gate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VOR_gate::~VOR_gate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VOR_gate::_eval_initial(VOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_gate::_eval_initial\n"); );
    VOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOR_gate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_gate::final\n"); );
    // Variables
    VOR_gate__Syms* __restrict vlSymsp = this->__VlSymsp;
    VOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOR_gate::_eval_settle(VOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_gate::_eval_settle\n"); );
    VOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VOR_gate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_gate::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
