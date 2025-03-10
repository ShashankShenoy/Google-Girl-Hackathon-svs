// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light_pedestrian_fsm.h for the primary calling header

#include "Vtraffic_light_pedestrian_fsm.h"
#include "Vtraffic_light_pedestrian_fsm__Syms.h"

//==========

void Vtraffic_light_pedestrian_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtraffic_light_pedestrian_fsm::eval\n"); );
    Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/traffic_fsm_4.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtraffic_light_pedestrian_fsm::_eval_initial_loop(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/svs_06/Google-Girl-Hackathon/Data/RTL_Sources/traffic_fsm_4.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtraffic_light_pedestrian_fsm::_sequent__TOP__1(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_pedestrian_fsm::_sequent__TOP__1\n"); );
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlTOPp->traffic_light_pedestrian_fsm__DOT__next_state) 
                     << 6U) | (((IData)(vlTOPp->traffic_light_pedestrian_fsm__DOT__timer) 
                                << 1U) | (IData)(vlTOPp->reset)));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->traffic_light_pedestrian_fsm__DOT__current_state 
            = vlTOPp->__Vtable1_traffic_light_pedestrian_fsm__DOT__current_state
            [__Vtableidx1];
    }
    vlTOPp->traffic_light_pedestrian_fsm__DOT__timer 
        = vlTOPp->__Vtable1_traffic_light_pedestrian_fsm__DOT__timer
        [__Vtableidx1];
    vlTOPp->__Vtableidx3 = vlTOPp->traffic_light_pedestrian_fsm__DOT__current_state;
    vlTOPp->traffic_light = vlTOPp->__Vtable3_traffic_light
        [vlTOPp->__Vtableidx3];
    vlTOPp->pedestrian_light = vlTOPp->__Vtable3_pedestrian_light
        [vlTOPp->__Vtableidx3];
}

VL_INLINE_OPT void Vtraffic_light_pedestrian_fsm::_combo__TOP__3(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_pedestrian_fsm::_combo__TOP__3\n"); );
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->traffic_light_pedestrian_fsm__DOT__timer) 
                             << 3U) | (((IData)(vlTOPp->pedestrian_request) 
                                        << 2U) | (IData)(vlTOPp->traffic_light_pedestrian_fsm__DOT__current_state)));
    vlTOPp->traffic_light_pedestrian_fsm__DOT__next_state 
        = vlTOPp->__Vtable2_traffic_light_pedestrian_fsm__DOT__next_state
        [vlTOPp->__Vtableidx2];
}

void Vtraffic_light_pedestrian_fsm::_eval(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_pedestrian_fsm::_eval\n"); );
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

VL_INLINE_OPT QData Vtraffic_light_pedestrian_fsm::_change_request(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_pedestrian_fsm::_change_request\n"); );
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtraffic_light_pedestrian_fsm::_change_request_1(Vtraffic_light_pedestrian_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_pedestrian_fsm::_change_request_1\n"); );
    Vtraffic_light_pedestrian_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtraffic_light_pedestrian_fsm::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_pedestrian_fsm::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((pedestrian_request & 0xfeU))) {
        Verilated::overWidthError("pedestrian_request");}
}
#endif  // VL_DEBUG
