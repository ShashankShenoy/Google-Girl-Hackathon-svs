// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaoi_gate.h for the primary calling header

#include "Vaoi_gate.h"
#include "Vaoi_gate__Syms.h"

//==========

VL_CTOR_IMP(Vaoi_gate) {
    Vaoi_gate__Syms* __restrict vlSymsp = __VlSymsp = new Vaoi_gate__Syms(this, name());
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vaoi_gate::__Vconfigure(Vaoi_gate__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vaoi_gate::~Vaoi_gate() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vaoi_gate::_eval_initial(Vaoi_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_gate::_eval_initial\n"); );
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaoi_gate::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_gate::final\n"); );
    // Variables
    Vaoi_gate__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaoi_gate::_eval_settle(Vaoi_gate__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_gate::_eval_settle\n"); );
    Vaoi_gate* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vaoi_gate::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaoi_gate::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    y = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
