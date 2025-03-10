// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine_fsm.h for the primary calling header

#include "Vvending_machine_fsm.h"
#include "Vvending_machine_fsm__Syms.h"

//==========

void Vvending_machine_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvending_machine_fsm::eval\n"); );
    Vvending_machine_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/vendmachine_fsm.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vvending_machine_fsm::_eval_initial_loop(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/vendmachine_fsm.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vvending_machine_fsm::_sequent__TOP__1(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_sequent__TOP__1\n"); );
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__credit;
    // Body
    __Vdly__credit = vlTOPp->credit;
    if (vlTOPp->reset) {
        __Vdly__credit = 0U;
        vlTOPp->dispense = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))) {
            __Vdly__credit = 0U;
            vlTOPp->dispense = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))) {
                if (vlTOPp->nickel) {
                    __Vdly__credit = (0x3fU & ((IData)(5U) 
                                               + (IData)(vlTOPp->credit)));
                } else {
                    if (vlTOPp->dime) {
                        __Vdly__credit = (0x3fU & ((IData)(0xaU) 
                                                   + (IData)(vlTOPp->credit)));
                    } else {
                        if (vlTOPp->quarter) {
                            __Vdly__credit = (0x3fU 
                                              & ((IData)(0x19U) 
                                                 + (IData)(vlTOPp->credit)));
                        }
                    }
                }
            } else {
                if ((2U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))) {
                    __Vdly__credit = (0x3fU & ((IData)(vlTOPp->credit) 
                                               - (IData)(0x19U)));
                    vlTOPp->dispense = 1U;
                }
            }
        }
    }
    vlTOPp->credit = __Vdly__credit;
    vlTOPp->vending_machine_fsm__DOT__state = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (IData)(vlTOPp->vending_machine_fsm__DOT__next_state));
}

VL_INLINE_OPT void Vvending_machine_fsm::_settle__TOP__2(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_settle__TOP__2\n"); );
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->vending_machine_fsm__DOT__next_state = 
        ((0U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))
          ? ((((IData)(vlTOPp->nickel) | (IData)(vlTOPp->dime)) 
              | (IData)(vlTOPp->quarter)) ? 1U : 0U)
          : ((1U == (IData)(vlTOPp->vending_machine_fsm__DOT__state))
              ? ((0x19U <= (IData)(vlTOPp->credit))
                  ? 2U : 1U) : 0U));
}

void Vvending_machine_fsm::_eval(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_eval\n"); );
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData Vvending_machine_fsm::_change_request(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_change_request\n"); );
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vvending_machine_fsm::_change_request_1(Vvending_machine_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_change_request_1\n"); );
    Vvending_machine_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vvending_machine_fsm::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine_fsm::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((nickel & 0xfeU))) {
        Verilated::overWidthError("nickel");}
    if (VL_UNLIKELY((dime & 0xfeU))) {
        Verilated::overWidthError("dime");}
    if (VL_UNLIKELY((quarter & 0xfeU))) {
        Verilated::overWidthError("quarter");}
}
#endif  // VL_DEBUG
