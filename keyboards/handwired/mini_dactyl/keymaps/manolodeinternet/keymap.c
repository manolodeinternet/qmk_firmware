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
 * 'qmk_firmware' must be under our user home folder
 * Every time it appears 'my_user_name': 'manolodeinternet', you must change it for 'your_user_name'

 * 'qmk_firmware/users/manolodeinternet/' path is automatically included while making and compiling
 * So 'rules.mk' and 'config.h' files from 'qmk_firmware/users/manolodeinternet/' folder are...
...automatically included when '.hex' file is making up
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
 * /users/<name>/ (added to the path automatically when I'm making up my '.hex' file)
 * rules.mk (included automatically when I'm making up my '.hex' file)
 * config.h (included automatically when I'm making up my '.hex' file)

 * readme.md (recommended)                                                                   (optional)
 * <username>.h for common constants and variables declaration    BETWEEN ALL THE KEYBOARDS  (optional)
 * <username>.c for common functions and variables initialization BETWEEN ALL THE KEYBOARDS  (optional)

 * < file_for_sharing_common_features_between_two_or_more_keyboards.c >i.e.:cool_rgb_stuff.c (optional)
 * < file_for_sharing_common_features_between_two_or_more_keyboards.h >i.e.:cool_rgb_stuff.h (optional)

 * < file_for_sharing_common_features_between_two_or_more_keyboards.c >i.e.:backlght_stuff.c (optional)
 * < file_for_sharing_common_features_between_two_or_more_keyboards.h >i.e.:backlght_stuff.h (optional)
 
 * < file_for_sharing_common_enum_custom_keycodes.h >             BETWEEN ALL THE KEYBOARDS  (optional)
 
 * < file_for_sharing_common_tap_dance_functions.c >              BETWEEN ALL THE KEYBOARDS  (optional)
 * < file_for_sharing_common_tap_dance_functions.h >              BETWEEN ALL THE KEYBOARDS  (optional)

 * < file_for_simple_common_30_core_layout.c >FOR CORE KEYBOARDS WITH ALPHAS & MODIFIERS ONLY(optional)
 * < file_for_simple_common_30_core_layout.h > used with keyboards with more than 30 keys    (optional)

 * < file_for_comprehensive_common_30_core_layout.c >FOR FULL CORE KEYBOARDS WITH EVEN LAYERS(optional)
 * < file_for_comprehensive_common_30_core_layout.h >used with just 30 keys keyboards:gherkin(optional)
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////
//                             understanding userspace file structure                                //
///////////////////////////////////////////////////////////////////////////////////////////////////////

// #include QMK_KEYBOARD_H // is implemented at 'manolodeinternet.h'. Compile process needs this way !
#include "manolodeinternet.h"

/*
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

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// GLOBAL VARIABLES                                                                     //
//                                                                                      //
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

qk_tap_dance_action_t tap_dance_actions[] = {

   [G_MOUS]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, G_MOUS_finished, G_MOUS_reset)

// [_POWR] LAYER
  ,[TG_QWE]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, TG_QWE_finished, TG_QWE_reset, 800)
  ,[LCKLOG]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, LCKLOG_finished, LCKLOG_reset, 800)
  ,[HRESET]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)

  ,[SLEP_M]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)
  ,[KILA_D]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, KILA_D_finished, KILA_D_reset, 800)
  ,[KILM_T]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILM_T_finished, KILM_T_reset)
  ,[SHUT_S]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SHUT_S_finished, SHUT_S_reset, 1000)
  ,[RSTT_F]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, RSTT_F_finished, RSTT_F_reset, 1000)
 
  ,[RG_ZOIN]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RG_ZOIN_finished, RG_ZOIN_reset) 
  ,[RA_ZOUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RA_ZOUT_finished, RA_ZOUT_reset) 
  ,[RS_ZOOM]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RS_ZOOM_finished, RS_ZOOM_reset)
  ,[RA_INCO]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RA_INCO_finished, RA_INCO_reset) 
// [_powr] layer

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

//[_DFLT] LAYER 00 : IAEOU DEFAULT LAYER
  [_DFLT] = LAYOUT_mini_dactyl_base_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____DFLT___L1___,                                          ____DFLT___R1___,
//|----------------------------------------|                 |----------------------------------------|
               ____DFLT___L2___,                                          ____DFLT___R2___,
//|----------------------------------------|                 |----------------------------------------|
               ____DFLT___L3___,                                          ____DFLT___R3___
//'----------------------------------------'                 '----------------------------------------'
//                          _____LAYOUT_____               _____WRAPPR_____
//                     .------------------------.     .------------------------.
//                     |------------------------|     |------------------------|
//                     |------------------------|     |------------------------|
//                     '------------------------'     '------------------------'
),
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF _DFLT 00



//[_QWER] LAYER 01 : QWERT DEFAULT LAYER
  [_QWER] = LAYOUT_mini_dactyl_base_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               ____QWER__L1___,                                          ____QWER__R1___,
//|----------------------------------------|                 |----------------------------------------|
               ____QWER__L2___,                                          ____QWER__R2___,
//|----------------------------------------|                 |----------------------------------------|
               ____QWER__L3___,                                          ____QWER__R3___
//'----------------------------------------'                 '----------------------------------------'
//                          _____LAYOUT_____               _____WRAPPR_____
//                     .------------------------.     .------------------------.
//                     |------------------------|     |------------------------|
//                     |------------------------|     |------------------------|
//                     '------------------------'     '------------------------'
),
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF _QWER 01





// [BUG]// [BUG] increment two units to the layer from now on...

//[_ACCN] LAYER 02 : ACCENTS LAYER
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
// END OF _ACCN 02

//[_NUMB] LAYER 03 : NUMBERS LAYER
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
// END OF _NUMB 03

//[_FVIM] LAYER 04 : FAKE VIM LAYER
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
// END OF _FVIM 04
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_XVIM] LAYER 05 : EXTENDED EDITION VIM LAYER
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
// END OF _XVIM 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DVIM] LAYER 06 : DELETE VIM LAYER
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
// END OF _DVIM 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_MOUS] = LAYER 07 : MOUSE LAYER
  // [_MOUS] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               // ____MOUSE_L1____,                                          ____MOUSE_R1____,
//|----------------------------------------|                 |----------------------------------------|
               // ____MOUSE_L2____,                                          ____MOUSE_R2____,
//|----------------------------------------|                 |----------------------------------------|
               // ____MOUSE_L3____,                                          ____MOUSE_R3____,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            // _MOUS_LTHMB_RW1_,              _MOUS_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      // KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            // _MOUS_LTHMB_RW2_,              _MOUS_RTHMB_RW2_
//                     '------------------------'     '------------------------'
// ),
// END OF _MOUS 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_DALY] = LAYER 08 : MOUSE LAYER
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
// END OF _DALY 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_FUNC] = LAYER 09 : FUNCTIONS LAYER
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
// END OF _FUNC 09
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[_SYMB] LAYER 10 : SYMBOLS LAYER
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
// END OF _SYMB 10
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

// [PLACEHOLDER]

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
//  case _PINKY:   //  1
    case _QWER:   //  2
        numbers_is_active = false;
        show_RGB_LEDs();
        break;     

    case _ACCN:   //  2  // [BUG] increment a unit to the layer from now on...
        rgblight_sethsv_noeeprom(COLOR_ACCN); // (0xD9, 0xA5, 0x21)
        break;

    case _NUMB:   //  3
        numbers_is_active = true; // #01
        show_RGB_LEDs();
        break;

    case _FVIM:   //  4
///////////////////////////////////////////////////////////////////////////////////////////////////////
     // rgblight_sethsv_noeeprom(COLOR_FVIM); // (0x00, 0x80, 0x80)
        rgblight_setrgb(RGB_MY_MAGENTA); //#define RGB_MY_MAGENTA      0xFF, 0x00, 0xAA  // 0xFF, 0x00, 0xFF
///////////////////////////////////////////////////////////////////////////////////////////////////////
        break;

    case _XVIM:   // 5
        rgblight_sethsv_noeeprom(COLOR_VIM_); // (320, 255, 255)
        break;

    case _DVIM:   // 6
        rgblight_sethsv_noeeprom(COLOR_DVIM); // (0xFF, 0x00, 0x00)
        break;

    // case _MOUS:   // 7
    //     rgblight_sethsv_noeeprom(COLOR_MOUS); // (0x00,  0xFF, 0x00)
    //     break;

    case _DALY:   //  8
        rgblight_sethsv_noeeprom(COLOR_DALY); // (0x7A, 0x00, 0xFF)
        break;

    case _FUNC:   //  9
        rgblight_sethsv_noeeprom(COLOR_FUNC); // (0x99, 0xF5, 0xFF)
        break;

    case _SYMB:   //  10
        rgblight_sethsv_noeeprom(COLOR_SYMB); // (0x00,  0xFF, 0x00)
        break;

    case _LEDS:   // 11
        // SS_BEEP_1;
        break;

    case _POWR:   //  12
        rgblight_sethsv_noeeprom(COLOR_POWR); // (0xFF, 0xFF, 0x00)
        break;

    default:  break;  //  for any other layers
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