/*
  KEYBOARD:     MiniDactyl 2019/11/04

  PROJECT NAME: 40_layout (extended - minimal 30 fingers layout + 10 thumbs)
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



///////////////////////////////////////////////////////////////////////////////////////////////////////
// [UNDERSTANDING]
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 * 'qmk_firmware' must be under our user home folder: 'iMac de Navarro/2)thMAIN1500gb/Users/navarro/'
 * Every time it appears 'my_user_name': 'manolodeinternet', you must change it for 'your_user_name'

 * 'qmk_firmware/users/manolodeinternet/' path is automatically included while making and compiling
 * So 'rules.mk' and 'config.h' files from 'qmk_firmware/users/manolodeinternet/' folder are...
...automatically included when I'm making my '.hex' file.
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 * DOCS from Quantum Mechanical Keyboard Firmware, but commented by me !!!
   Userspace: Sharing Code Between Keymaps
   https://docs.qmk.fm/#/feature_userspace
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                             UNDERSTANDING USERSPACE FILE STRUCTURE                                //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*
 * /users/<name>/ (added to the path automatically when I'm making my '.hex' file)
 * rules.mk (included automatically when I'm making my '.hex' file)
 * config.h (included automatically when I'm making my '.hex' file)

 * readme.md (recommended)                                                                   (optional)
 * <username>.h for common constants and variables BETWEEN ALL THE KEYBOARDS                 (optional)
 * <username>.c for common functions               BETWEEN ALL THE KEYBOARDS                 (optional)

 * < file_for_sharing_common_features_between_two_or_more_keyboards.c >i.e.:cool_rgb_stuff.c (optional)
 * < file_for_sharing_common_features_between_two_or_more_keyboards.h >i.e.:cool_rgb_stuff.h (optional)

 * < file_for_sharing_common_features_between_two_or_more_keyboards.c >i.e.:backlght_stuff.c (optional)
 * < file_for_sharing_common_features_between_two_or_more_keyboards.h >i.e.:backlght_stuff.h (optional)
 
 * < file_for_sharing_common_enum_custom_keycodes.h >         BETWEEN ALL THE KEYBOARDS      (optional)
 
 * < file_for_sharing_common_tap_dance_functions.c >          BETWEEN ALL THE KEYBOARDS      (optional)
 * < file_for_sharing_common_tap_dance_functions.h >          BETWEEN ALL THE KEYBOARDS      (optional)

 * < file_for_simple_common_30_core_layout.c >FOR CORE KEYBOARDS WITH ALPHAS & MODIFIERS ONLY(optional)
 * < file_for_simple_common_30_core_layout.h > used with keyboards with more than 30 keys    (optional)

 * < file_for_comprehensive_common_30_core_layout.c >FOR FULL CORE KEYBOARDS WITH EVEN LAYERS(optional)
 * < file_for_comprehensive_common_30_core_layout.h >used with just 30 keys keyboards:gherkin(optional)
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////
//                             understanding userspace file structure                                //
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include "manolodeinternet.h"

/*
 * '#include QMK_KEYBOARD_H' is implemented at 'manolodeinternet.h'. Compile process needs this way !

 * But as I created 'manolodeinternet.c'...
...I need to include it manually in 'qmk_firmware/users/manolodeinternet/rules.mk'

 * This 'rules.mk' is also responsible for including the rest of the C files common to all...
...my keyboards and those C files specific to certain types of keyboards as well (with...
...backlight LEDs, with RGB LEDs, with layer triggers concentrated in the alpha core -30 keys-,...
...with thumb clusters, ...)

 * All my layers for all my common layout layers are in 'wrappers.h'
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////
// [understanding]
///////////////////////////////////////////////////////////////////////////////////////////////////////


// void set_default_hsv(void);








//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// GLOBAL VARIABLES                                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//


//                                                                                      //
// global variables                                                                     //
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  GLOBAL  FUNCTIONS                                                                   //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT] [_FVIM], [_DVIM], [_CVIM],     [_XVIM       & [_APPS]            //
//               KC_V,    KC_X,  [_FVIM]KC_C, [_FVIM]KC_X,   [_FVIM]KC_Z   (KC_Q & KC_P)//
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
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
//             T A P   D A N C E   F O R    [ _ A L P H ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] THUMB_L1 (DVIM_Del)                                               //
//                                                                                      //
//  D V I M    L A Y E R    /    D E L E T E                                            //
//                                                                                      //
//  THUMB_L1:  @ [_DVIM] LAYER                                                          //
//             *  DELETE,                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

//                                                                                      //
// [tapdance] [_dflt] thumb_l1 (dvim_del)                                               //
//                                                                                      //
//  d v i m    l a y e r    /    b a c k s p a c e                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//



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

// [MINI_DACTYL] SPECIFIC TAP_DANCE FEATURES
// [_DFLT] LAYER
   // [UNDERSTANDING]
   // TIME  50: is too dificult to typing   so fast !!!
   // TIME 100 is a right time for typing very fast !!!
   // [understanding]
   [DVIM_Del]=ACTION_TAP_DANCE_FN_ADVANCED_TIME(DVIM_Del_f_always,DVIM_Del_finished,DVIM_Del_reset,100)
// [_dflt] layer

// [_POWR] LAYER
  ,[LCKLOG]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, LCKLOG_finished, LCKLOG_reset, 800)
  ,[SLEP_M]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)

  ,[HRESET]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)
// [_powr] layer
// [mini_dactyl] specific tap_dance features


// [ALL_KEYBOARDS] TAP_DANCE FEATURES
// [_FVIM] LAYER
  ,[FVIM_uU] = ACTION_TAP_DANCE_FN(FVIM_uU_function)
  ,[FVIM_pP] = ACTION_TAP_DANCE_FN(FVIM_pP_function)
// [_fvim] layer

// [_DVIM] LAYER
  ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
  ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// [_dvim] layer
// [all_keyboards] tap_dance features
};
//                                                                                      //
//               t a p    d a n c e    d e c l a r a t i o n s                          //
//                                                                                      //
//  this section has to be at the end of the tap dance section                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////







// CUSTOMIZED MINI DACTTYL from  

#define LAYOUT_mini_dactyl_base( \
  K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
  K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
  K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_wrapper( \
    K01, K02, K03, K04, K05,                                                 K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15,                                                 K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25,                                                 K26, K27, K28, K29, K2A, \
                                 _DFLT_LTHMB_RW1_,     _DFLT_RTHMB_RW1_, \
                                           KC_NO ,      KC_NO,           \
                                 _DFLT_LTHMB_RW2_,     _DFLT_RTHMB_RW2_  \
    )

#define LAYOUT_mini_dactyl_base_wrapper(...)       LAYOUT_mini_dactyl_base(__VA_ARGS__)


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
//                                                                                                   //
//                                  K    E    Y    M    A    P    S                                  //
//                                                                                                   //
//                                                                                                   //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//[_DFLT] LAYER 00 : DEFAULT LAYER
  [_DFLT] = LAYOUT_mini_dactyl_base_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___DEFAULT_L1___,                                          ___DEFAULT_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEFAULT_L2___,                                          ___DEFAULT_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEFAULT_L3___,                                          ___DEFAULT_R3___
//'----------------------------------------'                 '----------------------------------------'
//                          _____LAYOUT_____               _____WRAPPR_____
//                     .------------------------.     .------------------------.
//                     |------------------------|     |------------------------|
//                     |------------------------|     |------------------------|
//                     '------------------------'     '------------------------'
),
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF _DFLT 00

//[_ACCN] LAYER 01 : ACCENTS LAYER
  [_ACCN] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___ACCENTS_L1___,                                          ___ACCENTS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___ACCENTS_L2___,                                          ___ACCENTS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___ACCENTS_L3___,                                          ___ACCENTS_R3___,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _ACCN_LTHMB_RW1_,              _ACCN_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                       KC_NO,               KC_NO,
//                     |------------------------|     |------------------------|
                            _ACCN_LTHMB_RW2_,              _ACCN_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF _ACCN 01

//[_NUMB] LAYER 02 : NUMBERS LAYER
  [_NUMB] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___NUMBERS_L1___,                                          ___NUMBERS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___NUMBERS_L2___,                                          ___NUMBERS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___NUMBERS_L3___,                                          ___NUMBERS_R3___,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _NUMB_LTHMB_RW1_,              _NUMB_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _NUMB_LTHMB_RW2_,              _NUMB_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF _NUMB 02

//[_FVIM] LAYER 03 : FAKE VIM LAYER
  [_FVIM] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___FAKEVIM_L1___,                                          ___FAKEVIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___FAKEVIM_L2___,                                          ___FAKEVIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___FAKEVIM_L3___,                                          ___FAKEVIM_R3___,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _FVIM_LTHMB_RW1_,              _FVIM_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _FVIM_LTHMB_RW2_,              _FVIM_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF _FVIM 03
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_XVIM] LAYER 04 : EXTENDED EDITION VIM LAYER
  [_XVIM] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___EXT_VIM_L1___,                                          ___EXT_VIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___EXT_VIM_L2___,                                          ___EXT_VIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___EXT_VIM_L3___,                                          ___EXT_VIM_R3___,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _XVIM_LTHMB_RW1_,              _XVIM_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _XVIM_LTHMB_RW2_,              _XVIM_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _XVIM 04
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DVIM] LAYER 05 : DELETE VIM LAYER
  [_DVIM] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___DEL_VIM_L1___,                                          ___DEL_VIM_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEL_VIM_L2___,                                          ___DEL_VIM_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___DEL_VIM_L3___,                                          ___DEL_VIM_R3___,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _DVIM_LTHMB_RW1_,              _DVIM_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _DVIM_LTHMB_RW2_,              _DVIM_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _DVIM 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_MOUS] = LAYER 06 : MOUSE LAYER
  [_MOUS] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____MOUSE_L1____,                                          ____MOUSE_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____MOUSE_L2____,                                          ____MOUSE_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____MOUSE_L3____,                                          ____MOUSE_R3____,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _MOUS_LTHMB_RW1_,              _MOUS_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _MOUS_LTHMB_RW2_,              _MOUS_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _MOUS 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DALY] = LAYER 07 : MOUSE LAYER
  [_DALY] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____DAILY_L1____,                                          ____DAILY_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____DAILY_L2____,                                          ____DAILY_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____DAILY_L3____,                                          ____DAILY_R3____,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _DALY_LTHMB_RW1_,              _DALY_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _DALY_LTHMB_RW2_,              _DALY_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _DALY 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_FUNC] = LAYER 08 : FUNCTIONS LAYER
  [_FUNC] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               __FUNCTIONS_L1__,                                          __FUNCTIONS_R1__,
//|----------------------------------------|                 |----------------------------------------|
               __FUNCTIONS_L2__,                                          __FUNCTIONS_R2__,
//|----------------------------------------|                 |----------------------------------------|
               __FUNCTIONS_L3__,                                          __FUNCTIONS_R3__,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _FUNC_LTHMB_RW1_,              _FUNC_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _FUNC_LTHMB_RW2_,              _FUNC_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _FUNC 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_SYMB] LAYER 09 : SYMBOLS LAYER
  [_SYMB] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ___SYMBOLS_L1___,                                          ___SYMBOLS_R1___,
//|----------------------------------------|                 |----------------------------------------|
               ___SYMBOLS_L2___,                                          ___SYMBOLS_R2___,
//|----------------------------------------|                 |----------------------------------------|
               ___SYMBOLS_L3___,                                          ___SYMBOLS_R3___,
//'----------------------------------------'                 '----------------------------------------'
//                     .------------------------.     .------------------------.
                            _SYMB_LTHMB_RW1_,              _SYMB_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _SYMB_LTHMB_RW2_,              _SYMB_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _SYMB 09
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_LEDS] LAYER 11 : LEDS LIGHTS LAYER
  [_LEDS] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               _LEDS_LIGHTS_L1_,                                          _LEDS_LIGHTS_R1_,
//|----------------------------------------|                 |----------------------------------------|
               _LEDS_LIGHTS_L2_,                                          _LEDS_LIGHTS_R2_,
//|----------------------------------------|                 |----------------------------------------|
               _LEDS_LIGHTS_L3_,                                          _LEDS_LIGHTS_R3_,
//'----------------------------------------'                 '----------------------------------------'
//                     .------------------------.     .------------------------.
                            _LEDS_LTHMB_RW1_,              _LEDS_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _LEDS_LTHMB_RW2_,              _LEDS_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _LEDS 11
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_POWR] = LAYER 12 : POWER COMMANDS LAYER
  [_POWR] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____POWER_L1____,                                          ____POWER_R1____,
//|----------------------------------------|                 |----------------------------------------|
               ____POWER_L2____,                                          ____POWER_R2____,
//|----------------------------------------|                 |----------------------------------------|
               ____POWER_L3____,                                          ____POWER_R3____,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _POWR_LTHMB_RW1_,              _POWR_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _POWR_LTHMB_RW2_,              _POWR_RTHMB_RW2_
//                     '------------------------'     '------------------------'
)
// END OF _POWR 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
};
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                           l a y e r s       l a y o u t s                            //
//                                                                                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                           I N I T      P R O C E S S E S                             //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void keyboard_post_init_user(void) {
// Call the post init code.

// Wen set default color variables from the initial color of the keyboard and ...

  set_default_hsv();

// keyboard_post_init_rgb();

// [UNCOMMENTTHIS]
// ... we show our default color.
//show_RGB_LEDs(); 
// [uncommentthis]
}
/*
void matrix_scan_user(void) {
                
}
*/
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                           i n i t      p r o c e s s e s                             //
//                                                                                      //
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
const uint16_t PROGMEM fn_actions[] = {
  [ACC_A] = ACTION_FUNCTION(ACC_A),
  [ACC_E] = ACTION_FUNCTION(ACC_E),
  [ACC_I] = ACTION_FUNCTION(ACC_I),
  [ACC_O] = ACTION_FUNCTION(ACC_O),
  [ACC_U] = ACTION_FUNCTION(ACC_U),

  [TIL_N] = ACTION_FUNCTION(TIL_N),

  [CAPSL] = ACTION_FUNCTION(CAPSL)
};
/////////////////////////////////////////////////////////////////////////////////////////////////// ###



void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  shift_flag = get_mods()&SHFT_MODS;
  switch (id) {

    case ACC_A ... TIL_N:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of action_function()
        {
        //  release LSHIFT
            // old way who worked fine
            // del_mods(shift_flag);
            // del_weak_mods(shift_flag);
            // send_keyboard_report();
          remove_activated_mod(shift_flag);
        };
    //  tap accent
        disable_capslock_before_accents_function();
        
        if (circumflex_requested)           { circumflex_accent_function(); }

          else { if (grave_requested)            { grave_accent_function(); }

             else { if (diaeresis_requested) { diaeresis_accent_function(); } 

                else { if (id == TIL_N)           {tilde_accent_function(); } 

                  else                           { acute_accent_function(); } 
                     }
                  }
               }

        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
          add_desired_mod(shift_flag);
          // add_mods(shift_flag);
          // add_weak_mods(shift_flag);
          // send_keyboard_report();
        };
      }
    break;

    case CAPSL:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
         capslock_tap();
         show_RGB_LEDs();
      }
      break;
  }

  if (record->event.pressed) 
  {
    switch (id) 
    {   case ACC_A: tap_code(KC_A); break;
        case ACC_E: tap_code(KC_E); break;
        case ACC_I: tap_code(KC_I); break;
        case ACC_O: tap_code(KC_O); break;
        case ACC_U: tap_code(KC_U); break;
        case TIL_N: tap_code(KC_N); break;
    }
  }
};
//                                                                                      //
//                                                                                      //
//                       f n _ a c t i o n s     f u n c t i o n s                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//                                                                                                    //
//                                                                                                    //
//                                          M  A  C  R   O  S                                         //
//                                                                                                    //
//                                                                                                    //
//                               P R O C E S S    R E C O R D    U S E R                              //
//                                                                                                    //
//                                                                                                    //
// BEGINNING OF NEW MACROS WAY                                                                        //
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
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

// APPS - PROCESS_RECORD_APPS
bool process_record_apps(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed)
  {
    switch(keycode)
    {
    //NEXT_APP, (IT CHANGES QUICKLY, WITHOUT APPS BAR IN THE MIDDLE OF THE SCREEN !!!)
      case TD(DVIM_Del):// Left Thumb 1 // Toggle between current and last app
                        // If you want to change from one app to another app in multi_apps mode,
                        //...uncomment next line.

                        // multi_apps = true;
                          register_code(KC_LGUI);
                               tap_code(KC_TAB);
                        unregister_code(KC_LGUI);
                        return false;

      case TT_NUMB:     // Left Thumb 3 // Karabiner-apps mode
                        karabiner_apps_trigger = true;  
                        if (multi_apps)
                        {
                          // [bug] current_flag or gui_flag ???
                          add_desired_mod(current_flag);
                          // [bug]
                          }
                          register_code(KC_F20);                      
                          return false;

      // Next line call one app for every 3x10 alpha keys
      default:          call_app_with_keycode(keycode & 0xFF);      // for avoiding modifiers on home row
                        return false;                     // i.e. pressing J is no KC_J, but LSFT_T(KC_J)

    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {
      case TH_R3_APPS_TRIGGER: // Right Thumb 3 // Apps mode with 'apps_trigger' variable without layer
                               apps_trigger = false;

   // if we are in this function it's because we checked that karabiner_apps_trigger is false
                               // if (!karabiner_apps_trigger)
                               // {
                               show_RGB_LEDs();
                               if (multi_apps)
                               {
                                 multi_apps = false;
                               }
                               else
                               {
                                  // wait_ms(1000);
                                  HIDEOTH;
                               }
                               // }
                               return false;

      default:                 return false;
    } // switch(keycode)
  } // else ( if (record->event.pressed) )
}; // bool process_record_apps(uint16_t keycode, keyrecord_t *record)



// USER - PROCESS_RECORD_USER
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // [DELETEME]
  // if (record->event.pressed)
  // {
  //   shift_flag   = get_mods()&SHFT_MODS;
  //   control_flag = get_mods()&CTRL_MODS;
  //   option_flag  = get_mods()&ALT_MODS;
  //   gui_flag     = get_mods()&GUI_MODS;
  // }
  // [deleteme]

  if (apps_trigger && !karabiner_apps_trigger)
  {
    return process_record_apps(keycode, record);
  } // if (apps_trigger && !karabiner_apps_trigger)

// if we are no in apps_trigger mode: we can be in karabiner_apps_trigger mode or in _DFLT layer mode
  if (record->event.pressed)
  // Do something when pressed
  {
    switch(keycode)
    {
      case TT_NUMB: // Left Thumb 3
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
// NEXT NEVER HAPPENS because TT_NUMB is the same key that the one for activate karabiner_apps_trigger!
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
                    // if (apps_trigger)
                    // {
                    //   karabiner_apps_trigger = true;  
                    //   if (multi_apps)
                    //   {
                    //     // [bug] current_flag or gui_flag ???
                    //     add_desired_mod(current_flag);
                    //     // [bug]

                    //     // add_mods(current_flag);
                    //     // add_weak_mods(current_flag);
                    //     // send_keyboard_report();
                    //   }
                    //   register_code(KC_F20);                      
                    // }
                    // else
// //////////////////////////////////////////////////////////////////////////////////////////////// ###
                      lt12_timer = timer_read();
                      layer_invert(_NUMB);
                    return false;

      case PREV_APP:  register_code  (KC_LGUI);
                      register_code  (KC_LSFT);
                      tap_code       (KC_TAB);
                      unregister_code(KC_LSFT);
                      changing_apps = true;
                      return false;         

      case NEXT_APP:  register_code  (KC_LGUI);
                      tap_code       (KC_TAB);
                      changing_apps = true;
                      return false;

      case MY_CLEAR:  layer_clear(); return false;

      // case MY_RESET:  if (get_mods()&CTRL_MODS)
      //                 {
      //                   reset_my_keyboard_function();
      //                   return false;
      //                 }
      case MY_RESET:  if (control_flag)
                      {
                        reset_my_keyboard_function();
                        return false;
                      }

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

      case CHANGE_SYMB_TO_NUMB:
                      layer_off(_SYMB);
                      layer_on(_NUMB);
                      return false;
                      
      case CHANGE_DALY_TO_LEDS: 
                           layer_off(_DALY);
                           layer_on(_LEDS);
                           return false;

      case TH_R1_DALY_MOUS:
                      // if (get_mods()&ALT_MODS)
                      if (triggered_mod(KC_A))
                      {
                        layer_on(_MOUS);
                      }
                      else
                      {
                        layer_on(_DALY);
                      }
                      return false;

      // case TH_R2_SYMB_FVIM:
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
      case TH_R2_SYMB_FVIM:
                      if (triggered_mod(KC_A))
                      {
                        layer_on(_FVIM);
                      }
                      else
                      {
                        symbols_pressed = true;
                        layer_on(_SYMB);
                      }
                      return false;

/*// 'case TH_L3_KAR_APPS' statement moved from 'process_record_user()' to 'process_record_apps()'
      case TH_L3_KAR_APPS:  
                      // layer_off(_APPS);
                      karabiner_apps_trigger = true;
                      
                      if (multi_apps)
                      {
                        // [BUG] current_flag or gui_flag ???
                        add_desired_mod(current_flag);
                        // [bug]

                        // add_mods(current_flag);
                        // add_weak_mods(current_flag);
                        // send_keyboard_report();
                      }
                      register_code(KC_F20);
                      
                      return false;*/

      case TH_R3_APPS_TRIGGER://if (option_flag)
                                if (triggered_mod(KC_A))
                                {
                                   layer_on(_NUMB);
                                }
                                else
                                {
                                  apps_trigger = true;
                                  if (triggered_mod(KC_G))
                                  {
                                    multi_apps = true;
                                  }
                                  rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
                                }
                                  return false; 
                               
      case TH_R4_POWR_LEDS:
                      // if (get_mods()&ALT_MODS)
                      if (triggered_mod(KC_A))
                      {
                        layer_on(_LEDS);
                      }
                      else
                      {
                        layer_on(_POWR);
                      }
                      return false;

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
                      return false;


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
          return false;
// this function is not going to be used with 23 leds per hand
//

      case KC_BSPC:
      case KC_DEL:   rgblight_sethsv_noeeprom(HSV_MY_RED);
                     return true;
                     
    // [FIRMWARE_SIZE]
      // using triggered_control_mod as a bool function, we save from 38 to 66 bytes --> 28 bytes saved
    // [firmware_size]
      // case SL_MEN:    if (triggered_control_mod())
/* Now 'SLEEP_FILEMENU' is implemented with tap_dance(SINGLE_HOLD),
...which is much more comfortable to press than 'Control+_POWR+z' !!! 
      case SL_MEN:    if (triggered_mod(KC_C))
                      {
                         register_code(KC_POWER);
                      // without this delay, POWER doesn't work !!!   
                         wait_ms(500);
                         unregister_code(KC_POWER);
                      // SEND_STRING("s");  // 's' for selecting button sleep but it's not necessary
                      }
                      else
                      {
                         register_code(KC_LCTL); tap_code(KC_F2); unregister_code(KC_LCTL);
                      }
                      return false;
*/
      case KA_DCK:    if (triggered_mod(KC_C))
                      {
                        register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_ESC);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      }
                      else
                      {
                        register_code(KC_LCTL); tap_code(KC_F3); unregister_code(KC_LCTL); // DOCK BAR
                      }
                      return false;

      case KM_TOL:    if (triggered_mod(KC_C))
                      {
                        register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_ESC);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      }
                      else                      
                      {
                        register_code(KC_LCTL); tap_code(KC_F5); unregister_code(KC_LCTL); // TOOLS BAR
                      }
                      return false;

      case SH_STA:  // [FIRMWARE_SIZE]
                      //we save unregister control and register again
                      //if (triggered_mod(KC_C)) 
                    // [firmware_size]
                      if (control_flag)
                      {
                        volumeSetToLevel(1);
                    //  keystrokes for shutting down:  (guessed by try and fail method)
                    //  register_code(KC_LCTL);    
                        register_code(KC_LALT); register_code(KC_LGUI);
                        tap_code(KC_POWER);
                        unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   
                      }
                      else
                      {
                    // [SYSTEM PREFERENCES]
                        register_code(KC_LCTL); tap_code(KC_F8); unregister_code(KC_LCTL);  // STATUS BAR
                    // [system preferences]
                      }
                      return false;

      case RT_FLO:  // [FIRMWARE_SIZE]
                      //we save unregister control and register again
                      //if (triggered_mod(KC_C)) 
                    // [firmware_size]
                      if (control_flag) //same 'saving control' issue as in previous case
                      {
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
                      return false;

      case CIRCU:    circumflex_requested = true; // requested circumflex accent
                     return false;                // Skip all further processing of this key when pressed

      case GRAVE:    grave_requested      = true; return false; // requested grave      accent
      case DIAER:    diaeresis_requested  = true; return false; // requested diaeresis  accent

      case VOL_1:    volumeSetToLevel(1);         return false; // set volume to minimum (level 1)
      case VOL_8:    volumeSetToLevel(8);         return false; // set volume to middle  (level 8)

      case BRIGHT_1: brightSetToLevel(1);         return false; // set bright to minimum (level 1)

// APPLICATIONS
// Next 2 lines have been copied & pasted from a command line C program in xcode who run perfectly !
// Any of them works properly for opening an app from Terminal !  But they don' work under QMK code !
//   system("open //Applications//Notes.app");
//   system("osascript -e 'launch application \"Notes\"' -e 'activate application \"Notes\"' -e end");
//
//
//
// KEYCODES FOR TRIGGERING APPS





// // [FIRMWARE_SIZE]
// //  From APP_Q_SNOTE to APP_EN_NUMB we save 676 bytes !!!
// // [firmware_size]
// // LEFT ROW 1 APPS
//       case APP_Q_SNOTE: callApp("q");                         return false; // simple note
//       //
//     // [FIRMWARE_SIZE]
//       // 10 bytes saved if we don't declare 'APP_W_TWTTR' and don't write the next line
//       case APP_W_TWTTR: callApp("w");                         return false; // t W itter
//     // [firmware_size]
//       //
//     // [FIRMWARE_SIZE]
//       // 88 bytes free when disable Evernote case and 40 bytes when I enable it  -->  it costs 48 bytes of code
//     // [firmware_size]
//       case APP_E_EVERN: 
//                         if (control_flag)
//                         {
//                           register_code(KC_LALT);
//                           tap_code(KC_N);
//                           unregister_code(KC_LALT);
//                           unregister_code(KC_LCTL);                         // quick entry  E vernote
//                         }
//                         else
//                         {
//                           callApp("e");                        
//                         }
//                         return false;                                       // E vernote
//       //
//       case APP_R_APSTO: callApp("r");                         return false; // app sto R e
//       case APP_T_TERMI: callApp("t");                         return false; // T erminal


// // RIGHT ROW 1 APPS
//       case APP_Y_TYPIN: callApp("y");                         return false; // t Y pinator
//       case APP_U_UROOM: callApp("u");                         return false; // U room
//       case APP_I_TEDIT: callApp("i");                         return false; // texted I t
//       case APP_O_OMNIF: if (control_flag)
//                         {
//                           register_code(KC_LALT);
//                           tap_code(KC_SPC);
//                           unregister_code(KC_LALT);
//                           unregister_code(KC_LCTL);                         // quick entry  O mnifocus
//                         }
//                         else
//                         {
//                           callApp("o");                       
//                         }
//                         return false;                                       // O mnifocus
//       case APP_P_SPREF: callApp("p");                         return false; // system P references


// // LEFT ROW 2 APPS
//       case APP_A_SCRPT: callApp("a");                         return false; // A pple script
//       case APP_S_SAFAR: //               S: opens Safari
//                         //       control+S: opens Safari with address bar focused 
//                         // shift+control+S: opens Slack webpage in Safari 

//                         if (control_flag)
//                         {
//                           triggered_control_mod();
//                           // if (shift_flag)
//                           // {
//                           //   shift_was_activated = true;
//                           //   remove_shift_mod();
//                           // }

//                           if (shift_flag)
//                           {
//                             shift_was_activated = true;
//                             remove_activated_mod(shift_flag);
//                             // del_mods     (shift_flag);
//                             // del_weak_mods(shift_flag);
//                             // send_keyboard_report();
//                           }

//                           wait_ms(50);
//                           callApp("s");
//                           wait_ms(50);
//                           register_code(KC_LGUI);
//                           // wait_ms(50);
//                           tap_code(KC_L);                                   // Opens addre S S    bar for introduce an URL...
//                           unregister_code(KC_LGUI);
//                           if (shift_was_activated)
//                           {
//                             shift_was_activated = false;
//                             wait_ms(50);                                    // ... or googling something
//                             send_string("http://www.slack.com\n");          // S lack
//                           }
//                         }                          
//                         else
//                         {
//                           callApp("s");                                     // S afari     
//                         }
//                         return false;
//       case APP_D_D_ONE: 
//                         if (control_flag)
//                         {
//                           register_code(KC_LSFT);
//                           tap_code(KC_D);
//                           unregister_code(KC_LSFT);
//                           unregister_code(KC_LCTL);                         // quick entry  D ay one
//                         }
//                         else
//                         {
//                           callApp("d");
//                         }
//                         return false;                                       // D ay one
//       case APP_F_FINDE: callApp("f");                         return false; // F inder
//       case APP_G_CHRME: callApp("g");                         return false; // G oogle chrome


// // RIGHT ROW 2 APPS
//       case APP_H_SKTCH: callApp("h");                         return false; // sketc H
//       case APP_J_SUBLI: callApp("j");                         return false; // sublime text
//       case APP_K_KRBNR: callApp("k");                         return false; // K arabiner-elements
//       case APP_L_CLNDR: callApp("l");                         return false; // Calendar
//       // case APPSP_EMPTY: callApp(" ");                         return false; // ???? EMPTY EMPTY EMPTY EMPTY 


// // LEFT ROW 3 APPS
//       // case APP_Z_STUDI: callApp("z");                         return false; // Studies
//       case APP_X_XCODE: callApp("x");                         return false; // Xcode
//       case APP_C_CALCU: callApp("c");                         return false; // Calculator
//       case APP_V_KVIEW: callApp("v");                         return false; // karabiner-event Viewer
//       case APP_B_BOOKS: callApp("b");                         return false; // Books


// // RIGHT ROW 3 APPS
//       case APP_N_NOTES: callApp("n");                         return false; // Notes
//       case APP_M_MAIL:  callApp("m");                         return false; // Mail      
//       // case APP_ES_KEYN: callApp("\e");                        return false; // Keynote
//       // case APP_BS_PAGE: callApp("\b");                        return false; // Pages
//       // case APP_EN_NUMB: callApp("\n");                        return false; // Numbers
//       // case APP_ES_KEYN: callApp("1");                         return false; // Keynote
//       case APP_BS_PAGE: callApp("2");                         return false; // Pages
//       case APP_EN_NUMB: callApp("3");                         return false; // Numbers
// // keycodes for triggering apps
// // applications
// //
// // keycodes for triggering apps
//
// [firmware_size]



// _FVIM
   // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
   // ... except for the 'H' key:
      case FVIM_H: fvim("h");  return false;

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


/*
// select _AVIM
//            case AVIM_Y: avim("y");  return false;
//            case AVIM_N: avim("n");  return false;
// the rest of the keys are combination of _FVIM + SHIFT key            
*/

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

// [_LEDS]
/*
_LEDS COMMANDS
*/
      case RGB_HUI: rgblight_increase_hue_noeeprom();          return false;
      case RGB_HUD: rgblight_decrease_hue_noeeprom();          return false;
      case RGB_SAI: rgblight_increase_sat_noeeprom();          return false;
      case RGB_SAD: rgblight_decrease_sat_noeeprom();          return false;
      case RGB_VAI: rgblight_increase_val_noeeprom();          return false;
      case RGB_VAD: rgblight_decrease_val_noeeprom();          return false;

                 // Save the original setting to EEPROM before layer change, 
                 // and read it back and set it again after returning to base layer.
      case SAV_COL: set_default_hsv();
                    eeconfig_update_rgblight(rgblight_config.raw);
                    flashing_RGB_LEDs(10, RGB_MY_AZURE, RGB_MY_PURPLE);
                    return false;

      case GET_HSV: /*wait_ms(1500); SS_BEEP_2; wait_ms(1500);*/
                    flashing_RGB_LEDs(5, RGB_MY_YELLOW, RGB_MY_PURPLE);





                    SEND_STRING("\n===");
                    SEND_STRING("\nget_hsv() -> ");
                    get_hsv();





                    // SS_BEEP_1; SS_BEEP_2;
                    return false;

// [WHYWEDOTHIS]
// We reprogram RGB_TOG instead of using it because originally it save to eeprom,
// ... and we don't want to wear the eeprom down.
// We use this for saving and restoring current LEDs while toggling.                    
      case RGB_TOG: rgblight_toggle_noeeprom();
                    set_default_hsv();
                    //wait_ms(50);
                    wait_ms(10);
                    show_RGB_LEDs();
                    return false;
// [whywedothis]                    

/*
ROW 1 COLORS
*/
      case CH_RED:  rgblight_sethsv_noeeprom(HSV_MY_RED);           return false;
      case CH_CORL: rgblight_sethsv_noeeprom(HSV_MY_DARK_CORAL);    return false;
      case CH_ORNG: rgblight_sethsv_noeeprom(HSV_MY_ORANGE_RED);    return false;
      case CH_GOLR: rgblight_sethsv_noeeprom(HSV_MY_LIGHT_CORAL_2); return false;
      case CH_GOLD: rgblight_sethsv_noeeprom(HSV_MY_GOLD);          return false;
      // case CH_CORL: rgblight_sethsv_noeeprom(HSV_MY_LIGHT_CORAL_2); return false;
      // case CH_ORNG: rgblight_sethsv_noeeprom(HSV_MY_ORANGE);      return false;
      // case CH_GOLR: rgblight_sethsv_noeeprom(HSV_MY_GOLDENROD);   return false;
      // case CH_GOLD: rgblight_sethsv_noeeprom(HSV_MY_GOLD);        return false;

      case CH_YLLW: rgblight_sethsv(HSV_MY_YELLOW);                 return false;

/*
ROW 2 COLORS
*/
      case CH_CHRT: rgblight_sethsv_noeeprom(HSV_MY_CHARTREUSE);  return false;
      case CH_GREN: rgblight_sethsv_noeeprom(HSV_MY_GREEN);       return false;
      case CH_SPRG: rgblight_sethsv_noeeprom(HSV_MY_SPRINGGREEN); return false;
      case CH_TRQS: rgblight_sethsv_noeeprom(HSV_MY_TURQUOISE);   return false;
      case CH_TEAL: rgblight_sethsv_noeeprom(HSV_MY_TEAL);        return false;

      case CH_WHIT: rgblight_sethsv_noeeprom(HSV_MY_WHITE);       return false;

/*
ROW 3 COLORS
*/
      case CH_CYAN: rgblight_sethsv_noeeprom(HSV_MY_CYAN);        return false;
      case CH_AZUR: rgblight_sethsv_noeeprom(HSV_MY_AZURE);       return false;
      case CH_BLUE: rgblight_sethsv_noeeprom(HSV_MY_BLUE);        return false;
      case CH_PRPL: rgblight_sethsv_noeeprom(HSV_MY_PURPLE);      return false;

      // case CH_MGNT: rgblight_sethsv_noeeprom(RGB_MY_MAGENTA);
      case CH_MGNT: rgblight_sethsv(HSV_MY_MAGENTA);              return false;
                         // #define RGB_MY_MAGENTA      0xFF, 0x00, 0xAA  // 0xFF, 0x00, 0xFF






      case CH_PINK: rgblight_sethsv_noeeprom(HSV_MY_PINK);        return false;

      case CH_EMPT: rgblight_sethsv_noeeprom(HSV_MY_EMPTY);       return false;

// [_leds]


      case DICTATION:
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        return false;
      case SIRI:
        register_code(KC_LGUI); register_code(KC_SPC);
        return false;

   // this line is responsible of the management of the presses for THE REST of the keys.
      default: return true; // Process all other keycodes normally when pressed
    } // switch (keycode)
  } // if (record->event.pressed)
  else 
  {
//  Do something else when release



  if (apps_trigger && !karabiner_apps_trigger)
  {
    return process_record_apps(keycode, record);
  } // if (apps_trigger && !karabiner_apps_trigger)




    switch(keycode)
    {
    // [FIRMWARE_SIZE]
        // 746-674= 72 bytes saved using TT(layer) instead of my implementation
        // ... but RGB layer color changes too slow.  MY way is instantly changed !
        // if (record->event.pressed) {
        // case TT_NUMB:   lt12_timer = timer_read();
                        // layer_invert(_NUMB);
        //                 return false; 
        // Emulating TT(layer), but better:
    // [firmware_size]

      case TT_NUMB:
//    case TH_L3_KAR_APPS:
                      if (karabiner_apps_trigger)
                      {
                            karabiner_apps_trigger = false;
                            unregister_code(KC_F20);

                            // REMOVE 'gui mod'
                            if (multi_apps)
                            // remove 'gui modifier'
                            {
                              // [BUG] current_flag or gui_flag ???
                              remove_activated_mod(current_flag);
                              // [bug]

                              // del_mods     (current_flag);
                              // del_weak_mods(current_flag);
                              // send_keyboard_report();
                            // remove 'multi_apps' mode
                            }

                            if (!apps_trigger)
                            {
                              show_RGB_LEDs();
                              if (multi_apps)
                              {
                            // only if neither 'karabiner_apps_trigger' nor 'apps_trigger' are no longer working !
                                multi_apps = false;
                              }
                              else
                              {
                                // HIDEOTH;
                              }
                            }
                      }
                      // return false;
                      else
                      {
                        if (timer_elapsed(lt12_timer) > TAPPING_TERM)
                        {  
                          // if we have had pressed this 'trigger layer key' more time than tapping_term
                          // is because we have used it for typing some numbers (or letters if came from
                          // ... numbers layers)
                          //
                          // now, when we release this 'trigger layer key', we return to previous layer
                          layer_invert(_NUMB);
                        }                        
                      }
                      return false;

      case CHANGE_SYMB_TO_NUMB:
                      layer_off(_NUMB);
                      if (symbols_pressed)
                      {
                        layer_on(_SYMB);
                      }
                      return false;

      case CHANGE_DALY_TO_LEDS: layer_off(_LEDS);
                           return false;              

      case TH_R1_DALY_MOUS:
                      if (state_number == _MOUS)
                      {
                         layer_off(_MOUS);
                      }
                      else
                      if (state_number == _DALY)
                      {
                        // remove GUI modifier when coming from _DALY changing apps with CMD+TAB; SHIFT+CMD+TAB
                        if (changing_apps)
                        {
                          changing_apps = false;
                          unregister_code(KC_LGUI);
                          // triggered_gui();
                          // remove_activated_mod(gui_flag);
                        }
                        layer_off(_DALY);
                      }
                      return false;

        case TH_R2_SYMB_FVIM:
                      if (state_number == _FVIM)
                      {
                        layer_off(_FVIM);
                      }
                      else
                      {
                        symbols_pressed = false;
                        if (state_number == _SYMB)
                        {
                          layer_off(_SYMB);
                        }
                      }
                      return false;


      // case TH_L3_KAR_APPS:
      //                 karabiner_apps_trigger = false;
      //                 unregister_code(KC_F20);

      //              // REMOVE 'gui mod'
      //                 if (multi_apps)
      //                 // remove 'gui modifier'
      //                 {
      //                   // [BUG] current_flag or gui_flag ???
      //                   remove_activated_mod(current_flag);
      //                   // [bug]

      //                   // del_mods     (current_flag);
      //                   // del_weak_mods(current_flag);
      //                   // send_keyboard_report();
      //              // remove 'multi_apps' mode
      //                 }

      //                 if (!apps_trigger)
      //                 {
      //                   show_RGB_LEDs();
      //                   if (multi_apps)
      //                   {
      //           // only if neither 'karabiner_apps_trigger' nor 'apps_trigger' are no longer working !
      //                     multi_apps = false;
      //                   }
      //                 }
      //                 return false;



// 'case TH_R3_APPS_TRIGGER' statement moved from 'process_record_user()' to 'process_record_apps()' ...
//... for covering the case when we are in 'apps_trigger' and !'karabiner_apps_trigger'

// //... This case is for when we have held 'apps_trigger' and 'karabiner_apps_trigger' at the same time
//     case TH_R3_APPS_TRIGGER: apps_trigger = false;
//                              apps_working = false;

//                              if (!karabiner_apps_trigger)
//                              {
//                                show_RGB_LEDs();
//                                if (multi_apps)
//                                {
//                                  multi_apps = false;
//                                }
//                              }
//                              return false;

      case TH_R3_APPS_TRIGGER: if (state_number == _NUMB)
                               {
                                 layer_off(_NUMB);
                               }
                               else
                               {
                                 apps_trigger = false;

                                 if (!karabiner_apps_trigger)
                                 {
                                   show_RGB_LEDs();
                                   if (multi_apps)
                                   {
                                     multi_apps = false;
                                   }
                                   else
                                   {
                                     wait_ms(100);
                                     HIDEOTH;
                                   }
                                 }
                               }
                               return false; break;

/*      case TH_R3_APPS_NUMB: if (state_number == _NUMB)
                               {
                                 layer_off(_NUMB);
                               }
                               else
                               {
                                 apps_working = false;
                                 layer_off(_APPS);
                               }
                               return false;
    */

      case TH_R4_POWR_LEDS:
                      if (state_number == _POWR)
                      {
                         layer_off(_POWR);
                      }
                      else
                      if (state_number == _LEDS)
                      {
                        layer_off(_LEDS);
                      }
                      return false;
                      
      case KC_BSPC:  show_RGB_LEDs();
                     return true;
                    
                                  

     case KC_DEL:    if (state_number == _DALY)
                     {
                       rgblight_sethsv_noeeprom(COLOR_DALY);
                       return true;
                     }
                     show_RGB_LEDs();
                     return true;
                

      case CIRCU: circumflex_requested = false; // non-requested circumflex accent
      return false;                      // Skip all further processing of this key when released


      case GRAVE: grave_requested      = false;  // non-requested grave      accent
      return false;                      // Skip all further processing of this key when released

      case DIAER: diaeresis_requested  = false;  // non-requested diaeresis  accent
      return false;                      // Skip all further processing of this key when released


//       case MY_CLEAR:
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

// /*
// // select _AVIM
// //            case AVIM_Y:
// //            case AVIM_N:
// // the rest of the keys are combination of _FVIM + SHIFT key            
// */

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

//       case DICTATION:

// // [_LEDS]
//       case SAV_COL:
//       case GET_HSV:
//       case RGB_TOG: return false; // Skip all further processing of ALL these keys when released

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
// [_leds]
                                     
     case SIRI:      unregister_code(KC_SPC);  unregister_code(KC_LGUI);
                     return false;

   // this line is responsible of the management of the releases for THE REST of the keys.
      default: return true; // Process all other keycodes normally when released
    } // switch (keycode)

  } // if (event->keypressed)

  return true;
};
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

// I have changed this variable to global   // int  state_number; //= 321; //biton32(state);
    state_number = biton32(state);

  switch (state_number) {
    case _DFLT:   //  0
//      active_layer = 0;
        numbers_is_active = false;
        show_RGB_LEDs();
        break;     

    case _ACCN:   //  1
//      active_layer = 1;
        rgblight_sethsv_noeeprom(COLOR_ACCN); // (0xD9, 0xA5, 0x21)
        break;

    case _NUMB:   //  2
//      active_layer = 2;
        numbers_is_active = true; // #01
        show_RGB_LEDs();
        break;

    case _FVIM:   //  3
//      active_layer = 3;



//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

        // rgblight_sethsv_noeeprom(COLOR_FVIM); // (0x00, 0x80, 0x80)
        rgblight_setrgb(RGB_MY_MAGENTA); //#define RGB_MY_MAGENTA      0xFF, 0x00, 0xAA  // 0xFF, 0x00, 0xFF
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
    




        break;

    case _XVIM:   // 4
//      active_layer = 4;
        rgblight_sethsv_noeeprom(COLOR_VIM_); // (320, 255, 255)
        break;

    case _DVIM:   // 5
//      active_layer = 5;
        rgblight_sethsv_noeeprom(COLOR_DVIM); // (0xFF, 0x00, 0x00)
        break;

    case _MOUS:   // 6
//      active_layer = 6;
        rgblight_sethsv_noeeprom(COLOR_MOUS); // (0x00,  0xFF, 0x00)
        break;

    case _DALY:   //  7
//      active_layer = 7;
        rgblight_sethsv_noeeprom(COLOR_DALY); // (0x7A, 0x00, 0xFF)
        break;

    case _FUNC:   //  8
//      active_layer = 8;
        rgblight_sethsv_noeeprom(COLOR_FUNC); // (0x99, 0xF5, 0xFF)
        break;

    case _SYMB:   //  9
//      active_layer = 9;
        rgblight_sethsv_noeeprom(COLOR_SYMB); // (0x00,  0xFF, 0x00)
        break;

    case _LEDS:   // 10
//      active_layer = 10;
        SS_BEEP_1;
        break;

    case _POWR:   //  11
//      active_layer = 11;
        rgblight_sethsv_noeeprom(COLOR_POWR); // (0xFF, 0xFF, 0x00)
        break;

    default:  break;  //  for any other layers
//        active_layer = 13;
  }
  return state;
}
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