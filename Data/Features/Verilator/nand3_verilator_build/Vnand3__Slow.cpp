// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnand3.h for the primary calling header

#include "Vnand3.h"
#include "Vnand3__Syms.h"

//==========

VL_CTOR_IMP(Vnand3) {
    Vnand3__Syms* __restrict vlSymsp = __VlSymsp = new Vnand3__Syms(this, name());
    Vnand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vnand3::__Vconfigure(Vnand3__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vnand3::~Vnand3() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vnand3::_eval_initial(Vnand3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand3::_eval_initial\n"); );
    Vnand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnand3::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand3::final\n"); );
    // Variables
    Vnand3__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vnand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vnand3::_eval_settle(Vnand3__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand3::_eval_settle\n"); );
    Vnand3* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vnand3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnand3::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
