// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxnor3.h for the primary calling header

#include "Vxnor3.h"
#include "Vxnor3__Syms.h"

//==========

VL_CTOR_IMP(Vxnor3) {
    Vxnor3__Syms* __restrict vlSymsp = __VlSymsp = new Vxnor3__Syms(this, name());
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vxnor3::__Vconfigure(Vxnor3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vxnor3::~Vxnor3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vxnor3::_eval_initial(Vxnor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor3::_eval_initial\n"); );
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxnor3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor3::final\n"); );
    // Variables
    Vxnor3__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxnor3::_eval_settle(Vxnor3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor3::_eval_settle\n"); );
    Vxnor3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vxnor3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor3::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
