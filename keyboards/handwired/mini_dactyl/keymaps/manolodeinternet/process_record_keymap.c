// #include QMK_KEYBOARD_H
// #include "process_record_keymap.h"
#include "manolodeinternet.h"

// APPS - PROCESS_RECORD_APPS //[PRINTING: 735...1033]
// bool process_record_apps(uint16_t keycode, keyrecord_t *record) {
//   if (record->event.pressed)
//   {
//     switch(keycode)
//     {
//   //  Left Thumb 1
//   //  Quit app
//       case MO(_DALY):register_code(KC_LGUI);
//                              tap_code(KC_Q);
//                       unregister_code(KC_LGUI);
//                         return false; break;

//   //   Left Thumb 2
//   //   Toggle between current and last app
//   //   It's similar to KC_Y in [_DALY], but ...
//   //   IT CHANGES QUICKLY, WITHOUT APPS BAR IN THE MIDDLE OF THE SCREEN !!!
//       case _SYM_SPC:    // If you want to change from one app to another app in multi_apps mode,
//                         //...uncomment next line.
//                         // multi_apps = true;
//                           register_code(KC_LGUI);
//                                tap_code(KC_TAB);
//                         unregister_code(KC_LGUI);
//                         return false; break;

//       default:          return  true;

//     } // switch (keycode)
//   } // if (record->event.pressed)
//   else 
//   {
// //  Do something else when release
//     return true;
//   }

// }; // bool process_record_apps(uint16_t keycode, keyrecord_t *record)
































bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {

  // if (apps_trigger)
  // {
  //   case_found = true;
  //   return process_record_apps(keycode, record);
  // }

// if we are no in apps_trigger mode: we can be in karabiner_apps_trigger mode or in _DFLT layer mode
  if (record->event.pressed)
  // Do something when pressed
  {
    // case_found = true;
    switch(keycode)
    {





      case O_COMMENT: tap_code       (KC_SLSH);
                      register_code  (KC_LSFT);
                      tap_code       (KC_8);
                      unregister_code(KC_LSFT);
                      return false;

      case C_COMMENT: register_code  (KC_LSFT);
                      tap_code       (KC_8);
                      unregister_code(KC_LSFT);
                      tap_code       (KC_SLSH);
                      return false;







//[_DFLT]
      // case _APPS_TRIGGER: apps_trigger = true;
      //                    return true; break;

      case MO_DALY: if (apps_trigger)
                      {
                        register_code(KC_LGUI);
                             tap_code(KC_Q);
                      unregister_code(KC_LGUI);
                        return false; break;
                      }
                      else
                      {
                        lt12_timer = timer_read();
                        layer_on(_DALY);
                        return false; break;
                      }




  //   Left Thumb 2
  //   Toggle between current and last app
  //   It's similar to KC_Y in [_DALY], but ...
  //   IT CHANGES QUICKLY, WITHOUT APPS BAR IN THE MIDDLE OF THE SCREEN !!!
      case _SYM_SPC: if (apps_trigger)
                      {
                        // If you want to change from one app to another app in multi_apps mode,
                        //...uncomment next line.
                        // multi_apps = true;
                          register_code(KC_LGUI);
                               tap_code(KC_TAB);
                        unregister_code(KC_LGUI);
                        return false; break;
                      }
                      else
                      {
                        case_found = false;
                        return true; break;
                      }

//#05 #R3-L3
      //   Left Thumb 3
      case TT_NUMB: // BEEP_1;
                    // SS_BEEP_1;
                    if (apps_trigger)
                      {
                        // If you want to change from one app to another app in multi_apps mode,
                        //...uncomment next line.
                        // multi_apps = true;
                          register_code(KC_LSFT); register_code(KC_LGUI);
                               tap_code(KC_TAB);
                        unregister_code(KC_LGUI); unregister_code(KC_LSFT);
                        return false; break;
                      }
                      else
                      {
                        lt12_timer = timer_read();
                        layer_invert(_NUMB);
                        return false; break;
                      }

       // case OSL(_XVIM): clear_oneshot_layer_state(ONESHOT_PRESSED);
       //                  reset_oneshot_layer();
       //                  layer_clear();
       //                  return true; break;

       // case OSL_LEDS:clear_oneshot_layer_state(ONESHOT_PRESSED);
       //               reset_oneshot_layer();

       //               set_oneshot_layer(_LEDS, ONESHOT_START);
       //               return true; break;

       // case OSL_DVIM:clear_oneshot_layer_state(ONESHOT_PRESSED);
       //               reset_oneshot_layer();
                     
       //               // reset_oneshot_layer();
       //               set_oneshot_layer(_DVIM, ONESHOT_START);
       //               return false; break;

      // case OSL_APPS: clear_oneshot_layer_state(ONESHOT_PRESSED);
      //                reset_oneshot_layer();
                     
/*
For one shot layers, you need to call `set_oneshot_layer        (LAYER, ONESHOT_START)` on key down,
and                                   `clear_oneshot_layer_state(ONESHOT_PRESSED)`      on key up.
If you want to cancel oneshot,   call `reset_oneshot_layer()`.
*/
                     // layer_clear();
                  // return false; break;
// case OSL_APPS continues in ...
//...case TH_R3_APPS_TRIGGER

//[_dflt]


//[# _APPS STUFF]
//[# #R3-L3 #01]

//#06 #R3-L3
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
//    Right Thumb 3
      // case TH_R3_APPS_TRIGGER://if (alt_mod)

      //             // MANAGEMENT OF OSL as part of a macro or tap dance routine:
      //             // set_oneshot_layer(LAYER, ONESHOT_START)              on key down
      //             // clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED) on key up
      //             // reset_oneshot_layer() if you want to cancel the oneshot



      //                             register_code(KC_F22);
      //                             apps_trigger = true;

      //                             if (check_mod_and_remove_it (GUI_MODS, false)) { multi_apps = true; }

      //                             if (check_mod_and_remove_it(CTRL_MODS, false)) { control_apps = true;}
      //                             if (check_mod_and_remove_it(SHFT_MODS, false)) { shift_apps = true;  }

      //                             rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
      //                           // }
      //                             case_found = true; return false; break;
// //////////////////////////////////////////////////////////////////////////////////////////////// ###

//🔥
//[_DALY]
      // case CHANGE_DALY_TO_LEDS: 
      //                      layer_off(_DALY);
      //                      layer_on(_LEDS);
      //                      case_found = true; return false; break;

//[TRASH]
      // case MO(_DALY):  case_found = true;

      //                  return true; //this line switch on [_DALY] layer automatically.
      //                  break; 
//[trash]

      case TOG_ID:   
// #if defined(RGBLIGHT_ENABLE)
                      if (rgblight_config.enable && (capslock_is_active || numbers_is_active))
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
                      // case_found = true;
// #endif
                      return false; break;


//
// THIS FUNCTION IS NOT GOING TO BE USED WITH 23 LEDS PER HAND
      //////////////////////////////////////////////////////////////////////////////////////////
      //                                                                                      //
      // [PROCESS_RECORD_USER] [_POWR] KC_Q (STP_ID)                                          //
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
// #if defined(RGBLIGHT_ENABLE)
          if ( rgblight_config.enable && !whole_keyboard_as_indicator
             && (capslock_is_active || numbers_is_active) )
          {
            diff = (diff < 4 ? diff + 1 : 1 );
            show_RGB_LEDs();
          }
          // case_found = true;
// #endif
          return false; break;
// this function is not going to be used with 23 leds per hand
//[_powr]


//[_LEDS]
      case RGB_HUI: rgblight_increase_hue_noeeprom();          /*case_found = true;*/ return false; break;
      case RGB_HUD: rgblight_decrease_hue_noeeprom();          /*case_found = true;*/ return false; break;
      case RGB_SAI: rgblight_increase_sat_noeeprom();          /*case_found = true;*/ return false; break;
      case RGB_SAD: rgblight_decrease_sat_noeeprom();          /*case_found = true;*/ return false; break;
      case RGB_VAI: rgblight_increase_val_noeeprom();          /*case_found = true;*/ return false; break;
      case RGB_VAD: rgblight_decrease_val_noeeprom();          /*case_found = true;*/ return false; break;

                 // Save the original setting to EEPROM before layer change, 
                 // and read it back and set it again after returning to base layer.

   // Discord/splitkb.com/@frogmouth 2020/06/28/00:29h
   // Save state to EEPROM
   // case CU_SAVE:
   //   rgblight_sethsv(rgblight_get_hue(), rgblight_get_sat(), rgblight_get_val());
   //   break;
      case SAV_COL: set_default_hsv();
                    eeconfig_update_rgblight(rgblight_config.raw);
                    flashing_RGB_LEDs(10, RGB_MY_AZURE, RGB_MY_PURPLE);
                    /*case_found = true;*/ return false; break;

      case GET_HSV: flashing_RGB_LEDs(5, RGB_MY_YELLOW, RGB_MY_PURPLE);
                    SEND_STRING("\n===");
                    SEND_STRING("\nget_hsv() -> ");
                    get_hsv();
                    /*case_found = true;*/ return false; break;

// [WHYWEDOTHIS]
// We reprogram RGB_TOG instead of using it because originally it save to eeprom,
// ... and we don't want to wear the eeprom down.
// We use this for saving and restoring current LEDs while toggling.                    
      case RGB_TOG: rgblight_toggle_noeeprom();
                    set_default_hsv();
                    //wait_ms(50);
                    wait_ms(10);
                    show_RGB_LEDs();
                    /*case_found = true;*/ return false; break;
// [whywedothis]                    

/*
ROW 1 COLORS
*/
      case CH_RED:  rgblight_sethsv_noeeprom(HSV_MY_RED);           /*case_found = true;*/ return false; break;
      // case CH_CORL: rgblight_sethsv_noeeprom(HSV_MY_DARK_CORAL);    /*case_found = true;*/ return false; break;
      case CH_ORNG: rgblight_sethsv_noeeprom(HSV_MY_ORANGE_RED);    /*case_found = true;*/ return false; break;
      // case CH_GOLR: rgblight_sethsv_noeeprom(HSV_MY_LIGHT_CORAL_2); /*case_found = true;*/ return false; break;
      // case CH_GOLD: rgblight_sethsv_noeeprom(HSV_MY_GOLD);          /*case_found = true;*/ return false; break;

      case CH_YLLW: rgblight_sethsv(HSV_MY_YELLOW);                 /*case_found = true;*/ return false; break;

/*
ROW 2 COLORS
*/
      // case CH_CHRT: rgblight_sethsv_noeeprom(HSV_MY_CHARTREUSE);  /*case_found = true;*/ return false; break;
      // case CH_GREN: rgblight_sethsv_noeeprom(HSV_MY_GREEN);       /*case_found = true;*/ return false; break;
      // case CH_SPRG: rgblight_sethsv_noeeprom(HSV_MY_SPRINGGREEN); /*case_found = true;*/ return false; break;
      // case CH_TRQS: rgblight_sethsv_noeeprom(HSV_MY_TURQUOISE);   /*case_found = true;*/ return false; break;
      // case CH_TEAL: rgblight_sethsv_noeeprom(HSV_MY_TEAL);        /*case_found = true;*/ return false; break;

      case CH_WHIT: rgblight_sethsv_noeeprom(HSV_MY_WHITE);       /*case_found = true;*/ return false; break;

/*
ROW 3 COLORS
*/
      // case CH_CYAN: rgblight_sethsv_noeeprom(HSV_MY_CYAN);        /*case_found = true;*/ return false; break;
      // case CH_AZUR: rgblight_sethsv_noeeprom(HSV_MY_AZURE);       /*case_found = true;*/ return false; break;
      // case CH_BLUE: rgblight_sethsv_noeeprom(HSV_MY_BLUE);        /*case_found = true;*/ return false; break;
      case CH_PRPL: rgblight_sethsv_noeeprom(HSV_MY_PURPLE);      /*case_found = true;*/ return false; break;

      case CH_MGNT: rgblight_sethsv_noeeprom(RGB_MY_MAGENTA);
      // case CH_MGNT: rgblight_sethsv(HSV_MY_MAGENTA);              /*case_found = true;*/ return false; break;
      //                    // #define RGB_MY_MAGENTA      0xFF, 0x00, 0xAA  // 0xFF, 0x00, 0xFF

      case CH_PINK: rgblight_sethsv_noeeprom(HSV_MY_PINK);        /*case_found = true;*/ return false; break;

      // case CH_EMPT: rgblight_sethsv_noeeprom(HSV_MY_EMPTY);       /*case_found = true;*/ return false; break;
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

    case_found = true;
    switch(keycode)
    {
      // case _APPS_TRIGGER: apps_trigger = false;
      //                    return true; break;

      // case OSL_LEDS: 
      //                clear_oneshot_layer_state(ONESHOT_PRESSED);
      //                // reset_oneshot_layer();
      //                // layer_clear(); 
      //                return true; break;

      // case OSL_DVIM: 
      //                layer_clear();
      //                return false; break;

      case MO_DALY: if (!apps_trigger)
                    {
                      layer_off(_DALY);
                      if (changing_apps)
                      {
                        changing_apps = false;
                        unregister_code(KC_LGUI);
                      }
                      if (timer_elapsed(lt12_timer) < TAPPING_TERM)
                      {  
                        tap_code(KC_ESC);
                      }
                      return false; break;
                    }


                          case MO(_DALY): // TH_R1_DALY_MOUS
// remove GUI modifier when coming from _DALY changing apps with CMD+TAB; SHIFT+CMD+TAB
                        if (changing_apps)
                        {
                          changing_apps = false;
                          unregister_code(KC_LGUI);
                        }

                      return true; // this 'return true' switch [_DALY] off automatically
                      break;

//#07 #R3-L3
      case TT_NUMB: // Left Thumb 3
                    // if Karabiner_apps_trigger ---> Karabiner_apps off
                    // else Invert _NUMB if it was a hold, no a quick tap
                    if (!apps_trigger)
                    {
                      layer_invert(_NUMB);
                      if (timer_elapsed(lt12_timer) < TAPPING_TERM)
                      {  
                        tap_code(KC_ENT);
                      }
                      return false; break;
                    }


//#08 #R3-L3
//       case TH_R3_APPS_TRIGGER: 
// // next if statement is not necessary cause mirrored layer triggers are now accesed holding master_keys
// // master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
//                                // if (state_number == _NUMB)
//                                // {
//                                //   layer_off(_NUMB);
//                                // }
//                                case_found = true;

//                                return true;
//                                break;


      // case CHANGE_DALY_TO_LEDS: layer_off(_LEDS);
      //                           case_found = true; return false; break;



      default: case_found = false; return true; break; // Process all other keycodes normally when pressed


    }// switch(keycode)
  }// else // if (record->event.pressed)
}// bool process_record_keymap(uint16_t keycode, keyrecord_t *record)






