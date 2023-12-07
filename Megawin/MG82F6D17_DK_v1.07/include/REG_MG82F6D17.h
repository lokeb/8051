/**
 ******************************************************************************
 *
 * @file        REG_MG82F6D17.H
 *
 * @brief       This is the header file of the SFR address.
 *
 * @par         Project
 *              MG82F6D17
 * @version     v2.00
 * @date        2022/02/15
 * @copyright   Copyright (c) 2019 MegaWin Technology Co., Ltd.
 *              All rights reserved.
 *
 ******************************************************************************
 * @par         Disclaimer
 *      The Demo software is provided "AS IF"  without any warranty, either
 *      expressed or implied, including, but not limited to, the implied warranties
 *      of merchantability and fitness for a particular purpose.  The author will
 *      not be liable for any special, incidental, consequential or indirect
 *      damages due to loss of data or any other reason.
 *      These statements agree with the world wide and local dictated laws about
 *      authorship and violence against these laws.
 ******************************************************************************
 @if HIDE
 Modify History:
 * #2.00_Blake_20220215
 * >> Add SFR description
 @endif
 ******************************************************************************
 * @internal
 * @sign
 * @endinternal
 */

#ifndef __REG_MG82F6D17_H
#define __REG_MG82F6D17_H

#define GF_7         0x80
#define GF_6         0x40
#define GF_5         0x20
#define GF_4         0x10
#define GF_3         0x08
#define GF_2         0x04
#define GF_1         0x02
#define GF_0         0x01

__sfr __at 0x81 SP;     //Stack Pointer

__sfr __at 0x82 DPL;     //Data Pointer Low

__sfr __at 0x83 DPH;     //Data Pointer High

__sfr __at 0x84 SPSTAT;     //SPI Status Register
// (bits in SPSTAT)
#define SPIF                 0x80
#define WCOL                 0x40
#define THRF                 0x20
#define SPIBSY               0x10
#define MODF                 0x08
#define SPR2                 0x01

__sfr __at 0x85 SPCON;     //SPI Control Register
// (bits in SPCON)
#define SSIG                 0x80
#define SPEN                 0x40
#define DORD                 0x20
#define MSTR                 0x10
#define CPOL                 0x08
#define CPHA                 0x04
#define SPR1                 0x02
#define SPR0                 0x01

__sfr __at 0x86 SPDAT;     //SPI Data Register

__sfr __at 0x87 PCON0;     //Power Control 0
// (bits in PCON0)
#define SMOD1                0x80
#define SMOD0                0x40
#define POF0                 0x10
#define PD                   0x02
#define IDL                  0x01

__sfr __at 0x88 TCON;     //Timer Control
// (bits in TCON)
__sbit __at TCON^7 TF1;
__sbit __at TCON^6 TR1;
__sbit __at TCON^5 TF0;
__sbit __at TCON^4 TR0;
__sbit __at TCON^3 IE1;
__sbit __at TCON^2 IT1;
__sbit __at TCON^1 IE0;
__sbit __at TCON^0 IT0;

__sfr __at 0x89 TMOD;     //Timer Mode
// (bits in TMOD)
#define T1GATE               0x80
#define T1C_T                0x40
#define T1M1                 0x20
#define T1M0                 0x10
#define T0GATE               0x08
#define T0C_T                0x04
#define T0M1                 0x02
#define T0M0                 0x01

__sfr __at 0x8A TL0;     //Timer Low 0

__sfr __at 0x8B TL1;     //Timer Low 1

__sfr __at 0x8C TH0;     //Timer High 0

__sfr __at 0x8D TH1;     //Timer High 1

__sfr __at 0x8E SFIE;     //System Flag INT En.
// (bits in SFIE)
#define SIDFIE               0x80
#define RTCFIE               0x10
#define BOF1IE               0x04
#define BOF0IE               0x02
#define WDTFIE               0x01

__sfr __at 0x8F XRPS;     //XRAM Page Select

__sfr __at 0x90 P1;     //Port 1
// (bits in P1)
__sbit __at P1^7 P17;
__sbit __at P1^6 P16;
__sbit __at P1^5 P15;
__sbit __at P1^1 P11;
__sbit __at P1^0 P10;

__sfr __at 0x91 P1M0;     //P1 Mode Register 0
// (bits in P1M0)
#define P1M07                0x80
#define P1M06                0x40
#define P1M05                0x20
#define P1M01                0x02
#define P1M00                0x01

__sfr __at 0x92 P1M1;     //P1 Mode Register 1
// (bits in P1M1)
#define P1M17                0x80
#define P1M16                0x40
#define P1M15                0x20
#define P1M11                0x02
#define P1M10                0x01

__sfr __at 0x92 P2M1;     //P2 Mode Register 1
// (bits in P2M1)
#define P2M14                0x10
#define P2M12                0x04

__sfr __at 0x92 P4M1;     //P4 Mode Register 1
// (bits in P4M1)
#define P4M17                0x80
#define P4M15                0x20
#define P4M14                0x10

__sfr __at 0x92 P6M1;     //P6 Mode Register 1
// (bits in P6M1)
#define P6M11                0x02
#define P6M10                0x01

__sfr __at 0x92 P3FDC;     //P3 Fast Drv. Ctrl.

__sfr __at 0x92 P1FDC;     //P1 Fast Drv. Ctrl.

__sfr __at 0x92 P2FDC;     //P2 Fast Drv. Ctrl.

__sfr __at 0x92 P4FDC;     //P4 Fast Drv. Ctrl.

__sfr __at 0x93 T2MOD1;     //Timer2 mode 1 Reg.
// (bits in T2MOD1)
#define TL2CS                0x80
#define TF2IG                0x40
#define TL2IS                0x20
#define T2CKS                0x10
#define T2MS1                0x08
#define CP2S2                0x04
#define CP2S1                0x02
#define CP2S0                0x01

__sfr __at 0x93 T3MOD1;     //Timer3 mode 1 Reg.
// (bits in T3MOD1)
#define TL3CS                0x80
#define TF3IG                0x40
#define T3CKS                0x10
#define T3MS1                0x08
#define CP3S2                0x04
#define CP3S1                0x02
#define CP3S0                0x01

__sfr __at 0x94 DMACR0;     //DMA Control Reg. 0
// (bits in DMACR0)
#define DMAE0                0x08
#define DMAS0                0x04
#define DIE0                 0x02
#define DCF0                 0x01

__sfr __at 0x94 DMACG0;     //DMA Configured Reg. 0
// (bits in DMACG0)
#define PDMAH                0x80
#define PDMAL                0x40
#define CRCW0                0x20
#define EXTS10               0x08
#define EXTS00               0x04
#define FAEN0                0x02
#define LOOP0                0x01

__sfr __at 0x94 DMADS0;     //DMA Channel Selection 0
// (bits in DMADS0)
#define DSS30                0x80
#define DSS20                0x40
#define DSS10                0x20
#define DSS00                0x10
#define DDS30                0x08
#define DDS20                0x04
#define DDS10                0x02
#define DDS00                0x01

__sfr __at 0x95 P2M0;     //P2 Mode Register 0
// (bits in P2M0)
#define P2M04                0x10
#define P2M02                0x04

__sfr __at 0x95 TREN0;     //Timer Run Enable Register 0
// (bits in TREN0)
#define TR3LE                0x40
#define TR2LE                0x20
#define TR3E                 0x08
#define TR2E                 0x04
#define TR1E                 0x02
#define TR0E                 0x01

__sfr __at 0x95 TRLC0;     //Timer Reload Control Register 0
// (bits in TRLC0)
#define TL3RLC               0x40
#define TL2RLC               0x20
#define T3RLC                0x08
#define T2RLC                0x04
#define T1RLC                0x02
#define T0RLC                0x01

__sfr __at 0x95 TSPC0;     //Timer Stop Control Register 0
// (bits in TSPC0)
#define TL3SC                0x40
#define TL2SC                0x20
#define T3SC                 0x08
#define T2SC                 0x04
#define T1SC                 0x02
#define T0SC                 0x01

__sfr __at 0x96 BOREV;     //Bit Order Reversed

__sfr __at 0x97 PCON1;     //Power Control 1
// (bits in PCON1)
#define SWRF                 0x80
#define EXRF                 0x40
#define RTCF                 0x10
#define BOF1                 0x04
#define BOF0                 0x02
#define WDTF                 0x01

__sfr __at 0x98 S0CON;     //Serial 0 Control
// (bits in S0CON)
__sbit __at S0CON^7 SM00_FE;
__sbit __at S0CON^6 SM10;
__sbit __at S0CON^5 SM20;
__sbit __at S0CON^4 REN0;
__sbit __at S0CON^3 TB80;
__sbit __at S0CON^2 RB80;
__sbit __at S0CON^1 TI0;
__sbit __at S0CON^0 RI0;

__sfr __at 0x98 S1CON;     //Serial 1 Control
// (bits in S1CON)
__sbit __at S1CON^7 SM01;
__sbit __at S1CON^6 SM11;
__sbit __at S1CON^5 SM21;
__sbit __at S1CON^4 REN1;
__sbit __at S1CON^3 TB81;
__sbit __at S1CON^2 RB81;
__sbit __at S1CON^1 TI1;
__sbit __at S1CON^0 RI1;

__sfr __at 0x99 S0BUF;     //Serial 0 Buffer

__sfr __at 0x99 S1BUF;     //Serial 1 Buffer

__sfr __at 0x9A S0BRT;     //S0 Baud-Rate Timer

__sfr __at 0x9A S1BRT;     //S1 Baud-Rate Timer

__sfr __at 0x9B S0BRC;     //S0 Baud-Rate Counter

__sfr __at 0x9B S1BRC;     //S1 Baud-Rate Counter

__sfr __at 0x9C S0CFG;     //S0 Configuration
// (bits in S0CFG)
#define URTS                 0x80
#define SMOD2                0x40
#define URM0X3               0x20
#define SM30                 0x10
#define S0DOR                0x08
#define BTI                  0x04
#define UTIE                 0x02
#define SMOD3                0x01

__sfr __at 0x9C S1CFG;     //S1 Configuration
// (bits in S1CFG)
#define SM31                 0x80
#define S1M0X3               0x40
#define S1DOR                0x20
#define S1TR                 0x10
#define S1MOD1               0x08
#define S1TX12               0x04
#define S1CKOE               0x02
#define S1TME                0x01

__sfr __at 0x9D S0CFG1;     //S0 Configuration 1
// (bits in S0CFG1)
#define SBF0                 0x80
#define TXER0                0x40
#define S0SB16               0x20
#define ATBR0                0x10
#define TXRX0                0x08
#define SYNC0                0x04

__sfr __at 0xA0 P2;     //Port 2
// (bits in P2)
__sbit __at P2^4 P24;
__sbit __at P2^2 P22;

__sfr __at 0xA1 AUXR0;     //Auxiliary Register 0
// (bits in AUXR0)
#define P60OC1               0x80
#define P60OC0               0x40
#define P60FD                0x20
#define PBKF                 0x10
#define INT1H                0x02
#define INT0H                0x01

__sfr __at 0xA2 AUXR1;     //Auxiliary Register 1
// (bits in AUXR1)
#define CRCDS1               0x20
#define CRCDS0               0x10
#define DPS                  0x01

__sfr __at 0xA3 AUXR2;     //Auxiliary Register 2
// (bits in AUXR2)
#define STAF                 0x80
#define STOF                 0x40
#define C0PLK                0x10
#define T1X12                0x08
#define T0X12                0x04
#define T1CKOE               0x02
#define T0CKOE               0x01

__sfr __at 0xA4 AUXR3;     //Auxiliary Register 3
// (bits in AUXR3)
#define T0PS1                0x80
#define T0PS0                0x40
#define BPOC1                0x20
#define BPOC0                0x10
#define S0PS0                0x08
#define TWIPS1               0x04
#define TWIPS0               0x02
#define T0XL                 0x01

__sfr __at 0xA4 AUXR4;     //Auxiliary Register 4
// (bits in AUXR4)
#define T2PS1                0x80
#define T2PS0                0x40
#define T1PS1                0x20
#define T1PS0                0x10

__sfr __at 0xA4 AUXR5;     //Auxiliary Register 5
// (bits in AUXR5)
#define C0IC4S0              0x80
#define C0IC2S0              0x40
#define C0PPS1               0x20
#define C0PPS0               0x10
#define C0PS0                0x04
#define ECIPS0               0x02
#define C0COPS               0x01

__sfr __at 0xA4 AUXR6;     //Auxiliary Register 6
// (bits in AUXR6)
#define KBI4PS1              0x80
#define KBI4PS0              0x40
#define KBI6PS0              0x20
#define KBI2PS0              0x10
#define SnMIPS               0x02
#define S0COPS               0x01

__sfr __at 0xA4 AUXR7;     //Auxiliary Register 7
// (bits in AUXR7)
#define POE5                 0x80
#define POE4                 0x40
#define C0CKOE               0x20
#define SPI0M0               0x10

__sfr __at 0xA4 AUXR8;     //Auxiliary Register 8
// (bits in AUXR8)
#define POE7                 0x80
#define POE6                 0x40
#define C0PPS2               0x20
#define KBI0PS0              0x08
#define S1COPS               0x04

__sfr __at 0xA4 AUXR9;     //Auxiliary Register 9
// (bits in AUXR9)
#define T1G1                 0x20
#define T0G1                 0x10
#define C0FDC1               0x08
#define C0FDC0               0x04
#define S1PS1                0x02
#define S1PS0                0x01

__sfr __at 0xA4 AUXR10;     //Aux. Register 10
// (bits in AUXR10)
#define SPIPS0               0x10
#define S0PS1                0x08
#define TWICF                0x02
#define PAA                  0x01

__sfr __at 0xA4 AUXR11;     //Aux. Register 11
// (bits in AUXR11)
#define P30AM                0x80
#define C0M0                 0x02
#define C0OFS                0x01

__sfr __at 0xA5 EIE2;     //Extended INT Enable 2
// (bits in EIE2)
#define ET3                  0x01

__sfr __at 0xA6 EIP2L;     //Ext. INT Priority 2 Low
// (bits in EIP2L)
#define PT3L                 0x01

__sfr __at 0xA7 EIP2H;     //Ext. INT Priority 2 High
// (bits in EIP2H)
#define PT3H                 0x01

__sfr __at 0xA8 IE;     //Interrupt Enable
// (bits in IE)
__sbit __at IE^7 EA;
__sbit __at IE^6 EDMA;
__sbit __at IE^5 ET2;
__sbit __at IE^4 ES0;
__sbit __at IE^3 ET1;
__sbit __at IE^2 EX1;
__sbit __at IE^1 ET0;
__sbit __at IE^0 EX0;

__sfr __at 0xA9 SADDR;     //Slave Address

__sfr __at 0xAC SFRPI;     //SFR Page Index
// (bits in SFRPI)
#define IDX3                 0x08
#define IDX2                 0x04
#define IDX1                 0x02
#define IDX0                 0x01

__sfr __at 0xAD EIE1;     //Extended INT Enable 1
// (bits in EIE1)
#define ETWI0                0x40
#define EKB                  0x20
#define ES1                  0x10
#define ESF                  0x08
#define EPCA                 0x04
#define EADC                 0x02
#define ESPI                 0x01

__sfr __at 0xAE EIP1L;     //Ext. INT Priority 1 Low
// (bits in EIP1L)
#define PTWI0L               0x40
#define PKBL                 0x20
#define PS1L                 0x10
#define PSFL                 0x08
#define PPCAL                0x04
#define PADCL                0x02
#define PSPIL                0x01

__sfr __at 0xAF EIP1H;     //Ext. INT Priority 1 High
// (bits in EIP1H)
#define PTWI0H               0x40
#define PKBH                 0x20
#define PS1H                 0x10
#define PSFH                 0x08
#define PPCAH                0x04
#define PADCH                0x02
#define PSPIH                0x01

__sfr __at 0xB0 P3;     //Port 3
// (bits in P3)
__sbit __at P3^5 P35;
__sbit __at P3^4 P34;
__sbit __at P3^3 P33;
__sbit __at P3^1 P31;
__sbit __at P3^0 P30;

__sfr __at 0xB1 P3M0;     //P3 Mode Register 0
// (bits in P3M0)
#define P3M05                0x20
#define P3M04                0x10
#define P3M03                0x08
#define P3M01                0x02
#define P3M00                0x01

__sfr __at 0xB2 P3M1;     //P3 Mode Register 1
// (bits in P3M1)
#define P3M15                0x20
#define P3M14                0x10
#define P3M13                0x08
#define P3M11                0x02
#define P3M10                0x01

__sfr __at 0xB3 P4M0;     //P4 Mode Register 0
// (bits in P4M0)
#define P4M07                0x80
#define P4M05                0x20
#define P4M04                0x10

__sfr __at 0xB4 PDRVC0;     //Port Driving Control 0
// (bits in PDRVC0)
#define P3DC1                0x80
#define P3DC0                0x40
#define P2DC1                0x20
#define P2DC0                0x10
#define P1DC1                0x08
#define P1DC0                0x04

__sfr __at 0xB4 PDRVC1;     //Port Driving Control 1
// (bits in PDRVC1)
#define P4DC1                0x02

__sfr __at 0xB5 P6M0;     //P6 Mode Register 0
// (bits in P6M0)
#define P6M01                0x02
#define P6M00                0x01

__sfr __at 0xB6 RTCTM;     //RTC Timer Register
// (bits in RTCTM)
#define RTCCS1               0x80
#define RTCCS0               0x40
#define RTCCT5               0x20
#define RTCCT4               0x10
#define RTCCT3               0x08
#define RTCCT2               0x04
#define RTCCT1               0x02
#define RTCCT0               0x01

__sfr __at 0xB7 IP0H;     //Interrupt Priority 0 High
// (bits in IP0H)
#define PX2H                 0x40
#define PT2H                 0x20
#define PSH                  0x10
#define PT1H                 0x08
#define PX1H                 0x04
#define PT0H                 0x02
#define PX0H                 0x01

__sfr __at 0xB8 IP0L;     //Interrupt Priority Low
// (bits in IP0L)
__sbit __at IP0L^6 PX2L;
__sbit __at IP0L^5 PT2L;
__sbit __at IP0L^4 PSL;
__sbit __at IP0L^3 PT1L;
__sbit __at IP0L^2 PX1L;
__sbit __at IP0L^1 PT0L;
__sbit __at IP0L^0 PX0L;

__sfr __at 0xB9 SADEN;     //Slave Address Mask

__sfr __at 0xB9 S0CR1;     //S0 Control 1
// (bits in S0CR1)
#define S0TR                 0x80
#define S0TX12               0x40
#define S0TCK                0x20
#define S0RCK                0x10
#define S0CKOE               0x08
#define ARTE                 0x04

__sfr __at 0xBC PWMCR;     //PWM Control Reg.
// (bits in PWMCR)
#define PCAE                 0x80
#define EXDT                 0x40
#define PBKM                 0x20
#define PBKE11               0x10
#define PBKE10               0x08
#define PBKE02               0x04
#define PBKE01               0x02
#define PBKE00               0x01

__sfr __at 0xBC PDTCRA;     //PWM Dead-Time Control Reg. -A
// (bits in PDTCRA)
#define DTPS1                0x80
#define DTPS0                0x40
#define DT5                  0x20
#define DT4                  0x10
#define DT3                  0x08
#define DT2                  0x04
#define DT1                  0x02
#define DT0                  0x01

__sfr __at 0xBD CRC0DA;     //CRC0 Data Port

__sfr __at 0xBE RTCCR;     //RTC Control Reg.
// (bits in RTCCR)
#define RTCE                 0x80
#define RTCO                 0x40
#define RTCRL5               0x20
#define RTCRL4               0x10
#define RTCRL3               0x08
#define RTCRL2               0x04
#define RTCRL1               0x02
#define RTCRL0               0x01

__sfr __at 0xBF CKCON1;     //Clock Control 1

__sfr __at 0xC0 XICON;     //External INT Control
// (bits in XICON)
__sbit __at XICON^3 INT2H;
__sbit __at XICON^2 EX2;
__sbit __at XICON^1 IE2;
__sbit __at XICON^0 IT2;

__sfr __at 0xC1 XICFG;     //Ext. INT. Configured
// (bits in XICFG)
#define INT1IS1              0x80
#define INT1IS0              0x40
#define INT0IS1              0x20
#define INT0IS0              0x10
#define X2FLT                0x04
#define X1FLT                0x02
#define X0FLT                0x01

__sfr __at 0xC1 XICFG1;     //Ext. INT. Configured 1
// (bits in XICFG1)
#define INT1IS2              0x80
#define INT0IS2              0x40
#define INT2IS1              0x20
#define INT2IS0              0x10
#define X2FLT1               0x04
#define X1FLT1               0x02
#define X0FLT1               0x01

__sfr __at 0xC3 ADCFG0;     //ADC Configuration 0
// (bits in ADCFG0)
#define ADCKS2               0x80
#define ADCKS1               0x40
#define ADCKS0               0x20
#define ADRJ                 0x10
#define ACHS                 0x08
#define SMPF                 0x04
#define ADTM1                0x02
#define ADTM0                0x01

__sfr __at 0xC3 ADCFG1;     //ADC Configuration 1
// (bits in ADCFG1)
#define IGADCI               0x80
#define EADCWI               0x40
#define SMPFIE               0x20
#define SIGN                 0x10
#define AOS3                 0x08
#define AOS2                 0x04
#define AOS1                 0x02
#define AOS0                 0x01

__sfr __at 0xC3 ADCFG2;     //ADC Configuration 2
// (bits in ADCFG2)
#define SHT7                 0x80
#define SHT6                 0x40
#define SHT5                 0x20
#define SHT4                 0x10
#define SHT3                 0x08
#define SHT2                 0x04
#define SHT1                 0x02
#define SHT0                 0x01

__sfr __at 0xC3 ADCFG3;     //ADC Configuration 3
// (bits in ADCFG3)
#define ADPS1                0x80
#define ADPS0                0x40
#define ARES1                0x08
#define ARES0                0x04
#define ADES0                0x02

__sfr __at 0xC3 ADCFG4;     //ADC Configuration 4
// (bits in ADCFG4)
#define ADWM0                0x40
#define ADTM3                0x20
#define ADTM2                0x10
#define DBSD                 0x02

__sfr __at 0xC3 ADCFG5;     //ADC Configuration 5
// (bits in ADCFG5)
#define ASCE7                0x80
#define ASCE6                0x40
#define ASCE5                0x20
#define ASCE4                0x10
#define ASCE3                0x08
#define ASCE2                0x04
#define ASCE1                0x02
#define ASCE0                0x01

__sfr __at 0xC3 ADCFG11;     //ADC Configuration 11
// (bits in ADCFG11)
#define WHB3                 0x80
#define WHB2                 0x40
#define WHB1                 0x20
#define WHB0                 0x10

__sfr __at 0xC3 ADCFG12;     //ADC Configuration 12
// (bits in ADCFG12)
#define WHB11                0x80
#define WHB10                0x40
#define WHB9                 0x20
#define WHB8                 0x10
#define WHB7                 0x08
#define WHB6                 0x04
#define WHB5                 0x02
#define WHB4                 0x01

__sfr __at 0xC3 ADCFG13;     //ADC Configuration 13
// (bits in ADCFG13)
#define WLB3                 0x80
#define WLB2                 0x40
#define WLB1                 0x20
#define WLB0                 0x10

__sfr __at 0xC3 ADCFG14;     //ADC Configuration 14
// (bits in ADCFG14)
#define WLB11                0x80
#define WLB10                0x40
#define WLB9                 0x20
#define WLB8                 0x10
#define WLB7                 0x08
#define WLB6                 0x04
#define WLB5                 0x02
#define WLB4                 0x01

__sfr __at 0xC4 ADCON0;     //ADC Control 0
// (bits in ADCON0)
#define ADCEN                0x80
#define ADCWI                0x40
#define CHS3                 0x20
#define ADCI                 0x10
#define ADCS                 0x08
#define CHS2                 0x04
#define CHS1                 0x02
#define CHS0                 0x01

__sfr __at 0xC5 ADCDL;     //ADC Data Low
// (bits in ADCDL)
#define ADCV3                0x80
#define ADCV2                0x40
#define ADCV1                0x20
#define ADCV0                0x10

__sfr __at 0xC6 ADCDH;     //ADC Data High
// (bits in ADCDH)
#define ADCV11               0x80
#define ADCV10               0x40
#define ADCV9                0x20
#define ADCV8                0x10
#define ADCV7                0x08
#define ADCV6                0x04
#define ADCV5                0x02
#define ADCV4                0x01

__sfr __at 0xC7 CKCON0;     //Clock Control 0
// (bits in CKCON0)
#define AFS                  0x80
#define ENCKM                0x40
#define CKMIS1               0x20
#define CKMIS0               0x10
#define CCKS                 0x08
#define SCKS2                0x04
#define SCKS1                0x02
#define SCKS0                0x01

__sfr __at 0xC8 T2CON;     //Timer 2 Control Reg.
// (bits in T2CON)
__sbit __at T2CON^7 TF2;
__sbit __at T2CON^6 EXF2;
__sbit __at T2CON^5 RCLK_TF2L;
__sbit __at T2CON^4 TCLK_TL2IE;
__sbit __at T2CON^3 EXEN2;
__sbit __at T2CON^2 TR2;
__sbit __at T2CON^1 C_T2;
__sbit __at T2CON^0 CP_RL2;

__sfr __at 0xC8 T3CON;     //Timer 3 Control Reg.
// (bits in T3CON)
__sbit __at T3CON^7 TF3;
__sbit __at T3CON^6 EXF3;
__sbit __at T3CON^5 TF3L;
__sbit __at T3CON^4 TL3IE;
__sbit __at T3CON^3 EXEN3;
__sbit __at T3CON^2 TR3;
__sbit __at T3CON^1 C_T3;
__sbit __at T3CON^0 CP_RL3;

__sfr __at 0xC8 T5CON;     //Timer 5 Control Reg.
// (bits in T5CON)
__sbit __at T5CON^7 TF5;
__sbit __at T5CON^5 T5CKS1;
__sbit __at T5CON^4 T5CKS0;
__sbit __at T5CON^3 T5IE;
__sbit __at T5CON^2 TR5;
__sbit __at T5CON^1 T5GAT1;
__sbit __at T5CON^0 T5GAT0;

__sfr __at 0xC8 T6CON;     //Timer 6 Control Reg.
// (bits in T6CON)
__sbit __at T6CON^7 TF6;
__sbit __at T6CON^5 T6CKS1;
__sbit __at T6CON^4 T6CKS0;
__sbit __at T6CON^3 T6IE;
__sbit __at T6CON^2 TR6;
__sbit __at T6CON^1 T6GAT1;
__sbit __at T6CON^0 T6GAT0;

__sfr __at 0xC9 T2MOD;     //Timer 2 mode Reg.
// (bits in T2MOD)
#define T2SPL                0x80
#define TL2X12               0x40
#define T2EXH                0x20
#define T2X12                0x10
#define TR2L                 0x08
#define TR2LC                0x04
#define T2OE                 0x02
#define T2MS0                0x01

__sfr __at 0xC9 T3MOD;     //Timer 3 mode Reg.
// (bits in T3MOD)
#define T3SPL                0x80
#define TL3X12               0x40
#define T3EXH                0x20
#define T3X12                0x10
#define TR3L                 0x08
#define TR3LC                0x04
#define T3OE                 0x02
#define T3MS0                0x01

__sfr __at 0xCA RCAP2L;     //Timer2 Capture Low

__sfr __at 0xCA RCAP3L;     //Timer3 Capture Low

__sfr __at 0xCA TLR5;     //TL5 reload Reg.

__sfr __at 0xCA TLR6;     //TL6 reload Reg.

__sfr __at 0xCB RCAP2H;     //Timer2 Capture High

__sfr __at 0xCB RCAP3H;     //Timer3 Capture High

__sfr __at 0xCB THR5;     //TH5 reload Reg.

__sfr __at 0xCB THR6;     //TH6 reload Reg.

__sfr __at 0xCC TL2;     //Timer Low 2

__sfr __at 0xCC TL3;     //Timer Low 3

__sfr __at 0xCC TL5;     //Timer Low 5

__sfr __at 0xCC TL6;     //Timer Low 6

__sfr __at 0xCD TH2;     //Timer High 2

__sfr __at 0xCD TH3;     //Timer High 3

__sfr __at 0xCD TH5;     //Timer High 5

__sfr __at 0xCD TH6;     //Timer High 6

__sfr __at 0xCE CLRL;     //CL Reload register

__sfr __at 0xCF CHRL;     //CH Reload register

__sfr __at 0xD0 PSW;     //Program Status Word
// (bits in PSW)
__sbit __at PSW^7 CY;
__sbit __at PSW^6 AC;
__sbit __at PSW^5 F0;
__sbit __at PSW^4 RS1;
__sbit __at PSW^3 RS0;
__sbit __at PSW^2 OV;
__sbit __at PSW^1 F1;
__sbit __at PSW^0 P;

__sfr __at 0xD1 SIADR;     //TWI0 Address Reg.
// (bits in SIADR)
#define GC                   0x01

__sfr __at 0xD2 SIDAT;     //TWI0 Data Reg.

__sfr __at 0xD3 SISTA;     //TWI0 Status Reg.

__sfr __at 0xD4 SICON;     //TWI0 Control Reg.
// (bits in SICON)
#define CR2                  0x80
#define ENSI                 0x40
#define STA                  0x20
#define STO                  0x10
#define SI                   0x08
#define AA                   0x04
#define CR1                  0x02
#define CR0                  0x01

__sfr __at 0xD5 KBPATN;     //Keypad Pattern

__sfr __at 0xD6 KBCON;     //Keypad Control
// (bits in KBCON)
#define KBCS1                0x80
#define KBCS0                0x40
#define KBES                 0x20
#define PATN_SEL             0x02
#define KBIF                 0x01

__sfr __at 0xD7 KBMASK;     //Keypad Int. Mask

__sfr __at 0xD8 CCON;     //PCA Control Reg.
// (bits in CCON)
__sbit __at CCON^7 CF;
__sbit __at CCON^6 CR;
__sbit __at CCON^5 CCF5;
__sbit __at CCON^4 CCF4;
__sbit __at CCON^3 CCF3;
__sbit __at CCON^2 CCF2;
__sbit __at CCON^1 CCF1;
__sbit __at CCON^0 CCF0;

__sfr __at 0xD9 CMOD;     //PCA Mode Reg.
// (bits in CMOD)
#define CIDL                 0x80
#define BME4                 0x40
#define BME2                 0x20
#define BME0                 0x10
#define CPS2                 0x08
#define CPS1                 0x04
#define CPS0                 0x02
#define ECF                  0x01

__sfr __at 0xDA CCAPM0;     //PCA Module0 Mode
// (bits in CCAPM0)
#define DTE0                 0x80
#define ECOM0                0x40
#define CAPP0                0x20
#define CAPN0                0x10
#define MAT0                 0x08
#define TOG0                 0x04
#define PWM0                 0x02
#define ECCF0                0x01

__sfr __at 0xDA CCAPM6;     //PCA Module6 Mode
// (bits in CCAPM6)
#define BME6                 0x80
#define ECOM6                0x40
#define CAPN6                0x10
#define MAT6                 0x08
#define TOG6                 0x04
#define PWM6                 0x02
#define ECCF6                0x01

__sfr __at 0xDB CCAPM1;     //PCA Module1 Mode
// (bits in CCAPM1)
#define ECOM1                0x40
#define CAPP1                0x20
#define CAPN1                0x10
#define MAT1                 0x08
#define TOG1                 0x04
#define PWM1                 0x02
#define ECCF1                0x01

__sfr __at 0xDB CCAPM7;     //PCA Module7 Mode
// (bits in CCAPM7)
#define ECOM7                0x40
#define CAPN7                0x10
#define MAT7                 0x08
#define TOG7                 0x04
#define PWM7                 0x02
#define ECCF7                0x01

__sfr __at 0xDC CCAPM2;     //PCA Module2 Mode
// (bits in CCAPM2)
#define DTE2                 0x80
#define ECOM2                0x40
#define CAPP2                0x20
#define CAPN2                0x10
#define MAT2                 0x08
#define TOG2                 0x04
#define PWM2                 0x02
#define ECCF2                0x01

__sfr __at 0xDD CCAPM3;     //PCA Module3 Mode
// (bits in CCAPM3)
#define ECOM3                0x40
#define CAPP3                0x20
#define CAPN3                0x10
#define MAT3                 0x08
#define TOG3                 0x04
#define PWM3                 0x02
#define ECCF3                0x01

__sfr __at 0xDE CCAPM4;     //PCA Module4 Mode
// (bits in CCAPM4)
#define DTE4                 0x80
#define ECOM4                0x40
#define CAPP4                0x20
#define CAPN4                0x10
#define MAT4                 0x08
#define TOG4                 0x04
#define PWM4                 0x02
#define ECCF4                0x01

__sfr __at 0xDF CCAPM5;     //PCA Module5 Mode
// (bits in CCAPM5)
#define ECOM5                0x40
#define CAPP5                0x20
#define CAPN5                0x10
#define MAT5                 0x08
#define TOG5                 0x04
#define PWM5                 0x02
#define ECCF5                0x01

__sfr __at 0xE0 ACC;     //Accumulator

__sfr __at 0xE1 WDTCR;     //WDT Control register
// (bits in WDTCR)
#define WREN                 0x80
#define NSW                  0x40
#define ENW                  0x20
#define CLRW                 0x10
#define WIDL                 0x08
#define PS2                  0x04
#define PS1                  0x02
#define PS0                  0x01

__sfr __at 0xE2 IFD;     //ISP Flash data

__sfr __at 0xE3 IFADRH;     //ISP Flash Addr. High

__sfr __at 0xE4 IFADRL;     //ISP Flash Addr. Low

__sfr __at 0xE5 IFMT;     //ISP Mode Table
// (bits in IFMT)
#define MS7                  0x80
#define MS2                  0x04
#define MS1                  0x02
#define MS0                  0x01

__sfr __at 0xE6 SCMD;     //ISP Serial Command

__sfr __at 0xE7 ISPCR;     //ISP Control Register
// (bits in ISPCR)
#define ISPEN                0x80
#define SWBS                 0x40
#define SRST                 0x20
#define CFAIL                0x10

__sfr __at 0xE8 P4;     //Port 4
// (bits in P4)
__sbit __at P4^7 P47;
__sbit __at P4^5 P45;
__sbit __at P4^4 P44;

__sfr __at 0xE9 CL;     //PCA base timer Low

__sfr __at 0xEA CCAP0L;     //PCA module0 capture Low

__sfr __at 0xEA CCAP6L;     //PCA module6 capture Low

__sfr __at 0xEB CCAP1L;     //PCA module1 capture Low

__sfr __at 0xEB CCAP7L;     //PCA module7 capture Low

__sfr __at 0xEC CCAP2L;     //PCA module2 capture Low

__sfr __at 0xED CCAP3L;     //PCA module3 capture Low

__sfr __at 0xEE CCAP4L;     //PCA module4 capture Low

__sfr __at 0xEF CCAP5L;     //PCA module5 capture Low

__sfr __at 0xF0 B;     //B Register

__sfr __at 0xF1 PAOE;     //PWM Additional Output Enable
// (bits in PAOE)
#define POE3                 0x80
#define POE2B                0x40
#define POE2A                0x20
#define POE2                 0x10
#define POE1                 0x08
#define POE0B                0x04
#define POE0A                0x02
#define POE0                 0x01

__sfr __at 0xF2 PCAPWM0;     //PCA PWM0 Mode
// (bits in PCAPWM0)
#define P0RS1                0x80
#define P0RS0                0x40
#define P0INV                0x04
#define ECAP0H               0x02
#define ECAP0L               0x01

__sfr __at 0xF2 PCAPWM6;     //PCA PWM6 Mode
// (bits in PCAPWM6)
#define P6RS1                0x80
#define P6RS0                0x40
#define CCF6                 0x08
#define P6INV                0x04
#define ECAP6H               0x02
#define ECAP6L               0x01

__sfr __at 0xF3 PCAPWM1;     //PCA PWM1 Mode
// (bits in PCAPWM1)
#define P1RS1                0x80
#define P1RS0                0x40
#define P1INV                0x04
#define ECAP1H               0x02
#define ECAP1L               0x01

__sfr __at 0xF3 PCAPWM7;     //PCA PWM7 Mode
// (bits in PCAPWM7)
#define P7RS1                0x80
#define P7RS0                0x40
#define CCF7                 0x08
#define P7INV                0x04
#define ECAP7H               0x02
#define ECAP7L               0x01

__sfr __at 0xF4 PCAPWM2;     //PCA PWM2 Mode
// (bits in PCAPWM2)
#define P2RS1                0x80
#define P2RS0                0x40
#define P2INV                0x04
#define ECAP2H               0x02
#define ECAP2L               0x01

__sfr __at 0xF5 PCAPWM3;     //PCA PWM3 Mode
// (bits in PCAPWM3)
#define P3RS1                0x80
#define P3RS0                0x40
#define P3INV                0x04
#define ECAP3H               0x02
#define ECAP3L               0x01

__sfr __at 0xF6 PCAPWM4;     //PCA PWM4 Mode
// (bits in PCAPWM4)
#define P4RS1                0x80
#define P4RS0                0x40
#define P4INV                0x04
#define ECAP4H               0x02
#define ECAP4L               0x01

__sfr __at 0xF7 PCAPWM5;     //PCA PWM5 Mode
// (bits in PCAPWM5)
#define P5RS1                0x80
#define P5RS0                0x40
#define P5INV                0x04
#define ECAP5H               0x02
#define ECAP5L               0x01

__sfr __at 0xF8 P6;     //Port 6
// (bits in P6)
__sbit __at P6^1 P61;
__sbit __at P6^0 P60;

__sfr __at 0xF9 CH;     //PCA base timer High

__sfr __at 0xFA CCAP0H;     //PCA Module0 capture High

__sfr __at 0xFA CCAP6H;     //PCA Module6 capture High

__sfr __at 0xFB CCAP1H;     //PCA Module1 capture High

__sfr __at 0xFB CCAP7H;     //PCA Module7 capture High

__sfr __at 0xFC CCAP2H;     //PCA Module2 capture High

__sfr __at 0xFD CCAP3H;     //PCA Module3 capture High

__sfr __at 0xFE CCAP4H;     //PCA Module4 capture High

__sfr __at 0xFF CCAP5H;     //PCA Module5 capture High


//===== Page P =====//
#define IAPLB_P              0x03     //IAP Low Boundary
// (bits in IAPLB)
#define IAPLB6_P             0x80
#define IAPLB5_P             0x40
#define IAPLB4_P             0x20
#define IAPLB3_P             0x10
#define IAPLB2_P             0x08
#define IAPLB1_P             0x04
#define IAPLB0_P             0x02

#define CKCON2_P             0x40     //Clock Control 2
// (bits in CKCON2)
#define IHRCOE_P             0x10
#define MCKS1_P              0x08
#define MCKS0_P              0x04
#define OSCS1_P              0x02
#define OSCS0_P              0x01

#define CKCON3_P             0x41     //Clock Control 3
// (bits in CKCON3)
#define WDTCS1_P             0x80
#define WDTCS0_P             0x40
#define FWKP_P               0x20
#define WDTFS_P              0x10
#define MCKD1_P              0x08
#define MCKD0_P              0x04

#define CKCON4_P             0x42     //Clock Control 4
// (bits in CKCON4)
#define RCSS2_P              0x80
#define RCSS1_P              0x40
#define RCSS0_P              0x20
#define RPSC2_P              0x10
#define RPSC1_P              0x08
#define RPSC0_P              0x04
#define RTCCS3_P             0x02
#define RTCCS2_P             0x01

#define CKCON5_P             0x43     //Clock Control 5
// (bits in CKCON5)
#define CKMS0_P              0x01

#define PCON2_P              0x44     //Power Control 2
// (bits in PCON2)
#define AWBOD1_P             0x80
#define AWBOD0_P             0x40
#define BO1S1_P              0x20
#define BO1S0_P              0x10
#define BO1RE_P              0x08
#define EBOD1_P              0x04
#define BO0RE_P              0x02

#define PCON3_P              0x45     //Power Control 3
// (bits in PCON3)
#define IVREN_P              0x80

#define SPCON0_P             0x48     //SFR Page Control 0
// (bits in SPCON0)
#define P6CTL_P              0x40
#define P4CTL_P              0x20
#define WRCTL_P              0x10
#define CKCTL0_P             0x04
#define PWCTL1_P             0x02
#define PWCTL0_P             0x01

#define DCON0_P              0x4C     //Device Control 0
// (bits in DCON0)
#define HSE_P                0x80
#define IAPO_P               0x40
#define HSE1_P               0x20
#define IORCTL_P             0x04
#define RSTIO_P              0x02
#define OCDE_P               0x01

#define RTCCR_P              0x54     //RTC Control Reg.
// (bits in RTCCR)
#define RTCE_P               0x80
#define RTCO_P               0x40
#define RTCRL5_P             0x20
#define RTCRL4_P             0x10
#define RTCRL3_P             0x08
#define RTCRL2_P             0x04
#define RTCRL1_P             0x02
#define RTCRL0_P             0x01

#define RTCTM_P              0x55     //RTC Timer Register
// (bits in RTCTM)
#define RTCCS1_P             0x80
#define RTCCS0_P             0x40
#define RTCCT5_P             0x20
#define RTCCT4_P             0x10
#define RTCCT3_P             0x08
#define RTCCT2_P             0x04
#define RTCCT1_P             0x02
#define RTCCT0_P             0x01

#define PCON0_P              0x80     //Power Control 0
// (bits in PCON0)
#define SMOD1_P              0x80
#define SMOD0_P              0x40
#define POF0_P               0x10
#define PD_P                 0x02
#define IDL_P                0x01

#define PCON1_P              0x97     //Power Control 1
// (bits in PCON1)
#define SWRF_P               0x80
#define EXRF_P               0x40
#define RTCF_P               0x10
#define BOF1_P               0x04
#define BOF0_P               0x02
#define WDTF_P               0x01

#define CKCON0_P             0xC7     //Clock Control 0
// (bits in CKCON0)
#define AFS_P                0x80
#define ENCKM_P              0x40
#define CKMIS1_P             0x20
#define CKMIS0_P             0x10
#define CCKS_P               0x08
#define SCKS2_P              0x04
#define SCKS1_P              0x02
#define SCKS0_P              0x01

#define WDTCR_P              0xE1     //Watch-dog-timer Control register
// (bits in WDTCR)
#define WREN_P               0x80
#define NSW_P                0x40
#define ENW_P                0x20
#define CLRW_P               0x10
#define WIDL_P               0x08
#define PS2_P                0x04
#define PS1_P                0x02
#define PS0_P                0x01

#define P4_P                 0xE8     //Port 4
// (bits in P4)
#define P47_P                0x80
#define P45_P                0x20
#define P44_P                0x10

#define P6_P                 0xF8     //Port 6
// (bits in P6)
#define P61_P                0x02
#define P60_P                0x01

#endif
