// #include QMK_KEYBOARD_H
// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_manolodeinternet.h"
#include "rgblight_manolodeinternet.h"
// #include "manolodeinternet.h"

   bool whole_keyboard_as_indicator = true;
uint8_t diff, prev_diff = 4;


void set_default_hsv(void)
{
  default_hue = rgblight_get_hue();
  default_sat = rgblight_get_sat();
  default_val = rgblight_get_val();   
}

//[FIXME]  // MAKE THIS FUNCTION SMALLER, PLEASE !!!
void get_hsv(void)
{
  uint16_t int_1 = 0;
  uint8_t  int_2 = 0, int_3 = 0;

  char str_1[4];
  char str_2[4];
  char str_3[4];

  int_1 = rgblight_get_hue();
  int_2 = rgblight_get_sat();
  int_3 = rgblight_get_val();

  itoa(int_1, str_1, 10);
  itoa(int_2, str_2, 10);
  itoa(int_3, str_3, 10);

  SEND_STRING("rgblight_get_hue(): ");
  send_string   (str_1);
  SEND_STRING(", sat: ");
  send_string   (str_2);
  SEND_STRING(", val: ");
  send_string   (str_3);

  // HYPR(KC_R);
  
  SS_BEEP_1;
  
}
//[fixme]  // make this function smaller, please !!!

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A [F(CAPSL)]                                                  //
//                                                                                      //
// CAPSLOCK COMPLEMENTARY FUNCTIONS                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void show_RGB_LEDs(void)  // MY SWITCH CAPSLOCK INDICATORS ON FUNCTION
{
  uint8_t caps_rght_sta = 0;
  uint8_t caps_rght_end = 0;
  uint8_t caps_left_sta = 0;
  uint8_t caps_left_end = 0;

  uint8_t numb_rght_sta = 0;
  uint8_t numb_rght_end = 0;
  uint8_t numb_left_sta = 0;
  uint8_t numb_left_end = 0;

  uint8_t dflt_rght_sta = 0;
  uint8_t dflt_rght_end = 0;
  uint8_t dflt_left_sta = 0;
  uint8_t dflt_left_end = 0;

  if (!rgblight_config.enable) { return; }

  // BREATHING STUFF
  // if (capslock_is_active)  { rgblight_mode(3); } // breathing mode ON !!!
  // if (numbers_is_active)  { rgblight_mode(3); } // breathing mode ON !!!
  // breathing stuff

  if (capslock_is_active)
  {
    if (whole_keyboard_as_indicator)
    {
      // RGHT = red
      caps_rght_sta = OUTER_RGHT;
      caps_rght_end = INNER_RGHT + 1;

      if (numbers_is_active) // #01
      {
        // LEFT = blue

        numb_left_sta = INNER_LEFT;
        numb_left_end = OUTER_LEFT + 1;

      }
      else // rgb_num = false 
      {
        // LEFT = red
        caps_left_sta = INNER_LEFT;
        caps_left_end = OUTER_LEFT + 1;
      }
    }
    else // whole_keyboard_as_indicator = false
    {
    //   // rght = red
    //   caps_rght_sta = INNER_RGHT - diff - 1;
    //   caps_rght_end = INNER_RGHT + 1;

    //   if (numbers_is_active) // #01
    //   {
    //     // left = blue
    //     numb_left_sta = INNER_LEFT;
    //     numb_left_end = INNER_LEFT + diff + 1; // 1;
    //   }
    //   else // rgb_num = false 
    //   {
    //     // left = red
    //     caps_left_sta = INNER_LEFT;
    //     caps_left_end = INNER_LEFT + diff + 1; // 1;
    //   }
    //   // rght = default color
    //   dflt_rght_sta = OUTER_RGHT;
    //   dflt_rght_end = INNER_RGHT - diff - 1;  // /* 1 LED more separated from CapsLock indicator          */ - 2;
    //   // left = default color
    //   dflt_left_sta = INNER_LEFT + diff + 1;  // /* 1 LED more separated from CapsLock or _NUMB indicator */ + 2;
    //   dflt_left_end = OUTER_LEFT        + 1;
    // }

    // right_thumbs = red
       caps_rght_sta = INNER_RGHT - diff - 1;
       caps_rght_end = INNER_RGHT              + 1;

       if (numbers_is_active)
       {
         // left = blue
         numb_left_sta = INNER_LEFT;
         numb_left_end = INNER_LEFT + diff + 1;
       }               
       else // rgb_num = false
       {
         // left = red
         caps_left_sta = INNER_LEFT;
         caps_left_end = INNER_LEFT + diff + 1;
       }
       // rght = default color
       dflt_rght_sta = OUTER_RGHT;
       dflt_rght_end = INNER_RGHT - diff - 1;
       // left = default color
       dflt_left_sta = INNER_LEFT + diff + 1;
       dflt_left_end = OUTER_LEFT              + 1;
    }

  }
  else // capslock_is_active = false  
  {
    if (numbers_is_active) // #01
    {
      if (whole_keyboard_as_indicator)
      {
        // RGHT = blue
        numb_rght_sta = OUTER_RGHT;
        numb_rght_end = INNER_RGHT + 1;
        // LEFT = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = OUTER_LEFT + 1;

/*
        numb_rght_sta = INNER_RGHT - diff - 1;
        numb_rght_end = INNER_RGHT + 1;

        // rght = default color
        dflt_rght_sta = OUTER_RGHT;
        dflt_rght_end = INNER_RGHT - diff - 1;  
*/ /* 1 LED more separated from CapsLock indicator          */ /* - 2; */

/*
        // left = default color
        dflt_left_sta = INNER_LEFT + diff + 1;  */ /* 1 LED more separated from CapsLock or _NUMB indicator */ /* + 2;
        dflt_left_end = OUTER_LEFT        + 1;
*/
      }
      else // whole_keyboard_as_indicator = false
      {
        // // rght = blue
        // numb_rght_sta = INNER_RGHT - diff - 1;
        // numb_rght_end = INNER_RGHT + 1;
        // // left = blue
        // numb_left_sta = INNER_LEFT;
        // numb_left_end = INNER_LEFT + diff + 1; // 1;

        // // rght = default color
        // dflt_rght_sta = OUTER_RGHT;
        // dflt_rght_end = INNER_RGHT - diff - 1;  // /* 1 LED more separated from CapsLock indicator          */ - 2;
        // // left = default color
        // dflt_left_sta = INNER_LEFT + diff + 1;  // /* 1 LED more separated from CapsLock or _NUMB indicator */ + 2;
        // dflt_left_end = OUTER_LEFT        + 1;

        // rght = blue
        numb_rght_sta = INNER_RGHT - diff - 1;
        numb_rght_end = INNER_RGHT              + 1;
        // left = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = INNER_LEFT + diff + 1;
        // rght = default color
        dflt_rght_sta = OUTER_RGHT;
        dflt_rght_end = INNER_RGHT - diff - 1;
        // left = default color
        dflt_left_sta = INNER_LEFT + diff + 1;
        dflt_left_end = OUTER_LEFT              + 1;
      }

    }
    else // numbers_is_active = false & capslock_is_active = false as well !!!
    {
      // BREATHING STUFF
      // rgblight_mode(0); // breathing mode OFF !!!
      // breathing stuff

      // LEFT = default color
      dflt_rght_sta = OUTER_RGHT;
      dflt_rght_end = INNER_RGHT + 1;

      
      // RGHT = default color
      dflt_left_sta = INNER_LEFT;
      dflt_left_end = OUTER_LEFT + 1;
    }
  }
      LED_TYPE tmp_led_range;
      sethsv(COLOR_CAPS, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, caps_rght_sta, caps_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, caps_left_sta, caps_left_end);

      sethsv(COLOR_NUMB, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, numb_rght_sta, numb_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, numb_left_sta, numb_left_end);

      sethsv(default_hue, default_sat, default_val, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, dflt_rght_sta, dflt_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, dflt_left_sta, dflt_left_end);

  rgblight_set();

} // my switch capslock indicators on function
//                                                                                      //
// [functions] [_daly] kc_a [f(capsl)]                                                  //
//                                                                                      //
// capslock complementary functions                                                     //
//////////////////////////////////////////////////////////////////////////////////////////

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
void flashing_RGB_LEDs(uint8_t times, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2)
//RGB_MY_WHITE
//RGB_MY_RED
{
  wait_ms(1);
// #if defined(RGBLIGHT_ENABLE)
  rgblight_enable_noeeprom(); // switch on LEDs to allow us seeing the reset LEDs flashing
// #elif defined(BACKLIGHT_ENABLE)
//   backlight_enable();
// #endif
  wait_ms(1);

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
