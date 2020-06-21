///////////////////////////////////////////////////////////////////////////////////////////////////////
// [UNDERSTANDING]
// We implement MACROS when we need QMK functions, or more than one keystroke in a specific keypress ...
// ... and we don't have the need to use tap dance cases.  Because tap_dance is annoying to use or ...
// ... because tap_dance is slow for showing RGB layer color.
//
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                    */
/*  W A Y   0   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   fvim(j);                                                                                         */
/*                                                                                                    */
/*   this is the best one and it's posible because of the following function definition:              */
/*                                                                                                    */
/*   void fvim(char *key)                                                                             */
/*   {                                                                                                */
/*     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"f");                                      */
/*     send_string(key);                                                                              */
/*   }                                                                                                */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                    */
/*  W A Y   1   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"fj");                                       */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###            
/*                                                                                                    */
/*  W A Y   2   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   actual_mods = get_mods();                                                                        */
/*   add_mods(ALL_MODS); add_weak_mods(ALL_MODS); send_keyboard_report();                             */
/*   SEND_STRING("v");                                                                                */
/*   del_mods(ALL_MODS); add_weak_mods(ALL_MODS);                                                     */
/*                                                                                                    */
/*   add_mods(actual_mods);                       send_keyboard_report();                             */
/*   SEND_STRING("fj");                                                                               */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                    */
/*  W A Y   3   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*   register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);  */
/*   register_code(KC_V);    unregister_code(KC_V);                                                   */
/* unregister_code(KC_LGUI); unregister_code(KC_LALT);                                                */
/* unregister_code(KC_LCTL); unregister_code(KC_LSFT);                                                */
/*   register_code(KC_F);    unregister_code(KC_F);                                                   */
/*   register_code(KC_J);    unregister_code(KC_J);                                                   */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                    */
/*  W A Y   4   T O   A C C E S I N G   K E Y  "J"   F R O M   MAC OSX SYSTEM   K E Y B I N D I N G S */
/*                                                                                                    */
/*           T H I S    W A Y     D O E S N ' T      W O R K  ! ! !                                   */
/*   register_code(MOD_HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(MOD_HYPR);  */
/*   register_code(KC_HYPR);  register_code(KC_V); unregister_code(KC_V); unregister_code(KC_HYPR);   */
/*   register_code(HYPR);     register_code(KC_V); unregister_code(KC_V); unregister_code(HYPR);      */
/*   register_code(KC_F);   unregister_code(KC_F);                                                    */                               
/*   register_code(KC_J);   unregister_code(KC_J);                                                    */
/*                                                                                                    */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*
// [EXAMPLE]  // look at the comments !!!
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case FOO:
      if (record->event.pressed) {
        // Do something when pressed
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
    case KC_ENTER:
      // Play a tone when enter is pressed
      if (record->event.pressed) {
        PLAY_NOTE_ARRAY(tone_qwerty);
      }
      return true; // Let QMK send the enter press/release events
    default:
      return true; // Process all other keycodes normally
  }
}
// [example]
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

      // case THUMB_L2_FVIM_SYMB_DALY_POWR_CAPSL:
      //                 if (get_mods()&GUI_MODS) // if I am pressing LGUI (COMMAND)
      //                 {
      //                   layer_on(_SYMB);
      //                 }
      //                 else
      //                 if (get_mods()&ALT_MODS)
      //                 {
      //                   layer_on(_DALY);
      //                 }
      //                 else
      //                 if (get_mods()&CTRL_MODS)
      //                 {
      //                   layer_on(_POWR);
      //                 }
      //                 else
      //                 if (get_mods()&SHFT_MODS)
      //                 {
      //                   capslock_tap();
      //                   show_RGB_LEDs();
      //                 }
      //                 else
      //                 {
      //                   layer_on(_FVIM);
      //                 }
      //                 return false;

      // case THUMB_R2_NUMB_DVIM_FVIM_MOUS_SP:
      //                 if (get_mods()&GUI_MODS) // if I am pressing LGUI (COMMAND)
      //                 {
      //                   layer_on(_NUMB);
      //                   return false;
      //                 }
      //                 else
      //                 if (get_mods()&ALT_MODS)
      //                 {
      //                   layer_on(_DVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (get_mods()&CTRL_MODS)
      //                 {
      //                   layer_on(_FVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (get_mods()&SHFT_MODS)
      //                 {
      //                   layer_on(_MOUS);
      //                   return false;
      //                 }
      //                 else
      //                 {
      //                   register_code(KC_SPACE);
      //                   return false;
      //                 }
//💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀
      // case THUMB_L2_FVIM_SYMB_DALY_POWR_CAPSL:
      //                 if (state_number == _FVIM)
      //                 {
      //                   layer_off(_FVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _SYMB)
      //                 {
      //                   layer_off(_SYMB);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _DALY)
      //                 {
      //                   layer_off(_DALY);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _POWR)
      //                 {
      //                   layer_off(_POWR);
      //                   return false;
      //                 }


      // case THUMB_R2_NUMB_DVIM_FVIM_MOUS_SP:
      //                 if (state_number == _NUMB)
      //                 {
      //                   layer_off(_NUMB);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _DVIM)
      //                 {
      //                   layer_off(_DVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _FVIM)
      //                 {
      //                   layer_off(_FVIM);
      //                   return false;
      //                 }
      //                 else
      //                 if (state_number == _MOUS)
      //                 {
      //                   layer_off(_MOUS);
      //                   return false;
      //                 }
      //                 else
      //                 {
      //                   unregister_code(KC_SPC);
      //                   return false;
      //                 }

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

      // case LAUNCHING_APPS: rgblight_sethsv_noeeprom(COLOR_APPS);
      //                      apps_working = true;
      //                      if (triggered_gui())
      //                        multi_apps = true;

      //                      layer_on(_APPS);
      //                      return false;

      case TH_R3_APPS_NUMB: if (option_flag)
                               {
                                  layer_on(_NUMB);
                               }
                               else
                               {
                                 apps_working = true;
                                 if (gui_flag)
                                 {
                                   current_flag = gui_flag;
                                   multi_apps = true;
                                   multi_apps_karabiner = true;
                                 }
                                 layer_on(_APPS);
                               }
                               return false;

//💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀☠️💀

      // case LAUNCHING_APPS: apps_working = false;
      //                      layer_off(_APPS);
      //                      show_RGB_LEDs();
      //                      return false;
      case TH_R3_APPS_NUMB: if (state_number == _NUMB)
                               {
                                 layer_off(_NUMB);
                               }
                               else
                               {
                                 apps_working = false;
                                 layer_off(_APPS);
                               }
                               return false;

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

/* OLD APPS CODE
      case APP_A_SCRPT: callApp("Simplenote.app");            return false; break; // simplenote
      case APP_S_SAFAR: callApp("Safari.app");                return false; break; // S afari
      case APP_D_D_ONE: callApp("Day One Classic.app");       return false; break; // D ay one
      case APP_F_FINDE: callApp("Finder.app");                return false; break; // F inder
      case APP_G_CHRME: callApp("Google Chrome.app");         return false; break; // G oogle chrome

      case APP_H_SKTCH: callApp("Sketch.app");                return false; break; // sketc H
      case APP_K_KRBNR: callApp("Karabiner-EventViewer.app"); return false; break; // K arabiner Evnt Vwr
      case APP_L_CLNDR: callApp("Calendar.app");              return false; break; // Calendar
      case APPSP_EMPTY: callApp("");                          return false; break; //

      case APP_Z_STUDI: callApp("Studies.app");               return false; break; // Studies
      case APP_X_XCODE: callApp("Xcode.app");                 return false; break; // Xcode
      case APP_C_CALCU: callApp("Calculator.app");            return false; break; // Calculator
      case APP_V_VVVVV: callApp("");                          return false; break; //
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
*/

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

/*
      case FVIM_M: fvim("m");  return false;
      case FVIM_ES:fvim("\e"); return false;
      case FVIM_BS:fvim("\b"); return false;
      case FVIM_EN:fvim("\n"); return false;
   // _fvim
*/
// [INFO]
/*
* [#ref] Escape sequences in C
* wikipedia link: 
* https://en.wikipedia.org/wiki/Escape_sequences_in_C        

* \e  \x001B  
* register_code (KC_ESC); unregister_code (KC_ESC); } break;
* case FVIM_ES:if (record->event.pressed) { fvim("\e"); } break;

* \b  \x0008
* register_code(KC_BSPC); unregister_code(KC_BSPC); } break;   
* case FVIM_BS:if (record->event.pressed) { fvim("\b"); } break;

* \n  \x000A      new line
* register_code (KC_ENT); unregister_code (KC_ENT); } break; 
* \r  \x000D      carriage return
      case FVIM_EN:if (record->event.pressed) { fvim("\n"); } break;
*/
// [info]

//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

