#include <hidef.h>      /* common defines and macros */
#include <mc9s12dg256.h>     /* derivative information */
#pragma LINK_INFO DERIVATIVE "mc9s12dg256b"

#include "main_asm.h" /* interface to the assembly module */

void main(void) {
  int i, j;
  PLL_init();
  led_enable();
  seg7_disable();

// Binary incrementing
  for (j = 0; j <= 255; j++) {
    for (i = 0; i < 8; i++) {
      if (j & (1 << i)) {
        led_on(i);
      } else {
        led_off(i);
      }
    }
    ms_delay(500);
  }
}

