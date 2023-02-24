// Example 1a: Turn on every other segment on 7-seg display
#include <hidef.h>      /* common defines and macros */
#include <mc9s12dg256.h>     /* derivative information */
#pragma LINK_INFO DERIVATIVE "mc9s12dg256b"

#include "main_asm.h" /* interface to the assembly module */

#define USE_PORTJ

void main(void) {
  /* put your own code here */
  //PLL_init();        // set system clock frequency to 24 MHz
  DDRB = 0xff;       // Port B is output  -> Address: 0x0003
  DDRP = 0xff;       // Port P is output

  #ifdef USE_PORTJ
    DDRJ = 0x02;       // Port J is output  -> Address: 0x026A
    PTJ = 0x00;         // 0x02 disables LEDs? // 0x00 enables LED -> Address: 0x0268
  #endif

  PTP = 0x0F;         // Ddisplays

  // turn on every other ledisable/Enable all 7-segment  and segment on 7-seg displays
  PORTB   = 0x55; // Sets bits in PORT B to 01010101 (a,c,e, and g) -> Address: 0x0001

  for(;;) {} /* wait forever */
}

