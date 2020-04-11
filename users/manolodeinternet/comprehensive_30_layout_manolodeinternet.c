// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/comprehensive_30_layout_manolodeinternet.h"
#include "comprehensive_30_layout_manolodeinternet.h"

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (HRESET)                                                    //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

void flashing_LEDs(uint8_t times, uint8_t bl_level_1, uint8_t bl_level_2)
{
  for (uint8_t i = 0; i < times; i++)
  {
    backlight_level(bl_level_1);
    wait_ms(50);
    backlight_level(bl_level_2);
    wait_ms(100);
  }
}

void reset_my_keyboard_function(void)
{
  // _delay_ms(1);
  wait_ms(1);
  backlight_enable();
  wait_ms(1);

  SS_BEEP_1;

  flashing_LEDs(5, BL_RESE, BL_MIN);
  reset_keyboard();
}
//                                                                                      //
// [functions] [_powr] kc_r (hreset)                                                    //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////
