// Example 1a: Turn on every other segment on 7-seg display
#include <hidef.h>      /* common defines and macros */
#include <mc9s12dg256.h>     /* derivative information */
#pragma LINK_INFO DERIVATIVE "mc9s12dg256b"

#include "main_asm.h" /* interface to the assembly module */

//#define USE_PORTJ

void main(void) {
  /* put your own code here */
  PLL_init();        // set system clock frequency to 24 MHz 
  seg7_enable();
  while (1) 
  {
    seg7_on(0xBF, 2); // turn on all segment sof digit 2
    ms_delay(3000);
    seg7s_off(); // Turns off all segments
    ms_delay(2000); 
  }
  
  //for(;;) {} /* wait forever */
  
}                    

