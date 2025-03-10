// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRipple_Carry_Adder_4bit.h for the primary calling header

#include "VRipple_Carry_Adder_4bit.h"
#include "VRipple_Carry_Adder_4bit__Syms.h"

//==========

void VRipple_Carry_Adder_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRipple_Carry_Adder_4bit::eval\n"); );
    VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/ripple_adder.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRipple_Carry_Adder_4bit::_eval_initial_loop(VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/ripple_adder.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VRipple_Carry_Adder_4bit::_combo__TOP__1(VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_combo__TOP__1\n"); );
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Sum = ((0xeU & (IData)(vlTOPp->Sum)) | 
                   (1U & (((IData)(vlTOPp->A) ^ (IData)(vlTOPp->B)) 
                          ^ (IData)(vlTOPp->Cin))));
    vlTOPp->Ripple_Carry_Adder_4bit__DOT__C1 = (1U 
                                                & (((IData)(vlTOPp->A) 
                                                    & (IData)(vlTOPp->B)) 
                                                   | ((IData)(vlTOPp->Cin) 
                                                      & ((IData)(vlTOPp->A) 
                                                         ^ (IData)(vlTOPp->B)))));
    vlTOPp->Sum = ((0xdU & (IData)(vlTOPp->Sum)) | 
                   (2U & ((0xfffffffeU & ((IData)(vlTOPp->A) 
                                          ^ (IData)(vlTOPp->B))) 
                          ^ ((IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C1) 
                             << 1U))));
    vlTOPp->Ripple_Carry_Adder_4bit__DOT__C2 = (1U 
                                                & ((((IData)(vlTOPp->A) 
                                                     & (IData)(vlTOPp->B)) 
                                                    >> 1U) 
                                                   | ((IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C1) 
                                                      & (((IData)(vlTOPp->A) 
                                                          ^ (IData)(vlTOPp->B)) 
                                                         >> 1U))));
    vlTOPp->Sum = ((0xbU & (IData)(vlTOPp->Sum)) | 
                   (4U & ((0xfffffffcU & ((IData)(vlTOPp->A) 
                                          ^ (IData)(vlTOPp->B))) 
                          ^ ((IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C2) 
                             << 2U))));
    vlTOPp->Ripple_Carry_Adder_4bit__DOT__C3 = (1U 
                                                & ((((IData)(vlTOPp->A) 
                                                     & (IData)(vlTOPp->B)) 
                                                    >> 2U) 
                                                   | ((IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C2) 
                                                      & (((IData)(vlTOPp->A) 
                                                          ^ (IData)(vlTOPp->B)) 
                                                         >> 2U))));
    vlTOPp->Cout = (1U & ((((IData)(vlTOPp->A) & (IData)(vlTOPp->B)) 
                           >> 3U) | ((IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C3) 
                                     & (((IData)(vlTOPp->A) 
                                         ^ (IData)(vlTOPp->B)) 
                                        >> 3U))));
    vlTOPp->Sum = ((7U & (IData)(vlTOPp->Sum)) | (8U 
                                                  & ((0xfffffff8U 
                                                      & ((IData)(vlTOPp->A) 
                                                         ^ (IData)(vlTOPp->B))) 
                                                     ^ 
                                                     ((IData)(vlTOPp->Ripple_Carry_Adder_4bit__DOT__C3) 
                                                      << 3U))));
}

void VRipple_Carry_Adder_4bit::_eval(VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_eval\n"); );
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData VRipple_Carry_Adder_4bit::_change_request(VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_change_request\n"); );
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VRipple_Carry_Adder_4bit::_change_request_1(VRipple_Carry_Adder_4bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_change_request_1\n"); );
    VRipple_Carry_Adder_4bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRipple_Carry_Adder_4bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRipple_Carry_Adder_4bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((B & 0xf0U))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((Cin & 0xfeU))) {
        Verilated::overWidthError("Cin");}
}
#endif  // VL_DEBUG
