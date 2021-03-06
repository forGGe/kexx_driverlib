/**
@page FTM_EPWM_demo_readme  FTM_OutputCompare_demo
@verbatim
******************** (C) COPYRIGHT 2013 Freescale ******************************
* File Name          : Readme.txt
* Author             : Freescale
* Date First Issued  : 10/25/2013 : Version 1.0.0
* Description        : Description of the template example.
********************************************************************************
* History:
* 10/25/2013 : Version 1.0.0
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
This example provides a template for the sample code. It demonstrates how to 
configure FTM module and  how to configure the output compare mode.
FTM2Ch5 generates toggled waveform on PTG7 connected to blue LED.
Blue LED blinks indicates FTM2Ch5 toggled waveform.

@par Code configuration
     ===================s

@par Directory contents
     ==================
- platforms/ke06_config.h                   library and board Configuration file
- projects/ke06/isr.h                       Interrupt handler installation 
- projects/ke06/FTM_OutputCompare_demo.c    Main program


@par Hardware environment
     ====================
 - Board: freedom FRDM-ke06Z, revA
  
@par How to use it
     =============
In order to make the program work, you must do the following :
- Rebuild all project files and load demo code into the device
- Connect J6 USB port to the computer that will find serial terminal port
- Open the serial terminal
- Configure the serial terminal to protocol: 8-N-1, 115200bps, and flow control: none
- Run the example
- Check the FTM0 ch1 waveform
- Type any character which will echo to the terminal window

@verbatim
************************END OF FILE********************************************
@endverbatim

*/
