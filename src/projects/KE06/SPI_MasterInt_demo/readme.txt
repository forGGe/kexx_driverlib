/**
@page SPI_MasterInt_demo_readme   SPI Master Interrupt Demo
@verbatim
******************** (C) COPYRIGHT 2013 Freescale ******************************
* File Name          : Readme.txt
* Author             : Freescale
* Date First Issued  : 06/25/2013 : Version 1.0.0
* Description        : Description of the template example.
********************************************************************************
* History:
* 06/25/2013 : Version 1.0.0
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, FREESCALE SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
********************************************************************************
@endverbatim

@par Example description
     ===================
This example provides a template for SPI master transfer with interrupt mode.
it cycle to transfer data to slave device and varify read result, and print the value of wrong 
counter.\n
PTB2 - SPI0_SCK \n
PTB3 - SPI0_MOSI \n
PTB4 - SPI0_MISO \n
PTB5 - SPI0_SS \n
it need to connect these signals to the other board programming SPI_Slave_demo code for test.
because PTB4 default to be NMI function, so need to define MACRO "DISABLE_NMI" in ke06_config.h.
@par Code configuration
     ===================
Make sure the following macros are defined in ke06_config.h: \n
   USE_FEE and  \n
   EXT_CLK_FREQ_KHZ macro is defined to 8000(8Mhz) and \n
   DISABLE_NMI.


@par Directory contents
     ===================
- platforms/ke06_config.h     library and board Configuration file
- projects/ke06/isr.h         Interrupt handler installation
- projects/ke06/SPI_MasterInt_demo.c    Main program


@par Hardware environment
     ====================
 - Board: freedom FRDM-KE06Z, revA \n
 	 	Requirement for demo: \n
        1. connect two boards with J2  	12-12(SPI0_SCK), \n
                                        10-10(SPI0_MOSI), \n
                                        8-8(SPI0_MISO),  \n
                                        6-6(SPI0_SS), \n
                                        14-14(GND)
        2. short r20.
  
@par How to use it
     =============
In order to make the program work, you must do the following :
- Rebuild all project files and load demo code into the device
- Connect J6 USB port to the computer that will find serial terminal port
- Open the serial terminal
- Configure the serial terminal to protocol: 8-N-1, 115200bps, and flow control: none
- Run the example
- This program will send transfer result to the terminal


@verbatim
************************END OF FILE********************************************
@endverbatim

*/
