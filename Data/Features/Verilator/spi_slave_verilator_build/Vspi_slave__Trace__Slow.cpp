// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_slave__Syms.h"


//======================

void Vspi_slave::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vspi_slave::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vspi_slave::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vspi_slave::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vspi_slave::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+8,"clk", false,-1);
        tracep->declBit(c+9,"rst_n", false,-1);
        tracep->declBit(c+10,"sclk", false,-1);
        tracep->declBit(c+11,"cs_n", false,-1);
        tracep->declBit(c+12,"mosi", false,-1);
        tracep->declBus(c+13,"data_in", false,-1, 7,0);
        tracep->declBit(c+14,"miso", false,-1);
        tracep->declBit(c+15,"data_valid", false,-1);
        tracep->declBus(c+16,"data_out", false,-1, 7,0);
        tracep->declBit(c+8,"spi_slave clk", false,-1);
        tracep->declBit(c+9,"spi_slave rst_n", false,-1);
        tracep->declBit(c+10,"spi_slave sclk", false,-1);
        tracep->declBit(c+11,"spi_slave cs_n", false,-1);
        tracep->declBit(c+12,"spi_slave mosi", false,-1);
        tracep->declBus(c+13,"spi_slave data_in", false,-1, 7,0);
        tracep->declBit(c+14,"spi_slave miso", false,-1);
        tracep->declBit(c+15,"spi_slave data_valid", false,-1);
        tracep->declBus(c+16,"spi_slave data_out", false,-1, 7,0);
        tracep->declBus(c+17,"spi_slave CPOL", false,-1, 31,0);
        tracep->declBus(c+17,"spi_slave CPHA", false,-1, 31,0);
        tracep->declBus(c+1,"spi_slave rx_data", false,-1, 7,0);
        tracep->declBus(c+2,"spi_slave tx_data", false,-1, 7,0);
        tracep->declBus(c+3,"spi_slave bit_count", false,-1, 2,0);
        tracep->declBit(c+4,"spi_slave sclk_prev", false,-1);
        tracep->declBit(c+5,"spi_slave sclk_prev2", false,-1);
        tracep->declBit(c+6,"spi_slave sclk_rising_edge", false,-1);
        tracep->declBit(c+7,"spi_slave sclk_falling_edge", false,-1);
        tracep->declBit(c+6,"spi_slave sample_edge", false,-1);
        tracep->declBit(c+7,"spi_slave shift_edge", false,-1);
    }
}

void Vspi_slave::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vspi_slave::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vspi_slave::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vspi_slave__Syms* __restrict vlSymsp = static_cast<Vspi_slave__Syms*>(userp);
    Vspi_slave* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->spi_slave__DOT__rx_data),8);
        tracep->fullCData(oldp+2,(vlTOPp->spi_slave__DOT__tx_data),8);
        tracep->fullCData(oldp+3,(vlTOPp->spi_slave__DOT__bit_count),3);
        tracep->fullBit(oldp+4,(vlTOPp->spi_slave__DOT__sclk_prev));
        tracep->fullBit(oldp+5,(vlTOPp->spi_slave__DOT__sclk_prev2));
        tracep->fullBit(oldp+6,(((IData)(vlTOPp->spi_slave__DOT__sclk_prev) 
                                 & (~ (IData)(vlTOPp->spi_slave__DOT__sclk_prev2)))));
        tracep->fullBit(oldp+7,(((~ (IData)(vlTOPp->spi_slave__DOT__sclk_prev)) 
                                 & (IData)(vlTOPp->spi_slave__DOT__sclk_prev2))));
        tracep->fullBit(oldp+8,(vlTOPp->clk));
        tracep->fullBit(oldp+9,(vlTOPp->rst_n));
        tracep->fullBit(oldp+10,(vlTOPp->sclk));
        tracep->fullBit(oldp+11,(vlTOPp->cs_n));
        tracep->fullBit(oldp+12,(vlTOPp->mosi));
        tracep->fullCData(oldp+13,(vlTOPp->data_in),8);
        tracep->fullBit(oldp+14,(vlTOPp->miso));
        tracep->fullBit(oldp+15,(vlTOPp->data_valid));
        tracep->fullCData(oldp+16,(vlTOPp->data_out),8);
        tracep->fullIData(oldp+17,(0U),32);
    }
}
