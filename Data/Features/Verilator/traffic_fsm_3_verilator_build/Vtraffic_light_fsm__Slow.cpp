// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtraffic_light_fsm.h for the primary calling header

#include "Vtraffic_light_fsm.h"
#include "Vtraffic_light_fsm__Syms.h"

//==========
CData/*1:0*/ Vtraffic_light_fsm::__Vtable1_traffic_light_fsm__DOT__current_state[128];
CData/*3:0*/ Vtraffic_light_fsm::__Vtable1_traffic_light_fsm__DOT__timer[128];

VL_CTOR_IMP(Vtraffic_light_fsm) {
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = __VlSymsp = new Vtraffic_light_fsm__Syms(this, name());
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtraffic_light_fsm::__Vconfigure(Vtraffic_light_fsm__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtraffic_light_fsm::~Vtraffic_light_fsm() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtraffic_light_fsm::_settle__TOP__2(Vtraffic_light_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_settle__TOP__2\n"); );
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))) {
        vlTOPp->traffic_light_fsm__DOT__next_state = 1U;
        vlTOPp->light = 1U;
    } else {
        vlTOPp->traffic_light_fsm__DOT__next_state 
            = ((1U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                ? 2U : 0U);
        vlTOPp->light = ((1U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                          ? 2U : ((2U == (IData)(vlTOPp->traffic_light_fsm__DOT__current_state))
                                   ? 4U : 1U));
    }
}

void Vtraffic_light_fsm::_eval_initial(Vtraffic_light_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_eval_initial\n"); );
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vtraffic_light_fsm::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::final\n"); );
    // Variables
    Vtraffic_light_fsm__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtraffic_light_fsm::_eval_settle(Vtraffic_light_fsm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_eval_settle\n"); );
    Vtraffic_light_fsm* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vtraffic_light_fsm::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtraffic_light_fsm::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    light = VL_RAND_RESET_I(3);
    traffic_light_fsm__DOT__current_state = VL_RAND_RESET_I(2);
    traffic_light_fsm__DOT__next_state = VL_RAND_RESET_I(2);
    traffic_light_fsm__DOT__timer = VL_RAND_RESET_I(4);
    __Vtablechg1[0] = 3U;
    __Vtablechg1[1] = 3U;
    __Vtablechg1[2] = 2U;
    __Vtablechg1[3] = 3U;
    __Vtablechg1[4] = 2U;
    __Vtablechg1[5] = 3U;
    __Vtablechg1[6] = 2U;
    __Vtablechg1[7] = 3U;
    __Vtablechg1[8] = 2U;
    __Vtablechg1[9] = 3U;
    __Vtablechg1[10] = 2U;
    __Vtablechg1[11] = 3U;
    __Vtablechg1[12] = 2U;
    __Vtablechg1[13] = 3U;
    __Vtablechg1[14] = 2U;
    __Vtablechg1[15] = 3U;
    __Vtablechg1[16] = 2U;
    __Vtablechg1[17] = 3U;
    __Vtablechg1[18] = 2U;
    __Vtablechg1[19] = 3U;
    __Vtablechg1[20] = 2U;
    __Vtablechg1[21] = 3U;
    __Vtablechg1[22] = 2U;
    __Vtablechg1[23] = 3U;
    __Vtablechg1[24] = 2U;
    __Vtablechg1[25] = 3U;
    __Vtablechg1[26] = 2U;
    __Vtablechg1[27] = 3U;
    __Vtablechg1[28] = 2U;
    __Vtablechg1[29] = 3U;
    __Vtablechg1[30] = 2U;
    __Vtablechg1[31] = 3U;
    __Vtablechg1[32] = 3U;
    __Vtablechg1[33] = 3U;
    __Vtablechg1[34] = 2U;
    __Vtablechg1[35] = 3U;
    __Vtablechg1[36] = 2U;
    __Vtablechg1[37] = 3U;
    __Vtablechg1[38] = 2U;
    __Vtablechg1[39] = 3U;
    __Vtablechg1[40] = 2U;
    __Vtablechg1[41] = 3U;
    __Vtablechg1[42] = 2U;
    __Vtablechg1[43] = 3U;
    __Vtablechg1[44] = 2U;
    __Vtablechg1[45] = 3U;
    __Vtablechg1[46] = 2U;
    __Vtablechg1[47] = 3U;
    __Vtablechg1[48] = 2U;
    __Vtablechg1[49] = 3U;
    __Vtablechg1[50] = 2U;
    __Vtablechg1[51] = 3U;
    __Vtablechg1[52] = 2U;
    __Vtablechg1[53] = 3U;
    __Vtablechg1[54] = 2U;
    __Vtablechg1[55] = 3U;
    __Vtablechg1[56] = 2U;
    __Vtablechg1[57] = 3U;
    __Vtablechg1[58] = 2U;
    __Vtablechg1[59] = 3U;
    __Vtablechg1[60] = 2U;
    __Vtablechg1[61] = 3U;
    __Vtablechg1[62] = 2U;
    __Vtablechg1[63] = 3U;
    __Vtablechg1[64] = 3U;
    __Vtablechg1[65] = 3U;
    __Vtablechg1[66] = 2U;
    __Vtablechg1[67] = 3U;
    __Vtablechg1[68] = 2U;
    __Vtablechg1[69] = 3U;
    __Vtablechg1[70] = 2U;
    __Vtablechg1[71] = 3U;
    __Vtablechg1[72] = 2U;
    __Vtablechg1[73] = 3U;
    __Vtablechg1[74] = 2U;
    __Vtablechg1[75] = 3U;
    __Vtablechg1[76] = 2U;
    __Vtablechg1[77] = 3U;
    __Vtablechg1[78] = 2U;
    __Vtablechg1[79] = 3U;
    __Vtablechg1[80] = 2U;
    __Vtablechg1[81] = 3U;
    __Vtablechg1[82] = 2U;
    __Vtablechg1[83] = 3U;
    __Vtablechg1[84] = 2U;
    __Vtablechg1[85] = 3U;
    __Vtablechg1[86] = 2U;
    __Vtablechg1[87] = 3U;
    __Vtablechg1[88] = 2U;
    __Vtablechg1[89] = 3U;
    __Vtablechg1[90] = 2U;
    __Vtablechg1[91] = 3U;
    __Vtablechg1[92] = 2U;
    __Vtablechg1[93] = 3U;
    __Vtablechg1[94] = 2U;
    __Vtablechg1[95] = 3U;
    __Vtablechg1[96] = 3U;
    __Vtablechg1[97] = 3U;
    __Vtablechg1[98] = 2U;
    __Vtablechg1[99] = 3U;
    __Vtablechg1[100] = 2U;
    __Vtablechg1[101] = 3U;
    __Vtablechg1[102] = 2U;
    __Vtablechg1[103] = 3U;
    __Vtablechg1[104] = 2U;
    __Vtablechg1[105] = 3U;
    __Vtablechg1[106] = 2U;
    __Vtablechg1[107] = 3U;
    __Vtablechg1[108] = 2U;
    __Vtablechg1[109] = 3U;
    __Vtablechg1[110] = 2U;
    __Vtablechg1[111] = 3U;
    __Vtablechg1[112] = 2U;
    __Vtablechg1[113] = 3U;
    __Vtablechg1[114] = 2U;
    __Vtablechg1[115] = 3U;
    __Vtablechg1[116] = 2U;
    __Vtablechg1[117] = 3U;
    __Vtablechg1[118] = 2U;
    __Vtablechg1[119] = 3U;
    __Vtablechg1[120] = 2U;
    __Vtablechg1[121] = 3U;
    __Vtablechg1[122] = 2U;
    __Vtablechg1[123] = 3U;
    __Vtablechg1[124] = 2U;
    __Vtablechg1[125] = 3U;
    __Vtablechg1[126] = 2U;
    __Vtablechg1[127] = 3U;
    __Vtable1_traffic_light_fsm__DOT__current_state[0] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[1] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[2] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[3] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[4] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[5] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[6] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[7] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[8] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[9] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[10] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[11] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[12] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[13] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[14] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[15] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[16] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[17] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[18] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[19] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[20] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[21] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[22] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[23] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[24] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[25] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[26] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[27] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[28] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[29] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[30] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[31] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[32] = 1U;
    __Vtable1_traffic_light_fsm__DOT__current_state[33] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[34] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[35] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[36] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[37] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[38] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[39] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[40] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[41] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[42] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[43] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[44] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[45] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[46] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[47] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[48] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[49] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[50] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[51] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[52] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[53] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[54] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[55] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[56] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[57] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[58] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[59] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[60] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[61] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[62] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[63] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[64] = 2U;
    __Vtable1_traffic_light_fsm__DOT__current_state[65] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[66] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[67] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[68] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[69] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[70] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[71] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[72] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[73] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[74] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[75] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[76] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[77] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[78] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[79] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[80] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[81] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[82] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[83] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[84] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[85] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[86] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[87] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[88] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[89] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[90] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[91] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[92] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[93] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[94] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[95] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[96] = 3U;
    __Vtable1_traffic_light_fsm__DOT__current_state[97] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[98] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[99] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[100] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[101] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[102] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[103] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[104] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[105] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[106] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[107] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[108] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[109] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[110] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[111] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[112] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[113] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[114] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[115] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[116] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[117] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[118] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[119] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[120] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[121] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[122] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[123] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[124] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[125] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[126] = 0U;
    __Vtable1_traffic_light_fsm__DOT__current_state[127] = 0U;
    __Vtable1_traffic_light_fsm__DOT__timer[0] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[1] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[2] = 0U;
    __Vtable1_traffic_light_fsm__DOT__timer[3] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[4] = 1U;
    __Vtable1_traffic_light_fsm__DOT__timer[5] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[6] = 2U;
    __Vtable1_traffic_light_fsm__DOT__timer[7] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[8] = 3U;
    __Vtable1_traffic_light_fsm__DOT__timer[9] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[10] = 4U;
    __Vtable1_traffic_light_fsm__DOT__timer[11] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[12] = 5U;
    __Vtable1_traffic_light_fsm__DOT__timer[13] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[14] = 6U;
    __Vtable1_traffic_light_fsm__DOT__timer[15] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[16] = 7U;
    __Vtable1_traffic_light_fsm__DOT__timer[17] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[18] = 8U;
    __Vtable1_traffic_light_fsm__DOT__timer[19] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[20] = 9U;
    __Vtable1_traffic_light_fsm__DOT__timer[21] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[22] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[23] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[24] = 0xbU;
    __Vtable1_traffic_light_fsm__DOT__timer[25] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[26] = 0xcU;
    __Vtable1_traffic_light_fsm__DOT__timer[27] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[28] = 0xdU;
    __Vtable1_traffic_light_fsm__DOT__timer[29] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[30] = 0xeU;
    __Vtable1_traffic_light_fsm__DOT__timer[31] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[32] = 3U;
    __Vtable1_traffic_light_fsm__DOT__timer[33] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[34] = 0U;
    __Vtable1_traffic_light_fsm__DOT__timer[35] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[36] = 1U;
    __Vtable1_traffic_light_fsm__DOT__timer[37] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[38] = 2U;
    __Vtable1_traffic_light_fsm__DOT__timer[39] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[40] = 3U;
    __Vtable1_traffic_light_fsm__DOT__timer[41] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[42] = 4U;
    __Vtable1_traffic_light_fsm__DOT__timer[43] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[44] = 5U;
    __Vtable1_traffic_light_fsm__DOT__timer[45] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[46] = 6U;
    __Vtable1_traffic_light_fsm__DOT__timer[47] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[48] = 7U;
    __Vtable1_traffic_light_fsm__DOT__timer[49] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[50] = 8U;
    __Vtable1_traffic_light_fsm__DOT__timer[51] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[52] = 9U;
    __Vtable1_traffic_light_fsm__DOT__timer[53] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[54] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[55] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[56] = 0xbU;
    __Vtable1_traffic_light_fsm__DOT__timer[57] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[58] = 0xcU;
    __Vtable1_traffic_light_fsm__DOT__timer[59] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[60] = 0xdU;
    __Vtable1_traffic_light_fsm__DOT__timer[61] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[62] = 0xeU;
    __Vtable1_traffic_light_fsm__DOT__timer[63] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[64] = 7U;
    __Vtable1_traffic_light_fsm__DOT__timer[65] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[66] = 0U;
    __Vtable1_traffic_light_fsm__DOT__timer[67] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[68] = 1U;
    __Vtable1_traffic_light_fsm__DOT__timer[69] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[70] = 2U;
    __Vtable1_traffic_light_fsm__DOT__timer[71] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[72] = 3U;
    __Vtable1_traffic_light_fsm__DOT__timer[73] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[74] = 4U;
    __Vtable1_traffic_light_fsm__DOT__timer[75] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[76] = 5U;
    __Vtable1_traffic_light_fsm__DOT__timer[77] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[78] = 6U;
    __Vtable1_traffic_light_fsm__DOT__timer[79] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[80] = 7U;
    __Vtable1_traffic_light_fsm__DOT__timer[81] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[82] = 8U;
    __Vtable1_traffic_light_fsm__DOT__timer[83] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[84] = 9U;
    __Vtable1_traffic_light_fsm__DOT__timer[85] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[86] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[87] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[88] = 0xbU;
    __Vtable1_traffic_light_fsm__DOT__timer[89] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[90] = 0xcU;
    __Vtable1_traffic_light_fsm__DOT__timer[91] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[92] = 0xdU;
    __Vtable1_traffic_light_fsm__DOT__timer[93] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[94] = 0xeU;
    __Vtable1_traffic_light_fsm__DOT__timer[95] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[96] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[97] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[98] = 0U;
    __Vtable1_traffic_light_fsm__DOT__timer[99] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[100] = 1U;
    __Vtable1_traffic_light_fsm__DOT__timer[101] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[102] = 2U;
    __Vtable1_traffic_light_fsm__DOT__timer[103] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[104] = 3U;
    __Vtable1_traffic_light_fsm__DOT__timer[105] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[106] = 4U;
    __Vtable1_traffic_light_fsm__DOT__timer[107] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[108] = 5U;
    __Vtable1_traffic_light_fsm__DOT__timer[109] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[110] = 6U;
    __Vtable1_traffic_light_fsm__DOT__timer[111] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[112] = 7U;
    __Vtable1_traffic_light_fsm__DOT__timer[113] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[114] = 8U;
    __Vtable1_traffic_light_fsm__DOT__timer[115] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[116] = 9U;
    __Vtable1_traffic_light_fsm__DOT__timer[117] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[118] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[119] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[120] = 0xbU;
    __Vtable1_traffic_light_fsm__DOT__timer[121] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[122] = 0xcU;
    __Vtable1_traffic_light_fsm__DOT__timer[123] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[124] = 0xdU;
    __Vtable1_traffic_light_fsm__DOT__timer[125] = 0xaU;
    __Vtable1_traffic_light_fsm__DOT__timer[126] = 0xeU;
    __Vtable1_traffic_light_fsm__DOT__timer[127] = 0xaU;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
