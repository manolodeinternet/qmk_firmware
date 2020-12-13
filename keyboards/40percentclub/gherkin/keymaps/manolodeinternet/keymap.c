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
#include "manolodeinternet.h"
// Following files are included from 'manolodeinternet.h'
// #include "tapdance_setup.h"
// #include "backlight_manolodeinternet.h"
// #include "wrappers.h"


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
// [TAPDANCE] [_NUMB] KC_B (NUMBOF)                                                     //
//                                                                                      //
//  D O L L A R  /  E U R O  -  N U M B E R S   L A Y E R   O F F                       //
//                                                                                      //
//  KC_B:  * @  KC_DOLLAR,                                                              //
//        **    EURO,                                                                   //
//           @@ [_NUMB] OFF                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// instantalize an instance of 'tap' for the 'NUMBOF' tap dance.
static tap NUMBOF_tap_state = {
  .is_press_action = true,
  .state = 0
};

void NUMBOF_finished (qk_tap_dance_state_t *state, void *user_data) {
  NUMBOF_tap_state.state = cur_dance(state);
  switch (NUMBOF_tap_state.state) {

    // [UNDERSTANDING]
    //  YOU CAN'T USE ANSI SHIFTED KEYCODES INTO TAP_DANCE CODE LIKE 'KC_PERC' !!!
    //  ANSI SHIFTED KEYCODES ARE VALID FOR KEYMAPS LAYOUTS.
    //  ... TAP_DANCE CODE NEEDS BASIC KEYCODES !!!
    // [understanding]

  //SWITCH _NUMB OFF
    case DOUBLE_HOLD: layer_clear();  break; //OFF
  }
}

void NUMBOF_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (NUMBOF_tap_state.state) {

    case DOUBLE_HOLD:  break;
  }
  NUMBOF_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] kc_b (NUMBOF)                                                     //
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

// [_DFLT] LAYER
  [L_APPS]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, L_APPS_finished, L_APPS_reset)
 ,[R_APPS]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, R_APPS_finished, R_APPS_reset)
// [_dflt] layer

// [_NUMB] LAYER
 ,[SLNUMB]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SLNUMB_finished, SLNUMB_reset, 350)
 ,[NUMBOF]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, NUMBOF_finished, NUMBOF_reset, 350)
// [_numb] layer

// [_POWR] LAYER
 ,[TG_QWE]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, TG_QWE_finished, TG_QWE_reset, 800)
 ,[LCKLOG]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, LCKLOG_finished, LCKLOG_reset, 800)
 ,[HRESET]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)

 ,[SLEP_M]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)
 ,[KILM_T]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILM_T_finished, KILM_T_reset)
 ,[KILA_D]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, KILA_D_finished, KILA_D_reset, 1000)
 ,[SHUT_S]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SHUT_S_finished, SHUT_S_reset, 1000)
 ,[RSTT_F]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, RSTT_F_finished, RSTT_F_reset, 1000)

 ,[RG_ZOIN]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RG_ZOIN_finished, RG_ZOIN_reset) 
 ,[RA_ZOUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RA_ZOUT_finished, RA_ZOUT_reset) 
 ,[RS_ZOOM]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RS_ZOOM_finished, RS_ZOOM_reset) 
 ,[RA_INCO]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RA_INCO_finished, RA_INCO_reset) 
 // [_powr] layer

// [_FVIM] LAYER

// ,[FVIM_uU] = ACTION_TAP_DANCE_FN(FVIM_uU_function)
 // ,[FVIM_uU] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, FVIM_uU_finished, FVIM_uU_reset, 250)
 // ,[FVIM_iI] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, FVIM_iI_finished, FVIM_iI_reset, 250)
 // ,[FVIM_oO] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, FVIM_oO_finished, FVIM_oO_reset, 250)
 // ,[FVIM_pP] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, FVIM_pP_finished, FVIM_pP_reset, 250)
// [_fvim] layer

// [_DVIM] LAYER
 // ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
 // ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
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

//[_DFLT] LAYER 00 : UAIH DEFAULT LAYER
  [_DFLT] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____DFLT___L1___,                                          ____DFLT___R1___,
//|----------------------------------------|                 |----------------------------------------|
               ____DFLT___L2___,                                          ____DFLT___R2___,
//|----------------------------------------|                 |----------------------------------------|
               ____DFLT___L3___,                                          ____DFLT___R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _DFLT 00
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_QWER] LAYER 02 : QWERT DEFAULT LAYER
  [_QWER] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____QWER__L1___,                                          ____QWER__R1___,
//|----------------------------------------|                 |----------------------------------------|
               ____QWER__L2___,                                          ____QWER__R2___,
//|----------------------------------------|                 |----------------------------------------|
               ____QWER__L3___,                                          ____QWER__R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _QWER 02
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_ACCN] LAYER 03 : _ACCENTS LAYER
  [_ACCN] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___ACCENTS_L1___,                                           ___ACCENTS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___ACCENTS_L2___,                                           ___ACCENTS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___ACCENTS_L3___,                                           ___ACCENTS_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _ACCN 03
/////////////////////////////////////////////////////////////////////////////////////////////////////##

//[_NUMB] LAYER 04 : NUMBERS LAYER
  [_NUMB] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___NUMBERS_L1___,                                          ___NUMBERS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___NUMBERS_L2___,                                          ___NUMBERS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___NUMBERS_L3___,                                          ___NUMBERS_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _NUMB 04
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_FVIM] LAYER 05 : FAKE EDITION VIM LAYER
  [_FVIM] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___FAKEVIM_L1___,                                          ___FAKEVIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___FAKEVIM_L2___,                                          ___FAKEVIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___FAKEVIM_L3___,                                          ___FAKEVIM_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _FVIM 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_XVIM] LAYER 06 : EXTENDED EDITION VIM LAYER
  [_XVIM] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___EXT_VIM_L1___,                                          ___EXT_VIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___EXT_VIM_L2___,                                          ___EXT_VIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___EXT_VIM_L3___,                                          ___EXT_VIM_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _XVIM 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DVIM] LAYER 07 : DELETE EDITION VIM LAYER
  [_DVIM] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___DEL_VIM_L1___,                                          ___DEL_VIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEL_VIM_L2___,                                          ___DEL_VIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEL_VIM_L3___,                                          ___DEL_VIM_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _DVIM 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_MOUS] = LAYER 08 : MOUSE LAYER
  [_MOUS] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____MOUSE_L1____,                                          ____MOUSE_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____MOUSE_L2____,                                          ____MOUSE_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____MOUSE_L3____,                                          ____MOUSE_R3____
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _MOUS 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DALY] = LAYER 09 : DAILY COMMANDS LAYER
  [_DALY] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____DAILY_L1____,                                          ____DAILY_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____DAILY_L2____,                                          ____DAILY_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____DAILY_L3____,                                          ____DAILY_R3____
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _DALY 09
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_FUNC] = LAYER 10 : FUNCTIONS LAYER
  [_FUNC] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               __FUNCTIONS_L1__,                                          __FUNCTIONS_R1__,
//|----------------------------------------|                 |----------------------------------------|
               __FUNCTIONS_L2__,                                          __FUNCTIONS_R2__,
//|----------------------------------------|                 |----------------------------------------|
               __FUNCTIONS_L3__,                                          __FUNCTIONS_R3__
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _FUNC 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_SYMB] LAYER 11 : SYMBOLS LAYER
  [_SYMB] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___SYMBOLS_L1___,                                          ___SYMBOLS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___SYMBOLS_L2___,                                          ___SYMBOLS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___SYMBOLS_L3___,                                          ___SYMBOLS_R3___
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _SYMB 11
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_APPS] LAYER 12 : APPLICATIONS LAYER
/*  [_APPS] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               __APPLICATS_L1__,                                          __APPLICATS_R1__,
//|----------------------------------------|                 |----------------------------------------|
               __APPLICATS_L2__,                                          __APPLICATS_R2__,
//|----------------------------------------|                 |----------------------------------------|
               __APPLICATS_L3__,                                          __APPLICATS_R3__
//'----------------------------------------'                 '----------------------------------------'
),*/
// END OF _APPS 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_LEDS] LAYER 12 : LEDS LAYER
  [_LEDS] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               _LEDS_LIGHTS_L1_,                                          _LEDS_LIGHTS_R1_,
//|----------------------------------------|                 |----------------------------------------|
               _LEDS_LIGHTS_L2_,                                          _LEDS_LIGHTS_R2_,
//|----------------------------------------|                 |----------------------------------------|
               _LEDS_LIGHTS_L3_,                                          _LEDS_LIGHTS_R3_
//'----------------------------------------'                 '----------------------------------------'
),
// END OF _LEDS 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_POWR] LAYER 13 : POWER COMMANDS LAYER
  [_POWR] = KEYMAP_gherkin_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____POWER_L1____,                                          ____POWER_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____POWER_L2____,                                          ____POWER_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____POWER_L3____,                                          ____POWER_R3____
//'----------------------------------------'                 '----------------------------------------'
)
// END OF [_POWR] 13
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
};
//                                                                                                   //
//                                                                                                   //
//                     k e y m a p s        ( l a y o u t s )                                        //
//                                                                                                   //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                                                                                   //
//                        M A T R I X   I N I T   U S E R                                            //
//                                                                                                   //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
void matrix_init_user(void) {                                                                        //
//                                                                                                   //
    breathing_disable();                                                                             //
//                                                                                                   //
//  backlight_level(BL_GHKN);                                                                        //
//                                                                                                   //
//   set_unicode_input_mode(UC_OSX);                                                                 //
//   REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.              //
} // end of matrix_init_user                                                                         //
//                                                                                                   //
//                        m a t r i x   i n i t   u s e r                                            //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                                                                                   //
//                      L A Y E R _S T A T E _ S E T _ U S E R                                       //
//                                                                                                   //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {

    case _DFLT:   //  0
    case _QWER:   //  2
        
        // if (hide_other_apps == true)
        // {
        //   HIDEOTH; //Long: SEND_STRING(SS_LALT(SS_LGUI("h"))); //Wrong: register_code(LALT(LGUI(KC_H)));
        //   hide_other_apps = false;
        // }
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

    case _ACCN:   //  3   // [BUG] increment a unit to the layer from now on...
        backlight_level(BL_ACCN);
        breathing_period_set(BR_ACCN);
        breathing_enable();        
        break;

    case _NUMB:   //  4
        backlight_level(BL_NUMB);
        breathing_period_set(BR_NUMB);
        breathing_enable();
        break;

    case _FVIM:   //  5
        backlight_level(BL_FVIM);
        break;

    case _XVIM:   //  6
 // case _CVIM:   // X4X  // Now it's included in right side of _XVIM
        backlight_level(BL_VIM);
        break;

    case _DVIM:   //  7
        backlight_level(BL_DVIM);
        break;

    case _MOUS:   // 8
        backlight_level(BL_MOUS);
        break;


    case _DALY:   //  9
        backlight_level(BL_DALY);
        break;

    case _FUNC:   //  10
        backlight_level(BL_FUNC);
        break;

    case _SYMB:   //  11
        backlight_level(BL_SYMB);
        breathing_period_set(BR_SYMB);
        breathing_enable();
        break;

    // case _APPS:   //  11
    //   gui_mod = get_mods()&GUI_MODS;
    //   if (gui_mod)
    //   {
    //     hide_other_apps = true;
    //   }
    //   backlight_level(BL_APPS);
    //   break;

 // case _BLIT _LEDS:   //  12

    case _POWR:   //  13
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