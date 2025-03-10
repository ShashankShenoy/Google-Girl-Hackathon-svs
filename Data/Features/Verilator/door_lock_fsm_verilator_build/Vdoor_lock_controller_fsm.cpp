// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoor_lock_controller_fsm.h for the primary calling header

#include "Vdoor_lock_controller_fsm.h"
#include "Vdoor_lock_controller_fsm__Syms.h"

//==========

void Vdoor_lock_controller_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdoor_lock_controller_fsm::eval\n"); );
    Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/door_lock_fsm.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdoor_lock_controller_fsm::_eval_initial_loop(Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/door_lock_fsm.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vdoor_lock_controller_fsm::_sequent__TOP__1(Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_sequent__TOP__1\n"); );
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__door_lock_controller_fsm__DOT__state;
    CData/*1:0*/ __Vdly__door_lock_controller_fsm__DOT__failed_attempts;
    // Body
    __Vdly__door_lock_controller_fsm__DOT__failed_attempts 
        = vlTOPp->door_lock_controller_fsm__DOT__failed_attempts;
    __Vdly__door_lock_controller_fsm__DOT__state = vlTOPp->door_lock_controller_fsm__DOT__state;
    if (vlTOPp->reset) {
        __Vdly__door_lock_controller_fsm__DOT__state = 0U;
        __Vdly__door_lock_controller_fsm__DOT__failed_attempts = 0U;
        vlTOPp->unlocked = 0U;
        vlTOPp->error = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->door_lock_controller_fsm__DOT__state))) {
            if (vlTOPp->try_unlock) {
                if ((0xaU == (IData)(vlTOPp->password))) {
                    __Vdly__door_lock_controller_fsm__DOT__state = 1U;
                    __Vdly__door_lock_controller_fsm__DOT__failed_attempts = 0U;
                    vlTOPp->unlocked = 1U;
                    vlTOPp->error = 0U;
                } else {
                    __Vdly__door_lock_controller_fsm__DOT__failed_attempts 
                        = (3U & ((IData)(1U) + (IData)(vlTOPp->door_lock_controller_fsm__DOT__failed_attempts)));
                    if ((2U == (IData)(vlTOPp->door_lock_controller_fsm__DOT__failed_attempts))) {
                        __Vdly__door_lock_controller_fsm__DOT__state = 2U;
                        vlTOPp->error = 1U;
                    }
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->door_lock_controller_fsm__DOT__state))) {
                if (vlTOPp->try_unlock) {
                    __Vdly__door_lock_controller_fsm__DOT__state = 0U;
                    vlTOPp->unlocked = 0U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->door_lock_controller_fsm__DOT__state))) {
                    if (vlTOPp->reset) {
                        __Vdly__door_lock_controller_fsm__DOT__state = 0U;
                        __Vdly__door_lock_controller_fsm__DOT__failed_attempts = 0U;
                        vlTOPp->error = 0U;
                    }
                } else {
                    __Vdly__door_lock_controller_fsm__DOT__state = 0U;
                }
            }
        }
    }
    vlTOPp->door_lock_controller_fsm__DOT__state = __Vdly__door_lock_controller_fsm__DOT__state;
    vlTOPp->door_lock_controller_fsm__DOT__failed_attempts 
        = __Vdly__door_lock_controller_fsm__DOT__failed_attempts;
}

void Vdoor_lock_controller_fsm::_eval(Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_eval\n"); );
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vdoor_lock_controller_fsm::_change_request(Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_change_request\n"); );
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vdoor_lock_controller_fsm::_change_request_1(Vdoor_lock_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_change_request_1\n"); );
    Vdoor_lock_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vdoor_lock_controller_fsm::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoor_lock_controller_fsm::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((password & 0xf0U))) {
        Verilated::overWidthError("password");}
    if (VL_UNLIKELY((try_unlock & 0xfeU))) {
        Verilated::overWidthError("try_unlock");}
}
#endif  // VL_DEBUG
