/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: uart3_iomux_config.c

#include <asm/io.h>
#include "include/iomux_define.h"
#include "include/iomux_register.h"
#include <mach/boardid.h>

// Function to config iomux for instance uart3.
void uart3_iomux_config(void)
{
    // Config uart3.CTS to pad EPDC_BDR1(B18)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EPDC_BDR1(0x020E008C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EPDC_BDR1.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EPDC_BDR1.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: BDR[1] of instance: epdc.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: CMD of instance: usdhc4.
    //                NOTE: - Config Register IOMUXC_USDHC4_IPP_CMD_IN_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CTS of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: WEIM_CRE of instance: weim.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: UD of instance: spdc.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[6] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SDCE[8] of instance: epdc.
    __raw_writel((SION_DISABLED & 0x1) << 4 | (ALT2 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EPDC_BDR1);
    // Pad EPDC_BDR1 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT(0x020E0808)
    //   DAISY (1-0) Reset: SEL_ECSPI2_MISO_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: uart3,   In Pin: ipp_uart_rts_b
    //     SEL_ECSPI2_MISO_ALT2 (0) - Selecting Pad: ECSPI2_MISO for Mode: ALT2.
    //     SEL_ECSPI2_SS0_ALT2 (1) - Selecting Pad: ECSPI2_SS0 for Mode: ALT2.
    //     SEL_EPDC_BDR0_ALT2 (2) - Selecting Pad: EPDC_BDR0 for Mode: ALT2.
    //     SEL_EPDC_BDR1_ALT2 (3) - Selecting Pad: EPDC_BDR1 for Mode: ALT2.
    if(!lab126_board_is(BOARD_ID_WHISKY_WFO) &&
	    !lab126_board_is(BOARD_ID_WHISKY_WAN) &&
	    !lab126_board_is(BOARD_ID_WOODY))
        __raw_writel((SEL_ECSPI2_MISO_ALT2 & 0x3), IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EPDC_BDR1(0x020E037C)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: EPDC_BDR1.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EPDC_BDR1.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: EPDC_BDR1.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: EPDC_BDR1.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EPDC_BDR1.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EPDC_BDR1.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EPDC_BDR1.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EPDC_BDR1.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EPDC_BDR1.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    __raw_writel((LVE_ENABLED & 0x1) << 22 | (HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 |
           (PUE_PULL & 0x1) << 13 | (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 |
           (SPD_100MHZ & 0x3) << 6 | (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EPDC_BDR1);

    // Config uart3.RTS to pad EPDC_BDR0(C18)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EPDC_BDR0(0x020E0088)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EPDC_BDR0.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EPDC_BDR0.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: BDR[0] of instance: epdc.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: CLK of instance: usdhc4.
    //                NOTE: - Config Register IOMUXC_USDHC4_IPP_CARD_CLK_IN_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RTS of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: WEIM_A[26] of instance: weim.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: RL of instance: spdc.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[5] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SDCE[7] of instance: epdc.
    __raw_writel((SION_DISABLED & 0x1) << 4 | (ALT2 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EPDC_BDR0);
    // Pad EPDC_BDR0 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT(0x020E0808)
    //   DAISY (1-0) Reset: SEL_ECSPI2_MISO_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: uart3,   In Pin: ipp_uart_rts_b
    //     SEL_ECSPI2_MISO_ALT2 (0) - Selecting Pad: ECSPI2_MISO for Mode: ALT2.
    //     SEL_ECSPI2_SS0_ALT2 (1) - Selecting Pad: ECSPI2_SS0 for Mode: ALT2.
    //     SEL_EPDC_BDR0_ALT2 (2) - Selecting Pad: EPDC_BDR0 for Mode: ALT2.
    //     SEL_EPDC_BDR1_ALT2 (3) - Selecting Pad: EPDC_BDR1 for Mode: ALT2.
    if(lab126_board_is(BOARD_ID_WHISKY_WFO) ||
	    lab126_board_is(BOARD_ID_WHISKY_WAN) ||
	    lab126_board_is(BOARD_ID_WOODY)) {
        __raw_writel((SEL_EPDC_BDR0_ALT2 & 0x3), IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT);
    } else {
        __raw_writel((SEL_ECSPI2_MISO_ALT2 & 0x3), IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT);
    }
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EPDC_BDR0(0x020E0378)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: EPDC_BDR0.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EPDC_BDR0.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: EPDC_BDR0.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: EPDC_BDR0.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EPDC_BDR0.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EPDC_BDR0.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EPDC_BDR0.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EPDC_BDR0.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EPDC_BDR0.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    __raw_writel((LVE_ENABLED & 0x1) << 22 | (HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 |
           (PUE_PULL & 0x1) << 13 | (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 |
           (SPD_100MHZ & 0x3) << 6 | (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EPDC_BDR0);

    // Config uart3.RXD_MUX to pad EPDC_VCOM0(C7)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EPDC_VCOM0(0x020E0120)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EPDC_VCOM0.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EPDC_VCOM0.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: VCOM[0] of instance: epdc.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: AUD5_RXFS of instance: audmux.
    //                NOTE: - Config Register IOMUXC_AUDMUX_P5_INPUT_RXFS_AMX_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RXD_MUX of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: WEIM_A[24] of instance: weim.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: VCOM[0] of instance: spdc.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[3] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SDCE[5] of instance: epdc.
    __raw_writel((SION_DISABLED & 0x1) << 4 | (ALT2 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EPDC_VCOM0);
    // Pad EPDC_VCOM0 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT(0x020E080C)
    //   DAISY (2-0) Reset: SEL_AUD_RXC_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: uart3,   In Pin: ipp_uart_rxd_mux
    //     SEL_AUD_RXC_ALT2 (0) - Selecting Pad: AUD_RXC for Mode: ALT2.
    //     SEL_AUD_RXFS_ALT2 (1) - Selecting Pad: AUD_RXFS for Mode: ALT2.
    //     SEL_ECSPI2_MOSI_ALT2 (2) - Selecting Pad: ECSPI2_MOSI for Mode: ALT2.
    //     SEL_ECSPI2_SCLK_ALT2 (3) - Selecting Pad: ECSPI2_SCLK for Mode: ALT2.
    //     SEL_EPDC_VCOM0_ALT2 (4) - Selecting Pad: EPDC_VCOM0 for Mode: ALT2.
    //     SEL_EPDC_VCOM1_ALT2 (5) - Selecting Pad: EPDC_VCOM1 for Mode: ALT2.
    if(lab126_board_is(BOARD_ID_WHISKY_WFO) ||
	    lab126_board_is(BOARD_ID_WHISKY_WAN) ||
	    lab126_board_is(BOARD_ID_WOODY)) {
        __raw_writel((SEL_EPDC_VCOM0_ALT2 & 0x7), IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT);
    } else {
        __raw_writel((SEL_AUD_RXC_ALT2 & 0x7), IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT);
    }
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EPDC_VCOM0(0x020E0410)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: EPDC_VCOM0.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EPDC_VCOM0.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: EPDC_VCOM0.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: EPDC_VCOM0.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EPDC_VCOM0.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EPDC_VCOM0.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EPDC_VCOM0.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EPDC_VCOM0.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EPDC_VCOM0.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    __raw_writel((LVE_ENABLED & 0x1) << 22 | (HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 |
           (PUE_PULL & 0x1) << 13 | (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 |
           (SPD_100MHZ & 0x3) << 6 | (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EPDC_VCOM0);

    // Config uart3.TXD_MUX to pad EPDC_VCOM1(D7)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EPDC_VCOM1(0x020E0124)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EPDC_VCOM1.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EPDC_VCOM1.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: VCOM[1] of instance: epdc.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: AUD5_RXD of instance: audmux.
    //                NOTE: - Config Register IOMUXC_AUDMUX_P5_INPUT_DA_AMX_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: TXD_MUX of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: WEIM_A[25] of instance: weim.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: VCOM[1] of instance: spdc.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[4] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SDCE[6] of instance: epdc.
    __raw_writel((SION_DISABLED & 0x1) << 4 | (ALT2 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EPDC_VCOM1);
    // Pad EPDC_VCOM1 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT(0x020E080C)
    //   DAISY (2-0) Reset: SEL_AUD_RXC_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: uart3,   In Pin: ipp_uart_rxd_mux
    //     SEL_AUD_RXC_ALT2 (0) - Selecting Pad: AUD_RXC for Mode: ALT2.
    //     SEL_AUD_RXFS_ALT2 (1) - Selecting Pad: AUD_RXFS for Mode: ALT2.
    //     SEL_ECSPI2_MOSI_ALT2 (2) - Selecting Pad: ECSPI2_MOSI for Mode: ALT2.
    //     SEL_ECSPI2_SCLK_ALT2 (3) - Selecting Pad: ECSPI2_SCLK for Mode: ALT2.
    //     SEL_EPDC_VCOM0_ALT2 (4) - Selecting Pad: EPDC_VCOM0 for Mode: ALT2.
    //     SEL_EPDC_VCOM1_ALT2 (5) - Selecting Pad: EPDC_VCOM1 for Mode: ALT2.
    if(!lab126_board_is(BOARD_ID_WHISKY_WFO) &&
	    !lab126_board_is(BOARD_ID_WHISKY_WAN) &&
	    !lab126_board_is(BOARD_ID_WOODY))
        __raw_writel((SEL_AUD_RXC_ALT2 & 0x7), IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT);
    
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EPDC_VCOM1(0x020E0414)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: EPDC_VCOM1.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EPDC_VCOM1.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: EPDC_VCOM1.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: EPDC_VCOM1.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EPDC_VCOM1.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EPDC_VCOM1.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EPDC_VCOM1.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EPDC_VCOM1.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EPDC_VCOM1.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    __raw_writel((LVE_ENABLED & 0x1) << 22 | (HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PD & 0x3) << 14 |
           (PUE_PULL & 0x1) << 13 | (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 |
           (SPD_100MHZ & 0x3) << 6 | (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EPDC_VCOM1);
}
