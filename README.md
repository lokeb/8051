# SDCC 8051/8052 Tools and Headers for Megawin Chips
This project focuses on 8052 development on Linux using Megawin chips.

## Megawin SFRs
They are accurately defined in [REG_MG82F6D17.h](Megawin/MG82F6D17_DK_v1.07/include/REG_MG82F6D17.h).
## Keil2SDCC
The well written [Python script](util/keil2sdcc) can be used to convert any Keil header file to SDCC.

## Megawin Serial Programmer
On Linux [Wine](https://www.winehq.org/) [Megawin Serial Programmer COM_ISP8](http://www.megawin.com.tw/en-global/support/downloadDocument/144/841) available from [Megawin 8051 Support](http://www.megawin.com.tw/en-global/support/index/72/132/1/144) works well.

### Connection for programming
UART0 is used for programming the chips. For 20 pin MG82F6D17AT20, pins 13 and 14 are used. RXD connects to TXD and vice versa.
```
USB TXD ----> RXD0
USB RXD <---- TXD0
```
Repower the DUT (device under test) when the programmer is waiting for a new connection. On boot, the device boots into serial programming which communicates with the waiting programmer. On absence of a programmer, it continues to boot normally.
