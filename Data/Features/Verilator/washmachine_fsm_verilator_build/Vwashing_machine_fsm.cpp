// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwashing_machine_fsm.h for the primary calling header

#include "Vwashing_machine_fsm.h"
#include "Vwashing_machine_fsm__Syms.h"

//==========

void Vwashing_machine_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vwashing_machine_fsm::eval\n"); );
    Vwashing_machine_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/washmachine_fsm.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vwashing_machine_fsm::_eval_initial_loop(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/washmachine_fsm.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vwashing_machine_fsm::_sequent__TOP__1(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_sequent__TOP__1\n"); );
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__washing_machine_fsm__DOT__timer;
    // Body
    __Vdly__washing_machine_fsm__DOT__timer = vlTOPp->washing_machine_fsm__DOT__timer;
    if (vlTOPp->reset) {
        __Vdly__washing_machine_fsm__DOT__timer = 0U;
    } else {
        if (((0U != (IData)(vlTOPp->washing_machine_fsm__DOT__current_state)) 
             & ((IData)(vlTOPp->washing_machine_fsm__DOT__current_state) 
                == (IData)(vlTOPp->washing_machine_fsm__DOT__next_state)))) {
            __Vdly__washing_machine_fsm__DOT__timer 
                = ((0U < (IData)(vlTOPp->washing_machine_fsm__DOT__timer))
                    ? (0xffU & ((IData)(vlTOPp->washing_machine_fsm__DOT__timer) 
                                - (IData)(1U))) : 0U);
        } else {
            if ((1U == (IData)(vlTOPp->washing_machine_fsm__DOT__next_state))) {
                __Vdly__washing_machine_fsm__DOT__timer = 0xc8U;
            } else {
                if ((2U == (IData)(vlTOPp->washing_machine_fsm__DOT__next_state))) {
                    __Vdly__washing_machine_fsm__DOT__timer = 0x64U;
                } else {
                    if ((3U == (IData)(vlTOPp->washing_machine_fsm__DOT__next_state))) {
                        __Vdly__washing_machine_fsm__DOT__timer = 0x32U;
                    }
                }
            }
        }
    }
    vlTOPp->washing_machine_fsm__DOT__timer = __Vdly__washing_machine_fsm__DOT__timer;
    vlTOPp->washing_machine_fsm__DOT__current_state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->washing_machine_fsm__DOT__next_state));
}

VL_INLINE_OPT void Vwashing_machine_fsm::_settle__TOP__2(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_settle__TOP__2\n"); );
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->washing_machine_fsm__DOT__next_state = 
        ((2U & (IData)(vlTOPp->washing_machine_fsm__DOT__current_state))
          ? ((1U & (IData)(vlTOPp->washing_machine_fsm__DOT__current_state))
              ? ((0U == (IData)(vlTOPp->washing_machine_fsm__DOT__timer))
                  ? 0U : 3U) : ((0U == (IData)(vlTOPp->washing_machine_fsm__DOT__timer))
                                 ? 3U : 2U)) : ((1U 
                                                 & (IData)(vlTOPp->washing_machine_fsm__DOT__current_state))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlTOPp->washing_machine_fsm__DOT__timer))
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                (((IData)(vlTOPp->start) 
                                                  & (IData)(vlTOPp->door_closed))
                                                  ? 1U
                                                  : 0U)));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->washing_machine_fsm__DOT__next_state) 
                             << 2U) | (IData)(vlTOPp->washing_machine_fsm__DOT__current_state));
    vlTOPp->state = vlTOPp->__Vtable1_state[vlTOPp->__Vtableidx1];
    vlTOPp->motor = vlTOPp->__Vtable1_motor[vlTOPp->__Vtableidx1];
    vlTOPp->water_valve = vlTOPp->__Vtable1_water_valve
        [vlTOPp->__Vtableidx1];
    vlTOPp->drain_valve = vlTOPp->__Vtable1_drain_valve
        [vlTOPp->__Vtableidx1];
    vlTOPp->complete = vlTOPp->__Vtable1_complete[vlTOPp->__Vtableidx1];
}

void Vwashing_machine_fsm::_eval(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_eval\n"); );
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vwashing_machine_fsm::_change_request(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_change_request\n"); );
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vwashing_machine_fsm::_change_request_1(Vwashing_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_change_request_1\n"); );
    Vwashing_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vwashing_machine_fsm::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwashing_machine_fsm::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((door_closed & 0xfeU))) {
        Verilated::overWidthError("door_closed");}
}
#endif  // VL_DEBUG
