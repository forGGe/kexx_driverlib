/**
@page KBI_demo_readme   KBI_demo
@verbatim
******************** (C) COPYRIGHT 2013 Freescale ******************************
* File Name          : Readme.txt
* Author             : Freescale
* Date First Issued  : 09/25/2013 : Version 1.0.0
* Description        : Description of the template example.
********************************************************************************
* History:
* 09/25/2013 : Version 1.0.0
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
This sample code demonstrates how to configure KBI module and  how to use the KBI APIs. 
If KBI0 or KBI1 pin 2 is toggled from high to low, then the KBI0 or KBI1 ISR will occur,
which will toggle LED2. R70 on the freedom board shall be removed before playing with this demo.

@par Code configuration
     ===================
Make sure the following macros are defined in ke04_config.h: \n
   USE_FEE and  \n
   EXT_CLK_FREQ_KHZ macro is defined to 8000(8Mhz).


@par Directory contents
     ===================
- platforms/ke04_config.h     library and board Configuration file
- projects/ke04/isr.h         Interrupt handler installation
- projects/ke04/KBI_demo.c    Main program


@par Hardware environment
     ====================
 - Board: freedom FRDM-KE04Z, revA
  
@par How to use it
     =============
In order to make the program work, you must do the following :
- Rebuild all project files and load demo code into the device
- Connect J6 USB port to the computer that will find serial terminal port
- Open the serial terminal
- Configure the serial terminal to protocol: 8-N-1, 115200bps, and flow control: none
- Run the example
- Toggle KBI0_P2/PTA2 (J2 Pin18) and/or KBI1_P2/PTC0 (J2 Pin4) from high to low,
  KBI0/1 ISR hapeens and the LED2 will toggle.
- Type any character which will echo to the terminal window

@verbatim
************************END OF FILE********************************************
@endverbatim

*/
