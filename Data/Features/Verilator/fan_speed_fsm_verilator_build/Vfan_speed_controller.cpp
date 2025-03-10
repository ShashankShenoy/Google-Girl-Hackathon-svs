// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfan_speed_controller.h for the primary calling header

#include "Vfan_speed_controller.h"
#include "Vfan_speed_controller__Syms.h"

//==========

void Vfan_speed_controller::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfan_speed_controller::eval\n"); );
    Vfan_speed_controller__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/fan_speed_fsm.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vfan_speed_controller::_eval_initial_loop(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/fan_speed_fsm.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vfan_speed_controller::_sequent__TOP__1(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_sequent__TOP__1\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->fan_speed_controller__DOT__button_prev 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->button));
    vlTOPp->fan_speed_controller__DOT__current_state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->fan_speed_controller__DOT__next_state));
    vlTOPp->speed = ((2U & (IData)(vlTOPp->fan_speed_controller__DOT__current_state))
                      ? ((1U & (IData)(vlTOPp->fan_speed_controller__DOT__current_state))
                          ? 3U : 2U) : ((1U & (IData)(vlTOPp->fan_speed_controller__DOT__current_state))
                                         ? 1U : 0U));
}

VL_INLINE_OPT void Vfan_speed_controller::_combo__TOP__3(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_combo__TOP__3\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = ((((IData)(vlTOPp->button) 
                              & (~ (IData)(vlTOPp->fan_speed_controller__DOT__button_prev))) 
                             << 2U) | (IData)(vlTOPp->fan_speed_controller__DOT__current_state));
    vlTOPp->fan_speed_controller__DOT__next_state = 
        vlTOPp->__Vtable1_fan_speed_controller__DOT__next_state
        [vlTOPp->__Vtableidx1];
}

void Vfan_speed_controller::_eval(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_eval\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vfan_speed_controller::_change_request(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_change_request\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vfan_speed_controller::_change_request_1(Vfan_speed_controller__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_change_request_1\n"); );
    Vfan_speed_controller* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfan_speed_controller::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfan_speed_controller::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((button & 0xfeU))) {
        Verilated::overWidthError("button");}
}
#endif  // VL_DEBUG
