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



