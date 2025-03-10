// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxnor_inverter_flipflop.h for the primary calling header

#include "Vxnor_inverter_flipflop.h"
#include "Vxnor_inverter_flipflop__Syms.h"

//==========

VL_CTOR_IMP(Vxnor_inverter_flipflop) {
    Vxnor_inverter_flipflop__Syms* __restrict vlSymsp = __VlSymsp = new Vxnor_inverter_flipflop__Syms(this, name());
    Vxnor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vxnor_inverter_flipflop::__Vconfigure(Vxnor_inverter_flipflop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vxnor_inverter_flipflop::~Vxnor_inverter_flipflop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vxnor_inverter_flipflop::_eval_initial(Vxnor_inverter_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_inverter_flipflop::_eval_initial\n"); );
    Vxnor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vxnor_inverter_flipflop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_inverter_flipflop::final\n"); );
    // Variables
    Vxnor_inverter_flipflop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vxnor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxnor_inverter_flipflop::_eval_settle(Vxnor_inverter_flipflop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_inverter_flipflop::_eval_settle\n"); );
    Vxnor_inverter_flipflop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vxnor_inverter_flipflop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxnor_inverter_flipflop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
