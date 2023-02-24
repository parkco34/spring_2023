// Example 1a: Turn on every other segment on 7-seg display
#include <hidef.h>      /* common defines and macros */
#include <mc9s12dg256.h>     /* derivative information */
#pragma LINK_INFO DERIVATIVE "mc9s12dg256b"

#include "main_asm.h" /* interface to the assembly module */

//#define USE_PORTJ

void main(void) {
  /* put your own code here */
  PLL_init();        // set system clock frequency to 24 MHz 
  DDRB  = 0xff;       // Port B is output
  DDRP  = 0xff;       // Port P is output
  
  #ifdef USE_PORTJ
    DDRJ = 0x02;       // Port J is output
    PTJ = 0x00;         // enable LED --> Setting PTJ = 0x02 doesn't disable LEDs ??  
  #endif
  PTP = 0x0f;
    // turn on every other led and segment on 7-seg displays
  //PORTB = 0x00;          PTP = 0x00;         // enable all 7-segment displays

  for(;;) {} /* wait forever */
  
  // PTP = 0X007 (0X258)
  // PORTB = 0X38 (0X0001)
  // DDRB = 0XFF (0X0003)
  // DDRP = 0X07 (0X25A)
  // DDRJ = 0X00 (0X26A)
}                    

