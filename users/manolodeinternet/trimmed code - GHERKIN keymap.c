///////////////////////////////////////////////////////////////////////////////////////////////////////
file: [/Users/navarro/qmk_firmware/keyboards/40percentclub/gherkin/keymaps/manolodeinternet/keymap.c]


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// GLOBAL VARIABLES                                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [REFLECTION]
// Is it necessary that the 5 following vars were static ? Maybe I can remove 'static'
// [REFLECTION]

// COMMON VARIABLES FOR ALL KEYBOARDS
  // bool diaeresis_requested  = false;
  // bool circumflex_requested = false;
  // static bool grave_requested      = false;

  // static bool disabled_caps_before_accent = false;
  // static bool capslock_is_active = false;

  // static uint8_t sft_mod;
  // static uint8_t gui_mod;
// common variables for all keyboards

  // static bool    hide_other_apps = false;

  // static uint8_t gherkinBacklightLevel = 0;
  // static uint8_t gherkinBacklightLevelBeforeCapsLock = 0;

//                                                                                      //
// global variables                                                                     //
//////////////////////////////////////////////////////////////////////////////////////////



























//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  M Y    F U N C T I O N S                                                            //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_FVIM],     [_XVIM], [_DVIM] &      [_APPS]                             //
//           KC_V,KC_M; KC_C,KC_ESC;   KC_X;   KC_Q & KC_P;                             //
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void fvim(char *key)
// {
// //  SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
//     HYPR_V;
//     SEND_STRING("f");
//     send_string(key);
// }
/* select
void avim(char *key)
{
    HYPR_V;
    SEND_STRING("a");
    send_string(key);
}
*/ 
// right hand of _XVIM
// void cvim(char *key)
// {
//     HYPR_V;
//     SEND_STRING("c");
//     send_string(key);
// }
// // left hand of _XVIM
// void xvim(char *key)
// {
//     HYPR_V;
//     SEND_STRING("x");
//     send_string(key);
// }

// void dvim(char *key)
// {
//     HYPR_V;
//     SEND_STRING("d");
//     send_string(key);
// }

// void callApp(char *appName)
// {
//     register_code(KC_LGUI);   register_code (KC_SPC);
//     unregister_code (KC_SPC); unregister_code(KC_LGUI);
//     send_string  (appName); 
//     // next delay is for avoiding that SpotLight remains on screen without calling our app
//     _delay_ms(40); 
//     register_code (KC_ENT); unregister_code (KC_ENT);
// }  
//                                                                                      //
// [functions] [_fvim],     [_xvim], [_dvim] &      [_apps]                             //
//           kc_v,kc_m; kc_c,kc_esc;   kc_x;   kc_q & kc_p;                             //
//                                                                                      //
// functions for accesing keybindings mapped functions                                  //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A [F(CAPSL)]                                                  //
//                                                                                      //
// CAPSLOCK COMPLEMENTARY FUNCTIONS                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void capslock_tap(void) { // [F(CAPSL)] - MY CAPSLOCK FINISHED FUNCTION

//   SEND_STRING(SS_DOWN(X_CAPSLOCK));
//   register_code(KC_LCAP);


// // LIGHTS AND BREATH
// #if defined(BACKLIGHT_ENABLE)
//   if (capslock_is_active == false)
//   {
//     // capslock_is_active  = true;
//     gherkinBacklightLevelBeforeCapsLock = gherkinBacklightLevel;
//     gherkinBacklightLevel = BL_CAPS;

//     breathing_period_set(BR_CAPS);
//     breathing_enable();
//   }
//   else
//   {
//     // capslock_is_active  = false;
//     gherkinBacklightLevel = gherkinBacklightLevelBeforeCapsLock;

//     breathing_period_set(BR_DFLT);
//     breathing_disable();
//   }
// #endif
// // lights and breath

// // [INFO]
// // Note, that instead of unregister_code (KC_LCAP), ...
// // ... we write unregister_code (KC_CAPS).
// // This is the way it works that I found by the trial and error method.
//   unregister_code(KC_CAPS); 
// // [info] 
//   SEND_STRING(SS_UP(X_CAPSLOCK));

// } //  my capslock function  -  [f(capsl)] - my capslock finished function


// void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

//   if (capslock_is_active == true)
//     {
//       capslock_tap();
//       disabled_caps_before_accent = true;
//     }
// } // my disable_capslock_before_accents_function

// void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
//   if (disabled_caps_before_accent == true)
//     {
//       capslock_tap();
//       disabled_caps_before_accent = false;
//   }
// } // my enable_capslock_after_accents_function
//                                                                                      //
// [functions] [_daly] kc_a [f(capsl)]                                                  //
//                                                                                      //
// capslock complementary functions                                                     //
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (HRESET)                                                    //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

//                    // BACKLIGHT BLINKING
//                       backlight_level(BL_RESE);
//                       _delay_ms(50);
//                       backlight_level(BL_MIN);
//                       _delay_ms(100);
//                       backlight_level(BL_RESE);
//                       _delay_ms(50);
//                       backlight_level(BL_MIN);
//                       _delay_ms(100);
//                       backlight_level(BL_RESE);
//                       _delay_ms(50);
//                       backlight_level(BL_MIN);
//                       _delay_ms(100);
//                       backlight_level(BL_RESE);
//                       _delay_ms(50);
//                       backlight_level(BL_MIN);
//                       _delay_ms(100);
//                       backlight_level(BL_RESE);
//                       _delay_ms(50);
//                       backlight_level(BL_MIN);
//                       _delay_ms(100);
//                       backlight_level(BL_RESE);
//                       _delay_ms(50);
//                       backlight_level(BL_MIN);
//                       _delay_ms(100);
//                    // ends backlight blinking
//                       reset_keyboard();
// }
//                                                                                      //
// [functions] [_powr] kc_r (hreset)                                                    //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_V (SHUT_S)                                                    //
//             [_POWR] KC_U (VOL_1)                                                     //
//                                                                                      //
//             [_POWR] KC_U (VOL_8)                                                     //
//             [_POWR] KC_M (BRIGHT_1)                                                  //
//                                                                                      //
// VOLUME SET TO LEVEL 1 FUNCTION (USED ALONE AND INTO SHUT DOWN AS WELL)               //
// VOLUME SET TO LEVEL 8 FUNCTION                                                       //
// BRIGHT SET TO LEVEL 1 FUNCTION                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// void volumeSetToLevel1(void) {
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
// }

// void volumeSetToLevel8(void) {
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
//   register_code(KC__VOLUP); unregister_code(KC__VOLUP);
// }

// void brightSetToLevel1(void) {
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_SLCK); unregister_code(KC_SLCK);
//   register_code(KC_PAUS); unregister_code(KC_PAUS);
// }
// [functions] [_powr] kc_v (shut_s)                                                    //
//             [_powr] kc_u (vol_1)                                                     //
//                                                                                      //
//             [_powr] kc_u (vol_8)                                                     //
//             [_powr] kc_m (bright_1)                                                  //
//                                                                                      //
// volume set to level 1 function (used alone and into shut down as well)               //
// volume set to level 8 function                                                       //
// bright set to level 1 function                                                       //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  m y    f u n c t i o n s                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



































//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
// TAP DANCE GENERAL SETUP SECTION START                                                //
//                                                                                      //
//  * SINGLE_TAP                                                                        //
// ** DOUBLE_TAP                                                                        //
//  @ SINGLE_HOLD                                                                       //
// @@ DOUBLE_HOLD                                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// typedef struct {
//   bool is_press_action;
//   int  state;
// } tap;
/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a tapdance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed.
 *  If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
// int cur_dance (qk_tap_dance_state_t *state) {
//   if (state->count == 1) 
//   {
//    if (state->interrupted || !state->pressed) 
//    // IF the key has been pressed only once 
//    // AND  (the key has been interrupted by pressing another key after it
//    //       OR   the key is not pressed at present)
//      return SINGLE_TAP;
//      else 
//      // IF  the key has been pressed only once
//      // AND the key has not been interrupted
//      // AND the key is still pressed  
//        return SINGLE_HOLD;
//     }
//     else 
//     { 
//       if (state->count == 2)
//         { 
//           if (state->interrupted)
//           // IF   the key has been pressed twice
//           // AND  the key has been interrupted by pressing another key after it
//           return DOUBLE_SINGLE_TAP;
//           else
//             if (state->pressed) 
//             // IF  the key has been pressed twice
//             // AND the key has not been interrupted by pressing another key
//             // AND the key is still pressed
//               return DOUBLE_HOLD;
//             else
//             // IF  the key has been pressed twice
//             // AND the key has not being interrupted by pressing another key
//             // AND the key is not pressed at present
//               return DOUBLE_TAP;
//         }
/*
      else if (state->count == 3) {
      if (state->interrupted) return TRIPLE_SINGLE_TAP;
      else if (state->pressed) return TRIPLE_HOLD;
      else return TRIPLE_TAP;
      }
      else if (state->count == 4) {
        if (state->interrupted) return QUADRUPLE_SINGLE_TAP;
        else if (state->pressed) return QUADRUPLE_HOLD;
        else return QUADRUPLE_TAP;
      }
      else if (state->count == 5) {
        if (state->interrupted) return QUINTUPLE_SINGLE_TAP;
        else if (state->pressed) return QUINTUPLE_HOLD;
        else return QUINTUPLE_TAP;
      }
      else if (state->count == 6) {
        if (state->interrupted) return SEXTUPLE_SINGLE_TAP;
        else if (state->pressed) return SEXTUPLE_HOLD;
        else return SEXTUPLE_TAP;
      }
      else return 18; //magic number. At some point this method will expand to work for more presses
*/
//       else return 6;
//     }
// }
//                                                                                                   //
// tap dance general setup section end                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                        C  O  M  B  O  S      F  E  A  T  U  R  E    -   COMBOS                    //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
// COMBOS #01 SUPER EASY IMPLEMENTATION WAY !!!
// const uint16_t PROGMEM test_combo[] = {KC_E, KC_R, COMBO_END};
// Next line with tap16 keycodes doesn't work.  It needs basic keycodes for working properly.
// ... and I don't have any free alpha keycode.  I have [_DFLT] plenty of layer and modifiers triggers.
//
// For using combos, you need dedicated alphas, if you use LT or MT keys, combo disables them.
//
/*
const uint16_t PROGMEM test_combo[] = {LT(_LEDS, KC_E), LT(_FUNC, KC_R), COMBO_END};
combo_t key_combos[COMBO_COUNT] = {COMBO(test_combo, KC_C)};
*/

// ===
// COMBOS #02 NORMAL IMPLEMENTATION WAY !!!
// enum combos {
//   AB_ESC,
//   JK_TAB
// };

// const uint16_t PROGMEM ab_combo[] = {KC_A, KC_B, COMBO_END};
// const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

// combo_t key_combos[COMBO_COUNT] = {
//   [AB_ESC] = COMBO(ab_combo, KC_ESC),
//   [JK_TAB] = COMBO(jk_combo, KC_TAB)
// };

// ===
// COMBOS #03 HARD & POWERFUL IMPLEMENTATION WAY!!!
/*
enum combo_events {
  ZX_COPY,
  CV_PASTE
};

const uint16_t PROGMEM copy_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_C, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [ZX_COPY] = COMBO_ACTION(copy_combo),
  [CV_PASTE] = COMBO_ACTION(paste_combo)
};

void process_combo_event(uint8_t combo_index, bool pressed) {
  switch(combo_index) {
    case ZX_COPY:
      if (pressed) {
        tap_code16(LGUI(KC_C));
      }
      break;
    case CV_PASTE:
      if (pressed) {
        tap_code16(LGUI(KC_V));
      }
      break;
  }
};
*/
//                                                                                                   //
//                        c  o  m  b  o  s      f  e  a  t  u  r  e    -   combos                    //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
























































//[A_GRAV]  // grave & tilde         //tilde        accessible while holding SHIFT key !  // ` ~
//[S_QUOT]  // quote & double quote  //double quote accessible while holding SHIFT key !  // ' "
 ,[R_DOEU]   = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  EURO)                                       // $ €
 ,[Z_EXCL]   = ACTION_TAP_DANCE_DOUBLE(KC_EXLM, INV_EX)                                     // ! ¡
 ,[TD_EXC]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, TD_EXC_finished, TD_EXC_reset, 300)
 ,[TD_QUE]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, TD_QUE_finished, TD_QUE_reset, 350)
 ,[X_QUES]   = ACTION_TAP_DANCE_DOUBLE(KC_QUES, INV_QU)                                     // ? ¿









































//[PLACEHOLDER] //🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥



















































































// uint16_t get_tapping_term(uint16_t keycode) {
//   switch (keycode) {

// // // row 2: modifiers
// //     case LCTL_T(KC_A):
//     case LCTL_T(KC_SPC):     return 400; break;

// //     case LALT_T(KC_S):
//     case LALT_T(KC_L):       return 400; break; //300

// //     case LGUI_T(KC_D):
// //     case LGUI_T(KC_K):

// //     case LSFT_T(KC_F):
// //     case LSFT_T(KC_J):  return TAPPING_TERM - 50; break;

// // // row 2: layers
// //  // case LT(_ACCN, KC_G):
// //  // case LT(_ACCN, KC_H):

// // // row 1: layers
// //     case LT(_APPS, KC_Q):
// //     case LT(_APPS, KC_P):     return TAPPING_TERM - 50; break;

// //     case LT(_POWR, KC_W):
// //     case LT(_POWR, KC_O):

// //     case LT(_LEDS, KC_E):
// //     case LT(_LEDS, KC_I):

// //     case LT(_FUNC, KC_R):
// //     case LT(_FUNC, KC_U):

// // // row 3: layers
// //     case LT(_DALY, KC_Z):
// //     case LT(_DALY, KC_ENT):

// //     case LT(_DVIM, KC_X):

// //     case LT(_MOUS, KC_C):

// //     case LT(_FVIM, KC_V):
// //     case LT(_FVIM, KC_M):

// //     case LT(_NUMB, KC_B):
// //     case LT(_NUMB, KC_Y):

// //     case LT(_XVIM, KC_ESC):   return TAPPING_TERM + 50; break;

//     // case LT(_SYMB, KC_N):
//     // case LT(_SYMB, KC_T):     return 140; break;
 
// // //   default
//     default:
//       return TAPPING_TERM;
//   }
// }


// bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         // case LT(1, KC_BSPC):
//         //     return true;

//     case LCTL_T(KC_A):
//     case LCTL_T(KC_SPC):

//     case LALT_T(KC_S):
//     case LALT_T(KC_L):

//     case LGUI_T(KC_D):
//     case LGUI_T(KC_K):

//     case LSFT_T(KC_F):
//     case LSFT_T(KC_J):        return false;  break;

// // row 2: layers
//  // case LT(_ACCN, KC_G):
//  // case LT(_ACCN, KC_H):

// // row 1: layers
//     case LT(_APPS, KC_Q):
//     case LT(_APPS, KC_P):     return true;  break;

//     case LT(_POWR, KC_W):     
//     case LT(_POWR, KC_O):

//     case LT(_LEDS, KC_E):
//     case LT(_LEDS, KC_I):

//     case LT(_FUNC, KC_R):
//     case LT(_FUNC, KC_U):     return false; break;

// // row 3: layers
//     case LT(_DALY, KC_Z):
//     case LT(_DALY, KC_ENT):

//     case LT(_DVIM, KC_X):     return true;  break;

//     case LT(_MOUS, KC_C):     return false; break;

//     case LT(_FVIM, KC_V):
//     case LT(_FVIM, KC_M):

//     case LT(_NUMB, KC_B):
//     case LT(_NUMB, KC_Y):     return true;  break;

//     case LT(_XVIM, KC_ESC):   return false; break;

//     case LT(_SYMB, KC_N):
//     case LT(_SYMB, KC_T):     return true; break; 

//     default:                  return false;

//     }
// };


















































































//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                       F N _ A C T I O N S     F U N C T I O N S                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// const uint16_t PROGMEM fn_actions[] = {
//   [ACC_A] = ACTION_FUNCTION(ACC_A),
//   [ACC_E] = ACTION_FUNCTION(ACC_E),
//   [ACC_I] = ACTION_FUNCTION(ACC_I),
//   [ACC_O] = ACTION_FUNCTION(ACC_O),
//   [ACC_U] = ACTION_FUNCTION(ACC_U),

//   [TIL_N] = ACTION_FUNCTION(TIL_N),

//   [CAPSL] = ACTION_FUNCTION(CAPSL)
// };
// /////////////////////////////////////////////////////////////////////////////////////////////////// ###


// void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
//   sft_mod = get_mods()&SHFT_MODS;
//   switch (id) {

//     case ACC_A:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (sft_mod)  // sft_mod is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(sft_mod);
//             del_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();

//         if (circumflex_requested)
//         {
//             circumflex_accent_function();
//         }
//         else 
//         { 
//             if (grave_requested)       
//             {
//                 grave_accent_function();
//             }
//             else
//             { 
//                 if (diaeresis_requested)
//                 {
//                     diaeresis_accent_function();
//                 } 
//                 else // neither circumflex_requested, nor grave_requested, nor diaeresis_requested
//                 {
//                     acute_accent_function();
//                 } // if (diaeresis_requested)

//             } // if (grave_requested)

//           } // if (circumflex_requested)

//           enable_capslock_after_accents_function();
//           if (sft_mod)
//           {
//           //  press LSHIFT
//               add_mods(sft_mod);
//               add_weak_mods(sft_mod);
//               send_keyboard_report();
//           };            
//        // [FIXME] [FIX THE FO LINE LOCATION]
//         register_code(KC_A);
//         unregister_code(KC_A);
//       }
//       else
//       {
//   //        SEND_STRING("NO record event pressed");
//       }
//     break;


//     case ACC_E:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (sft_mod)  // sft_mod is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(sft_mod);
//             del_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
        
//         if (circumflex_requested)           { circumflex_accent_function(); }

//           else { if (grave_requested)            { grave_accent_function(); }

//              else { if (diaeresis_requested) { diaeresis_accent_function(); } 

//                 else                             { acute_accent_function(); } 
//         } }

//         enable_capslock_after_accents_function();
//         if (sft_mod)
//         {
//         //  press LSHIFT
//             add_mods(sft_mod);
//             add_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
           
//         register_code(KC_E);
//         unregister_code(KC_E);
//       }
//       else
//       {
//       }
//     break;

//     case ACC_I:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (sft_mod)  // sft_mod is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(sft_mod);
//             del_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
        
//         if (circumflex_requested)    { circumflex_accent_function(); }

//           else { if (grave_requested)         { grave_accent_function(); }

//              else { if (diaeresis_requested)  { diaeresis_accent_function(); } 

//                 else                                  { acute_accent_function(); } 
//         } }

//         enable_capslock_after_accents_function();
//         if (sft_mod)
//         {
//         //  press LSHIFT
//             add_mods(sft_mod);
//             add_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
            
//         register_code(KC_I);
//         unregister_code(KC_I);
//       }
//       else
//       {
//       }
//     break;

//     case ACC_O:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (sft_mod)  // sft_mod is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(sft_mod);
//             del_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
        
//         if (circumflex_requested)           { circumflex_accent_function(); }

//           else { if (grave_requested)            { grave_accent_function(); }

//              else { if (diaeresis_requested) { diaeresis_accent_function(); } 

//                 else                             { acute_accent_function(); } 
//         } }

//         enable_capslock_after_accents_function();
//         if (sft_mod)
//         {
//         //  press LSHIFT
//             add_mods(sft_mod);
//             add_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
            
//         register_code(KC_O);
//         unregister_code(KC_O);
//       }
//       else
//       {
//       }
//     break;

//     case ACC_U:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (sft_mod)  // sft_mod is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(sft_mod);
//             del_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();
        
//         if (circumflex_requested)           { circumflex_accent_function(); }

//           else { if (grave_requested)            { grave_accent_function(); }

//              else { if (diaeresis_requested) { diaeresis_accent_function(); } 

//                 else                             { acute_accent_function(); } 
//         } }

//         enable_capslock_after_accents_function();
//         if (sft_mod)
//         {
//         //  press LSHIFT
//             add_mods(sft_mod);
//             add_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
            
//         register_code(KC_U);       
//         unregister_code(KC_U);
//       }
//       else
//       {
//       }  
//     break;



//     case TIL_N:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//         if (sft_mod)  // sft_mod is grabbed at the very beginning of this function (action_function)
//         {
//         //  release LSHIFT
//             del_mods(sft_mod);
//             del_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
//     //  tap accent
//         disable_capslock_before_accents_function();

//         tilde_accent_function();
        
//         enable_capslock_after_accents_function();
//         if (sft_mod)
//         {
//         //  press LSHIFT
//             add_mods(sft_mod);
//             add_weak_mods(sft_mod);
//             send_keyboard_report();
//         };
            
//         register_code(KC_N);
//         unregister_code(KC_N);
//       }
//       else 
//       {
//       }
//     break;






//     case CAPSL:
//       if (record->event.pressed) 
//       {
//       /*The key is being pressed.*/
//          capslock_tap();
//       }
//       else 
//       {
//       }
//       break;
      
//  }
// }
//                                                                                      //
//                                                                                      //
//                       f n _ a c t i o n s     f u n c t i o n s                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//                                                                                                     //
//                                                                                                     //
//                                          M  A  C  R   O  S                                          //
//                                                                                                     //
//                                                                                                     //
//                               P R O C E S S    R E C O R D    U S E R                               //
//                                                                                                     //
//                                                                                                     //
// BEGINNING OF NEW MACROS WAY                                                                         //
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
// [UNDERSTANDING]
// We implement MACROS when we need QMK functions, or more than one keystroke in a specific keymap layer
// and we don't have the need to use tap dance cases.
//
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                     */
/*  W A Y   0   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*   fvim(j);                                                                                          */
/*                                                                                                     */
/*   this is the best one and it's posible because of the following function definition:               */
/*                                                                                                     */
/*   void fvim(char *key)                                                                              */
/*   {                                                                                                 */
/*     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p");                                       */
/*     send_string(key);                                                                               */
/*   }                                                                                                 */
/*                                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                     */
/*  W A Y   1   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*   SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"pj");                                        */
/*                                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###            
/*                                                                                                     */
/*  W A Y   2   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*   actual_mods = get_mods();                                                                         */
/*   add_mods(ALL_MODS); send_keyboard_report();                                                       */
/*   SEND_STRING("v");                                                                                 */
/*   SEND_STRING("pj");                                                                                */
/*                                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                     */
/*  W A Y   3   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*   register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); */
/*   register_code(KC_V);    unregister_code(KC_V);                                                    */
/* unregister_code(KC_LGUI); unregister_code(KC_LALT);                                                 */
/* unregister_code(KC_LCTL); unregister_code(KC_LSFT);                                                 */
/*   register_code(KC_P);    unregister_code(KC_P);                                                    */                               
/*   register_code(KC_J);    unregister_code(KC_J);                                                    */
/*                                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                     */
/*  W A Y   4   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*           T H I S    W A Y     D O E S N ' T      W O R K  ! ! !                                    */
/*   register_code(MOD_HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(MOD_HYPR);   */
/*   register_code(KC_HYPR);  register_code(KC_V); unregister_code(KC_V); unregister_code(KC_HYPR);    */
/*   register_code(HYPR);     register_code(KC_V); unregister_code(KC_V); unregister_code(HYPR);       */
/*   register_code(KC_P);   unregister_code(KC_P);                                                     */                               
/*   register_code(KC_J);   unregister_code(KC_J);                                                     */
/*                                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   if (record->event.pressed)
//   {
//     switch(keycode)
//     {
//       case CIRCU:    circumflex_requested = true; return false; break; // requested circumflex accent
//       case GRAVE:    grave_requested      = true; return false; break; // requested grave      accent
//       case DIAER:    diaeresis_requested  = true; return false; break; // requested diaeresis  accent
//       case VOL_1:    volumeSetToLevel(1);         return false; break; // set volume to minimum (level 1)
//       case VOL_8:    volumeSetToLevel(8);         return false; break; // set volume to middle  (level 8)
//       case BRIGHT_1: brightSetToLevel(1);         return false; break; // set bright to minimum (level 1)

//       case APP_Q_SNOTE: callApp("Simplenote.app");            return false; break; // simple note
//       case APP_W_TWTTR: callApp("Twitter.app");               return false; break; // t W itter
//       case APP_E_EVERN: callApp("Evernote.app");              return false; break; // E vernote
//       case APP_R_APSTO: callApp("App Store.app");             return false; break; // app sto R e
//       case APP_T_TERMI: callApp("Terminal.app");              return false; break; // T erminal

//       case APP_Y_TYPIN: callApp("Typinator.app");             return false; break; // t Y pinator
//       case APP_U_UROOM: callApp("URoom.app");                 return false; break; // U room
//       case APP_I_TEDIT: callApp("TextEdit.app");              return false; break; // textEd I t
//       case APP_O_OMNIF: callApp("OmniFocus.app");             return false; break; // O mnifocus
//       case APP_P_SPREF: callApp("System Preferences.app");    return false; break; // system P references

//       case APP_A_SCRPT: callApp("Script Editor.app");         return false; break; // A pple script
//       case APP_S_SAFAR: callApp("Safari.app");                return false; break; // S afari _delay_ms50
//       case APP_D_D_ONE: callApp("Day One Classic.app");       return false; break; // D ay one Classic
//       case APP_F_FINDE: callApp("Finder.app");                return false; break; // F inder
//       case APP_G_CHRME: callApp("Google Chrome.app");         return false; break; // G oogle chrome

//       case APP_H_SKTCH: callApp("Sketch.app");                return false; break; // sketc H
//       case APP_J_SUBLI: callApp("Sublime Text.app");          return false; break; // s U blime Text
//       case APP_K_KRBNR: callApp("Karabiner-Elements.app");    return false; break; // K arabiner Elements
//       case APP_L_CLNDR: callApp("Calendar.app");              return false; break; // Calendar
//       case APPSP_EMPTY: callApp("");                          return false; break; //

//       case APP_Z_STUDI: callApp("Studies.app");               return false; break; // Studies
//       case APP_X_XCODE: callApp("Xcode.app");                 return false; break; // Xcode
//       case APP_C_CALCU: callApp("Calculator.app");            return false; break; // Calculator
//       case APP_V_KVIEW: callApp("Karabiner-EventViewer.app"); return false; break; // krbnr eVent Viewr
//       case APP_B_BOOKS: callApp("Books.app");                 return false; break; // Books

//       case APP_N_NOTES: callApp("Notes.app");                 return false; break;  // Notes
//    // Next 2 lines have been copied & pasted from a command line C program in xcode who run perfectly !
//    // Any of them works properly for opening an app from Terminal !  But they don' work under QMK code !
//    //   system("open //Applications//Notes.app");
//    //   system("osascript -e 'launch application \"Notes\"' -e 'activate application \"Notes\"' -e end");
//       case APP_M_MAIL:  callApp("Mail");                      return false; break; // Mail
//       case APP_ES_KEYN: callApp("Keynote");                   return false; break; // Keynote
//       case APP_BS_PAGE: callApp("Pages");                     return false; break; // Pages
//       case APP_EN_NUMB: callApp("Numbers");                   return false; break; // Numbers

//    // _FVIM
//    // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
//    // ... except for the 'H' key:
//       case FVIM_H: fvim("h");  return false; break;
//    // _fvim

// // [INFO]
// /*
// * [#ref] Escape sequences in C
// * wikipedia link: 
// * https://en.wikipedia.org/wiki/Escape_sequences_in_C        

// * \e  \x001B  
// * register_code (KC_ESC); unregister_code (KC_ESC); } break;
// * case FVIM_ES:if (record->event.pressed) { fvim("\e"); } break;

// * \b  \x0008
// * register_code(KC_BSPC); unregister_code(KC_BSPC); } break;   
// * case FVIM_BS:if (record->event.pressed) { fvim("\b"); } break;

// * \n  \x000A      new line
// * register_code (KC_ENT); unregister_code (KC_ENT); } break; 
// * \r  \x000D      carriage return
//       case FVIM_EN:if (record->event.pressed) { fvim("\n"); } break;
// */
// // [info]

// // _DVIM
//       case DVIM_Y: dvim("y");  return false; break;
//       //   DVIM_uU is tap_dance
//       case DVIM_I: dvim("i");  return false; break;
//       case DVIM_O: dvim("o");  return false; break;
//       //   DVIM_pP is tap_dance

//       case DVIM_H: dvim("h");  return false; break;
//       case DVIM_J: dvim("j");  return false; break;
//       case DVIM_K: dvim("k");  return false; break;
//       case DVIM_L: dvim("l");  return false; break;
//       case DVIM_SP:dvim(" ");  return false; break;

//       case DVIM_M: dvim("m");  return false; break;
//       case DVIM_ES:dvim("\e"); return false; break;
//       case DVIM_BS:dvim("\b"); return false; break;
//       case DVIM_EN:dvim("\n"); return false; break;

// // select _AVIM
// //            case AVIM_Y: avim("y");  return false; break;
// //            case AVIM_N: avim("n");  return false; break;
// // the rest of the keys are combination of _FVIM + SHIFT key            

// //
// // _XVIM LAYER
// //
// // Initially _CVIM and _XVIM were two different layers...
// // ... Now we have _CVIM on the right hand and _XVIM on the left hand. Both of them under _XVIM layer.
// // _CVIM
//       case CVIM_Y: cvim("y");  return false; break;
//       case CVIM_U: cvim("u");  return false; break;
//       case CVIM_I: cvim("i");  return false; break;
//       case CVIM_O: cvim("o");  return false; break;
//       case CVIM_P: cvim("p");  return false; break;

//       case CVIM_H: cvim("h");  return false; break;
//       case CVIM_J: cvim("j");  return false; break;
//       case CVIM_K: cvim("k");  return false; break;
//       case CVIM_L: cvim("l");  return false; break;
//       case CVIM_SP:cvim(" ");  return false; break;

//       case CVIM_N: cvim("n");  return false; break;
//       case CVIM_M: cvim("m");  return false; break;
//       case CVIM_ES:cvim("\e"); return false; break;
//       case CVIM_BS:cvim("\b"); return false; break;
//       case CVIM_EN:cvim("\n"); return false; break;                        
// // _XVIM
//       case XVIM_Y: xvim("y");  return false; break;
//       case XVIM_U: xvim("u");  return false; break;
//       case XVIM_I: xvim("i");  return false; break;
//       case XVIM_O: xvim("o");  return false; break;
//       case XVIM_P: xvim("p");  return false; break;

//       case XVIM_H: xvim("h");  return false; break;
//       case XVIM_J: xvim("j");  return false; break;
//       case XVIM_K: xvim("k");  return false; break;
//       case XVIM_L: xvim("l");  return false; break;
//       case XVIM_SP:xvim(" ");  return false; break;

//       case XVIM_N:  xvim("n");  return false; break;
//       case XVIM_M:  xvim("m");  return false; break;
//       case XVIM_ES: xvim("\e"); return false; break;
//       case XVIM_BS: xvim("\b"); return false; break;
//       case XVIM_EN: xvim("\n"); return false; break;

//       case DICTATION:
//         register_code(KC_RGUI); unregister_code(KC_RGUI);
//         register_code(KC_RGUI); unregister_code(KC_RGUI);
//         return false; break;

//       case BLIT_OFF: gherkinBacklightLevel =  0; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_01:  gherkinBacklightLevel =  1; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_02:  gherkinBacklightLevel =  2; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_03:  gherkinBacklightLevel =  3; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_04:  gherkinBacklightLevel =  4; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_05:  gherkinBacklightLevel =  5; backlight_level(gherkinBacklightLevel); return false;

//       case BLIT_06:  gherkinBacklightLevel =  6; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_07:  gherkinBacklightLevel =  7; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_08:  gherkinBacklightLevel =  8; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_09:  gherkinBacklightLevel =  9; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_10:  gherkinBacklightLevel = 10; backlight_level(gherkinBacklightLevel); return false;

//       case BLIT_11:  gherkinBacklightLevel = 11; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_12:  gherkinBacklightLevel = 12; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_13:  gherkinBacklightLevel = 13; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_14:  gherkinBacklightLevel = 14; backlight_level(gherkinBacklightLevel); return false;
//       case BLIT_15:  gherkinBacklightLevel = 15; backlight_level(gherkinBacklightLevel); return false;

//       case BRTH_01:  breathing_period_set(1); breathing_enable();  return false;
//       case BRTH_02:  breathing_period_set(2); breathing_enable();  return false;
//       case BRTH_03:  breathing_period_set(3); breathing_enable();  return false;
//       case BRTH_04:  breathing_period_set(4); breathing_enable();  return false;
//       case BRTH_05:  breathing_period_set(5); breathing_enable();  return false;
//       case BRTH_06:  breathing_period_set(6); breathing_enable();  return false;
//       case BRTH_07:  breathing_period_set(7); breathing_enable();  return false;

//       case BRTH_12:  breathing_period_set(12); breathing_enable(); return false;
//       case BRTH_15:  breathing_period_set(15); breathing_enable(); return false;

//       default: return true; 
//     }
//   }
// //^^if (record->event.pressed)^^
//   else 
//   {
//     switch(keycode)
//     {
//       case CIRCU: circumflex_requested = false; return false; break; // non-requested circumflex accent
//       case GRAVE: grave_requested      = false; return false; break; // non-requested grave      accent
//       case DIAER: diaeresis_requested  = false; return false; break; // non-requested diaeresis  accent

//    // this line is responsible of the management of the releases for THE REST of the keys.
//       default:                                  return true;  break;
//     }
//   }
// }
//                                                                                      //
//                                                                                      //
//                                  m  a  c  r   o  s                                   //
//                                                                                      //
//                                                                                      //
//                       p r o c e s s    r e c o r d    u s e r                        //
//                                                                                      //
// end of new macros way                                                                //
//////////////////////////////////////////////////////////////////////////////////////////




































































































































































































































































































































































































































































































































































































































































































































































































