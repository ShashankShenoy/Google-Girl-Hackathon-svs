// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_32bit.h for the primary calling header

#include "Valu_32bit.h"
#include "Valu_32bit__Syms.h"

//==========

void Valu_32bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_32bit::eval\n"); );
    Valu_32bit__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/alu_32.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Valu_32bit::_eval_initial_loop(Valu_32bit__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/alu_32.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Valu_32bit::_combo__TOP__1(Valu_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_combo__TOP__1\n"); );
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->alu_32bit__DOT__adder_b = (((1U == (IData)(vlTOPp->op)) 
                                        | (6U == (IData)(vlTOPp->op)))
                                        ? (~ vlTOPp->b)
                                        : vlTOPp->b);
    vlTOPp->alu_32bit__DOT__adder_result = (0x1ffffffffULL 
                                            & (((QData)((IData)(vlTOPp->a)) 
                                                + (QData)((IData)(vlTOPp->alu_32bit__DOT__adder_b))) 
                                               + (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlTOPp->op)) 
                                                                  | (6U 
                                                                     == (IData)(vlTOPp->op)))))));
    vlTOPp->carry_out = (((0U == (IData)(vlTOPp->op)) 
                          | (1U == (IData)(vlTOPp->op))) 
                         & (IData)((vlTOPp->alu_32bit__DOT__adder_result 
                                    >> 0x20U)));
    vlTOPp->result = ((8U & (IData)(vlTOPp->op)) ? 
                      ((4U & (IData)(vlTOPp->op)) ? 0U
                        : ((2U & (IData)(vlTOPp->op))
                            ? 0U : ((1U & (IData)(vlTOPp->op))
                                     ? VL_SHIFTRS_III(32,32,5, vlTOPp->b, 
                                                      (0x1fU 
                                                       & vlTOPp->a))
                                     : (vlTOPp->b >> 
                                        (0x1fU & vlTOPp->a)))))
                       : ((4U & (IData)(vlTOPp->op))
                           ? ((2U & (IData)(vlTOPp->op))
                               ? ((1U & (IData)(vlTOPp->op))
                                   ? (vlTOPp->b << 
                                      (0x1fU & vlTOPp->a))
                                   : (1U & (((1U & 
                                              (vlTOPp->a 
                                               >> 0x1fU)) 
                                             != (1U 
                                                 & (vlTOPp->b 
                                                    >> 0x1fU)))
                                             ? (vlTOPp->a 
                                                >> 0x1fU)
                                             : (IData)(
                                                       (vlTOPp->alu_32bit__DOT__adder_result 
                                                        >> 0x1fU)))))
                               : ((1U & (IData)(vlTOPp->op))
                                   ? (~ (vlTOPp->a 
                                         | vlTOPp->b))
                                   : (vlTOPp->a ^ vlTOPp->b)))
                           : ((2U & (IData)(vlTOPp->op))
                               ? ((1U & (IData)(vlTOPp->op))
                                   ? (vlTOPp->a | vlTOPp->b)
                                   : (vlTOPp->a & vlTOPp->b))
                               : (IData)(vlTOPp->alu_32bit__DOT__adder_result))));
    vlTOPp->alu_32bit__DOT__add_overflow = (((1U & 
                                              (vlTOPp->a 
                                               >> 0x1fU)) 
                                             == (1U 
                                                 & (vlTOPp->alu_32bit__DOT__adder_b 
                                                    >> 0x1fU))) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlTOPp->alu_32bit__DOT__adder_result 
                                                           >> 0x1fU))) 
                                               != (1U 
                                                   & (vlTOPp->a 
                                                      >> 0x1fU))));
    vlTOPp->zero = (0U == vlTOPp->result);
    vlTOPp->overflow = ((0U == (IData)(vlTOPp->op))
                         ? (IData)(vlTOPp->alu_32bit__DOT__add_overflow)
                         : ((1U == (IData)(vlTOPp->op)) 
                            & (IData)(vlTOPp->alu_32bit__DOT__add_overflow)));
}

void Valu_32bit::_eval(Valu_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_eval\n"); );
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
}

VL_INLINE_OPT QData Valu_32bit::_change_request(Valu_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_change_request\n"); );
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Valu_32bit::_change_request_1(Valu_32bit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_change_request_1\n"); );
    Valu_32bit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Valu_32bit::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_32bit::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((op & 0xf0U))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
