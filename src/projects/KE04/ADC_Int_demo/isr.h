/******************************************************************************
* File:    isr.h
* Purpose: Define interrupt service routines referenced by the vector table.
* Note: Only "vectors.c" should include this header file.
******************************************************************************/

#ifndef __ISR_H
#define __ISR_H 1


/* Example */
/*
#undef  VECTOR_036
#define VECTOR_036 RTC_Isr

// ISR(s) are defined in your project directory.
extern void RTC_Isr(void);
*/

#undef  VECTOR_036
#define VECTOR_036 RTC_Isr
#undef  VECTOR_031
#define VECTOR_031 ADC_Isr
extern void RTC_Isr(void);
extern void ADC_Isr(void);
#endif  //__ISR_H

/* End of "isr.h" */
