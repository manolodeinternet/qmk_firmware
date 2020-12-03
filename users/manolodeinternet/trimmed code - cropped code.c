file: [tapdance_setup.c]


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ P O W R ]    L A Y E R                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Y (V8_TEST)                                                    //
//                                                                                      //
//  V O L _ 0 8,   T E S T   L A Y E R                                                  //
//                                                                                      //
//  KC_Y:  *  SET VOLUME TO 8                                                           //
//         @ [_TEST] LAYER                                                              //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'V8_TEST' tap dance.
static tap V8_TEST_tap_state = {
  .is_press_action = true,
  .state = 0
};

void V8_TEST_finished (qk_tap_dance_state_t *state, void *user_data) {
  V8_TEST_tap_state.state = cur_dance(state);
  switch (V8_TEST_tap_state.state) {
    case SINGLE_TAP:        volumeSetToLevel(8);
                            break;

    case SINGLE_HOLD:       layer_on(_TEST); break;
  }
}

void V8_TEST_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (V8_TEST_tap_state.state) {
    case SINGLE_TAP:        break;

    case SINGLE_HOLD:       layer_off(_TEST); break;
  }
  V8_TEST_tap_state.state = 0;
}
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Y (V8_TEST)                                                    //
//                                                                                      //
//  V O L _ 0 8,   T E S T   L A Y E R                                                  //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
// [TAPDANCE] [_POWR] KC_U (V1_LAST)                                                    //
//                                                                                      //
//  V O L _ 0 1,   L A S T   L A Y E R                                                  //
//                                                                                      //
//  KC_U:  *  SET VOLUME TO 1                                                           //
//         @ [_LAST] LAYER                                                              //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'V1_LAST' tap dance.
static tap V1_LAST_tap_state = {
  .is_press_action = true,
  .state = 0
};

void V1_LAST_finished (qk_tap_dance_state_t *state, void *user_data) {
  V1_LAST_tap_state.state = cur_dance(state);
  switch (V1_LAST_tap_state.state) {
    case SINGLE_TAP:        volumeSetToLevel(1);
                            break;

    case SINGLE_HOLD:       layer_on(_LAST); break;
  }
}

void V1_LAST_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (V1_LAST_tap_state.state) {
    case SINGLE_TAP:        break;

    case SINGLE_HOLD:       layer_off(_LAST); break;
  }
  V1_LAST_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_u (v1_last)                                                    //
//                                                                                      //
//  v o l _ 0 1,   l a s t   l a y e r                                                  //
//////////////////////////////////////////////////////////////////////////////////////////



















file: [wrappers.h]


#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_POWR] = LAYER 13 : POWER COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        | Clear  |@@@@@@@@|        |        |        |        |        |@@@@@@@@|        |        |
 * |        | Stuck  |LckScren|        |        |        | Medium |  Raise |  Lower | Minimum|  Mute  |
 * |        |Modifirs|    /   |        |        |        | Volume | Volume | Volume | Volume | Volume |
 * | @RESET |& Layers| Log Out|My_Reset|  Reset |        | (Vol.8)|        |        | (Vol.1)|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * | Toggle |        |  Play  |        | Toggle |        | Toggle |        |        |        |        |
 * |  layer | Rewind |  /Pause| Forward|  Zoom  |        |  Zoom  |  Zoom  |  Zoom  |  Zoom  | Invert |
 * |[_QWER]|        |        |        | Smooth |        |  Focus |   In   |   Out  | Toggle | Colors |
 * |   RCtl |   RAlt |  RSft  |  RGui  | Images |        |Followng|        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |  Menu  |  Dock  |  Tool  | Status |Floating|        |        |        |        |        |        |
 * |  _Bar  |  _Bar  |  _Bar  |  _Bar  | Window |        |  Raise |  Raise |  Lower | Minimum|  Lower |
 * |        |        |        |        |        |        |Contrast| Bright | Bright | Bright |Contrast|
 * | @SLEEP |^KIL_APP|^KIL_MEN|@SHUTDWN|^RESTART|        |        |        |        |(Bght.1)|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */ // Toggle Zoom Smooth Images is not in use nowadays.  But its keycode is still alive.    [DELETEME]
// #define ____POWER_L3____ TD(SLEP_M),     KA_DCK,     KM_TOL, TD(SHUT_S),     RT_FLO
// TG(_QWER) has been substituted by TD(TG_QWE) for allowing flash animation before toggling.
#define ____POWER_L1____ TD(HRESET),      MY_CLEAR,     TD(LCKLOG),       XXXXXXX,     RESET
#define ____POWER_L2____ TD(TG_QWE), RSFT_T(KC_F7), RALT_T(KC_SPC), RGUI_T(KC_F9),  ZOOMSMTH
#define ____POWER_L3____ TD(SLEP_M),    TD(KILA_D),     TD(KILM_T),    TD(SHUT_S),TD(RSTT_F)

//#define    ____POWER_R2____ ZOOM_FOL,    ZOOM_IN,         ZOOM_OUT,          ZOOM_TOG,    INV_COLO
#define      ____POWER_R1____ TD(V8_TEST), S(A(KC__VOLUP)), S(A(KC__VOLDOWN)), TD(V1_LAST), KC__MUTE
#define      ____POWER_R2____ ZOOM_FOL,    TD(RG_ZOIN),     TD(RA_ZOUT),       TD(RS_ZOOM), TD(RA_INCO)
#define      ____POWER_R3____ CNTRST_U,    INC_BRGH,        DEC_BRGH,          BRIGHT_1,    CNTRST_D

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)





























file: gherkin/[keymap.c]


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





























file: [process_record_keymap.c]


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
//                                  unregister_code(KC_F21);

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
//                         unregister_code(KC_F21);

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


//🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
[FIXME]
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
//[fixme]
//🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥



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















































#if defined(DEFAULT_TYPINATOR_APPS) // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx ###
                                  apps_trigger = true;

                                  if (check_mod_and_remove_it (GUI_MODS, true)) { multi_apps = true;  }
                                  if (check_mod_and_remove_it(CTRL_MODS, true)) { control_apps = true;}
                                  if (check_mod_and_remove_it(SHFT_MODS, true)) { shift_apps = true;  }













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
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//[_UNCOMMENT]
      // case O_COMMENT: tap_code       (KC_SLSH);
      //                 register_code  (KC_LSFT);
      //                 tap_code       (KC_8);
      //                 unregister_code(KC_LSFT);
      //                 case_found = true; return false; break;

      // case C_COMMENT: register_code  (KC_LSFT);
      //                 tap_code       (KC_8);
      //                 unregister_code(KC_LSFT);
      //                 tap_code       (KC_SLSH);
      //                 case_found = true; return false; break;
//[_uncomment]
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

      // case CHANGE_SYMB_TO_NUMB:
      //                 layer_off(_SYMB);
      //                 layer_on(_NUMB);
      //                 case_found = true; return false; break;
//[_symb]



















































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
//                                   register_code(KC_F22)
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
//                                   register_code(KC_F22)
//                                   karabiner_apps_trigger = true;

//                                   if (check_mod_and_remove_it (GUI_MODS, false)) { multi_apps = true; }
// #endif                         // 🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺🔺











//[_dflt]

//[_POWR]


































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
                     










































//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥  remove next 6 lines of code 

// next if statement is not necessary because mirrored layer triggers are now accesed holding master_keys.
// master_key is R5(_ACCN) at the right side and L5(_MOUS) at the left side 
                                // if (check_mod_and_remove_it(ALT_MODS, true))
                                // {
                                //    layer_on(_NUMB);
                                // }
                                // else
                                // {






































...WHEN RELEASED...
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



































file: [process_record_user_common_keyboards]


//🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
[FIXME]
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
                      //🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🗑🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
[fixme]



















































// __attribute__ ((weak))
// bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
//   return false;
// }








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















  // if (apps_trigger || karabiner_apps_trigger)
  // {
  //   return process_record_apps(keycode, record);
  // }

















// if we are no in apps_trigger mode: we can be in karabiner_apps_trigger mode or in _DFLT layer mode





















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




























// clear_keyboard();          This will clear all mods and keys currently pressed.
// clear_mods();              This will clear all mods currently pressed.
// clear_keyboard_but_mods(); This will clear all keys besides the mods currently pressed.
                      // remove_mod(SHFT_MODS);
                      // remove_mod(CTRL_MODS);
                      // remove_mod(ALT_MODS);
                      // remove_mod(GUI_MODS);

































                      
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


// select _AVIM
//            case AVIM_Y:
//            case AVIM_N:
// the rest of the keys are combination of _FVIM + SHIFT key            


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





































//[FIXME]
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// UPDATE TO CURRENT LAYOUT
