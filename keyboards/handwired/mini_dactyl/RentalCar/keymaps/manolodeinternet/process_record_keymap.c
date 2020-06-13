// #include QMK_KEYBOARD_H
#include "process_record_keymap.h"

// APPS - PROCESS_RECORD_APPS //[PRINTING: 735...1033]
bool process_record_apps(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed)
  {
    switch(keycode)
    {
  //  Left Thumb 1
  //  Quit app
      case TD(DVIM_Del):register_code(KC_LGUI);
                             tap_code(KC_Q);
                      unregister_code(KC_LGUI);
                        return false;

  //   Left Thumb 2
  //   Toggle between current and last app
  //   It's similar to KC_Y in [_DALY], but ...
  //   IT CHANGES QUICKLY, WITHOUT APPS BAR IN THE MIDDLE OF THE SCREEN !!!
      case MO(_SYMB):   // If you want to change from one app to another app in multi_apps mode,
                        //...uncomment next line.
                        // multi_apps = true;
                          register_code(KC_LGUI);
                               tap_code(KC_TAB);
                        unregister_code(KC_LGUI);
                        return false;


//[# #KARABINER & TYPINATOR STUFF]
//[# #R3-L3 #01]

  //  Left Thumb 3
  //  Karabiner-apps mode
      case TT_NUMB:

#if defined(DEFAULT_TYPINATOR_APPS) // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ###

                        if (multi_apps)
                        {
                          add_mod(gui_mod);
                        }
                        if (control_apps)
                        {
                          add_mod(ctl_mod);
                        }
                        if (shift_apps)
                        {
                          add_mod(sft_mod);
                        }
                        karabiner_apps_trigger = true;  
                        register_code(KC_F20);                      

#elif defined(DEFAULT_KARABINER_APPS) // ---------------------------------------------------------- ###

                        unregister_code(KC_F20);
                        apps_trigger = true;
                        if (multi_apps)
                        {
                          remove_mod(gui_mod);
                        }
                        if (control_apps)
                        {
                          remove_mod(ctl_mod);
                        }
                        if (shift_apps)
                        {
                          remove_mod(sft_mod);
                        }

#endif // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ###

                        return false;

//#02 #R3-L3
      default:
   // default case will call one app for every 3x10 alpha keys
#if defined(DEFAULT_TYPINATOR_APPS) // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ###

                if (karabiner_apps_trigger)
                {
               // calling apps at 'karabiner style'
                  return true;
                }
                // else
                // {
                //   if (apps_trigger)
                //   {
                 // calling appps at 'typinator style'
                    call_app_with_keycode(keycode & 0xFF);//the filter avoids modifiers on home row
                    return false;                   // i.e. pressing J is no KC_J, but LSFT_T(KC_J)
                //   }
                // }

#elif defined(DEFAULT_KARABINER_APPS) // ---------------------------------------------------------- ###

                if (apps_trigger)
                { // calling appps at 'typinator style'
                  call_app_with_keycode(keycode & 0xFF);//the filter avoids modifiers on home row
                  return false;                   // i.e. pressing J is no KC_J, but LSFT_T(KC_J)
                }
                // else
                // {
                //   if (karabiner_apps_trigger)
                //   {
                 // calling apps at 'karabiner style'
                    return true;
                //   }
                // }

#endif // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ###

                break;

    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {


//#03 #R3-L3
      case OSL_APPS:
      case TH_R3_APPS_TRIGGER:// Right Thumb 3
                              // Switch off 'apps_trigger' variable mode without layer
                              // first_apps_trigger_pressed = false;

#if defined(DEFAULT_TYPINATOR_APPS) // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ###

                               apps_trigger = false;

                               if (!karabiner_apps_trigger)
                               {
                                 show_RGB_LEDs();
                                 control_apps = false;
                                 shift_apps = false;
                                 if (multi_apps)
                                 {
                                   multi_apps = false;
                                 }
                                 else
                                 {
                                    HIDEOTH;
                                 }
                               }

#elif defined(DEFAULT_KARABINER_APPS) // ---------------------------------------------------------- ###

                               unregister_code(KC_F20);
                               karabiner_apps_trigger = false;
                               if (multi_apps)
                               {
                                 remove_mod(gui_mod);
                               }
                               if (control_apps)
                               {
                                 remove_mod(ctl_mod);
                                 control_apps = false;
                               }
                               if (shift_apps)
                               {
                                 remove_mod(sft_mod);
                                 shift_apps = false;
                               }

                               if (!apps_trigger)
                               {
                                show_RGB_LEDs();
                                if (multi_apps)
                                {
                                  multi_apps = false;
                                }
                               }

#endif // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ###
                               return false;


//#04 #R3-L3
      case TT_NUMB:            // Left Thumb 3
                               // Karabiner-apps mode

#if defined(DEFAULT_TYPINATOR_APPS) // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ###
// leave karabiner_apps mode and return to default compiled mode: typinator_apps mode ...
// ... if its trigger is still active, switching app modifiers OFF in this case

                               unregister_code(KC_F20);
                               karabiner_apps_trigger = false;

                               if (multi_apps)
                               {
                                remove_mod(gui_mod);
                               }


                              if (control_apps)
                              {
                                remove_mod(ctl_mod);
                              }
                              if (shift_apps)
                              {
                                remove_mod(sft_mod);
                              }


                               if (!apps_trigger)
                               {
                                 show_RGB_LEDs();
                                 // if (multi_apps)
                                 // {
                                   multi_apps = false;
                                 // }

                                 control_apps = false;
                                 shift_apps = false;
                               }

#elif defined(DEFAULT_KARABINER_APPS) // ---------------------------------------------------------- ###
// leave typinator_apps mode and return to default compiled mode: karabiner_apps mode ...
// ... if its trigger is still active, switching app modifiers ON in this case

                               apps_trigger = false;

                               if (!karabiner_apps_trigger)
                               {
                                 show_RGB_LEDs();
                                 control_apps = false;
                                 shift_apps = false;

                                 if (multi_apps)
                                 {
                                   multi_apps = false;
                                 }
                                 else
                                 {
                                   HIDEOTH;
                                 }

                               }// if (!karabiner_apps_trigger)
                               else
                               {
                                if (multi_apps)
                                {
                                  add_mod(gui_mod);
                                }
                                else
                                {
                                  HIDEOTH;
                                }
                                register_code(KC_F20);

                                if (control_apps)
                                {
                                  add_mod(ctl_mod);
                                }
                                if (shift_apps)
                                {
                                  add_mod(sft_mod);
                                }

                               }

#endif // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ###

                               return false;

      default:

#if defined(DEFAULT_TYPINATOR_APPS) // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ###


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// I have added next 1 line of code while reviewing.  Maybe it's not necessary.
               if (karabiner_apps_trigger)
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
               {
                 return true; break;
               }
               // else
               // {
               //   if (apps_trigger)
               //   {
                   return false; break;
                 // }
               // }

#elif defined(DEFAULT_KARABINER_APPS) // ---------------------------------------------------------- ###

               if (apps_trigger)
               {
                 return false; break;
               }
               // else
               // {
                 // if (karabiner_apps_trigger)
                 // {
                   return true; break;
                 // }
               // }

#endif // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ###

    } // switch(keycode)
  } // else ( if (record->event.pressed) )
}; // bool process_record_apps(uint16_t keycode, keyrecord_t *record)
































bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {

  if (apps_trigger || karabiner_apps_trigger)
  {
    case_found = true;
    return process_record_apps(keycode, record);
  }

// if we are no in apps_trigger mode: we can be in karabiner_apps_trigger mode or in _DFLT layer mode
  if (record->event.pressed)
  // Do something when pressed
  {
    switch(keycode)
    {
//[_DFLT]

//#05 #R3-L3
      //   Left Thumb 3
      case TT_NUMB: // BEEP_1;
                    // SS_BEEP_1;
                    lt12_timer = timer_read();
                    layer_invert(_NUMB);
                    case_found = true; return false; break;

// left thumbs
      // case OSL_DALY:
      //             // MANAGEMENT OF OSL as part of a macro or tap dance routine:
      //             // set_oneshot_layer(LAYER, ONESHOT_START)              on key down
      //             // clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED) on key up
      //             // reset_oneshot_layer() if you want to cancel the oneshot
      //                // reset_oneshot_layer();
      //                set_oneshot_layer(_DALY, ONESHOT_START);
      //                return false; break;
      // case OSL_FVIM:
      //                // reset_oneshot_layer();
      //                set_oneshot_layer(_FVIM, ONESHOT_START);
      //                return false; break;
      // case OSL_POWR:
      //                // reset_oneshot_layer();
      //                set_oneshot_layer(_POWR, ONESHOT_START);
      //                return false; break;
      // case OSL_ACCN:
      //                // reset_oneshot_layer();
      //                set_oneshot_layer(_ACCN, ONESHOT_START);
      //                return false; break;

// right thumbs
      //  case OSL_SYMB:
      //                // reset_oneshot_layer();
      //                set_oneshot_layer(_SYMB, ONESHOT_START);
      //                return false; break;
      // case OSL_NUMB:
      //                // reset_oneshot_layer();
      //                set_oneshot_layer(_NUMB, ONESHOT_START);
      //                return false; break;
      // case OSL_MOUS:
      //                // reset_oneshot_layer();
      //                set_oneshot_layer(_MOUS, ONESHOT_START);
      //                return false; break;
                     
       case OSL_DVIM:
                     // reset_oneshot_layer();
                     set_oneshot_layer(_DVIM, ONESHOT_START);
                     return false; break;
      case OSL_APPS:
                     // clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
                     // reset_oneshot_layer();
                     layer_clear();
                  // return false; break;
// case OSL_APPS continues in ...
//...case TH_R3_APPS_TRIGGER

//[_dflt]


//[# #KARABINER & TYPINATOR STUFF]
//[# #R3-L3 #01]

//#06 #R3-L3
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
//    Right Thumb 3
      case TH_R3_APPS_TRIGGER://if (alt_mod)

                  // MANAGEMENT OF OSL as part of a macro or tap dance routine:
                  // set_oneshot_layer(LAYER, ONESHOT_START)              on key down
                  // clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED) on key up
                  // reset_oneshot_layer() if you want to cancel the oneshot
                     // reset_oneshot_layer();

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥  remove next 6 lines of code 

// next if statement is not necessary because mirrored layer triggers are now accesed holding master_keys.
// master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
                                // if (check_mod_and_remove_it(ALT_MODS, true))
                                // {
                                //    layer_on(_NUMB);
                                // }
                                // else
                                // {

#if defined(DEFAULT_TYPINATOR_APPS) // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ###
                                  apps_trigger = true;

                                  if (check_mod_and_remove_it (GUI_MODS, true)) { multi_apps = true;  }
                                  if (check_mod_and_remove_it(CTRL_MODS, true)) { control_apps = true;}
                                  if (check_mod_and_remove_it(SHFT_MODS, true)) { shift_apps = true;  }

#elif defined(DEFAULT_KARABINER_APPS) // ---------------------------------------------------------- ###

                                  register_code(KC_F20);
                                  karabiner_apps_trigger = true;

                                  if (check_mod_and_remove_it (GUI_MODS, false)) { multi_apps = true; }

                                  if (check_mod_and_remove_it(CTRL_MODS, false)) { control_apps = true;}
                                  if (check_mod_and_remove_it(SHFT_MODS, false)) { shift_apps = true;  }

#endif // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ###

                                  rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
                                // }
                                  case_found = true; return false; break;
// //////////////////////////////////////////////////////////////////////////////////////////////// ###

//[# #karabiner & typinator stuff]
//[# #r3-l3 #01]



//🔥

      // case MY_RESET:  if (get_mods()&CTRL_MODS)
      //                 {
      //                   reset_my_keyboard_function();
      //                   return false;
      //                 }

// [FREEING UP SPACE]
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
      // case MY_RESET:  if (ctl_mod)
      //                 {
      //                   reset_my_keyboard_function();
      //                   return false;
      //                 }
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
// [freeing up space]

//[_SYMB]
      case O_COMMENT: tap_code       (KC_SLSH);
                      register_code  (KC_LSFT);
                      tap_code       (KC_8);
                      unregister_code(KC_LSFT);
                      case_found = true; return false; break;

      case C_COMMENT: register_code  (KC_LSFT);
                      tap_code       (KC_8);
                      unregister_code(KC_LSFT);
                      tap_code       (KC_SLSH);
                      case_found = true; return false; break;

      // case CHANGE_SYMB_TO_NUMB:
      //                 layer_off(_SYMB);
      //                 layer_on(_NUMB);
      //                 case_found = true; return false; break;
//[_symb]



//🔥
//[_DALY]
      case CHANGE_DALY_TO_LEDS: 
                           layer_off(_DALY);
                           layer_on(_LEDS);
                           case_found = true; return false; break;
//[_daly]

//[_DFLT]
// next case is not necessary because mirrored layer triggers are now accesed holding master_keys.
// master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
      // case TH_R1_DALY_MOUS:
      //                 // if (get_mods()&ALT_MODS)
      //                 if (check_mod_and_remove_it(ALT_MODS, true))
      //                 {
      //                   layer_on(_MOUS);
      //                 }
      //                 else
      //                 {
      //                   layer_on(_DALY);
      //                 }
      //                 case_found = true; return false; break;
      case MO(_DALY):  case_found = true;

                       return true; //this line switch on [_DALY] layer automatically.
                       break; 

      // case TH_R2_FVIM_SYMB:
      //                 if (get_mods()&ALT_MODS)
      //                 {
      //                   layer_on(_FVIM);
      //                 }
      //                 else
      //                 {
      //                   symbols_pressed = true;
      //                   layer_on(_SYMB);
      //                 }
      //                 return false;


// next two cases are not necessary because mirrored layer triggers are now accesed holding master_keys.
// master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
      // case TH_R2_FVIM_SYMB: // SS_BEEP_1;
      //                 // SS_BEEP_1;
      //                 if (check_mod_and_remove_it(ALT_MODS, true))
      //                 {
      //                   layer_on(_SYMB);
      //                // symbols_pressed = true;
      //                 }
      //                 else
      //                 {
      //                   layer_on(_FVIM);
      //                 }
      //                 case_found = true; return false; break;

      // case TH_L2_SYMB_FVIM: // SS_BEEP_1;
      //                 // SS_BEEP_1;
      //                 if (check_mod_and_remove_it(ALT_MODS, true))
      //                 {
      //                   layer_on(_FVIM);
      //                // symbols_pressed = true;
      //                 }
      //                 else
      //                 {
      //                   layer_on(_SYMB);
      //                 }
      //                 case_found = true; return false; break;



// #if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________
//                                   apps_trigger = true;
//                                   rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)

//                                   if (check_mod_and_remove_it (GUI_MODS, true)) { multi_apps = true;  }
//                                   if (check_mod_and_remove_it(CTRL_MODS, true)) { control_apps = true;}
//                                   if (check_mod_and_remove_it(SHFT_MODS, true)) { shift_apps = true;  }
// #elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯
//                                   register_code(KC_F20)
//                                   karabiner_apps_trigger = true;

//                                   if (check_mod_and_remove_it (GUI_MODS, false)) { multi_apps = true; }
// #endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^







// #if defined(DEFAULT_TYPINATOR_APPS) // 🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻
//                                   apps_trigger = true;
//                                   rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)

//                                   if (check_mod_and_remove_it (GUI_MODS, true)) { multi_apps = true;  }
//                                   if (check_mod_and_remove_it(CTRL_MODS, true)) { control_apps = true;}
//                                   if (check_mod_and_remove_it(SHFT_MODS, true)) { shift_apps = true;  }
// #elif defined(DEFAULT_KARABINER_APPS) // ♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️♦️
//                                   register_code(KC_F20)
//                                   karabiner_apps_trigger = true;

//                                   if (check_mod_and_remove_it (GUI_MODS, false)) { multi_apps = true; }
// #endif                         // 🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺











//[_dflt]

//[_POWR]
      case TOG_ID:   if (rgblight_config.enable && (capslock_is_active || numbers_is_active))
                      {
                        if (whole_keyboard_as_indicator)
                        {
                          diff = prev_diff;
                        }
                        else
                        {
                          prev_diff = diff;
                  //[BUG] // diff = 4;  //[bug]
                        }
                        whole_keyboard_as_indicator = !whole_keyboard_as_indicator;
                        show_RGB_LEDs();                        
                      }
                      case_found = true; return false; break;


//
// THIS FUNCTION IS NOT GOING TO BE USED WITH 23 LEDS PER HAND
      //////////////////////////////////////////////////////////////////////////////////////////
      //                                                                                      //
      // [PROCESS_RECORD_USER] [_POWR] KC_Q (STP_ID)                                 //
      //                                                                                      //
      //  S T E P S   U P   W I D T H   O F   RGB   W O R K I N G   A S  I N D I C A T O R S  //
      //                                                                                      //
      //  STEPS UP WIDTH OF RGB USED AS INDICATORS FOR 'CAPSLOCK', [_NUMB] LAYER,...          //
      //                                                                                      //
      //  KC_Q:   *  STEPS UP RGB WIDTH USED AS INDICATORS FOR CAPSLOCK, [_NUMB] LAYER,...    //
      //                                                                                      //
      //////////////////////////////////////////////////////////////////////////////////////////
      //
      case STP_ID:
          if ( rgblight_config.enable && !whole_keyboard_as_indicator
             && (capslock_is_active || numbers_is_active) )
          {
            diff = (diff < 4 ? diff + 1 : 1 );
            show_RGB_LEDs();
          }
          case_found = true; return false; break;
// this function is not going to be used with 23 leds per hand
//[_powr]



//🔥
//[_POWR]
// [FIRMWARE_SIZE]
//   using triggered_control_mod as a bool function, we save from 38 to 66 bytes --> 28 bytes saved
// [firmware_size]

// case (holding)sleep computer / (tapping)apple menu bar: 'SL_MEN' now is implemented with tap_dance
//...which is much more comfortable to press than 'Control+[_POWR]+Z' !!! 

// (holding control)kill current app / (tapping)dock
      case KA_DCK:    if (check_mod_and_remove_it(CTRL_MODS, true))
                      {
                        register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_ESC);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      }
                      else
                      {
                        register_code(KC_LCTL); tap_code(KC_F3); unregister_code(KC_LCTL); // DOCK BAR
                      }
                      case_found = true; return false; break;

// (holding control)call kill app menu / (tapping)tool bar
      case KM_TOL:    if (check_mod_and_remove_it(CTRL_MODS, true))
                      {
                        register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_ESC);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      }
                      else                      
                      {
                        register_code(KC_LCTL); tap_code(KC_F5); unregister_code(KC_LCTL); // TOOLS BAR
                      }
                      case_found = true; return false; break;

// case (holding)shut down / (tapping)status bar: 'SH_STA' now is implemented through tap_dance
//...which is much more comfortable to press than 'Control+[_POWR]+V' !!! 

// (holding control)restart computer / (tapping)floating window
      case RT_FLO:  // [FIRMWARE_SIZE]
                      //we save unregister control and register again
                      //if (triggered_mod(KC_C)) 
                    // [firmware_size]

                      //same 'saving control' issue as in previous case
                      if (check_mod_and_remove_it(CTRL_MODS, false))
                      {
                        volumeSetToLevel(1);
                      //keystrokes for restarting:  (guessed by try and fail method)
                        register_code(KC_LGUI);
                        tap_code(KC_POWER);                      
                        unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      }
                      else
                      {
                      // [SYSTEM PREFERENCES]
                        register_code(KC_LCTL); tap_code(KC_F6); unregister_code(KC_LCTL);
                      // [system preferences]
                      }
                      case_found = true; return false; break;
//[_POWR]



//🔥
//[_LEDS]
      case RGB_HUI: rgblight_increase_hue_noeeprom();          case_found = true; return false; break;
      case RGB_HUD: rgblight_decrease_hue_noeeprom();          case_found = true; return false; break;
      case RGB_SAI: rgblight_increase_sat_noeeprom();          case_found = true; return false; break;
      case RGB_SAD: rgblight_decrease_sat_noeeprom();          case_found = true; return false; break;
      case RGB_VAI: rgblight_increase_val_noeeprom();          case_found = true; return false; break;
      case RGB_VAD: rgblight_decrease_val_noeeprom();          case_found = true; return false; break;

                 // Save the original setting to EEPROM before layer change, 
                 // and read it back and set it again after returning to base layer.
      case SAV_COL: set_default_hsv();
                    eeconfig_update_rgblight(rgblight_config.raw);
                    flashing_RGB_LEDs(10, RGB_MY_AZURE, RGB_MY_PURPLE);
                    case_found = true; return false; break;

      case GET_HSV: flashing_RGB_LEDs(5, RGB_MY_YELLOW, RGB_MY_PURPLE);
                    SEND_STRING("\n===");
                    SEND_STRING("\nget_hsv() -> ");
                    get_hsv();
                    case_found = true; return false; break;

// [WHYWEDOTHIS]
// We reprogram RGB_TOG instead of using it because originally it save to eeprom,
// ... and we don't want to wear the eeprom down.
// We use this for saving and restoring current LEDs while toggling.                    
      case RGB_TOG: rgblight_toggle_noeeprom();
                    set_default_hsv();
                    //wait_ms(50);
                    wait_ms(10);
                    show_RGB_LEDs();
                    case_found = true; return false; break;
// [whywedothis]                    

/*
ROW 1 COLORS
*/
      case CH_RED:  rgblight_sethsv_noeeprom(HSV_MY_RED);           case_found = true; return false; break;
      case CH_CORL: rgblight_sethsv_noeeprom(HSV_MY_DARK_CORAL);    case_found = true; return false; break;
      case CH_ORNG: rgblight_sethsv_noeeprom(HSV_MY_ORANGE_RED);    case_found = true; return false; break;
      case CH_GOLR: rgblight_sethsv_noeeprom(HSV_MY_LIGHT_CORAL_2); case_found = true; return false; break;
      case CH_GOLD: rgblight_sethsv_noeeprom(HSV_MY_GOLD);          case_found = true; return false; break;

      case CH_YLLW: rgblight_sethsv(HSV_MY_YELLOW);                 case_found = true; return false; break;

/*
ROW 2 COLORS
*/
      case CH_CHRT: rgblight_sethsv_noeeprom(HSV_MY_CHARTREUSE);  case_found = true; return false; break;
      case CH_GREN: rgblight_sethsv_noeeprom(HSV_MY_GREEN);       case_found = true; return false; break;
      case CH_SPRG: rgblight_sethsv_noeeprom(HSV_MY_SPRINGGREEN); case_found = true; return false; break;
      case CH_TRQS: rgblight_sethsv_noeeprom(HSV_MY_TURQUOISE);   case_found = true; return false; break;
      case CH_TEAL: rgblight_sethsv_noeeprom(HSV_MY_TEAL);        case_found = true; return false; break;

      case CH_WHIT: rgblight_sethsv_noeeprom(HSV_MY_WHITE);       case_found = true; return false; break;

/*
ROW 3 COLORS
*/
      case CH_CYAN: rgblight_sethsv_noeeprom(HSV_MY_CYAN);        case_found = true; return false; break;
      case CH_AZUR: rgblight_sethsv_noeeprom(HSV_MY_AZURE);       case_found = true; return false; break;
      case CH_BLUE: rgblight_sethsv_noeeprom(HSV_MY_BLUE);        case_found = true; return false; break;
      case CH_PRPL: rgblight_sethsv_noeeprom(HSV_MY_PURPLE);      case_found = true; return false; break;

      // case CH_MGNT: rgblight_sethsv_noeeprom(RGB_MY_MAGENTA);
      case CH_MGNT: rgblight_sethsv(HSV_MY_MAGENTA);              case_found = true; return false; break;
                         // #define RGB_MY_MAGENTA      0xFF, 0x00, 0xAA  // 0xFF, 0x00, 0xFF

      case CH_PINK: rgblight_sethsv_noeeprom(HSV_MY_PINK);        case_found = true; return false; break;

      case CH_EMPT: rgblight_sethsv_noeeprom(HSV_MY_EMPTY);       case_found = true; return false; break;
//[_leds]



//🔥
   // this line is responsible of the management of the presses for THE REST of the keys.
      default: case_found = false; return true; break; // Process all other keycodes normally when pressed


    }// switch (keycode)
  }// if (record->event.pressed)
  else 





  {
//  Do something else when release

  // if (apps_trigger || karabiner_apps_trigger)
  // {
  //   return process_record_apps(keycode, record);
  // } // if (apps_trigger && !karabiner_apps_trigger)

    switch(keycode)
    {
    // [FIRMWARE_SIZE]
        // 746-674= 72 bytes saved using TT(layer) instead of my implementation
        // ... but RGB layer color changes too slow.  MY way is instantly changed !
        // Emulating TT(layer), but better:
    // [firmware_size]


      // case OSL_DALY:
      //             // MANAGEMENT OF OSL as part of a macro or tap dance routine:
      //             // set_oneshot_layer(LAYER, ONESHOT_START)              on key down
      //             // clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED) on key up
      //             // reset_oneshot_layer() if you want to cancel the oneshot
      // case OSL_FVIM:
      // case OSL_POWR:
      // case OSL_ACCN:

      // case OSL_SYMB:
      // case OSL_NUMB:
      // case OSL_MOUS:

      case OSL_DVIM: 
                     // clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
                     // reset_oneshot_layer();
                     layer_clear();
                     return false; break;



//#07 #R3-L3
      case TT_NUMB:   // Left Thumb 3
                      // if Karabiner_apps_trigger ---> Karabiner_apps off
                      // else Invert _NUMB if it was a hold, no a quick tap


                      if (timer_elapsed(lt12_timer) > TAPPING_TERM)
                      {  
                        // if we have had pressed this 'trigger layer key' more time than tapping_term
                        // is because we have used it for typing some numbers (or letters if came from
                        // ... numbers layers)
                        //
                        // now, when we release this 'trigger layer key', we return to previous layer
                        layer_invert(_NUMB);
                      }                        
                      case_found = true; return false; break;


//#08 #R3-L3
      case TH_R3_APPS_TRIGGER: 
// next if statement is not necessary cause mirrored layer triggers are now accesed holding master_keys
// master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
                               // if (state_number == _NUMB)
                               // {
                               //   layer_off(_NUMB);
                               // }
                               case_found = true;

                               return true;
                               break;

// case 'R3 release' never happens because at the beginning of process_record_user we send the focus to
//... process_record_apps.
// This is because we have apps_trigger or karabiner_apps_trigger set to true.



// #if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________
//                                {
//                                  apps_trigger = false;

//                                  if (!karabiner_apps_trigger)
//                                  {
//                                    show_RGB_LEDs();
//                                    if (multi_apps)
//                                    {
//                                      multi_apps = false;
//                                    }
//                                    else
//                                    {
//                                      wait_ms(100);
//                                      HIDEOTH;
//                                    }
//                                  }
//                                }

// #elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯
//                                {
//                                  karabiner_apps_trigger = false;
//                                  unregister_code(KC_F20);

//                                  if (!apps_trigger)
//                                  {
//                                    show_RGB_LEDs();
//                                    if (multi_apps)
//                                    {
//                                      multi_apps = false;
//                                      remove_mod(gui_mod);
//                                    }
//                                    else
//                                    {
//                                      // do nothing
//                                    }
//                                  }// if (!apps_trigger)
//                                }

// #endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^






// CASE TT_NUMB:
// #if defined(DEFAULT_TYPINATOR_APPS) // ________________________________________________________________

//                       if (karabiner_apps_trigger)
//                       {
//                         karabiner_apps_trigger = false;
//                         unregister_code(KC_F20);

//                         // remove 'multi_apps' mode
//                         if (multi_apps)
//                         {
//                           remove_mod(gui_mod);
//                         }

//                         if (!apps_trigger) // if our right thumb doesn't continue holding R3
//                         {
//                           show_RGB_LEDs();
//                           if (multi_apps)
//                           {
//                         // only if neither 'karabiner_apps_trigger' nor 'apps_trigger' are no longer working !
//                             multi_apps = false;
//                           }
//                           else
//                           {
//                             // HIDEOTH;
//                           }
//                         }
//                       }
//                       return false;

// #elif defined(DEFAULT_KARABINER_APPS) // ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯

//                       if (apps_trigger)
//                       {
//                         apps_trigger = false;

//                         if (multi_apps && karabiner_apps_trigger)
//                         {
//                           add_mod(gui_mod);
//                         }

//                         if (!karabiner_apps_trigger)
//                         {
//                           show_RGB_LEDs();
//                           if (multi_apps)
//                           {
//                             multi_apps = false;
//                           }
//                           else
//                           {
//                             HIDEOTH;
//                           }
//                         }// if (!karabiner_apps_trigger)

//                       }// if (apps_trigger)
//                       return false;

// #endif                         // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// case tt_numb:




      // case CHANGE_SYMB_TO_NUMB:
      //                 layer_off(_NUMB);
      //                 if (symbols_pressed)
      //                 {
      //                   layer_on(_SYMB);
      //                 }
      //                 case_found = true; return false; break;
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

      case CHANGE_DALY_TO_LEDS: layer_off(_LEDS);
                                case_found = true; return false; break;

      case MO(_DALY): // TH_R1_DALY_MOUS:
                      // if (state_number == _MOUS)
                      // {
                      //    layer_off(_MOUS);
                      // }
                      // else
                      // if (state_number == _DALY)
                      // {
                        // remove GUI modifier when coming from _DALY changing apps with CMD+TAB; SHIFT+CMD+TAB
                        if (changing_apps)
                        {
                          changing_apps = false;
                          unregister_code(KC_LGUI);
                          // triggered_gui();
                          // remove_mod(gui_mod);
                        }
                        // layer_off(_DALY);
                      // }
                      case_found = true; 

                      return true; // this 'return true' switch [_DALY] off automatically
                      break;


// next two cases are not necessary because mirrored layer triggers are now accesed holding master_keys.
// master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
        // case TH_R2_FVIM_SYMB: 
        // case TH_L2_SYMB_FVIM: // if else without parenthesis
        //                       if (state_number == _FVIM)
        //                         layer_off(_FVIM);
        //                       else
        //                    // symbols_pressed = false;
        //                       if (state_number == _SYMB)
        //                         layer_off(_SYMB);

        //                       case_found = true; return false; break;

// next case is not necessary because mirrored layer triggers are now accesed holding master_keys.
// master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
      // case TH_R4_POWR_LEDS:
      //                 if (state_number == _POWR)
      //                 {
      //                    layer_off(_POWR);
      //                 }
      //                 else
      //                 if (state_number == _LEDS)
      //                 {
      //                   layer_off(_LEDS);
      //                 }
      //                 case_found = true; return false; break;


      default: case_found = false; return true; break; // Process all other keycodes normally when pressed


    }// switch(keycode)
  }// else // if (record->event.pressed)
}// bool process_record_keymap(uint16_t keycode, keyrecord_t *record)






