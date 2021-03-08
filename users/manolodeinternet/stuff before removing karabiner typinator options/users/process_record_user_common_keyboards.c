// BACKLIT_LEDS, RGB_LEDS checked

#include "process_record_user_common_keyboards.h"

// __attribute__ ((weak))
// bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
//   return false;
// }

// USER - PROCESS_RECORD_USER
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  //    bool keymap_bool = false;
  //     bool case_found = false;
  // bool returned_value = false;

  // [\DELETEME]
  // if (record->event.pressed)
  // {
  //   sft_mod   = get_mods()&SHFT_MODS;
  //   ctl_mod = get_mods()&CTRL_MODS;
  //   alt_mod  = get_mods()&ALT_MODS;
  //   gui_mod     = get_mods()&GUI_MODS;
  // }
  // [deleteme]

#if defined(MINI_DACTYL_THUMBS)
  // if (apps_trigger || karabiner_apps_trigger)
  // {
  //   return process_record_apps(keycode, record);
  // }

  keymap_bool = process_record_keymap(keycode, record);
  if (case_found)
  {
    case_found = false;
    return keymap_bool;
  }
#endif

// if we are no in apps_trigger mode: we can be in karabiner_apps_trigger mode or in _DFLT layer mode
  if (record->event.pressed)
  // Do something when pressed
  {
    switch(keycode)
    {

case _SYM_SPC:       if (check_mod_and_remove_it(SHFT_MODS, false))
                              {
                                tap_code(KC_ENT);
                                register_code(KC_LSFT);
                              }
                                else
                                  {
                                    if (check_mod_and_remove_it(ALT_MODS, true))
                                    {
                                      tap_code(KC_ESC);
                                      register_code(KC_LALT);
                                    }
                                      else 
                                        {
                                          space_or_symb_pressed = true;
                                          lt13_timer = timer_read();
                                          layer_on(_SYMB);
                                        }
                                  }
                                  return false; break;



case _DVIM_BS:       
#if defined(RGB_LEDS)
  rgblight_sethsv_noeeprom(HSV_MY_RED);
#endif
                       if (check_mod_and_remove_it(SHFT_MODS, false))
                       {
                         tap_code(KC_DEL); 
                       }
                       else 
                       {
                         lt13_timer = timer_read();
                         layer_on(_DVIM);
                       }
                       return false; break;

//[DELETEME]
// 🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞
      case BSPC_DEL:      if (check_mod_and_remove_it(SHFT_MODS, false))
                            {
                              register_code(KC_DEL);
                            }
                            else
                            {
                              register_code(KC_BSPC);
                            }
#if defined(RGB_LEDS)
  rgblight_sethsv_noeeprom(HSV_MY_RED);
#endif
                            return false; break;
// 🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞🐞
//[deleteme]




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

      case PLUS_EQ:  if (check_mod_and_remove_it(SHFT_MODS, true)) {} 
                     else
                     {
                       register_code(KC_LSFT); // prepare for plus sign
                     }
                     tap_code(KC_EQL);         // plus or equal sign, depending on shift
                     unregister_code(KC_LSFT);
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
                       register_code(KC_3); // hash sign
                     } 
                     else
                     {
                       register_code(KC_LSFT);
                       tap_code(KC_2);
                       unregister_code(KC_LSFT); // at sign
                     }
                     return false; break;

      case QUOTE:  //if (check_mod_and_remove_it(SHFT_MODS, false))  // @ #
                     //{
                       tap_code(KC_QUOT);
                       tap_code(KC_SPC); // quote sign  plus spacebar
                     //} 
/*                     else
                     {
                       register_code(KC_LSFT);
                       tap_code(KC_2);
                       unregister_code(KC_LSFT); // at sign
                     }*/
                     return false; break;

      case D_QUOTE:  //if (check_mod_and_remove_it(SHFT_MODS, false))  // @ #
                     //{
                       register_code(KC_LSFT);
                       tap_code(KC_QUOT);
                       unregister_code(KC_LSFT);
                       tap_code(KC_SPC); // quote sign  plus spacebar
                       return false; break;


//[_LEDS]
#if defined(COMPREHENSIVE_30_LAYOUT)

      case APP_Q_SNOTE: callApp("Simplenote.app");            return false; break; // simple note
      case APP_W_TWTTR: callApp("Twitter.app");               return false; break; // t W itter
      case APP_E_EVERN: callApp("Evernote.app");              return false; break; // E vernote
      case APP_R_APSTO: callApp("App Store.app");             return false; break; // app sto R e
      case APP_T_TERMI: callApp("Terminal.app");              return false; break; // T erminal

      case APP_Y_TYPIN: callApp("Typinator.app");             return false; break; // t Y pinator
      case APP_U_UROOM: callApp("URoom.app");                 return false; break; // U room
      case APP_I_TEDIT: callApp("TextEdit.app");              return false; break; // textEd I t
      case APP_O_OMNIF: callApp("OmniFocus.app");             return false; break; // O mnifocus
      case APP_P_SPREF: callApp("System Preferences.app");    return false; break; // system P references

      case APP_A_SCRPT: callApp("Script Editor.app");         return false; break; // A pple script
      case APP_S_SAFAR: callApp("Safari.app");                return false; break; // S afari _delay_ms50
      case APP_D_D_ONE: callApp("Day One Classic.app");       return false; break; // D ay one Classic
      case APP_F_FINDE: callApp("Finder.app");                return false; break; // F inder
      case APP_G_CHRME: callApp("Google Chrome.app");         return false; break; // G oogle chrome

      case APP_H_SKTCH: callApp("Sketch.app");                return false; break; // sketc H
      case APP_J_SUBLI: callApp("Sublime Text.app");          return false; break; // s U blime Text
      case APP_K_KRBNR: callApp("Karabiner-Elements.app");    return false; break; // K arabiner Elements
      case APP_L_CLNDR: callApp("Calendar.app");              return false; break; // Calendar
      case APPSP_EMPTY: callApp("");                          return false; break; //

      case APP_Z_STUDI: callApp("Studies.app");               return false; break; // Studies
      case APP_X_XCODE: callApp("Xcode.app");                 return false; break; // Xcode
      case APP_C_CALCU: callApp("Calculator.app");            return false; break; // Calculator
      case APP_V_KVIEW: callApp("Karabiner-EventViewer.app"); return false; break; // krbnr eVent Viewr
      case APP_B_BOOKS: callApp("Books.app");                 return false; break; // Books

      case APP_N_NOTES: callApp("Notes.app");                 return false; break;  // Notes
   // Next 2 lines have been copied & pasted from a command line C program in xcode who run perfectly !
   // Any of them works properly for opening an app from Terminal !  But they don' work under QMK code !
   //   system("open //Applications//Notes.app");
   //   system("osascript -e 'launch application \"Notes\"' -e 'activate application \"Notes\"' -e end");
      case APP_M_MAIL:  callApp("Mail");                      return false; break; // Mail
      case APP_ES_KEYN: callApp("Keynote");                   return false; break; // Keynote
      case APP_BS_PAGE: callApp("Pages");                     return false; break; // Pages
      case APP_EN_NUMB: callApp("Numbers");                   return false; break; // Numbers


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
      case REWIND:    register_code(KC_F24); // asigned to 'fn' in karabiner-elements
                           tap_code(KC_F7);       // apple rewind default key in 'magic keyboard'
                    unregister_code(KC_F24);
                      return false;

      case PLAY_PAUSE:register_code(KC_F24); // asigned to 'fn' in karabiner-elements
                           tap_code(KC_F8);       // apple play/pause default key in 'magic keyboard'
                    unregister_code(KC_F24);
                      return false;

      case FORWARD:   register_code(KC_F24); // asigned to 'fn' in karabiner-elements
                           tap_code(KC_F9);       // apple forward default key in 'magic keyboard'
                    unregister_code(KC_F24);
                      return false;


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//[current_medifications]
// #if defined(SIMPLE_30_LAYOUT)
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
// #endif
//[_daly]

// when we release [_DALY], we check if we were changing apps and remove command key
// this paragraph is located lower in this file
//       case LT(_DALY,KC_Y):
//       case LT(_DALY,KC_B):
// //    case MO(_DALY):// remove GUI modifier when coming from _DALY changing apps with CMD+TAB; SHIFT+CMD+TAB
//                         if (changing_apps)
//                         {
//                           changing_apps = false;
//                           unregister_code(KC_LGUI);
//                         }

//                       return true; // this 'return true' switch [_DALY] off automatically
//                       break;


//🔥
//[_POWR]
      case MY_CLEAR:  
                   // // if caps_lock is ON
                   //    if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)){
                   //      capslock_tap();
                   //    }
                   // // if caps_lock is OFF
                   //    else {
                   //    };

                      clear_keyboard();
                      clear_mods();
// clear_keyboard();          This will clear all mods and keys currently pressed.
// clear_mods();              This will clear all mods currently pressed.
// clear_keyboard_but_mods(); This will clear all keys besides the mods currently pressed.
                      // remove_mod(SHFT_MODS);
                      // remove_mod(CTRL_MODS);
                      // remove_mod(ALT_MODS);
                      // remove_mod(GUI_MODS);

                      layer_clear();
                      return false;

//[_powr]

//[_ACCN]
      case CIRCU:    circumflex_requested = true; // requested circumflex accent
                     return false;                // Skip all further processing of this key when pressed

      case GRAVE:    grave_requested      = true; return false; // requested grave      accent
      case DIAER:    diaeresis_requested  = true; return false; // requested diaeresis  accent
//[_accn]

//[_DALY]
      case VOL_1:    volumeSetToLevel(1);         return false; // set volume to minimum (level 1)
      case VOL_8:    volumeSetToLevel(8);         return false; // set volume to middle  (level 8)

      case BRIGHT_1: brightSetToLevel(1);         return false; // set bright to minimum (level 1)
//[_daly]

//[_FVIM]
   // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
   // ... except for the 'H' key:
      case FVIM_H: fvim("h");  return false;
//[_fvim]

// _DVIM
      case DVIM_Y: dvim("y");  return false;
//         DVIM_uU is tap_dance
      case DVIM_I: dvim("i");  return false;
      case DVIM_O: dvim("o");  return false;
//         DVIM_pP is tap_dance

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
// select _AVIM
//            case AVIM_Y: avim("y");  return false;
//            case AVIM_N: avim("n");  return false;
// the rest of the keys are combination of _FVIM + SHIFT key            
*/

//[_XVIM]
// _CVIM
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
// _XVIM
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


//🔥
//[_DALY]
      case DICTATION:
        register_code(KC_LGUI);  wait_ms(100);  unregister_code(KC_LGUI);
        return false;
      case SIRI:
        register_code(KC_LGUI); register_code(KC_SPC);
        return false;
//[_daly]


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
//                               = if (!get_mods()&SHFT_MODS && !get_mods()&ALT_MODS)
      case _SYM_SPC:       if (space_or_symb_pressed)
                           {
                             if (timer_elapsed(lt13_timer) < TAPPING_TERM)
                             {  
                               tap_code(KC_SPC);                        
                             }
                           }
                           layer_off(_SYMB);
                           space_or_symb_pressed = false;

                           return false; break;


//                               = if (!get_mods()&SHFT_MODS && !get_mods()&ALT_MODS)
      case _DVIM_BS:               if (!(check_mod_and_remove_it(SHFT_MODS, false)))
                                   {
                                     if (timer_elapsed(lt13_timer) < TAPPING_TERM)
                                     {  
                                       tap_code(KC_BSPC);
                                     }
                                     layer_off(_DVIM);                                    
                                   }
#if defined(RGB_LEDS)
  show_RGB_LEDs(); // rgblight_sethsv_noeeprom(HSV_MY_RED);
#endif
                                   return false; break;


//🔥
//[_DFLT]

#if defined(SIMPLE_30_LAYOUT)
  case BSPC_DEL: show_RGB_LEDs();
                   return false;  break;
#endif

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
                      
//       case MY_RESET:

//       case TOG_ID:
//       case STP_ID:

//       case SL_MEN:
//       case KA_DCK:
//       case KM_TOL:
//       case SH_STA:
//       case RT_FLO:

//       case VOL_1:
//       case VOL_8:
//       case BRIGHT_1:

// // _FVIM
//    // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
//    // ... except for the 'H' key:
//       case FVIM_H:

//       case FVIM_M:
//       case FVIM_ES:
//       case FVIM_BS:
//       case FVIM_EN:
//    // _fvim

// // _DVIM
//       case DVIM_Y:
//       //   DVIM_uU is tap_dance
//       case DVIM_I:
//       case DVIM_O:
//       //   DVIM_pP is tap_dance

//       case DVIM_H:
//       case DVIM_J:
//       case DVIM_K:
//       case DVIM_L:
//       case DVIM_SP:

//       case DVIM_M:
//       case DVIM_ES:
//       case DVIM_BS:
//       case DVIM_EN: 

// 
// select _AVIM
//            case AVIM_Y:
//            case AVIM_N:
// the rest of the keys are combination of _FVIM + SHIFT key            
//

// // _CVIM
//       case CVIM_Y:
//       case CVIM_U:
//       case CVIM_I:
//       case CVIM_O:
//       case CVIM_P:

// //    case CVIM_H:
//       case CVIM_J:
//       case CVIM_K:
//       case CVIM_L:
//       case CVIM_SP:

//       case CVIM_N:
//       case CVIM_M:
//       case CVIM_ES:
//       case CVIM_BS:
//       case CVIM_EN:

// // _XVIM
//       case XVIM_Y:
//       case XVIM_U:
//       case XVIM_I:
//       case XVIM_O:
//       case XVIM_P:

//       case XVIM_H:
//       case XVIM_J:
//       case XVIM_K:
//       case XVIM_L:
//       case XVIM_SP:

//       case XVIM_N:
//       case XVIM_M:
//       case XVIM_ES:
//       case XVIM_BS:
//       case XVIM_EN:


// // [_LEDS]
//       case SAV_COL:
//       case GET_HSV:
//       case RGB_TOG: return false; // Skip all further processing of ALL these keys when released

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

      case DICTATION: register_code(KC_LGUI);  wait_ms(100);  unregister_code(KC_LGUI);
                      return false;

     case SIRI:      unregister_code(KC_SPC);  unregister_code(KC_LGUI);
                     return false;




//[FIXME]
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// UPDATE TO CURRENT LAYOUT

// _DFLT LAYER
      case LT(_DALY,KC_J):
      case LT(_DALY, KC_Q):

//_QWER LAYER
      case LT(_DALY,KC_X):
      case LT(_DALY,KC_BSPC):
//    case MO(_DALY):// remove GUI modifier when coming from _DALY changing apps with CMD+TAB; SHIFT+CMD+TAB
                        if (changing_apps)
                        {
                          changing_apps = false;
                          unregister_code(KC_LGUI);
                        }

                      return true; // this 'return true' switch [_DALY] off automatically
                      break;
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//[fixme]










   // this line is responsible of the management of the releases for THE REST of the keys.
      default:       return true; // Process all other keycodes normally when released
    } // switch (keycode)

  } // if (event->keypressed)

  // return true;
  
};// bool process_record_user(uint16_t keycode, keyrecord_t *record)
//                                                                                      //
//                                                                                      //
//                                  m  a  c  r   o  s                                   //
//                                                                                      //
//                                                                                      //
//                       p r o c e s s    r e c o r d    u s e r                        //
//                                                                                      //
// end of new macros way                                                                //
//////////////////////////////////////////////////////////////////////////////////////////