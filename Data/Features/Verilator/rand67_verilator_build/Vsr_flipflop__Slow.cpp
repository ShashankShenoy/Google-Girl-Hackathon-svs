// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsr_flipflop.h for the primary calling header

#include "Vsr_flipflop.h"
#include "Vsr_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vsr_flipflop) {
    Vsr_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vsr_flipflop__Syms(this, name());
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsr_flipflop::__Vconfigure(Vsr_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsr_flipflop::~Vsr_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsr_flipflop::_eval_initial(Vsr_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_flipflop::_eval_initial\n"); );
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsr_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_flipflop::final\n"); );
    // Variables
    Vsr_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsr_flipflop::_eval_settle(Vsr_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_flipflop::_eval_settle\n"); );
    Vsr_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vsr_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsr_flipflop::_ctor_var_reset\n"); );
    // Body
    s = VL_RAND_RESET_I(1);
    r = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    q_bar = VL_RAND_RESET_I(1);
    __Vchglast__TOP__q_bar = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
