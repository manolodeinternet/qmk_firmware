/*
  KEYBOARD:     Gherkin 2019/09/01 ... 2020

  PROJECT NAME: 30_layout (minimal comprehensive layout)
  VERSION NAME: cleaning the code
*/

/*
  Copyright 2019 manolodeinternet <manolodeinternet@gmail.com>
  Copyright 2015 Jack Humbert
  
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License 
  along with this program (located in 'qmk_firmware' folder).
  If not, see <http://www.gnu.org/licenses/>.
*/


//          QMK_KEYBOARD_H is implemented at 'manolodeinternet.h'. Compile process needs this way !
// #include QMK_KEYBOARD_H
// Following file doesn't need full path bc folder 'users/manolodeinternet' is automatically included
// #include QMK_KEYBOARD_H



#include "manolodeinternet.h"
  // #include "tapdance_setup.h"




// #include "backlight_manolodeinternet.h"
// It's included from 'manolodeinternet.h'
// #include "wrappers.h"







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
//                                                                                      //
// tap dance general setup section end                                                  //
//////////////////////////////////////////////////////////////////////////////////////////



















//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
// DOUBLE FUNCTION TAP DANCE PERSONALIZATION SECTION START                              //
//                                                                                      //
//                                                                                      //
// MY OWN TAP_DANCE HARVEST                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ N U M B ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] KC_B (DENUOF)                                                     //
//                                                                                      //
//  D O L L A R  /  E U R O  -  N U M B E R S   L A Y E R   O F F                       //
//                                                                                      //
//  KC_B:  * @  KC_DOLLAR,                                                              //
//        **    EURO,                                                                   //
//           @@ [_NUMB] OFF                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// instantalize an instance of 'tap' for the 'DENUOF' tap dance.
static tap DENUOF_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DENUOF_finished (qk_tap_dance_state_t *state, void *user_data) {
  DENUOF_tap_state.state = cur_dance(state);
  switch (DENUOF_tap_state.state) {

    // [UNDERSTANDING]
    //  YOU CAN'T USE ANSI SHIFTED KEYCODES INTO TAP_DANCE CODE LIKE 'KC_PERC' !!!
    //  ANSI SHIFTED KEYCODES ARE VALID FOR KEYMAPS LAYOUTS.
    //  ... TAP_DANCE CODE NEEDS BASIC KEYCODES !!!
    // [understanding]

  //DOLAR
    case SINGLE_TAP:  
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_4);                               break;

  //EURO
    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2);       break;

  //SWITCH _NUMB OFF
    case DOUBLE_HOLD: layer_clear();                                                             break;      
  }
}

void DENUOF_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DENUOF_tap_state.state) {

  //DOLAR
    case SINGLE_TAP:
    case SINGLE_HOLD: unregister_code(KC_4); unregister_code(KC_LSFT);                           break;

  //EURO
    case DOUBLE_TAP:  unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;

    case DOUBLE_HOLD:                                                                            break;

  }
  DENUOF_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] kc_b (denuof)                                                     //
//                                                                                      //
//  d o l l a r  /  e u r o  -  n u m b e r s   l a y e r   o f f                       //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] KC_N (SLNUMB)                                                     //
//                                                                                      //
//  S L A S H  -  N U M B E R S   L A Y E R   O F F                                     //
//                                                                                      //
//  KC_N:  * KC_KP_SLASH = KC_PSLS,                                                     //
//        @@ [_NUMB] OFF                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [UNDERSTANDING]
// When we are holding 'B' key under [_NUMB] layer, ('B' is the [_NUMB] trigger)...
// ... if we hold down 'N' key and then release 'B' key first ...
// ... when we release 'N' key, what we have just done is setting [_NUMB] ON !!!
// 
// Until we set off again, by ...
// ... double holding 'B' or 'N' key !!!
// [understanding]
//
//instantalize an instance of 'tap' for the 'SLNUMB' tap dance.
static tap SLNUMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SLNUMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLNUMB_tap_state.state = cur_dance(state);
  switch (SLNUMB_tap_state.state) {
    case SINGLE_TAP:    register_code(KC_PSLS); break;

    case SINGLE_HOLD:// I left it intentionally empty for allowing 'SET [_NUMB] ON' works properly
                        break;

    case DOUBLE_HOLD:   layer_clear();
                        break;      
  }
}

void SLNUMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNUMB_tap_state.state) {

    case SINGLE_TAP:    unregister_code(KC_PSLS); break;

    case SINGLE_HOLD:// SET [_NUMB] ON
                        layer_on(_NUMB);
                        break;

    case DOUBLE_HOLD:   break;

  }
  SLNUMB_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] kc_n (slnumb)                                                     //
//                                                                                      //
//  s l a s h  -  n u m b e r s   l a y e r   o f f                                     //
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ n u m b ]  l a y e r                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//               T A P   D A N C E   F O R  -  V   I   M  -  L A Y E R S                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_U (FVIM_uU)                                                  //
//                                                                                      //
//  B E G I N N I N G   O F   L I N E    /    P A R A G R A P H                         //
//                                                                                      //
//  KC_U:  * BEGINING OF LINE                                                           //
//        ** BEGINING OF PARAGRAPH                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_uU' tap dance.
// static tap FVIM_uU_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void FVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
//   FVIM_uU_tap_state.state = cur_dance(state);
//   switch (FVIM_uU_tap_state.state) {
//     case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_LEFT);
//                           unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;

//     case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_UP);
//                           unregister_code(KC_UP);   unregister_code(KC_LALT); break;
//   }
//   FVIM_uU_tap_state.state = 0;
// }
//                                                                                      //
// [tapdance] [ _fvim ] kc_u (fvim_uu)                                                  //
//                                                                                      //
//  b e g i n n i n g   o f   l i n e    /    p a r a g r a p h                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_P (FVIM_pP)                                                  //
//                                                                                      //
//  E N D   O F   L I N E  /  P A R A G R A P H                                         //
//                                                                                      //
//  KC_P:  * END OF LINE                                                                //
//        ** END OF PARAGRAPH                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_pP' tap dance.
// static tap FVIM_pP_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void FVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
//   FVIM_pP_tap_state.state = cur_dance(state);
//   switch (FVIM_pP_tap_state.state) {
//     case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_RGHT);
//                           unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;

//     case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_DOWN);
//                           unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
//   }
//   FVIM_pP_tap_state.state = 0;
// }
//                                                                                      //
// [tapdance] [ _fvim ] kc_p (fvim_pp)                                                  //
//                                                                                      //
//  e n d   o f   l i n e  /  p a r a g r a p h                                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_I (FVIM_iI)                                                  //
//                                                                                      //
//  M O V E   W O R D   B A C K W A R D  /  M O V E   S U B W O R D   B A C K W A R D   //
//                                                                                      //
//  KC_I:  * MOVE WORD    BACKWARD                                                      //
//        ** MOVE SUBWORD BACKWARD                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_iI' tap dance.
static tap FVIM_iI_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_iI_function (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_iI_tap_state.state = cur_dance(state);
  switch (FVIM_iI_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LALT);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LALT); break;

    case DOUBLE_TAP:        register_code(KC_LCTL);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT);   unregister_code(KC_LCTL); break;
  }
  FVIM_iI_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_i (fvim_ii)                                                  //
//                                                                                      //
//  m o v e   w o r d   b a c k w a r d  /  m o v e   s u b w o r d   b a c k w a r d   //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_O (FVIM_oO)                                                  //
//                                                                                      //
//  M O V E   W O R D   F O R W A R D    /    M O V E   S U B W O R D   F O R W A R D   //
//                                                                                      //
//  KC_O:  * MOVE WORD    FORWARD                                                       //
//        ** MOVE SUBWORD FORWARD                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_oO' tap dance. esterNoCleiDoMastoiDeo
static tap FVIM_oO_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_oO_function (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_oO_tap_state.state = cur_dance(state);
  switch (FVIM_oO_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LALT);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LALT); break;

    case DOUBLE_TAP:        register_code(KC_LCTL);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LCTL); break;
  }
  FVIM_oO_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_o (fvim_oo)                                                  //
//                                                                                      //
//  m o v e   w o r d   f o r w a r d    /    m o v e   s u b w o r d   f o r w a r d   //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_U (DVIM_uU)                                                  //
//                                                                                      //
//  D E L E T E   T O   B E G I N N I N G   O F   L I N E   /   P A R A G R A P H       //
//                                                                                      //
//  KC_U:  * DELETE TO BEGINNING OF LINE                                                //
//        ** DELETE TO BEGINNING OF PARAGRAPH                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_uU' tap dance.
// static tap DVIM_uU_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void DVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
//   DVIM_uU_tap_state.state = cur_dance(state);
//   switch (DVIM_uU_tap_state.state) {
//     case SINGLE_TAP:        dvim("u"); break;
//     case DOUBLE_TAP:        dvim("U"); break;
//   }
//   DVIM_uU_tap_state.state = 0;
// }
//                                                                                      //
// [tapdance] [ _dvim ] kc_u (dvim_uu)                                                  //
//                                                                                      //
//  d e l e t e   t o   b e g i n n i n g   o f   l i n e   /   p a r a g r a p h       //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_P (DVIM_pP)                                                  //
//                                                                                      //
//  D E L E T E   T O   E N D   O F   L I N E   /   E N D   O F   P A R A G R A P H     //
//                                                                                      //
//  KC_U:  * DELETE TO END OF LINE                                                      //
//        ** DELETE TO END OF PARAGRAPH                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_pP' tap dance.
// static tap DVIM_pP_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void DVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
//   DVIM_pP_tap_state.state = cur_dance(state);
//   switch (DVIM_pP_tap_state.state) {
//     case SINGLE_TAP:        dvim("p"); break;
//     case DOUBLE_TAP:        dvim("P"); break;
//   }
//   DVIM_pP_tap_state.state = 0;
// }
//                                                                                      //
// [tapdance] [ _dvim ] kc_p (dvim_pp)                                                  //
//                                                                                      //
//  d e l e t e   t o   e n d   o f   l i n e   /   e n d   o f   p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////



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
//
// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_Q (LOGOUT)                                                     //
// //                                                                                      //
// //  L O G O U T                                                                         //
// //                                                                                      //
// //  KC_Q:  @  LOGOUT CURRENT USER                                                       //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'LOGOUT' tap dance.
// static tap LOGOUT_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void LOGOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
//   LOGOUT_tap_state.state = cur_dance(state);
//   switch (LOGOUT_tap_state.state) {

//     case SINGLE_TAP://user lock screen
//                       register_code(KC_LCTL); register_code(KC_LGUI);
//                       tap_code(KC_Q);
//                       unregister_code(KC_LGUI); unregister_code(KC_LCTL);

//                     //user log out
//                       // (guessed by try and fail method)
//                       // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
//                       // if we add ALT, we don't have to answer any menu, we logout directly
//     case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_Q);

//                       unregister_code(KC_Q);
//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
//                       break;
//   }
// }

// void LOGOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (LOGOUT_tap_state.state) {
                     
//     case SINGLE_HOLD: break;
//   }
//   LOGOUT_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_q (logout)                                                     //
// //                                                                                      //
// //  l o g o u t                                                                         //
// //////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_R (HRESET)                                                     //
//                                                                                      //
//  R E S E T                                                                           //
//                                                                                      //
//  KC_R:   @   R E S E T                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'HRESET' tap dance.
// static tap HRESET_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void HRESET_finished (qk_tap_dance_state_t *state, void *user_data) {
//   HRESET_tap_state.state = cur_dance(state);
//   switch (HRESET_tap_state.state) {

//     case SINGLE_HOLD: // starts backlight blinking and then reset the keyboard for about 7 seconds
//                       reset_my_keyboard_function();
//                       break;
//   }
// }

// void HRESET_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (HRESET_tap_state.state) {
//     case SINGLE_HOLD:        break;
//   }
//   HRESET_tap_state.state = 0;
// }
//                                                                                      //
// [tapdance] [_powr] kc_r (hreset)                                                     //
//                                                                                      //
//  r e s e t                                                                           //
//////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_Z (SLEP_M)                                                     //
// //                                                                                      //
// //  M E N U   B A R   /    S L E E P   C O M P U T E R                                  //
// //                                                                                      //
// //  KC_Z:   *  MENU BAR                                                                 //
// //          @  SLEEP COMPUTER                                                           //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'SLEP_M' tap dance.
// static tap SLEP_M_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void SLEP_M_finished (qk_tap_dance_state_t *state, void *user_data) {
//   SLEP_M_tap_state.state = cur_dance(state);
//   switch (SLEP_M_tap_state.state) {
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F2);
//                       //_delay_ms(500);
//                       break;

// // [INFO] HOW TO SLEEP COMPUTER THROUGH KEYBOARD                            
// //  keystrokes for sleeping:  (guessed by try and fail method)
                      
//     case SINGLE_HOLD: register_code(KC_POWER);
//                    // without this delay, POWER doesn't work !!!   
//                       _delay_ms(500); 
//                       unregister_code(KC_POWER);
//                    // SEND_STRING("s");  // 's' for selecting button sleep but it's not necessary
//                       break;

//                       /*
//                       // this way doesn't work

//                       register_code(KC_LSFT);
//                       register_code(KC_POWER);
//                       _delay_ms(500); 
//                       */

//                    KC_EJCT keycode doesn't work with QMK, but with KarabinerElements works vey well
//                   /*register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_EJCT);*/

// /////////////////////////////////////////////////////////////////////////////////////////////////// ###
// /*                                                                                                     */
// /*   KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down)     */
// /*                                                                                                     */
// /*                          register_code(KC_POWER);                                                   */
// /*                                                                                                     */
// /////////////////////////////////////////////////////////////////////////////////////////////////// ###
//   }
// }

// void SLEP_M_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (SLEP_M_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_F2); unregister_code(KC_LCTL); break;
                     
//     case SINGLE_HOLD: /* if we unregister_code(KC_POWER) here, at SLEP_M_reset
//                          it will appear the POWER dialog box and 
//                          we have to press the related initial letter
//                          or chosing an option with the mouse.

//                          unregister_code(KC_POWER);
//                       */

//                       /*
//                       unregister_code(KC_EJCT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
//                       */
// // [info] how to sleep computer through keyboard

//                       break;                       
//   }
//   SLEP_M_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_z (slep_m)                                                     //
// //                                                                                      //
// //  m e n u   b a r   /    s l e e p   c o m p u t e r                                  //
// //////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_X (KILA_D)                                                     //
//                                                                                      //
//  D O C K   B A R    /    F O R C E   T O   K I L L   C U R R E N T   A P P           //
//                                                                                      //
//  KC_X:   *  DOCK BAR                                                                 //
//          @  KILL CURRENT APP                                                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'KILA_D' tap dance.
static tap KILA_D_tap_state = {
  .is_press_action = true,
  .state = 0
};

void KILA_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILA_D_tap_state.state = cur_dance(state);
  switch (KILA_D_tap_state.state) {

    case SINGLE_TAP:  register_code(KC_LCTL);   register_code  (KC_F3); // DOCK BAR
                      break;
                      // SEND_STRING(SS_LALT(SS_LGUI("d")));
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_ESC);
                      break;

// [INFO] HOW TO KILL CURRNT APP THROUGH KEYBOARD              
//  keystrokes for kill current app:  (guessed by try and fail method)
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */
  }
}

void KILA_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILA_D_tap_state.state) {
    case SINGLE_TAP:  unregister_code  (KC_F3); unregister_code(KC_LCTL);
                      //unregister_code(KC_D); unregister_code(KC_LGUI); unregister_code(KC_LALT);
// [info] how to kill currnt app through keyboard

                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      unregister_code(KC_LSFT); 
                      break;
          
  }
  KILA_D_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_x (kila_d)                                                     //
//                                                                                      //
//  d o c k   b a r    /    f o r c e   t o   k i l l   c u r r e n t   a p p           //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_C (KILM_T)                                                     //
//                                                                                      //
//  T O O L S   B A R   /   K I L L   M E N U                                           //
//                                                                                      //
//  KC_C:   *  TOOLS BAR                                                                //
//          @  KILL MENU                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'KILM_T' tap dance.
static tap KILM_T_tap_state = {
  .is_press_action = true,
  .state = 0
};

void KILM_T_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILM_T_tap_state.state = cur_dance(state);
  switch (KILM_T_tap_state.state) {

    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F5); // TOOLS BAR
                      break;
                            
    case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;

// [INFO] HOW TO ACCESS KILL MENU THROUGH KEYBOARD
//  keystrokes for kill menu:  (guessed by try and fail method)
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */
// [info] how to access kill menu through keyboard
  }
}

void KILM_T_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILM_T_tap_state.state) {

    case SINGLE_TAP:  unregister_code(KC_F5); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); 
                      break;      
  }
  KILM_T_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_c (kilm_t)                                                     //
//                                                                                      //
//  t o o l s   b a r   /   k i l l   m e n u                                           //
//////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_V (SHUT_S)                                                     //
// //                                                                                      //
// //  S T A T U S   B A R    /    S H U T   D O W N                                       //
// //                                                                                      //
// //  KC_V:   *  STATUS BAR                                                               //
// //          @  SHUT DOWN (SET VOL TO 1 AND SHUT DOWN)                                   //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'SHUT_S' tap dance.
// static tap SHUT_S_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data) {
//   SHUT_S_tap_state.state = cur_dance(state);
//   switch (SHUT_S_tap_state.state) {

// // [SYSTEM PREFERENCES]
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F8);  // STATUS BAR 
//                       break;
// // [system preferences]

//     case SINGLE_HOLD:                        
//     case DOUBLE_TAP:  volumeSetToLevel(1);

//                   //  keystrokes for shutting down:  (guessed by try and fail method)
//                       register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);

//                       register_code(KC_POWER); unregister_code(KC_POWER);

//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   

//                       break;

// // [OLDWAY]
//                    // Another way for shutting down, but much less elegant:
//                    // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
//                    // register_code(KC_ENT); unregister_code(KC_ENT);
// // [oldway]

// // [INFO]
//                    /* The KC_EJCT keycode doesn't work */
//                       /*
//                       register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_EJCT);
//                       _delay_ms(2000);
//                       unregister_code(KC_EJCT);
//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
//                       */
// // [info]
//   }
// }

// void SHUT_S_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (SHUT_S_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_F8); unregister_code(KC_LCTL);
//                       break;
                     
//     case SINGLE_HOLD: 
//     case DOUBLE_TAP:  break;
                            
//   }
//   SHUT_S_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_v (shut_s)                                                     //
// //                                                                                      //
// //  s t a t u s   b a r    /    s h u t   d o w n                                       //
// //////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_B (RSTT_F)                                                     //
//                                                                                      //
//  F L O A T I N G   W I N D O W   /   R E S T A R T                                   //
//                                                                                      //
//  KC_B:  *  FLOATING WINDOW,                                                          //
//         @  RESTART                                                                   //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RSTT_F' tap dance.
static tap RSTT_F_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RSTT_F_finished (qk_tap_dance_state_t *state, void *user_data) {
  RSTT_F_tap_state.state = cur_dance(state);
  switch (RSTT_F_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F6);
// [system preferences]
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  
                  //  keystrokes for restarting:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);
                      
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);

                      break;

// [OLDWAY]
                   // Another way for restarting, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_R); unregister_code(KC_R);
// [oldway]                      

                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */

  }
}

void RSTT_F_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RSTT_F_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F6); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  RSTT_F_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_b (rstt_f)                                                     //
//                                                                                      //
//  f l o a t i n g   w i n d o w   /   r e s t a r t                                   //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_J (RS_ZOIN)                                                    //
//                                                                                      //
//  R I G H T    S H I F T    /    Z O O M   I N                                        //
//                                                                                      //
//  KC_J:  *  ZOOM IN,                                                                  //
//         @  RIGHT SHIFT                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RS_ZOIN' tap dance.
static tap RS_ZOIN_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RS_ZOIN_finished (qk_tap_dance_state_t *state, void *user_data) {
  RS_ZOIN_tap_state.state = cur_dance(state);
  switch (RS_ZOIN_tap_state.state) {

// [SYSTEM PREFERENCES]    
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_EQL);
                      break;
// [system preferences]                      

    case SINGLE_HOLD: register_code(KC_RSFT);
                      break;
  }
}

void RS_ZOIN_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RS_ZOIN_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_EQL);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RSFT);
                      break;                       
  }
  RS_ZOIN_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_j (rs_zoin)                                                    //
//                                                                                      //
//  r i g h t    s h i f t    /    z o o m   i n                                        //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_K (RG_ZOUT)                                                    //
//                                                                                      //
//  R I G H T    G U I     /     Z O O M    O U T                                       //
//                                                                                      //
//  KC_K:  *  ZOOM OUT,                                                                 //
//         @  RIGHT GUI                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RG_ZOUT' tap dance.
static tap RG_ZOUT_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RG_ZOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  RG_ZOUT_tap_state.state = cur_dance(state);
  switch (RG_ZOUT_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_MINS);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RGUI);
                      break;
  }
}

void RG_ZOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RG_ZOUT_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_MINS);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RGUI);
                      break;                       
  }
  RG_ZOUT_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_k (rg_zout)                                                    //
//                                                                                      //
//  r i g h t    g u i     /     z o o m    o u t                                       //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_L (RA_ZOOM)                                                    //
//                                                                                      //
//  R I G H T    A L T    /    Z O O M    O N / O F F                                   //
//                                                                                      //
//  KC_L:  *  ZOOM ON/OFF,                                                              //
//         @  RIGHT ALT                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RA_ZOOM' tap dance.
static tap RA_ZOOM_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RA_ZOOM_finished (qk_tap_dance_state_t *state, void *user_data) {
  RA_ZOOM_tap_state.state = cur_dance(state);
  switch (RA_ZOOM_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_SCLN);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RALT);
                      break;
  }
}

void RA_ZOOM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RA_ZOOM_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_SCLN);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RALT);
                      break;                       
  }
  RA_ZOOM_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_l (ra_zoom)                                                    //
//                                                                                      //
//  r i g h t    a l t    /    z o o m    o n / o f f                                   //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_SP (RC_INCO)                                                   //
//                                                                                      //
//  R I G H T    C O N T R O L     /     I N V E R T    C O L O R S                     //
//                                                                                      //
//  KC_SP:  *  INVERT COLORS,                                                           //
//          @  RIGHT CONTROL                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RC_INCO' tap dance.
static tap RC_INCO_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RC_INCO_finished (qk_tap_dance_state_t *state, void *user_data) {
  RC_INCO_tap_state.state = cur_dance(state);
  switch (RC_INCO_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LGUI);
                      register_code(KC_8);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RCTL);
                      break;
  }
}

void RC_INCO_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RC_INCO_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_8);
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RCTL);
                      break;                       
  }
  RC_INCO_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_sp (rc_inco)                                                   //
//                                                                                      //
//  r i g h t    c o n t r o l     /     i n v e r t    c o l o r s                     //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ p o w r ]    l a y e r                  //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// my own tap_dance harvest                                                             //
//                                                                                      //
// DOUBLE FUNCTION TAP DANCE PERSONALIZATION SECTION END                                //
//////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//               T A P    D A N C E    D E C L A R A T I O N S                          //
//                                                                                      //
//  THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION                          //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
qk_tap_dance_action_t tap_dance_actions[] = {
// [INFO]
// ACTION_TAP_DANCE_DUAL_ROLE(kc, layer): Sends the kc keycode when tapped once, ...
//   ... or moves to layer. (this is similar to the keycode: 'TO' layer)
// [info]
//
// [EXAMPLES]
// [TD_ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS)
//
// [A_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// [examples]
//
// Other declarations would go here, separated by commas, if you have them
//

// [_SYMB] LAYER  (TWO IN A KEY)
  [V_RACI] = ACTION_TAP_DANCE_DOUBLE(KC_RABK, KC_CIRC )                                   // & ^
//[A_GRAV]  // grave & tilde         //tilde        accessible while holding SHIFT key !  // ` ~
//[S_QUOT]  // quote & double quote  //double quote accessible while holding SHIFT key !  // ' "
 ,[G_DOEU] = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  EURO)                                       // $ €
 ,[Z_EXCL] = ACTION_TAP_DANCE_DOUBLE(KC_EXLM, INV_EX)                                     // ! ¡
 ,[X_QUES] = ACTION_TAP_DANCE_DOUBLE(KC_QUES, INV_QU)                                     // ? ¿
// [_symb] layer  (two in a key)

// [_NUMB] LAYER
 ,[SLNUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNUMB_finished, SLNUMB_reset)
 ,[DENUOF] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DENUOF_finished, DENUOF_reset)
// [_numb] layer

// [_POWR] LAYER
 ,[LCKLOG]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, LCKLOG_finished, LCKLOG_reset)
 ,[HRESET]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)

 ,[V8_TEST]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, V8_TEST_finished, V8_TEST_reset)
 ,[V1_LAST]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, V1_LAST_finished, V1_LAST_reset)

 ,[SLEP_M]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)
 ,[KILM_T]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILM_T_finished, KILM_T_reset)
 ,[KILA_D]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILA_D_finished, KILA_D_reset)
 ,[SHUT_S]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SHUT_S_finished, SHUT_S_reset)
 ,[RSTT_F]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSTT_F_finished, RSTT_F_reset)

 ,[RS_ZOIN]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RS_ZOIN_finished, RS_ZOIN_reset) 
 ,[RG_ZOUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RG_ZOUT_finished, RG_ZOUT_reset) 
 ,[RA_ZOOM]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RA_ZOOM_finished, RA_ZOOM_reset) 
 ,[RC_INCO]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RC_INCO_finished, RC_INCO_reset) 
 // [_powr] layer

// [_FVIM] LAYER
 ,[FVIM_uU] = ACTION_TAP_DANCE_FN(FVIM_uU_function)
 ,[FVIM_iI] = ACTION_TAP_DANCE_FN(FVIM_iI_function)
 ,[FVIM_oO] = ACTION_TAP_DANCE_FN(FVIM_oO_function)
 ,[FVIM_pP] = ACTION_TAP_DANCE_FN(FVIM_pP_function)
// [_fvim] layer

// [_DVIM] LAYER
 ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
 ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// [_dvim] layer

};
//                                                                                      //
//               t a p    d a n c e    d e c l a r a t i o n s                          //
//                                                                                      //
//  this section has to be at the end of the tap dance section                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                                                                                   //
//                                  K    E    Y    M    A    P    S                                  //
//                                                                                                   //
//                                                                                                   //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
/*
// [KEYMAP GRID TEMPLATE]
//.----------------------------------------.                 .----------------------------------------.
               ___LYRNAME_L1___,                                          ___LYRNAME_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___LYRNAME_L2___,                                          ___LYRNAME_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___LYRNAME_L3___,                                          ___LYRNAME_R3___,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _LAYR_LTHMB_RW1_,              _LAYR_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _LAYR_LTHMB_RW2_,              _LAYR_RTHMB_RW2_
//                     '------------------------'     '------------------------'
// [keymap grid template]
*/
/*
// [BLANK KEYMAP GRID]
//.----------------------------------------.                 .----------------------------------------.
//|----------------------------------------|                 |----------------------------------------|
//|----------------------------------------|                 |----------------------------------------|
//'----------------------------------------'                 '----------------------------------------'
//                          _____LAYOUT_____               _____WRAPPR_____
//                     .------------------------.     .------------------------.
//                     |------------------------|     |------------------------|
//                     |------------------------|     |------------------------|
//                     '------------------------'     '------------------------'
//
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// [blank keymap grid]
*/

//.---------------------------------------------.       .---------------------------------------------.
//|---------------------------------------------|       |---------------------------------------------|
//|---------------------------------------------|       |---------------------------------------------|
//'---------------------------------------------'       '---------------------------------------------'
//                           .---------------------. .---------------------.
//                           |---------------------| |---------------------|
//                           |---------------------| |---------------------|
//                           '---------------------' '---------------------'

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//[_DFLT] LAYER 00 : DEFAULT LAYER
  [_DFLT] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___DEFAULT_L1___,                                          ___DEFAULT_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEFAULT_L2___,                                          ___DEFAULT_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEFAULT_L3___,                                          ___DEFAULT_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _DFLT 00
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_ACCN] LAYER 01 : _ACCENTS LAYER
  [_ACCN] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___ACCENTS_L1___,                                           ___ACCENTS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___ACCENTS_L2___,                                           ___ACCENTS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___ACCENTS_L3___,                                           ___ACCENTS_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _ACCN 01
/////////////////////////////////////////////////////////////////////////////////////////////////////##

//[_NUMB] LAYER 02 : NUMBERS LAYER
  [_NUMB] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___NUMBERS_L1___,                                          ___NUMBERS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___NUMBERS_L2___,                                          ___NUMBERS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___NUMBERS_L3___,                                          ___NUMBERS_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _NUMB 02
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_FVIM] LAYER 03 : FAKE EDITION VIM LAYER
  [_FVIM] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___FAKEVIM_L1___,                                          ___FAKEVIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___FAKEVIM_L2___,                                          ___FAKEVIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___FAKEVIM_L3___,                                          ___FAKEVIM_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _FVIM 03
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_XVIM] LAYER 04 : EXTENDED EDITION VIM LAYER
  [_XVIM] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___EXT_VIM_L1___,                                          ___EXT_VIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___EXT_VIM_L2___,                                          ___EXT_VIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___EXT_VIM_L3___,                                          ___EXT_VIM_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _XVIM 04
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DVIM] LAYER 05 : DELETE EDITION VIM LAYER
  [_DVIM] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___DEL_VIM_L1___,                                          ___DEL_VIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEL_VIM_L2___,                                          ___DEL_VIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEL_VIM_L3___,                                          ___DEL_VIM_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _DVIM 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_MOUS] = LAYER 06 : MOUSE LAYER
  [_MOUS] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____MOUSE_L1____,                                          ____MOUSE_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____MOUSE_L2____,                                          ____MOUSE_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____MOUSE_L3____,                                          ____MOUSE_R3____
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _MOUS 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DALY] = LAYER 07 : DAILY COMMANDS LAYER
  [_DALY] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____DAILY_L1____,                                          ____DAILY_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____DAILY_L2____,                                          ____DAILY_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____DAILY_L3____,                                          ____DAILY_R3____
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _DALY 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_FUNC] = LAYER 08 : FUNCTIONS LAYER
  [_FUNC] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               __FUNCTIONS_L1__,                                          __FUNCTIONS_R1__,
//|----------------------------------------|                 |----------------------------------------|
               __FUNCTIONS_L2__,                                          __FUNCTIONS_R2__,
//|----------------------------------------|                 |----------------------------------------|
               __FUNCTIONS_L3__,                                          __FUNCTIONS_R3__
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _FUNC 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_SYMB] LAYER 09 : SYMBOLS LAYER
  [_SYMB] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___SYMBOLS_L1___,                                          ___SYMBOLS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___SYMBOLS_L2___,                                          ___SYMBOLS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___SYMBOLS_L3___,                                          ___SYMBOLS_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _SYMB 9
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_APPS] LAYER 10 : APPLICATIONS LAYER
  [_APPS] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               __APPLICATS_L1__,                                          __APPLICATS_R1__,
//|----------------------------------------|                 |----------------------------------------|
               __APPLICATS_L2__,                                          __APPLICATS_R2__,
//|----------------------------------------|                 |----------------------------------------|
               __APPLICATS_L3__,                                          __APPLICATS_R3__
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _APPS 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_LEDS] LAYER 11 : SYMBOLS LAYER
  [_LEDS] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               _LEDS_LIGHTS_L1_,                                          _LEDS_LIGHTS_R1_,
//|----------------------------------------|                 |----------------------------------------|
               _LEDS_LIGHTS_L2_,                                          _LEDS_LIGHTS_R2_,
//|----------------------------------------|                 |----------------------------------------|
               _LEDS_LIGHTS_L3_,                                          _LEDS_LIGHTS_R3_
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _LEDS 11
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_POWR] LAYER 12 : POWER COMMANDS LAYER
  [_POWR] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____POWER_L1____,                                          ____POWER_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____POWER_L2____,                                          ____POWER_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____POWER_L3____,                                          ____POWER_R3____
//'----------------------------------------'                 '----------------------------------------'
),
// END OF [_POWR] 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_TEST] LAYER 13 : TEST LAYER
  [_TEST] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____TEST__L1____,                                          ____TEST__R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____TEST__L2____,                                          ____TEST__R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____TEST__L3____,                                          ____TEST__R3____
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _TEST 13
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_LAST] LAYER 17 : LAST LAYER //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!
  [_LAST] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____LAST__L1____,                                          ____LAST__R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____LAST__L2____,                                          ____LAST__R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____LAST__L3____,                                          ____LAST__R3____
//'----------------------------------------'                 '----------------------------------------'
)
// END OF _LAST 17
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
};
//                                                                                      //
//                                                                                      //
//                     k e y m a p s        ( l a y o u t s )                           //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

//[PLACEHOLDER] //🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥








































































































//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                        M A T R I X   I N I T   U S E R                               //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void matrix_init_user(void) {

  breathing_disable();

  //backlight_level(BL_GHKN);

  // set_unicode_input_mode(UC_OSX);
  // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
} // end of matrix_init_user
//                                                                                      //
//                        m a t r i x   i n i t   u s e r                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////































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







































































































































































































































































































































































































































































































































































































































































































































































































//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                      L A Y E R _S T A T E _ S E T _ U S E R                          //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {

    case _DFLT:   //  0  
        
        if (hide_other_apps == true)
        {
          HIDEOTH; //Long: SEND_STRING(SS_LALT(SS_LGUI("h"))); //Wrong: register_code(LALT(LGUI(KC_H)));
          hide_other_apps = false;
        }
        backlight_level(gherkinBacklightLevel);

          if (capslock_is_active)
          {
            breathing_period_set(BR_CAPS);
            breathing_enable();
          }
          else
          {
            breathing_period_set(BR_DFLT);
            breathing_disable();
          }
        break; 

    case _ACCN:   //  1
        backlight_level(BL_ACCN);
        breathing_period_set(BR_ACCN);
        breathing_enable();        
        break;

    case _NUMB:   //  2
        backlight_level(BL_NUMB);
        breathing_period_set(BR_NUMB);
        breathing_enable();
        break;

    case _FVIM:   //  3
        backlight_level(BL_FVIM);
        break;

    case _XVIM:   //  4
 // case _CVIM:   // X4X  // Now it's included in right side of _XVIM
        backlight_level(BL_VIM);
        break;

    case _DVIM:   //  5
        backlight_level(BL_DVIM);
        break;

    case _MOUS:   // 6
        backlight_level(BL_MOUS);
        break;


    case _DALY:   //  7
        backlight_level(BL_DALY);
        break;

    case _FUNC:   //  8
        backlight_level(BL_FUNC);
        break;

    case _SYMB:   //  9
        backlight_level(BL_SYMB);
        breathing_period_set(BR_SYMB);
        breathing_enable();
        break;

    case _APPS:   //  10
      gui_mod = get_mods()&GUI_MODS;
      if (gui_mod)
      {
        hide_other_apps = true;
      }
      backlight_level(BL_APPS);
      break;

 // case _BLIT :   //  10

    case _POWR:   //  12
        backlight_level(BL_POWR);
        break;

    default: //  for any other layers
        backlight_level(BL_LOW);
        break;

  }
  return state;
}; 
//                                                                                      //
//                                                                                      //
//                      l a y e r _s t a t e _ s e t _ u s e r                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                   E N D    O F    T H E    Q M K    C O D E                          //
//                                                                                      //
//                   ####      T  H  E      E  N  D      ####                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////