// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfan_speed_controller.h for the primary calling header

#include "Vfan_speed_controller.h"
#include "Vfan_speed_controller__Syms.h"

//==========
CData/*1:0*/ Vfan_speed_controller::__Vtable1_fan_speed_controller__DOT__next_state[8];

VL_CTOR_IMP(Vfan_speed_controller) {
    Vfan_speed_controller__Syms* __restrict vlSymsp = __VlSymsp = new Vfan_speed_controller__Syms(this, name());
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vfan_speed_controller::__Vconfigure(Vfan_speed_controller__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vfan_speed_controller::~Vfan_speed_controller() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vfan_speed_controller::_settle__TOP__2(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_settle__TOP__2\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->speed = ((2U & (IData)(vlTOPp->fan_speed_controller__DOT__current_state))
                      ? ((1U & (IData)(vlTOPp->fan_speed_controller__DOT__current_state))
                          ? 3U : 2U) : ((1U & (IData)(vlTOPp->fan_speed_controller__DOT__current_state))
                                         ? 1U : 0U));
    vlTOPp->__Vtableidx1 = ((((IData)(vlTOPp->button) 
                              & (~ (IData)(vlTOPp->fan_speed_controller__DOT__button_prev))) 
                             << 2U) | (IData)(vlTOPp->fan_speed_controller__DOT__current_state));
    vlTOPp->fan_speed_controller__DOT__next_state = 
        vlTOPp->__Vtable1_fan_speed_controller__DOT__next_state
        [vlTOPp->__Vtableidx1];
}

void Vfan_speed_controller::_eval_initial(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_eval_initial\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vfan_speed_controller::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::final\n"); );
    // Variables
    Vfan_speed_controller__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfan_speed_controller::_eval_settle(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_eval_settle\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vfan_speed_controller::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    button = VL_RAND_RESET_I(1);
    speed = VL_RAND_RESET_I(2);
    fan_speed_controller__DOT__current_state = VL_RAND_RESET_I(2);
    fan_speed_controller__DOT__next_state = VL_RAND_RESET_I(2);
    fan_speed_controller__DOT__button_prev = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_fan_speed_controller__DOT__next_state[0] = 0U;
    __Vtable1_fan_speed_controller__DOT__next_state[1] = 1U;
    __Vtable1_fan_speed_controller__DOT__next_state[2] = 2U;
    __Vtable1_fan_speed_controller__DOT__next_state[3] = 3U;
    __Vtable1_fan_speed_controller__DOT__next_state[4] = 1U;
    __Vtable1_fan_speed_controller__DOT__next_state[5] = 2U;
    __Vtable1_fan_speed_controller__DOT__next_state[6] = 3U;
    __Vtable1_fan_speed_controller__DOT__next_state[7] = 0U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
