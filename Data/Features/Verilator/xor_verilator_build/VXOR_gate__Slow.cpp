// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VXOR_gate.h for the primary calling header

#include "VXOR_gate.h"
#include "VXOR_gate__Syms.h"

//==========

VL_CTOR_IMP(VXOR_gate) {
    VXOR_gate__Syms* __restrict vlSymsp = __VlSymsp = new VXOR_gate__Syms(this, name());
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VXOR_gate::__Vconfigure(VXOR_gate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VXOR_gate::~VXOR_gate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VXOR_gate::_eval_initial(VXOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXOR_gate::_eval_initial\n"); );
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VXOR_gate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXOR_gate::final\n"); );
    // Variables
    VXOR_gate__Syms* __restrict vlSymsp = this->__VlSymsp;
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VXOR_gate::_eval_settle(VXOR_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXOR_gate::_eval_settle\n"); );
    VXOR_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VXOR_gate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VXOR_gate::_ctor_var_reset\n"); );
    // Body
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    Y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
