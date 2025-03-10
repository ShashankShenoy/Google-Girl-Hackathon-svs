// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Velevator_controller_fsm.h for the primary calling header

#include "Velevator_controller_fsm.h"
#include "Velevator_controller_fsm__Syms.h"

//==========

void Velevator_controller_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Velevator_controller_fsm::eval\n"); );
    Velevator_controller_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/elevator_fsm.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Velevator_controller_fsm::_eval_initial_loop(Velevator_controller_fsm__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/elevator_fsm.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Velevator_controller_fsm::_sequent__TOP__1(Velevator_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_sequent__TOP__1\n"); );
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__elevator_controller_fsm__DOT__state;
    CData/*1:0*/ __Vdly__current_floor;
    CData/*0:0*/ __Vdly__moving_up;
    CData/*0:0*/ __Vdly__moving_down;
    CData/*4:0*/ __Vdly__elevator_controller_fsm__DOT__timer;
    // Body
    __Vdly__elevator_controller_fsm__DOT__timer = vlTOPp->elevator_controller_fsm__DOT__timer;
    __Vdly__moving_down = vlTOPp->moving_down;
    __Vdly__moving_up = vlTOPp->moving_up;
    __Vdly__current_floor = vlTOPp->current_floor;
    __Vdly__elevator_controller_fsm__DOT__state = vlTOPp->elevator_controller_fsm__DOT__state;
    if (vlTOPp->reset) {
        __Vdly__elevator_controller_fsm__DOT__state = 0U;
        __Vdly__current_floor = 0U;
        __Vdly__moving_up = 0U;
        __Vdly__moving_down = 0U;
        vlTOPp->door_open = 0U;
        __Vdly__elevator_controller_fsm__DOT__timer = 0U;
    } else {
        if ((2U & (IData)(vlTOPp->elevator_controller_fsm__DOT__state))) {
            if ((1U & (IData)(vlTOPp->elevator_controller_fsm__DOT__state))) {
                vlTOPp->door_open = 0U;
                if ((0U == (IData)(vlTOPp->elevator_controller_fsm__DOT__timer))) {
                    __Vdly__elevator_controller_fsm__DOT__state = 1U;
                    if (((IData)(vlTOPp->requested_floor) 
                         > (IData)(vlTOPp->current_floor))) {
                        __Vdly__moving_up = 1U;
                    } else {
                        __Vdly__moving_down = 1U;
                    }
                } else {
                    __Vdly__elevator_controller_fsm__DOT__timer 
                        = (0x1fU & ((IData)(vlTOPp->elevator_controller_fsm__DOT__timer) 
                                    - (IData)(1U)));
                }
            } else {
                vlTOPp->door_open = 1U;
                if ((0U == (IData)(vlTOPp->elevator_controller_fsm__DOT__timer))) {
                    __Vdly__elevator_controller_fsm__DOT__state = 0U;
                } else {
                    __Vdly__elevator_controller_fsm__DOT__timer 
                        = (0x1fU & ((IData)(vlTOPp->elevator_controller_fsm__DOT__timer) 
                                    - (IData)(1U)));
                }
                if (vlTOPp->door_sensor) {
                    __Vdly__elevator_controller_fsm__DOT__timer = 0x14U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->elevator_controller_fsm__DOT__state))) {
                if ((((IData)(vlTOPp->moving_up) & 
                      ((IData)(vlTOPp->current_floor) 
                       < (IData)(vlTOPp->requested_floor))) 
                     | ((IData)(vlTOPp->moving_down) 
                        & ((IData)(vlTOPp->current_floor) 
                           > (IData)(vlTOPp->requested_floor))))) {
                    __Vdly__current_floor = (3U & ((IData)(vlTOPp->moving_up)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->current_floor))
                                                    : 
                                                   ((IData)(vlTOPp->current_floor) 
                                                    - (IData)(1U))));
                } else {
                    __Vdly__moving_up = 0U;
                    __Vdly__moving_down = 0U;
                    __Vdly__elevator_controller_fsm__DOT__state = 2U;
                    __Vdly__elevator_controller_fsm__DOT__timer = 0x14U;
                }
            } else {
                if (((IData)(vlTOPp->requested_floor) 
                     != (IData)(vlTOPp->current_floor))) {
                    __Vdly__elevator_controller_fsm__DOT__state = 3U;
                    __Vdly__elevator_controller_fsm__DOT__timer = 0xaU;
                }
                vlTOPp->door_open = 1U;
            }
        }
    }
    vlTOPp->elevator_controller_fsm__DOT__state = __Vdly__elevator_controller_fsm__DOT__state;
    vlTOPp->current_floor = __Vdly__current_floor;
    vlTOPp->moving_up = __Vdly__moving_up;
    vlTOPp->moving_down = __Vdly__moving_down;
    vlTOPp->elevator_controller_fsm__DOT__timer = __Vdly__elevator_controller_fsm__DOT__timer;
}

void Velevator_controller_fsm::_eval(Velevator_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_eval\n"); );
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Velevator_controller_fsm::_change_request(Velevator_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_change_request\n"); );
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Velevator_controller_fsm::_change_request_1(Velevator_controller_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_change_request_1\n"); );
    Velevator_controller_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Velevator_controller_fsm::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Velevator_controller_fsm::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((requested_floor & 0xfcU))) {
        Verilated::overWidthError("requested_floor");}
    if (VL_UNLIKELY((door_sensor & 0xfeU))) {
        Verilated::overWidthError("door_sensor");}
}
#endif  // VL_DEBUG
