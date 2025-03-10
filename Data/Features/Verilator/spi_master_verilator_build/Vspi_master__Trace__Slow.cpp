// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_master__Syms.h"


//======================

void Vspi_master::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vspi_master::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vspi_master::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vspi_master::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vspi_master::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+7,"clk", false,-1);
        tracep->declBit(c+8,"rst_n", false,-1);
        tracep->declBit(c+9,"start", false,-1);
        tracep->declBus(c+10,"data_in", false,-1, 7,0);
        tracep->declBit(c+11,"miso", false,-1);
        tracep->declBit(c+12,"sclk", false,-1);
        tracep->declBit(c+13,"mosi", false,-1);
        tracep->declBit(c+14,"cs_n", false,-1);
        tracep->declBit(c+15,"busy", false,-1);
        tracep->declBus(c+16,"data_out", false,-1, 7,0);
        tracep->declBit(c+7,"spi_master clk", false,-1);
        tracep->declBit(c+8,"spi_master rst_n", false,-1);
        tracep->declBit(c+9,"spi_master start", false,-1);
        tracep->declBus(c+10,"spi_master data_in", false,-1, 7,0);
        tracep->declBit(c+11,"spi_master miso", false,-1);
        tracep->declBit(c+12,"spi_master sclk", false,-1);
        tracep->declBit(c+13,"spi_master mosi", false,-1);
        tracep->declBit(c+14,"spi_master cs_n", false,-1);
        tracep->declBit(c+15,"spi_master busy", false,-1);
        tracep->declBus(c+16,"spi_master data_out", false,-1, 7,0);
        tracep->declBus(c+18,"spi_master CPOL", false,-1, 31,0);
        tracep->declBus(c+18,"spi_master CPHA", false,-1, 31,0);
        tracep->declBus(c+19,"spi_master CLK_DIV", false,-1, 31,0);
        tracep->declBus(c+1,"spi_master tx_data", false,-1, 7,0);
        tracep->declBus(c+2,"spi_master rx_data", false,-1, 7,0);
        tracep->declBus(c+3,"spi_master bit_count", false,-1, 3,0);
        tracep->declBus(c+4,"spi_master clk_count", false,-1, 7,0);
        tracep->declBit(c+5,"spi_master spi_clk_en", false,-1);
        tracep->declBus(c+20,"spi_master IDLE", false,-1, 1,0);
        tracep->declBus(c+21,"spi_master SETUP", false,-1, 1,0);
        tracep->declBus(c+22,"spi_master TRANSFER", false,-1, 1,0);
        tracep->declBus(c+23,"spi_master FINISH", false,-1, 1,0);
        tracep->declBus(c+6,"spi_master state", false,-1, 1,0);
        tracep->declBus(c+17,"spi_master next_state", false,-1, 1,0);
        tracep->declBit(c+12,"spi_master sample_edge", false,-1);
    }
}

void Vspi_master::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vspi_master::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vspi_master::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vspi_master__Syms* __restrict vlSymsp = static_cast<Vspi_master__Syms*>(userp);
    Vspi_master* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->spi_master__DOT__tx_data),8);
        tracep->fullCData(oldp+2,(vlTOPp->spi_master__DOT__rx_data),8);
        tracep->fullCData(oldp+3,(vlTOPp->spi_master__DOT__bit_count),4);
        tracep->fullCData(oldp+4,(vlTOPp->spi_master__DOT__clk_count),8);
        tracep->fullBit(oldp+5,(vlTOPp->spi_master__DOT__spi_clk_en));
        tracep->fullCData(oldp+6,(vlTOPp->spi_master__DOT__state),2);
        tracep->fullBit(oldp+7,(vlTOPp->clk));
        tracep->fullBit(oldp+8,(vlTOPp->rst_n));
        tracep->fullBit(oldp+9,(vlTOPp->start));
        tracep->fullCData(oldp+10,(vlTOPp->data_in),8);
        tracep->fullBit(oldp+11,(vlTOPp->miso));
        tracep->fullBit(oldp+12,(vlTOPp->sclk));
        tracep->fullBit(oldp+13,(vlTOPp->mosi));
        tracep->fullBit(oldp+14,(vlTOPp->cs_n));
        tracep->fullBit(oldp+15,(vlTOPp->busy));
        tracep->fullCData(oldp+16,(vlTOPp->data_out),8);
        tracep->fullCData(oldp+17,(((2U & (IData)(vlTOPp->spi_master__DOT__state))
                                     ? ((1U & (IData)(vlTOPp->spi_master__DOT__state))
                                         ? 0U : (((
                                                   (7U 
                                                    == (IData)(vlTOPp->spi_master__DOT__bit_count)) 
                                                   & (1U 
                                                      == (IData)(vlTOPp->spi_master__DOT__clk_count))) 
                                                  & (IData)(vlTOPp->sclk))
                                                  ? 3U
                                                  : 2U))
                                     : ((1U & (IData)(vlTOPp->spi_master__DOT__state))
                                         ? 2U : ((IData)(vlTOPp->start)
                                                  ? 1U
                                                  : 0U)))),2);
        tracep->fullIData(oldp+18,(0U),32);
        tracep->fullIData(oldp+19,(4U),32);
        tracep->fullCData(oldp+20,(0U),2);
        tracep->fullCData(oldp+21,(1U),2);
        tracep->fullCData(oldp+22,(2U),2);
        tracep->fullCData(oldp+23,(3U),2);
    }
}
