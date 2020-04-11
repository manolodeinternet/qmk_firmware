// #include "manolodeinternet.h"
#include "simple_30_layout_manolodeinternet.h"

    uint8_t control_flag;
    uint8_t  option_flag;

    uint8_t current_flag;


    int    state_number;

    uint16_t lt12_timer;


bool flip_layer_triggers     = false;

bool shift_was_activated    = false;
  
bool numbers_is_active      = false; // #01

bool symbols_pressed        = false;

bool multi_apps             = false;
bool multi_apps_karabiner   = false;  
bool apps_just_activated    = false;
bool apps_working           = false;
bool karabiner_apps_working = false;
bool changing_apps          = false;           



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] L_TH_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
// [FUNCTIONS] [_LEDS] KC_O (SAV_COL)process_record_user                                //
// [FUNCTIONS] [_LEDS] KC_L (GET_HSV)process_record_user                                //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void flashing_LEDs(uint8_t times, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2)
//RGB_MY_WHITE
//RGB_MY_RED
{
  // SS_BEEP_2;
  for (uint8_t i = 0; i < times; i++)
  {
    rgblight_setrgb(r1, g1, b1);
    // _delay_ms (50); soon will be deprecated !!!
    wait_ms(50);

    rgblight_setrgb(r2, g2, b2);
    wait_ms(100);
  }
}
//                                                                                      //
// [functions] [_powr] kc_r   (my_reset)process_record_user                             //
// [functions] [_dflt] l_th_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] L_TH_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION
  _delay_ms (1);
  wait_ms(1);
  rgblight_enable_noeeprom(); // switch on LEDs to allow us seeing the reset LEDs flashing
  wait_ms(1);

  // SS_BEEP_1; SS_BEEP_2; SS_BEEP_1; SS_BEEP_2;

  flashing_LEDs(6, RGB_MY_WHITE, RGB_MY_RED);
  reset_keyboard();
}
//
//                                                                                      //
// [functions] [_powr] kc_r (my_reset)                                                  //
// [functions] [_dflt] l_th_4 /*(TH_R4_POWR_LEDS)*/                                     //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////
