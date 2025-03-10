// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCarry_Lookahead_Adder_4bit.h for the primary calling header

#include "VCarry_Lookahead_Adder_4bit.h"
#include "VCarry_Lookahead_Adder_4bit__Syms.h"

//==========

void VCarry_Lookahead_Adder_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCarry_Lookahead_Adder_4bit::eval\n"); );
    VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/cla.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCarry_Lookahead_Adder_4bit::_eval_initial_loop(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/cla.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCarry_Lookahead_Adder_4bit::_combo__TOP__1(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_combo__TOP__1\n"); );
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Carry_Lookahead_Adder_4bit__DOT__G = ((IData)(vlTOPp->A) 
                                                  & (IData)(vlTOPp->B));
    vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C = ((0xeU 
                                                   & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C)) 
                                                  | (IData)(vlTOPp->Cin));
    vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P = ((IData)(vlTOPp->A) 
                                                  ^ (IData)(vlTOPp->B));
    vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C = ((0xdU 
                                                   & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C)) 
                                                  | (2U 
                                                     & (((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__G) 
                                                         | ((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P) 
                                                            & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C))) 
                                                        << 1U)));
    vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C = ((0xbU 
                                                   & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C)) 
                                                  | (4U 
                                                     & (((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__G) 
                                                         | ((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P) 
                                                            & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C))) 
                                                        << 1U)));
    vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C = ((7U 
                                                   & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C)) 
                                                  | (8U 
                                                     & (((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__G) 
                                                         | ((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P) 
                                                            & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C))) 
                                                        << 1U)));
    vlTOPp->Sum = ((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P) 
                   ^ (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C));
    vlTOPp->Cout = (1U & (((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__G) 
                           | ((IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__P) 
                              & (IData)(vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C))) 
                          >> 3U));
}

void VCarry_Lookahead_Adder_4bit::_eval(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_eval\n"); );
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData VCarry_Lookahead_Adder_4bit::_change_request(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_change_request\n"); );
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCarry_Lookahead_Adder_4bit::_change_request_1(VCarry_Lookahead_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_change_request_1\n"); );
    VCarry_Lookahead_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C ^ vlTOPp->__Vchglast__TOP__Carry_Lookahead_Adder_4bit__DOT__C));
    VL_DEBUG_IF( if(__req && ((vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C ^ vlTOPp->__Vchglast__TOP__Carry_Lookahead_Adder_4bit__DOT__C))) VL_DBG_MSGF("        CHANGE: /home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/cla.v:8: Carry_Lookahead_Adder_4bit.C\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__Carry_Lookahead_Adder_4bit__DOT__C 
        = vlTOPp->Carry_Lookahead_Adder_4bit__DOT__C;
    return __req;
}

#ifdef VL_DEBUG
void VCarry_Lookahead_Adder_4bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCarry_Lookahead_Adder_4bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((Cin & 0xfeU))) {
        Verilated::overWidthError("Cin");}
}
#endif  // VL_DEBUG
