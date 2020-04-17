// GLOBAL VARIABLES
//

/*
typedef union {
  uint32_t raw;
  struct {
    bool     rgb_layer_change :1;
  };
} user_config_t;

user_config_t user_config;
*/

// default_hsv = default_hue, default_sat, default_val;

//  int    active_layer;





//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//
// GLOBAL FUNCTIONS
//

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
void callApp(char *app_initial)
{
// open Spotlight search:
      register_code (KC_LGUI);
           tap_code (KC_SPC);
    unregister_code (KC_LGUI);

// type Typinator Abbreviation for Typinator Expansion (/a/?):
    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    send_string(app_initial);

// inside Typinator Expansion it is a 0.01 seconds delay
// wait_ms(10);
// wait_ms(100);
}
/*
// [CURIOSITY]
//  Workin with keycodes instead of chars or strings
// calling from process_record_user: callApp('a');  callApp('b'); ... instead of callApp("a"); ...

void callApp(char ascii_code)
{
  uint8_t keycode;

    tap_code(KC_CLEAR);
    wait_ms(5);
      register_code(KC_LGUI);
            tap_code(KC_SPC);
    unregister_code(KC_LGUI);
    wait_ms(5);

    keycode = pgm_read_byte(&ascii_to_keycode_lut[(uint8_t)ascii_code]);

    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    tap_code(keycode);
 
    register_code  (KC_ENT);
    wait_ms(20);   
    unregister_code(KC_ENT);

    // next delay is for avoiding that SpotLight remains on screen without calling our app
//  wait_ms(30);
//    register_code (KC_ENT);
//    unregister_code (KC_ENT);
}
*/

/*
void send_char(char ascii_code) {
  uint8_t keycode;
  keycode = pgm_read_byte(&ascii_to_keycode_lut[(uint8_t)ascii_code]);
  if (pgm_read_byte(&ascii_to_shift_lut[(uint8_t)ascii_code])) {
      register_code(KC_LSFT);
      register_code(keycode);
      unregister_code(keycode);
      unregister_code(KC_LSFT);
  } else {
      register_code(keycode);
      unregister_code(keycode);
  }
}
*/
// [curiosity]
//                                                                                      //
// [functions] [_fvim], [_dvim], [_cvim],     [_xvim],     [_zvim]     & [_apps]        //
//               kc_v,    kc_x,  [_fvim]kc_c, [_fvim]kc_x, [_fvim]kc_z   (kc_q & kc_p)  //
//                                                                                      //
// functions for accesing keybindings mapped functions                                  //
//////////////////////////////////////////////////////////////////////////////////////////
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥




// [SAVING_SPACE]
// as this function is used only once, for triggering slack app,
// ... it saves from 66 to 86 (20 bytes) using it directly instead of calling a function
// void remove_shift_mod(void)
// {
//   shift_flag = get_mods()&SHFT_MODS;
//   if (shift_flag)
//   {
//     del_mods     (shift_flag);
//     del_weak_mods(shift_flag);
//     send_keyboard_report();
//   }
// }



// void my_delay(void)
// {
//   wait_ms(50);
// }

// bool triggered_gui(void)
// {
//   gui_flag = get_mods()&GUI_MODS;
//   if (gui_flag)
//   {
//     remove_activated_mod(gui_flag);
//     return true;
//   }
//   return false;
// }


// old who worked fine
// bool triggered_gui(void)
// {
//   gui_flag = get_mods()&GUI_MODS;
//   if (gui_flag)
//   {
//     del_mods     (gui_flag);
//     del_weak_mods(gui_flag);
//     send_keyboard_report();
//     return true;
//   }
//   return false;
// }

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


void reset_my_keyboard_function(void) {  // MY RESET FUNCTION
                   // BACKLIGHT BLINKING
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                   // ends backlight blinking
                      reset_keyboard();
}
//                                                                                      //
// [functions] [_powr] kc_r (hreset)                                                    //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////



