// Example 1a: Turn on every other segment on 7-seg display
#include <hidef.h>      /* common defines and macros */
#include <mc9s12dg256.h>     /* derivative information */
#pragma LINK_INFO DERIVATIVE "mc9s12dg256b"

#include "main_asm.h" /* interface to the assembly module */

#define C 0x39
#define A 0x77
#define F 0x71
#define E 0x79


void main(void) {
  const char seg_data[] = { C, A, F, E };
  int i;
  PLL_init();
  seg7_enable();
  led_disable();           
  
  while (1) {
    // Display "CAFE" on the 7-segment display
    for (i = 0; i < 4; i++) {
      seg7_on(seg_data[i], i);
    }   
  }
}


