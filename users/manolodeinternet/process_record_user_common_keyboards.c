// BACKLIT_LEDS, RGB_LEDS checked

#include "process_record_user_common_keyboards.h"

// USER - PROCESS_RECORD_USER
bool symbol_or_space = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

#if defined(MINI_DACTYL_THUMBS)

  keymap_bool = process_record_keymap(keycode, record);
  if (case_found) // if process_record_keymap has processed a keystroke ...
  {
    return keymap_bool;
  }
  else // since process_record_keymap didn't process any keystroke,...
       // ...process_record_user is responsible for detecting it
  {
    case_found = true;
#endif

  if (record->event.pressed)
  // Do something when pressed
  {
    switch(keycode)
    {
//[_DFLT]
case _SYM_SPC:       if ( get_mods()&GUI_MODS && get_mods()&ALT_MODS )
                     {
                       unregister_code(KC_LALT);
                       unregister_code(KC_LGUI);  
                              tap_code(KC_ESC);
                         register_code(KC_LALT); // allows iterations of ESC in a row
                         register_code(KC_LGUI); // allows iterations of ESC in a row
                     }
                     else
                     {

                       if ( ( get_mods()&CTRL_MODS ) && ( !( get_mods()&GUI_MODS ) ) )// ctrl; ctrl+sft; ctrl+alt -> Enter                        
                       {
                       unregister_code(KC_LCTL);
                            tap_code16(KC_ENT);   // tap_code16 allows tapping SFT(Enter) or ALT(Enter) if needed
                         register_code(KC_LCTL); // allows several iterations of Enter in a row
                       }
                       else// !ctrl; ctrl+gui -> spacebar
                       {
                         symbol_or_space = true;
                         lt13_timer = timer_read();
                         layer_on(_SYMB);
                       }
                     }
                     return false; break;

case _DVIM_BS:         layer_on(_DVIM);  // this switch on LEDS even when we use DELETE

                       if (check_mod_and_remove_it(SHFT_MODS, true))
                       {
                         tap_code(KC_DEL);
                         register_code(KC_LSFT);
                       }
                       else 
                       {
                         lt13_timer = timer_read();
                       }
                       return false; break;
//[_dflt]

//[_SYMB]
      case QUESTION_MARK:   if (check_mod_and_remove_it(SHFT_MODS, false))
                            {
                              register_code(KC_LALT);
                              tap_code(KC_SLSH);
                              unregister_code(KC_LALT);
                            }
                            else
                            {
                              register_code(KC_LSFT);
                              tap_code(KC_SLSH);
                              unregister_code(KC_LSFT);
                            }

                            return false; break;



      case EXCLAMATION_MARK:  if (check_mod_and_remove_it(SHFT_MODS, false))
                              { 
                                unregister_code(KC_LSFT);
                                register_code(KC_LALT);
                                tap_code(KC_1);
                                unregister_code(KC_LALT);
                                register_code(KC_LSFT);
                              }
                              else
                              {
                                register_code(KC_LSFT);
                                tap_code(KC_1);
                                unregister_code(KC_LSFT);
                              }

                              return false; break;



      case CURRENCY_SIGN:  if (check_mod_and_remove_it(SHFT_MODS, false)) // $ €
                              {
                                  register_code(KC_LALT);
                                          tap_code(KC_2);
                                unregister_code(KC_LALT);  // €                                
                              }
                              else
                              {
                                  register_code(KC_LSFT);
                                  tap_code(KC_4);
                                unregister_code(KC_LSFT);  // $
                              }

                              return false; break;

      case PLUS_EQ:  if (check_mod_and_remove_it(SHFT_MODS, false))
                     { 
                       unregister_code(KC_LSFT);
                              tap_code(KC_EQL);
                         register_code(KC_LSFT);
                     } 
                     else
                     {
                         register_code(KC_LSFT);
                              tap_code(KC_EQL);
                       unregister_code(KC_LSFT);
                     }
                     return false; break;

      case PERC_CI:  if (check_mod_and_remove_it(SHFT_MODS, false))  // % ˆ
                     {
                       tap_code(KC_6); // circumflex sign
                     } 
                     else
                     {
                       register_code(KC_LSFT);
                       tap_code(KC_5);
                       unregister_code(KC_LSFT); // percentage sign
                     }
                     return false; break;

      case AT_HASH:  if (check_mod_and_remove_it(SHFT_MODS, false))  // @ #
                     {
                         // shift_pressed = true;
                         // register_code(KC_LSFT);
                              tap_code(KC_3); // hash sign
                       // unregister_code(KC_LSFT);
                     } 
                     else
                     {
                         register_code(KC_LSFT);
                              tap_code(KC_2);
                       unregister_code(KC_LSFT); // at sign
                     }
                     // if (shift_pressed)
                     // {
                     //    register_code(KC_LSFT);
                     // }
                     return false; break;

      case QUOTE:      tap_code(KC_QUOT);
                       tap_code(KC_SPC); // quote sign  plus spacebar
                       return false; break;

      case D_QUOTE:      register_code(KC_LSFT);
                              tap_code(KC_QUOT);
                       unregister_code(KC_LSFT);
                              tap_code(KC_SPC); // quote sign  plus spacebar
                       return false; break;
//[_symb]

//🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//[_FVIM]
      case B_LN_PR:    if (check_mod_and_remove_it(ALT_MODS, false))
                       {
                           // register_code(KC_LALT);
                                  tap_code(KC_UP);  // begin of parragraph
                         // unregister_code(KC_LALT);                                
                       }
                       else
                       {
                           register_code(KC_LGUI);
                                tap_code(KC_LEFT);  // Begin of line
                         unregister_code(KC_LGUI);
                       }

                       return false; break;


      case E_LN_PR:    if (check_mod_and_remove_it(ALT_MODS, false))
                       {
                           // register_code(KC_LALT);
                                tap_code(KC_DOWN);  // End of parragraph
                         // unregister_code(KC_LALT);                                
                       }
                       else
                       {
                           register_code(KC_LGUI);
                                tap_code(KC_RGHT);  // End of line
                         unregister_code(KC_LGUI);
                       }

                       return false; break;


      case B_WD_CC:    if (check_mod_and_remove_it(ALT_MODS, true))
                       {
                           register_code(KC_LCTL);
                                tap_code(KC_LEFT);  // Begin of next camel case change
                         unregister_code(KC_LCTL);
                           register_code(KC_LALT);  // enables 2 moves in a row to begin of paragraphs
                       }
                       else
                       {
                           register_code(KC_LALT);
                                tap_code(KC_LEFT);  // Begin of word
                         unregister_code(KC_LALT);
                       }

                       return false; break;



      case E_WD_CC:    if (check_mod_and_remove_it(ALT_MODS, true))
                       {
                           register_code(KC_LCTL);
                                tap_code(KC_RGHT);  // End of next camel case change
                         unregister_code(KC_LCTL);
                           register_code(KC_LALT);  // enables 2 moves in a row to begin of paragraphs

                       }
                       else
                       {
                           register_code(KC_LALT);
                                tap_code(KC_RGHT);  // End of word
                         unregister_code(KC_LALT);
                       }

                       return false; break;
//[_fvim]
//🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

//[_LEDS]
#if defined(COMPREHENSIVE_30_LAYOUT)

      case BLIT_OFF: gherkinBacklightLevel =  0; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_01:  gherkinBacklightLevel =  1; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_02:  gherkinBacklightLevel =  2; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_03:  gherkinBacklightLevel =  3; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_04:  gherkinBacklightLevel =  4; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_05:  gherkinBacklightLevel =  5; backlight_level(gherkinBacklightLevel); return false;

      case BLIT_06:  gherkinBacklightLevel =  6; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_07:  gherkinBacklightLevel =  7; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_08:  gherkinBacklightLevel =  8; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_09:  gherkinBacklightLevel =  9; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_10:  gherkinBacklightLevel = 10; backlight_level(gherkinBacklightLevel); return false;

      case BLIT_11:  gherkinBacklightLevel = 11; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_12:  gherkinBacklightLevel = 12; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_13:  gherkinBacklightLevel = 13; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_14:  gherkinBacklightLevel = 14; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_15:  gherkinBacklightLevel = 15; backlight_level(gherkinBacklightLevel); return false;

      case BRTH_01:  breathing_period_set(1); breathing_enable();  return false;
      case BRTH_02:  breathing_period_set(2); breathing_enable();  return false;
      case BRTH_03:  breathing_period_set(3); breathing_enable();  return false;
      case BRTH_04:  breathing_period_set(4); breathing_enable();  return false;
      case BRTH_05:  breathing_period_set(5); breathing_enable();  return false;
      case BRTH_06:  breathing_period_set(6); breathing_enable();  return false;
      case BRTH_07:  breathing_period_set(7); breathing_enable();  return false;

      case BRTH_12:  breathing_period_set(12); breathing_enable(); return false;
      case BRTH_15:  breathing_period_set(15); breathing_enable(); return false;
#endif
//[_leds]

//[_DALY]
      case VOL_1:    volumeSetToLevel(1);         return false; // set volume to minimum (level 1)
      case VOL_8:    volumeSetToLevel(8);         return false; // set volume to middle  (level 8)

      case BRIGHT_1: brightSetToLevel(1);         return false; // set bright to minimum (level 1)

      case REWIND:    register_code(KC_F22); // asigned to 'fn' in karabiner-elements
                           tap_code(KC_F7);       // apple rewind default key in 'magic keyboard'
                    unregister_code(KC_F22);
                      return false;

      case PLAY_PAUSE:register_code(KC_F22); // asigned to 'fn' in karabiner-elements
                           tap_code(KC_F8);       // apple play/pause default key in 'magic keyboard'
                    unregister_code(KC_F22);
                      return false;

      case FORWARD:   register_code(KC_F22); // asigned to 'fn' in karabiner-elements
                           tap_code(KC_F9);       // apple forward default key in 'magic keyboard'
                    unregister_code(KC_F22);
                      return false;

      case PREV_APP:  register_code  (KC_LGUI);
                      register_code  (KC_LSFT);
                      tap_code       (KC_TAB);
                      unregister_code(KC_LSFT);
                      changing_apps = true;
                      return false;         

      case NEXT_APP:  register_code(KC_LGUI);
                           tap_code(KC_TAB);
                      changing_apps = true;
                      return false;

      case DICTATION: register_code(KC_LGUI);  wait_ms(100);  unregister_code(KC_LGUI);
                      return false;

      // case SIRI:      register_code(KC_LCTL);
      //                 register_code(KC_LSFT);
      //                 register_code(KC_LALT);
      //                 register_code(KC_LGUI);
      //                      tap_code(KC_SPC);
      //               unregister_code(KC_LCTL);
      //               unregister_code(KC_LSFT);
      //               unregister_code(KC_LALT);
      //               unregister_code(KC_LGUI);
      //                 return false;
//[_daly]

//[_POWR]
      case MY_CLEAR:  
                   // if caps_lock is ON
                      if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)){
                        capslock_tap();
                      }
                   // if caps_lock is OFF
                      else {
                      };

                      clear_keyboard();
                      clear_mods();

                      layer_clear();
                      return false;
//[_powr]

//[_ACCN]
      case CIRCU:    circumflex_requested = true; // requested circumflex accent
                     return false;                // Skip all further processing of this key when pressed

      case GRAVE:    grave_requested      = true; return false; // requested grave      accent
      case DIAER:    diaeresis_requested  = true; return false; // requested diaeresis  accent
//[_accn]

//[_FVIM]
   // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
   // ... except for the 'H' key:
      case FVIM_H: fvim("h");  return false;
//[_fvim]

// [_DVIM]
      case DVIM_Y: dvim("y");  return false;
      case DVIM_uU:    if (check_mod_and_remove_it(ALT_MODS, true))
                       {
                           dvim("U");
                           register_code(KC_LALT);  // enables 2 moves in a row to begin of paragraphs
                       }
                       else
                       {
                           dvim("u");
                       }
                       return false; break;
      case DVIM_I: dvim("i");  return false;
      case DVIM_O: dvim("o");  return false;
      case DVIM_pP:    if (check_mod_and_remove_it(ALT_MODS, true))
                       {
                           dvim("P");
                           register_code(KC_LALT);  // enables 2 moves in a row to begin of paragraphs
                       }
                       else
                       {
                           dvim("p");
                       }
                       return false; break;
      case DVIM_H: dvim("h");  return false;
      case DVIM_J: dvim("j");  return false;
      case DVIM_K: dvim("k");  return false;
      case DVIM_L: dvim("l");  return false;
      case DVIM_SP:dvim(" ");  return false;

//    case DVIM_N: dvim("n");  return false;
      case DVIM_M: dvim("m");  return false;
      case DVIM_ES:dvim("\e"); return false;
      case DVIM_BS:dvim("\b"); return false;
      case DVIM_EN:dvim("\n"); return false;
//[_dvim]

/*
// select [_AVIM]
//            case AVIM_Y: avim("y");  return false;
//            case AVIM_N: avim("n");  return false;
// the rest of the keys are combination of _FVIM + SHIFT key            
*/

// [_XVIM]
// [_CVIM]
      case CVIM_Y: cvim("y");  return false;
      case CVIM_U: cvim("u");  return false;
      case CVIM_I: cvim("i");  return false;
      case CVIM_O: cvim("o");  return false;
      case CVIM_P: cvim("p");  return false;

//    cvim("h") is disable because "OUTDNT:" from DefaultKeybindigs.dict doesn't work
      case CVIM_J: cvim("j");  return false;
      case CVIM_K: cvim("k");  return false;
      case CVIM_L: cvim("l");  return false;
      case CVIM_SP:cvim(" ");  return false;

      case CVIM_N: cvim("n");  return false;
      case CVIM_M: cvim("m");  return false;
      case CVIM_ES:cvim("\e"); return false;
      case CVIM_BS:cvim("\b"); return false;
      case CVIM_EN:cvim("\n"); return false;
// [_XVIM]
      case XVIM_Y: xvim("y");  return false;
      case XVIM_U: xvim("u");  return false;
      case XVIM_I: xvim("i");  return false;
      case XVIM_O: xvim("o");  return false;
      case XVIM_P: xvim("p");  return false;

      case XVIM_H: xvim("h");  return false;
      case XVIM_J: xvim("j");  return false;
      case XVIM_K: xvim("k");  return false;
      case XVIM_L: xvim("l");  return false;
      case XVIM_SP:xvim(" ");  return false;

      case XVIM_N:  xvim("n");  return false;
      case XVIM_M:  xvim("m");  return false;
      case XVIM_ES: xvim("\e"); return false;
      case XVIM_BS: xvim("\b"); return false;
      case XVIM_EN: xvim("\n"); return false;
// [_cvim]
// [_xvim]

   // this case is responsible of the management of the presses for THE REST of the keys.
      default: return true; // Process all other keycodes normally when pressed

    }// switch (keycode)
  }// if (record->event pressed)
  else 






















    {
//  Do something else when release

  // if (apps_trigger || karabiner_apps_trigger)
  // {
  //   return process_record_apps(keycode, record);
  // }
      switch(keycode)
      {

// if ( get_mods()&CTRL_MODS && !(get_mods()&GUI_MODS) )
// if ( !( get_mods()&CTRL_MODS && !(get_mods()&GuUI_MODS) )
        case _SYM_SPC:     if (symbol_or_space)
                           {
                             if (timer_elapsed(lt13_timer) < TAPPING_TERM)
                             {  
                               tap_code16(KC_SPC);                        
                             }
                           }
                           symbol_or_space = false;
                           layer_off(_SYMB);

                           return false; break;


        case _DVIM_BS:       if (!(check_mod_and_remove_it(SHFT_MODS, false)))
                           {
                             if (timer_elapsed(lt13_timer) < TAPPING_TERM)
                             {  
                               tap_code(KC_BSPC);
                             }
                           }
                           layer_off(_DVIM);

                           return false; break;


//🔥
//[_DFLT]
// #if defined(SIMPLE_30_LAYOUT)
//   case BSPC_DEL: show_RGB_LEDs();
//                    return false;  break;
// #endif
//[_dflt]       

//[_ACCN]
        case CIRCU: circumflex_requested = false; // non-requested circumflex accent
        return false;                      // Skip all further processing of this key when released


        case GRAVE: grave_requested      = false;  // non-requested grave      accent
        return false;                      // Skip all further processing of this key when released

        case DIAER: diaeresis_requested  = false;  // non-requested diaeresis  accent
        return false;                      // Skip all further processing of this key when released
//[_accn]

        case MY_CLEAR:  clear_mods();
                        clear_keyboard();                      
                        layer_clear();
                        return false;
                        break;

#if defined(SIMPLE_30_LAYOUT)
        case RGB_HUI:
        case RGB_HUD:
        case RGB_SAI:
        case RGB_SAD:
        case RGB_VAI:
        case RGB_VAD:

        case CH_RED: 
        case CH_CORL:
        case CH_ORNG:
        case CH_GOLR:
        case CH_GOLD:

        case CH_YLLW:

        case CH_CHRT:
        case CH_GREN:
        case CH_SPRG:
        case CH_TRQS:
        case CH_TEAL:

        case CH_WHIT:

        case CH_CYAN:
        case CH_AZUR:
        case CH_BLUE:
        case CH_PRPL:
        case CH_MGNT:

        case CH_PINK:

        case CH_EMPT: set_default_hsv(); return false;
#endif

      // case DICTATION: return false;

     // case SIRI:      unregister_code(KC_SPC);  unregister_code(KC_LGUI);
                     // return false;

// _DFLT LAYER
        case LT(_DALY,KC_J):
        case LT(_DALY, KC_Q):
//_QWER LAYER
        case LT(_DALY,KC_X):
        case LT(_DALY,KC_BSPC):
// MINI DACTYL THUMBS
        case MO(_DALY): // TH_R1_DALY_MOUS
// remove GUI modifier when coming from _DALY changing apps with CMD+TAB; SHIFT+CMD+TAB
                        if (changing_apps)
                        {
                          changing_apps = false;
                          unregister_code(KC_LGUI);
                        }

                      return true; // this 'return true' switch [_DALY] off automatically
                      break;

   // this line is responsible of the management of the releases for THE REST of the keys.
        default:       return true; // Process all other keycodes normally when released
      } // switch (keycode)

    } // if (event->keypressed)

#if defined(MINI_DACTYL_THUMBS)
  } // else (case_found)
#endif
  // return true;
  
}// bool process_record_user(uint16_t keycode, keyrecord_t *record)
//                                                                                      //
//                                                                                      //
//                                  m  a  c  r   o  s                                   //
//                                                                                      //
//                                                                                      //
//                       p r o c e s s    r e c o r d    u s e r                        //
//                                                                                      //
// end of new macros way                                                                //
//////////////////////////////////////////////////////////////////////////////////////////