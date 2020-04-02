/*
MiniDactyl 2019/11/04

Custom Tapping Term

By default, the tapping term is defined globally, and is not configurable by key. For most users, this is perfectly fine. But in come cases, dual function keys would be greatly improved by different timeouts than LT keys, or because some keys may be easier to hold than others. Instead of using custom key codes for each, this allows for per key configurable TAPPING_TERM.

To enable this functionality, you need to add #define TAPPING_TERM_PER_KEY to your config.h, first.

Example get_tapping_term Implementation
To change the TAPPING TERM based on the keycode, you'd want to add something like the following to your keymap.c file:

uint16_t get_tapping_term(uint16_t keycode) {
  switch (keycode) {
    case SFT_T(KC_SPC):
      return TAPPING_TERM + 1250;
    case LT(1, KC_GRV):
      return 130;
    default:
      return TAPPING_TERM;
  }
}
*/

/*  
  PROJECT NAME: 30_layout
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
// Following 2 files don't need full path bc folder 'users/manolodeinternet' is automatically included
#include "manolodeinternet.h"
#include "rgblight_mini_dactyl.h"

// It's included from 'manolodeinternet.h'
// #include "wrappers.h"

// [MINE]
extern rgblight_config_t rgblight_config;    // without this line, it doesn't recognize rgblight_config
// extern LED_TYPE led[RGBLED_NUM];
// [mine]


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// _APPS COMMANDS 7                                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define HIDEOTH          SEND_STRING(SS_LALT(SS_LGUI("h"))) //LALT(LGUI(KC_H)) //HIDE OTHER _APPS
//                                                                                      //
// _apps commands 7                                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// TAP DANCE STATES DECLARATIONS                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
  enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
    SINGLE_TAP           = 1
   ,SINGLE_HOLD          = 2
   ,DOUBLE_TAP           = 3
   ,DOUBLE_HOLD          = 4
   ,DOUBLE_SINGLE_TAP    = 5 //send SINGLE_TAP twice - NOT DOUBLE_TAP
/*
   ,GUI_plus_HOLD        = 6
   ,ALT_plus_HOLD        = 7
   ,GUI_plus_DOUBLE_HOLD = 8
*/
/* ,TRIPLE_TAP           = 6
   ,TRIPLE_HOLD          = 7
   ,TRIPLE_SINGLE_TAP    = 8
   ,QUADRUPLE_TAP        = 9
   ,QUADRUPLE_HOLD       = 10
   ,QUADRUPLE_SINGLE_TAP = 11
   ,QUINTUPLE_TAP        = 12
   ,QUINTUPLE_HOLD       = 13
   ,QUINTUPLE_SINGLE_TAP = 14
   ,SEXTUPLE_TAP         = 15
   ,SEXTUPLE_HOLD        = 16
   ,SEXTUPLE_SINGLE_TAP  = 17
 * Add more enums here if you want for sevenfold, eightfold], etc.
 */
 };
//                                                                                      //
// tap dance states declarations                                                        //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
enum tap_dance_keycodes {

// TAP DANCE KEYCODES ACCESSIBLE FROM DEFAULT LAYER (ALPH LAYER) 1
//     FN_PVI  // _FUNC layer when holded or _FVIM layer when double holded on alpha layer
//    ,PVI_CL  // CapsLock    when tapped or _FVIM layer when holded        on alpha layer
//    ,APPS_MODE
     DVIM_Del  // Delete when tapping, _DVIM when holding 
    ,FUNC_LED
//    ,NUMB_Del
//    ,SYMB_Ent
//    ,APPS_Esc
//    ,MOUS_Tab

// TAP DANCE KEYCODES ACCESSIBLE FROM _NUMB (NUMBERS LAYER) 3
// WE DON'T NEED 'SETNMB' TAPDANCE ANY MORE SINCE WE USE 'TT(_NUMB)' WITH 'SIMPLE_30_LAYOUT' LAYOUT
    // ,SETNMB  // set numbers layer up / switch numbers layer off
// [GHERKIN]
//    ,SLNUMB  // return to *GHKN layer (gherkin default layer)  // ... slash
// [gherkin]

// TAP DANCE KEYCODES ACCESSIBLE FROM _SYMB (SYMBOLS LAYER) 4
/*
    ,G_DOEU  // dolar & euro
    ,Y_AMCI  // ampersand & circumflex accent
    ,Z_EXCL
    ,X_QUES
*/

// TAP DANCE KEYCODES FOR _POWR (POWER LAYER) 8
    ,SLEP_M   //   menu bar / (on hold) SLEEP
    // ,KILM_T   //   dock bar / (on hold) KILL MENU
    // ,KILA_D   //  tools bar / (on hold) KILL CURRENT APP
    // ,SHUT_S   // status bar / (on hold) COMPUTER SHUT DOWN
    // ,RSTT_F   // floating w / (on hold) COMPUTER   RESTART
/*
    ,RC_RWND // right control / rewind       // KC_F7
    ,RA_PLAY // right alt     / play/pause   // KC_SPC
    ,RG_FRWD // right gui     / forward      // KC_F9
*/

// [ADVICE]
// [DEPRECATED]
//  ,BCKLIT   // accessing _LEDS layer from tap dance into _POWR layer
              // ...this way we don't waste a layer from being accesible from Default layer,
              // ...remember that you only can access 16 layer through LT(layer, key) and LM(layer, mod).
// [deprecated]
// [advice]    
// tap dance keycodes for _powr (power layer) 8

// (i.e. KC_U: *'begin of line'/**'begin of paragraph')
    ,FVIM_uU ,FVIM_pP
    ,DVIM_uU ,DVIM_pP
};
//                                                                                      //
// tap dance declarations (list of my tap dance configurations)                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// MACROS FOR PROCESS_RECORD_USER()                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
enum custom_keycodes { // IT BEGINS AT A SAFE_RANGE... (this is the last enum)

// MACROS FOR _ACCN LAYER 1
     CIRCU = SAFE_RANGE
    ,GRAVE
    ,DIAER 
// macros for _accn layer 1
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

    ,TT_NUMB

// MACROS FOR DEFAULT LAYER 0
    ,MY_CLEAR
    ,MY_RESET

    ,O_COMMENT
    ,C_COMMENT
    ,PREV_APP
    ,NEXT_APP

    ,CHANGE_SYMB_TO_NUMB
    ,TH_L3_KAR_APPS
    ,TH_L4_FUNC_LEDS

    ,TH_R1_DALY_MOUS
    ,TH_R2_SYMB_FVIM
    ,TH_R3_APPS_NUMB
    ,TH_R4_POWR_LEDS

// THIS FUNCTION IS NOT GOING TO BE USED WITH 23 LEDS PER HAND
    ,STP_ID  // it increments step indicator for RGB LEDs
// this function is not going to be used with 23 leds per hand

    ,TOG_ID  // it toggles keyboard as whole indicator for capslock ON/OFF
// macros for default layer 0
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// MACROS FOR _POWR LAYER 8
    ,VOL_1
    ,VOL_8
    ,BRIGHT_1
    ,SL_MEN
    ,KM_TOL
    ,KA_DCK
    ,SH_STA
    ,RT_FLO
// macros for _powr layer 8
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// MACROS FOR _APPS LAYER 7
    ,APP_Q_SNOTE ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_APSTO ,APP_T_TERMI
                                         ,APP_Y_TYPIN ,APP_U_UROOM ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF
    ,APP_A_SCRPT ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME
                                         ,APP_H_SKTCH ,APP_J_SUBLI ,APP_K_KRBNR ,APP_L_CLNDR ,APPSP_EMPTY
    ,APP_Z_STUDI ,APP_X_XCODE ,APP_C_CALCU ,APP_V_KVIEW ,APP_B_BOOKS
                                         ,APP_N_NOTES ,APP_M_MAIL  ,APP_ES_KEYN ,APP_BS_PAGE ,APP_EN_NUMB
// macros for _apps layer 7
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// MACROS FOR _DALY LAYR 6
    ,DICTATION
    ,SIRI
// macros for _daly layer 6
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// MACROS FOR _?VIM 9, 10, 11, 12, 13

// _FVIM LAYER
// this layer is all implemented without using '/Users/myUser/Library/KeyBindings/DefaultKeyBinding.dict'
// except for the 'H' key:
    ,FVIM_H
/*
    ,FVIM_M
    ,FVIM_ES
    ,FVIM_BS
    ,FVIM_EN
*/
// _fvim layer
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// _DVIM LAYER
    ,DVIM_Y         ,DVIM_I  ,DVIM_O            // it's used tap_dance for U,P
    ,DVIM_H ,DVIM_J ,DVIM_K  ,DVIM_L  ,DVIM_SP
            ,DVIM_M ,DVIM_ES ,DVIM_BS ,DVIM_EN
/////////////////////////////////////////////////////////////////////////////////////////////////// ###


// OMNIFOCUS.APP
// _AVIM LAYER
//    ,AVIM_Y                     // _AVIM is for select VIM layr
//    ,AVIM_N                     // it's used SHIFT+key for the rest of the right side of the keyboard
// _avim layer
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// _CVIM LAYER
    ,CVIM_Y ,CVIM_U ,CVIM_I  ,CVIM_O  ,CVIM_P
            ,CVIM_J ,CVIM_K  ,CVIM_L  ,CVIM_SP
    ,CVIM_N ,CVIM_M ,CVIM_ES ,CVIM_BS ,CVIM_EN
// _cvim layer
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// _XVIM LAYER
    ,XVIM_Y ,XVIM_U ,XVIM_I  ,XVIM_O  ,XVIM_P
    ,XVIM_H ,XVIM_J ,XVIM_K  ,XVIM_L  ,XVIM_SP
    ,XVIM_N ,XVIM_M ,XVIM_ES ,XVIM_BS ,XVIM_EN
// _xvim layer       
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
//
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// macros for _?vim 9, 10, 11, 12, 13
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// MACROS FOR _LEDS 15
// RED
    ,CH_RED  ,CH_CORL  ,CH_ORNG  ,CH_GOLR ,CH_GOLD          ,CH_YLLW          ,SAV_COL
// GREEN
    ,CH_CHRT ,CH_GREN  ,CH_SPRG  ,CH_TRQS ,CH_TEAL          ,CH_WHIT          ,GET_HSV
// BLUE
    ,CH_CYAN ,CH_AZUR  ,CH_BLUE  ,CH_PRPL ,CH_MGNT          ,CH_PINK          ,CH_EMPT

// macros for _leds 15
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

}; // enum custom keycodes
//                                                                                      //
// macros for process_record_user()                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// GLOBAL VARIABLES                                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

typedef union {
  uint32_t raw;
  struct {
    bool     rgb_layer_change :1;
  };
} user_config_t;

user_config_t user_config;

// default_hsv = default_hue, default_sat, default_val;

  LED_TYPE tmp_led;
  int    state_number;
//  int    active_layer;

        uint16_t lt12_timer;

  static uint8_t   shift_flag;
  static uint8_t control_flag;
  static uint8_t  option_flag;
  static uint8_t     gui_flag;
  static uint8_t current_flag;

  bool             shift_was_activated     = false;

  static bool    multi_apps                = false;
  static bool    multi_apps_karabiner      = false;  
  static bool          apps_just_activated = false;
  static bool          apps_working        = false;
  static bool karabiner_apps_working       = false;
  static bool changing_apps                = false;           

  static bool          symbols_pressed     = false;
// [REFLEXION]
// Is it necessary that the 5 following vars were static ? Maybe I can remove 'static'
  static bool diaeresis_requested  = false;
  static bool circumflex_requested = false;
  static bool grave_requested      = false;

  static bool disabled_caps_before_accent = false;
  static bool capslock_is_active = false;
  static bool whole_keyboard_as_indicator = true;

// THIS VARIABLES ARE NOT GOING TO BE USED WITH 23 LEDS PER HAND
  static int  diff = 1;
  static int  prev_diff = 1;
// this variables are not going to be used with 23 leds per hand

  static bool numbers_is_active = false; // #01
  

  static uint16_t default_hue;
  static uint8_t  default_sat;
  static uint8_t  default_val;

// [reflexion]
//                                                                                      //
// global variables                                                                     //
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
typedef struct {
    bool is_press_action;
    int  state;
} tap;
/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
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
int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) 
        if (state->interrupted || !state->pressed) 
        // IF the key has been pressed only once 
        // AND  (the key has been interrupted by pressing another key after it
        //       OR   the key is not pressed at present)
          return SINGLE_TAP;
        else    
          //key has not been interrupted, but they key is still held. Means you want to send a 'HOLD'.
          // [MINE]
          // IF  the key has been pressed only once
          // AND the key has not been interrupted
          // AND the key is still pressed  (the key is still held)
          // [mine]
        // {    option_flag = get_mods()&ALT_MODS;
        //      gui_flag = get_mods()&GUI_MODS;

        //      if (option_flag)
        //        return ALT_plus_HOLD;
        //      else
        //        if (gui_flag)
        //          return GUI_plus_HOLD;          
        //        else
                 return SINGLE_HOLD;
         // }
//if (state->count == 1) 
  else
  if (state->count == 2)
    { 
      if (state->interrupted)
      // IF   the key has been pressed twice
      // AND  the key has been interrupted by pressing another key after it
      return DOUBLE_SINGLE_TAP;
      else
        if (state->pressed) 
        // IF  the key has been pressed twice
        // AND the key has not been interrupted by pressing another key
        // AND the key is still pressed
        // {
        //   gui_flag = get_mods()&GUI_MODS;
        //   if (gui_flag)
        //     return GUI_plus_DOUBLE_HOLD;          
        //   else
            return DOUBLE_HOLD;
        // }
        else
        // IF  the key has been pressed twice
        // AND the key has not being interrupted by pressing another key
        // AND the key is not pressed at present
          return DOUBLE_TAP;
    } //    if (state->count == 2)
    else
      return 6/*9*/;
}
//                                                                                      //
// tap dance general setup section end                                                  //
//////////////////////////////////////////////////////////////////////////////////////////
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
void fvim(char *key)
{
//  SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
    HYPR_V;
    SEND_STRING("f");
    send_string(key);
}
/* select
void avim(char *key)
{
    HYPR_V;
    SEND_STRING("a");
    send_string(key);
}
*/ 

void dvim(char *key)
{
    HYPR_V;
    SEND_STRING("d");
    send_string(key);
}

void cvim(char *key)
{
    HYPR_V;
    SEND_STRING("c");
    send_string(key);
}

void xvim(char *key)
{
    HYPR_V;
    SEND_STRING("x");
    send_string(key);
}

void set_default_hsv(void)
{
  default_hue = rgblight_get_hue();
  default_sat = rgblight_get_sat();
  default_val = rgblight_get_val();   
}

//[FIXME]  // MAKE THIS FUNCTION SMALLER, PLEASE !!!
void get_hsv(void)
{
  uint16_t int_1 = 0;
  uint8_t  int_2 = 0, int_3 = 0;

  char str_1[4];
  char str_2[4];
  char str_3[4];

  int_1 = rgblight_get_hue();
  int_2 = rgblight_get_sat();
  int_3 = rgblight_get_val();

  itoa(int_1, str_1, 10);
  itoa(int_2, str_2, 10);
  itoa(int_3, str_3, 10);

  SEND_STRING("rgblight_get_hue(): ");
  send_string   (str_1);
  SEND_STRING(", sat: ");
  send_string   (str_2);
  SEND_STRING(", val: ");
  send_string   (str_3);

  // HYPR(KC_R);
  
  BEEP_1;
  
  // BEEP_2;
}
//[fixme]  // make this function smaller, please !!!

void add_desired_mod(uint8_t desired_mod)
{
  add_mods     (desired_mod);
  add_weak_mods(desired_mod);
  send_keyboard_report();
}

void remove_activated_mod(uint8_t activated_mod)
{
  del_mods     (activated_mod);
  del_weak_mods(activated_mod);
  send_keyboard_report();
}
//
// [SAVING_SPACE]
// this function saves from 158 to 216 (58 bytes)
// ... instead of repeating this bunch or code into 'process_record_user' for ...
// ... SL_MEN, KA_DCK, KM_TOL, SH_STA, RT_FLO, ...
// ... we call this function into every function !!!
bool triggered_control_mod(void)
{
  control_flag = get_mods()&CTRL_MODS;
  if (control_flag)
  {
    remove_activated_mod(control_flag);
    // del_mods     (control_flag);
    // del_weak_mods(control_flag);
    // send_keyboard_report();
    return true;
  }
  return false;
}

// using this function, we pass from 674 to 586 bytes free while compile firmware !!!
bool triggered_mod(uint8_t mod)
{
  switch (mod) {
    case KC_C: control_flag = get_mods()&CTRL_MODS;
               if (control_flag)
               {
                 remove_activated_mod(control_flag);
                 return true;
               }
               return false;
    case KC_A: option_flag  = get_mods()&ALT_MODS;
               if (option_flag)
               {
                 remove_activated_mod(option_flag);
                 return true;
               }
               return false;
    case KC_G: gui_flag     = get_mods()&GUI_MODS;
               if (gui_flag)
               {
                 remove_activated_mod(gui_flag);
                 return true;
               }
               return false;
    case KC_S: shift_flag   = get_mods()&SHFT_MODS;
               if (shift_flag)
               {
                 remove_activated_mod(shift_flag);
                 return true;
               }
               return false;
  }
  return false;
}
//
// [SAVING_SPACE]
// as this function is used only once, for triggering slack app,
// ... it saves from 66 to 86 (20 bytes) using it directly instead of calling a function
// void remove_shift_mod(void)
// {
//   shift_flag = get_mods()&SHFT_MODS;
//   if (shift_flag)
//   {
//     del_mods     (shift_flag);
//     del_weak_mods(shift_flag);
//     send_keyboard_report();
//   }
// }



// void my_delay(void)
// {
//   wait_ms(50);
// }

// bool triggered_gui(void)
// {
//   gui_flag = get_mods()&GUI_MODS;
//   if (gui_flag)
//   {
//     remove_activated_mod(gui_flag);
//     return true;
//   }
//   return false;
// }


// old who worked fine
// bool triggered_gui(void)
// {
//   gui_flag = get_mods()&GUI_MODS;
//   if (gui_flag)
//   {
//     del_mods     (gui_flag);
//     del_weak_mods(gui_flag);
//     send_keyboard_report();
//     return true;
//   }
//   return false;
// }


void callApp(char *app_initial)
{
// open Spotlight search:
      register_code (KC_LGUI);
           tap_code (KC_SPC);
    unregister_code (KC_LGUI);

// type Typinator Abbreviation for Typinator Expansion (/a/?):
    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    send_string(app_initial);

// inside Typinator Expansion it is a 0.01 seconds delay
// wait_ms(10);
// wait_ms(100);
}

/*
// [CURIOSITY]
//  Workin with keycodes instead of chars or strings
// calling from process_record_user: callApp('a');  callApp('b'); ... instead of callApp("a"); ...

void callApp(char ascii_code)
{
  uint8_t keycode;

    tap_code(KC_CLEAR);
    wait_ms(5);
      register_code(KC_LGUI);
            tap_code(KC_SPC);
    unregister_code(KC_LGUI);
    wait_ms(5);

    keycode = pgm_read_byte(&ascii_to_keycode_lut[(uint8_t)ascii_code]);

    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    tap_code(keycode);
 
    register_code  (KC_ENT);
    wait_ms(20);   
    unregister_code(KC_ENT);

    // next delay is for avoiding that SpotLight remains on screen without calling our app
//  wait_ms(30);
//    register_code (KC_ENT);
//    unregister_code (KC_ENT);
}
*/

/*
void send_char(char ascii_code) {
  uint8_t keycode;
  keycode = pgm_read_byte(&ascii_to_keycode_lut[(uint8_t)ascii_code]);
  if (pgm_read_byte(&ascii_to_shift_lut[(uint8_t)ascii_code])) {
      register_code(KC_LSFT);
      register_code(keycode);
      unregister_code(keycode);
      unregister_code(KC_LSFT);
  } else {
      register_code(keycode);
      unregister_code(keycode);
  }
}
*/
// [curiosity]
//                                                                                      //
// [functions] [_fvim], [_dvim], [_cvim],     [_xvim],     [_zvim]     & [_apps]        //
//               kc_v,    kc_x,  [_fvim]kc_c, [_fvim]kc_x, [_fvim]kc_z   (kc_q & kc_p)  //
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
void capslock_tap(void) { // [F(CAPSL)] - MY CAPSLOCK FINISHED FUNCTION

  SEND_STRING(SS_DOWN(X_CAPSLOCK));
  register_code(KC_LCAP);

  capslock_is_active = !capslock_is_active;

// [INFO]
// Note, that instead of unregister_code (KC_LCAP), ...
// ... we write unregister_code (KC_CAPS).
// This is the way it works that I found by the trial and error method.
  unregister_code(KC_CAPS); 
// [info] 

  SEND_STRING(SS_UP(X_CAPSLOCK));

} //  my capslock function  -  [f(capsl)] - my capslock finished function


void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (capslock_is_active)
    {
      capslock_tap();
      disabled_caps_before_accent = true;
    }
} // my disable_capslock_before_accents_function

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (disabled_caps_before_accent == true)
    {
      capslock_tap();
      disabled_caps_before_accent = false;
  }
} // my enable_capslock_after_accents_function


void show_RGB_LEDs(void)  // MY SWITCH CAPSLOCK INDICATORS ON FUNCTION
{
  uint8_t caps_rght_sta = 0;
  uint8_t caps_rght_end = 0;
  uint8_t caps_left_sta = 0;
  uint8_t caps_left_end = 0;

  uint8_t numb_rght_sta = 0;
  uint8_t numb_rght_end = 0;
  uint8_t numb_left_sta = 0;
  uint8_t numb_left_end = 0;

  uint8_t dflt_rght_sta = 0;
  uint8_t dflt_rght_end = 0;
  uint8_t dflt_left_sta = 0;
  uint8_t dflt_left_end = 0;

  if (!rgblight_config.enable) { return; }

  if (capslock_is_active)
  {
    if (whole_keyboard_as_indicator)
    {
      // RGHT = red
      caps_rght_sta = OUTER_RGHT;
      caps_rght_end = INNER_RGHT + 1;

      if (numbers_is_active) // #01
      {
        // LEFT = blue

        numb_left_sta = INNER_LEFT;
        numb_left_end = OUTER_LEFT + 1;

      }
      else // rgb_num = false 
      {
        // LEFT = red
        caps_left_sta = INNER_LEFT;
        caps_left_end = OUTER_LEFT + 1;
      }
    }
    else // whole_keyboard_as_indicator = false
    {
    //   // rght = red
    //   caps_rght_sta = INNER_RGHT - diff - 1;
    //   caps_rght_end = INNER_RGHT + 1;

    //   if (numbers_is_active) // #01
    //   {
    //     // left = blue
    //     numb_left_sta = INNER_LEFT;
    //     numb_left_end = INNER_LEFT + diff + 1; // 1;
    //   }
    //   else // rgb_num = false 
    //   {
    //     // left = red
    //     caps_left_sta = INNER_LEFT;
    //     caps_left_end = INNER_LEFT + diff + 1; // 1;
    //   }
    //   // rght = default color
    //   dflt_rght_sta = OUTER_RGHT;
    //   dflt_rght_end = INNER_RGHT - diff - 1;  // /* 1 LED more separated from CapsLock indicator          */ - 2;
    //   // left = default color
    //   dflt_left_sta = INNER_LEFT + diff + 1;  // /* 1 LED more separated from CapsLock or _NUMB indicator */ + 2;
    //   dflt_left_end = OUTER_LEFT        + 1;
    // }

    // right_thumbs = red
       caps_rght_sta = INNER_RGHT - diff - 1;
       caps_rght_end = INNER_RGHT              + 1;

       if (numbers_is_active)
       {
         // left = blue
         numb_left_sta = INNER_LEFT;
         numb_left_end = INNER_LEFT + diff + 1;
       }               
       else // rgb_num = false
       {
         // left = red
         caps_left_sta = INNER_LEFT;
         caps_left_end = INNER_LEFT + diff + 1;
       }
       // rght = default color
       dflt_rght_sta = OUTER_RGHT;
       dflt_rght_end = INNER_RGHT - diff - 1;
       // left = default color
       dflt_left_sta = INNER_LEFT + diff + 1;
       dflt_left_end = OUTER_LEFT              + 1;
    }

  }
  else // capslock_is_active = false  
  {
    if (numbers_is_active) // #01
    {
      if (whole_keyboard_as_indicator)
      {
        // RGHT = blue
        numb_rght_sta = OUTER_RGHT;
        numb_rght_end = INNER_RGHT + 1;
        // LEFT = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = OUTER_LEFT + 1;

/*
        numb_rght_sta = INNER_RGHT - diff - 1;
        numb_rght_end = INNER_RGHT + 1;

        // rght = default color
        dflt_rght_sta = OUTER_RGHT;
        dflt_rght_end = INNER_RGHT - diff - 1;  
*/ /* 1 LED more separated from CapsLock indicator          */ /* - 2; */

/*
        // left = default color
        dflt_left_sta = INNER_LEFT + diff + 1;  */ /* 1 LED more separated from CapsLock or _NUMB indicator */ /* + 2;
        dflt_left_end = OUTER_LEFT        + 1;
*/
      }
      else // whole_keyboard_as_indicator = false
      {
        // // rght = blue
        // numb_rght_sta = INNER_RGHT - diff - 1;
        // numb_rght_end = INNER_RGHT + 1;
        // // left = blue
        // numb_left_sta = INNER_LEFT;
        // numb_left_end = INNER_LEFT + diff + 1; // 1;

        // // rght = default color
        // dflt_rght_sta = OUTER_RGHT;
        // dflt_rght_end = INNER_RGHT - diff - 1;  // /* 1 LED more separated from CapsLock indicator          */ - 2;
        // // left = default color
        // dflt_left_sta = INNER_LEFT + diff + 1;  // /* 1 LED more separated from CapsLock or _NUMB indicator */ + 2;
        // dflt_left_end = OUTER_LEFT        + 1;

        // rght = blue
        numb_rght_sta = INNER_RGHT - diff - 1;
        numb_rght_end = INNER_RGHT              + 1;
        // left = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = INNER_LEFT + diff + 1;
        // rght = default color
        dflt_rght_sta = OUTER_RGHT;
        dflt_rght_end = INNER_RGHT - diff - 1;
        // left = default color
        dflt_left_sta = INNER_LEFT + diff + 1;
        dflt_left_end = OUTER_LEFT              + 1;
      }

    }
    else // numbers_is_active = false & capslock_is_active = false as well !!!
    {
      // LEFT = default color
      dflt_rght_sta = OUTER_RGHT;
      dflt_rght_end = INNER_RGHT + 1;

      
      // RGHT = default color
      dflt_left_sta = INNER_LEFT;
      dflt_left_end = OUTER_LEFT + 1;
    }
  }
      LED_TYPE tmp_led_range;
      sethsv(COLOR_CAPS, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, caps_rght_sta, caps_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, caps_left_sta, caps_left_end);

      sethsv(COLOR_NUMB, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, numb_rght_sta, numb_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, numb_left_sta, numb_left_end);

      sethsv(default_hue, default_sat, default_val, &tmp_led_range);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, dflt_rght_sta, dflt_rght_end);
      setrgb_range(tmp_led_range.r, tmp_led_range.g, tmp_led_range.b, dflt_left_sta, dflt_left_end);

  rgblight_set();

} // my switch capslock indicators on function
//                                                                                      //
// [functions] [_daly] kc_a [f(capsl)]                                                  //
//                                                                                      //
// capslock complementary functions                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
// //                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
// //                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
// //                                                                                      //
// // ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// void acute_accent_function(void) {
//   register_code(KC_LALT); register_code(KC_E);
//   unregister_code(KC_E); unregister_code(KC_LALT);
// }
// void diaeresis_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_U);
//     unregister_code(KC_U);  unregister_code(KC_LALT);
// }
// void circumflex_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_I);
//     unregister_code(KC_I);  unregister_code(KC_LALT);
// }
// void grave_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_GRAVE);
//     unregister_code(KC_GRAVE);  unregister_code(KC_LALT);
// }
// void tilde_accent_function(void) {
//     register_code(KC_LALT); register_code(KC_N);
//     unregister_code(KC_N);  unregister_code(KC_LALT);
// }
// //                                                                                      //
// // [functions] [_daly] kc_a, kc_e, kc_i, kc_o, kc_u, kc_n                               //
// //                    [f(circu)], [f(grave)], [f(diaer)]                                //
// //                    [f(acc_a)], [f(acc_e)],... [f(acc_u)], [f(til_n)]                 //
// //                                                                                      //
// // accents complementary functions                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT], [_NUMB]                                                         //
//             [_DFLT]KC_L_THUMB3,  [_DFLT]KC_L_THUMB5, [_NUMB]KC_S                     //
//                                                                                      //
// FUNCTIONS FOR ACTIVATING RGB RED LIGHTS ...                                          //
// ... WHEN BACKSPACE OR DELETE IS PRESSED IN A COMBO ( LT(), CTL_T() )                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [DELETE]
/*
void rgb_bspc_or_del_pressed(void)
{
  rgblight_sethsv_noeeprom(HSV_MY_RED);
  set_default_hsv();
}
//
void rgb_bspc_or_del_released(void)
{
  show_RGB_LEDs();
}
*/
// [delete]
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [functions] [_dflt], [_numb]                                                         //
//             [_dflt]kc_l_thumb3,  [_dflt]kc_l_thumb5, [_numb]kc_s                     //
//                                                                                      //
// functions for activating rgb red lights ...                                          //
// ... when backspace or delete is pressed in a combo ( lt(), ctl_t() )                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] KC_R (TH_R4_POWR_LEDS)process_record_user                        //
// [FUNCTIONS] [_LEDS] KC_O (SAV_COL)process_record_user                                //
// [FUNCTIONS] [_LEDS] KC_L (GET_HSV)process_record_user                                //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void flashing_LEDs(uint8_t times, uint8_t r1, uint8_t g1, uint8_t b1, uint8_t r2, uint8_t g2, uint8_t b2)
//RGB_MY_WHITE
//RGB_MY_RED
{
  for (uint8_t i = 0; i < times; i++)
  {
    rgblight_setrgb(r1, g1, b1);
    // _delay_ms (50);
    wait_ms(50);

    rgblight_setrgb(r2, g2, b2);
    wait_ms(100);
  }
}
//                                                                                      //
// [functions] [_powr] kc_r   (my_reset)process_record_user                             //
// [functions] [_dflt] l_th_4 (TH_R4_POWR_LEDS)process_record_user                   //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] KC_R (TH_R4_POWR_LEDS)process_record_user                     //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

  BEEP_1;
  // _delay_ms (1);
  wait_ms(1);
  rgblight_enable_noeeprom();
  wait_ms(1);

  flashing_LEDs(5, RGB_MY_WHITE, RGB_MY_RED);
  reset_keyboard();
}
//                                                                                      //
// [functions] [_powr] kc_r (my_reset)                                                  //
// [functions] [_dflt] l_th_4 (TH_R4_POWR_LEDS)                                      //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_V (SHUT_S)                                                    //
//             [_POWR] KC_U (VOL_1)                                                     //
//                                                                                      //
//             [_POWR] KC_Y (VOL_8)                                                     //
//             [_POWR] KC_M (BRIGHT_1)                                                  //
//                                                                                      //
// VOLUME SET TO LEVEL 1 FUNCTION (USED ALONE AND INTO SHUT DOWN AS WELL)               //
// VOLUME SET TO LEVEL 8 FUNCTION                                                       //
// BRIGHT SET TO LEVEL 1 FUNCTION                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

void volumeSetToLevel(uint8_t max_volume) {
  for (uint8_t i = 0; i < 16; i++)
    {
      tap_code(KC__VOLDOWN);
    }
  for (uint8_t i = 0; i < max_volume; i++)
    {
      tap_code(KC__VOLUP);
    }
}

void brightSetToLevel(uint8_t max_bright) {
  for (uint8_t i = 0; i < 16; i++)
    {
      tap_code(KC_SLCK);
    }
  for (uint8_t i = 0; i < max_bright; i++)
    {
      tap_code(KC_PAUS);
    }
}
// [functions] [_powr] kc_v (shut_s)                                                    //
//             [_powr] kc_u (vol_1)                                                     //
//                                                                                      //
//             [_powr] kc_y (vol_8)                                                     //
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
//
//instantalize an instance of 'tap' for the 'DVIM_Del' tap dance.
static tap DVIM_Del_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_Del_f_always(qk_tap_dance_state_t *state, void *user_data) {
  rgblight_sethsv_noeeprom(COLOR_DVIM);
}

void DVIM_Del_finished (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_Del_tap_state.state = cur_dance(state);
  switch (DVIM_Del_tap_state.state) {

    case   SINGLE_TAP:  register_code(KC_DEL); break;

    case   SINGLE_HOLD: layer_on(_DVIM);

/*
    case ALT_plus_HOLD: if (triggered_gui())
                          multi_apps = true;
                        layer_on(_APPS);          break;
    case GUI_plus_HOLD:
*/
  }
}

void DVIM_Del_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DVIM_Del_tap_state.state) {

    case   SINGLE_TAP:  unregister_code(KC_DEL); break;

    case   SINGLE_HOLD: layer_off(_DVIM);

/*
    case ALT_plus_HOLD: layer_off(_APPS);         break;
    case GUI_plus_HOLD:
*/
  }
  show_RGB_LEDs();
  DVIM_Del_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_dflt] thumb_l1 (dvim_del)                                               //
//                                                                                      //
//  d v i m    l a y e r    /    b a c k s p a c e                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//




//////////////////////////////////////////////////////////////////////////////////////////


//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ N U M B ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
/*
// [GHERKIN]
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

    case DOUBLE_HOLD:// SET [_NUMB] OFF
                        numbers_is_set = false;

// next line is automatically executed when layer_clear() is done and _DFLT is activated
//                      numbers_is_active = false;
                        layer_clear();
                        break;      
  }
}

void SLNUMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNUMB_tap_state.state) {

    case SINGLE_TAP:    unregister_code(KC_PSLS); break;

    case SINGLE_HOLD:// SET [_NUMB] ON
                        numbers_is_set = true;
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
[gherkin]
*/


//
/* WE DON'T NEED 'SETNMB' TAPDANCE ANY MORE SINCE WE USE 'TT(_NUMB)' WITH 'SIMPLE_30_LAYOUT' LAYOUT
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] TH_R3 (SETNMB)                                                    //
//                                                                                      //
//  S E T   N U M B E R S   L A Y E R   U P    -    N U M B E R S   L A Y E R   O F F   //
//                                                                                      //
//  TH_R1: * NUMBERS LAYER OFF,                                                         //
//         @ SET NUMBERS LAYER UP                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [UNDERSTANDING]
// When we are holding 'TH_R3' key under [_NUMB] layer, ('TH_L3' is the [_NUMB] trigger)...
// ... if we hold down 'TH_R3' key and then release 'TH_L3' key first ...
// ... when we release 'TH_R3' key, what we have just done is setting [_NUMB] ON !!!
// 
// Until we set off again, by ...
// ... simple tapping 'TH_R3' key !!!
// [understanding]
//
//instantalize an instance of 'tap' for the 'SETNMB' tap dance.
static tap SETNMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SETNMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  SETNMB_tap_state.state = cur_dance(state);
  switch (SETNMB_tap_state.state) {

    case SINGLE_TAP:// SET [_NUMB] OFF
                        numbers_is_set = false;

// next line is automatically executed when layer_clear() is done and _DFLT is activated
//                      numbers_is_active = false;
                        layer_clear();
                        break;      

//  We don't consider ...  
//  case GUI_plus_HOLD:
    case SINGLE_HOLD:// I left it intentionally empty for allowing 'SET [_NUMB] ON' works properly
                        break;
  }
}

void SETNMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SETNMB_tap_state.state) {

    case SINGLE_TAP:    break;

//  We don't consider ...  
//  case GUI_plus_HOLD:
    case SINGLE_HOLD:// SET [_NUMB] ON
                        numbers_is_set = true;
                        layer_on(_NUMB);
                        break;
  }
  SETNMB_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] th_r3 (setnmb)                                                    //
//                                                                                      //
//  s e t   n u m b e r s   l a y e r   u p    -    n u m b e r s   l a y e r   o f f   //
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ n u m b ]  l a y e r                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//  we don't need 'setnmb' tapdance any more since we use 'tt(_numb)' with 'SIMPLE_30_LAYOUT' layout */
//













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
static tap FVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_uU_tap_state.state = cur_dance(state);
  switch (FVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_UP);
                          unregister_code(KC_UP);   unregister_code(KC_LALT); break;
  }
  FVIM_uU_tap_state.state = 0;
}
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
static tap FVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_pP_tap_state.state = cur_dance(state);
  switch (FVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_DOWN);
                          unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
  }
  FVIM_pP_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_p (fvim_pp)                                                  //
//                                                                                      //
//  e n d   o f   l i n e  /  p a r a g r a p h                                         //
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
static tap DVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_uU_tap_state.state = cur_dance(state);
  switch (DVIM_uU_tap_state.state) {
    case SINGLE_TAP:        dvim("u"); break;
    case DOUBLE_TAP:        dvim("U"); break;
  }
  DVIM_uU_tap_state.state = 0;
}
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
static tap DVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_pP_tap_state.state = cur_dance(state);
  switch (DVIM_pP_tap_state.state) {
    case SINGLE_TAP:        dvim("p"); break;
    case DOUBLE_TAP:        dvim("P"); break;
  }
  DVIM_pP_tap_state.state = 0;
};
//                                                                                      //
// [tapdance] [ _dvim ] kc_p (dvim_pp)                                                  //
//                                                                                      //
//  d e l e t e   t o   e n d   o f   l i n e   /   e n d   o f   p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _AVIM ] KC_U (AVIM_uU)                                                  //
//                                                                                      //
//  S E L E C T   T O   B E G I N N I N G   O F   L I N E    /    P A R A G R A P H     //
//                                                                                      //
//  KC_U:  * SELECT TO BEGINING OF LINE                                                 //
//        ** SELECT TO BEGINING OF PARAGRAPH                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'AVIM_uU' tap dance.
/*
static tap AVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void AVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  AVIM_uU_tap_state.state = cur_dance(state);
  switch (AVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LGUI);   register_code(KC_LEFT);
                          
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI);
                          unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LALT);   register_code(KC_UP);
                         
                         unregister_code(KC_UP); unregister_code(KC_LALT);
                         unregister_code(KC_LSFT);
                            break;
  }
  AVIM_uU_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [ _avim ] kc_u (avim_uu)                                                  //
//                                                                                      //
//  s e l e c t   t o   b e g i n n i n g   o f   l i n e    /    p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _AVIM ] KC_P (AVIM_pP)                                                  //
//                                                                                      //
//  S E L E C T   T O   E N D   O F   L I N E    /    E N D   O F   P A R A G R A P H   //
//                                                                                      //
//  KC_P:  * SELECT TO END OF LINE                                                      //
//        ** SELECT TO END OF PARAGRAPH                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'AVIM_pP' tap dance.
/*
static tap AVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void AVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  AVIM_pP_tap_state.state = cur_dance(state);
  switch (AVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LGUI);   register_code(KC_RGHT);

                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); 
                          unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LALT);   register_code(KC_DOWN);
                          
                          unregister_code(KC_DOWN); unregister_code(KC_LALT);
                          unregister_code(KC_LSFT);
                            break;
  }
  AVIM_pP_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [ _avim ] kc_p (avim_pp)                                                  //
//                                                                                      //
//  s e l e c t   t o   e n d   o f   l i n e    /    e n d   o f   p a r a g r a p h   //
//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
//              t a p   d a n c e   f o r  -  v   i   m  -  l a y e r s                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Y (FUNC_LED)                                                    //
//                                                                                      //
//  F U N C   L A Y E R,   L E D S   L A Y E R                                          //
//                                                                                      //
//  TH_L4:  @ [_FUNC] LAYER                                                             //
//         @@ [_LEDS] LAYER                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FUNC_LED' tap dance.
static tap FUNC_LED_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FUNC_LED_finished (qk_tap_dance_state_t *state, void *user_data) {
  FUNC_LED_tap_state.state = cur_dance(state);
  switch (FUNC_LED_tap_state.state) {

    case SINGLE_TAP:        acute_accent_function(); break;

    case SINGLE_HOLD:       layer_on(_FUNC);         break;

    case DOUBLE_HOLD:       layer_on(_LEDS);         break;
  }
}

void FUNC_LED_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (FUNC_LED_tap_state.state) {
    case SINGLE_TAP:        break;

    case SINGLE_HOLD:       layer_off(_FUNC);        break;

    case DOUBLE_HOLD:       layer_off(_LEDS);        break;
  }
  FUNC_LED_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_y (func_led)                                                    //
//                                                                                      //
//  f u n c   l a y e r,   l e d s   l a y e r                                          //
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Z (SLEP_M)                                                     //
//                                                                                      //
//  M E N U   B A R   /    S L E E P   C O M P U T E R                                  //
//                                                                                      //
//  KC_Z:   *  MENU BAR                                                                 //
//          @  SLEEP COMPUTER                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SLEP_M' tap dance.
static tap SLEP_M_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SLEP_M_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLEP_M_tap_state.state = cur_dance(state);
  switch (SLEP_M_tap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F2);
                      //_delay_ms(500);
                      break;

// [INFO] HOW TO SLEEP COMPUTER THROUGH KEYBOARD                            
//  keystrokes for sleeping:  (guessed by try and fail method)
                      
    case SINGLE_HOLD: register_code(KC_POWER);
                   // without this delay, POWER doesn't work !!!   
                      _delay_ms(500); 
                      unregister_code(KC_POWER);
                   // SEND_STRING("s");  // 's' for selecting button sleep but it's not necessary
                      break;

                      /*
                      // this way doesn't work

                      register_code(KC_LSFT);
                      register_code(KC_POWER);
                      _delay_ms(500); 
                      */

                  /* KC_EJCT keycode doesn't work with QMK, but with KarabinerElements works vey well*/
                  /*register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_EJCT);*/

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                     */
/*   KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down)     */
/*                                                                                                     */
/*                          register_code(KC_POWER);                                                   */
/*                                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
  }
}

void SLEP_M_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLEP_M_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F2); unregister_code(KC_LCTL); break;
                     
    case SINGLE_HOLD: /* if we unregister_code(KC_POWER) here, at SLEP_M_reset
                         it will appear the POWER dialog box and 
                         we have to press the related initial letter
                         or chosing an option with the mouse.

                         unregister_code(KC_POWER);
                      */

                      /*
                      unregister_code(KC_EJCT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      */
// [info] how to sleep computer through keyboard

                      break;                       
  }
  SLEP_M_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_z (slep_m)                                                     //
//                                                                                      //
//  m e n u   b a r   /    s l e e p   c o m p u t e r                                  //
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
// [A_CAPS]       = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// [examples]
//
// Other declarations would go here, separated by commas, if you have them
//

// [_DFLT] LAYER
   [DVIM_Del]=ACTION_TAP_DANCE_FN_ADVANCED_TIME(DVIM_Del_f_always,DVIM_Del_finished,DVIM_Del_reset,100)
  ,[FUNC_LED]=ACTION_TAP_DANCE_FN_ADVANCED(NULL, FUNC_LED_finished, FUNC_LED_reset)
// [_dflt] layer

// [_NUMB]&[_SYMB]LAYER
// ,[G_DOEU] = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  SYM_EURO)                                      // $ EURO
// ,[SETNMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SETNMB_finished, SETNMB_reset)
//
// [GHERKIN]
// ,[SLNUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNUMB_finished, SLNUMB_reset)
// [gherkin]
//
// [UNDERSTANDING]
// TIME  50: is too dificult to typing   so fast !!!
// TIME 100 is a right time for typing very fast !!!
// [understanding]
//
// [_numb] layer

// [_FVIM] LAYER
  ,[FVIM_uU] = ACTION_TAP_DANCE_FN(FVIM_uU_function)
  ,[FVIM_pP] = ACTION_TAP_DANCE_FN(FVIM_pP_function)
// [_fvim] layer

// [_DVIM] LAYER
  ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
  ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// [_dvim] layer

// [_POWR] LAYER
  ,[SLEP_M]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)// [_powr] layer

/*
// [_AVIM] LAYER
// ,[AVIM_uU] = ACTION_TAP_DANCE_FN(AVIM_uU_function)
// ,[AVIM_pP] = ACTION_TAP_DANCE_FN(AVIM_pP_function)
// [_avim] layer
*/
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

//[_APPS] = LAYER 10 : APPLICATIONS LAYER
  [_APPS] = LAYOUT_wrapper(
//.----------------------------------------.                 .----------------------------------------.
               __APPLICATS_L1__,                                          __APPLICATS_R1__,
//|----------------------------------------|                 |----------------------------------------|
               __APPLICATS_L2__,                                          __APPLICATS_R2__,
//|----------------------------------------|                 |----------------------------------------|
               __APPLICATS_L3__,                                          __APPLICATS_R3__,
//'----------------------------------------'                 '----------------------------------------'
//
//                     .------------------------.     .------------------------.
                            _APPS_LTHMB_RW1_,              _APPS_RTHMB_RW1_,
//                     |------------------------|     |------------------------|
                                      KC_NO ,               KC_NO,
//                     |------------------------|     |------------------------|
                            _APPS_LTHMB_RW2_,              _APPS_RTHMB_RW2_
//                     '------------------------'     '------------------------'
),
// END OF _APPS 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

//[PLACEHOLDER] //🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
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
/*
void matrix_init_user(void) {

https://docs.qmk.fm/#/custom_quantum_functions?id=matrix_init_-function-documentation

  Keyboard/Revision: void matrix_init_kb  (void)
  Keymap:            void matrix_init_user(void)

Keyboard Post Initialization code
This is ran as the very last task in the keyboard initialization process. This is useful if you want...
...to make changes to certain features, as they should be initialized by this point.

Example keyboard_post_init_user() Implementation
This example, running after everything else has initialized, sets up the rgb underglow configuration.

void keyboard_post_init_user(void) {
  // Call the post init code.
  rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv_noeeprom(180, 255, 255); // sets the color to teal/cyan without saving
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING + 3); // sets mode to Fast breathing without saving
}

// set_unicode_input_mode(UC_OSX);
// REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
}; // end of matrix_init_user
*/
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                        M A T R I X   I N I T   U S E R                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//

/*
void keyboard_post_init_rgb(void) {
#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_STARTUP_ANIMATION)
    // if (userspace_config.rgb_layer_change) { rgblight_enable_noeeprom(); }
    if (user_config.rgb_layer_change) { rgblight_enable_noeeprom(); }
    if (rgblight_config.enable) {
        layer_state_set_user(layer_state);
        uint16_t old_hue = rgblight_config.hue;
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        for (uint16_t i = 255; i > 0; i--) {
            rgblight_sethsv_noeeprom( ( i + old_hue) % 255, 255, 255);
            matrix_scan();
            wait_ms(10);
        }
    }
#endif
    layer_state_set_user(layer_state);
}
*/

//
void keyboard_post_init_user(void) {
// Call the post init code.

// Wenset default color variables from the initial color of the keyboard and ...

  set_default_hsv();

  // keyboard_post_init_rgb();

// [UNCOMMENTTHIS]
// ... we show our default color.
//show_RGB_LEDs(); 
// [uncommentthis]
}
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


/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
/* MAXIMUM LINE WIDTH FOR RIGHT PRINTING   ( 105  CHARACTERS)   MAXIMUM LINE WIDTH FOR RIGHT PRINTING */
/*XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/

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

/*
void matrix_scan_user(void) {
                
}
*/

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

/*
if (numbers_is_active)
{
  switch (keycode) // A..Z less E O S D
  {
    case KC_A...KC_C:
    case KC_F...KC_N:
    case KC_P...KC_R:
    case KC_T...KC_Z: callAppWithKeycode(keycode);
                      return false;
    case KC_D:


    case KC_E:


    case KC_O:


    case KC_S:


  }
}
*/

  if (record->event.pressed)
  // Do something when pressed
  {
    shift_flag   = get_mods()&SHFT_MODS;
    control_flag = get_mods()&CTRL_MODS;
    option_flag  = get_mods()&ALT_MODS;
    gui_flag     = get_mods()&GUI_MODS;

    switch(keycode)
    {
      case TT_NUMB:   lt12_timer = timer_read();
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

      case TH_L3_KAR_APPS:  
                      karabiner_apps_working = true;
                      if (multi_apps_karabiner)
                      {
                        // triggered_gui();
                        add_desired_mod(current_flag);
                        // add_mods(current_flag);
                        // add_weak_mods(current_flag);
                        // send_keyboard_report();
                      }
                      
                      layer_off(_APPS);
                      register_code(KC_F20);
                      return false;
                      
      case TH_L4_FUNC_LEDS:
                      // if (get_mods()&ALT_MODS)
                      if (triggered_mod(KC_A))
                      {
                        layer_on(_LEDS);
                      }
                      else
                      {
                        layer_on(_FUNC);
                      }
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

      case TH_R3_APPS_NUMB: //if (option_flag)
                            if (triggered_mod(KC_A))
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
                          diff = 1;
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
                     
      //[SAVING_SPACE]
      // using triggered_control_mod as a bool function, we save from 38 to 66 bytes --> 28 bytes saved
      // case SL_MEN:    if (triggered_control_mod())
/*
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

      case SH_STA:  //we save unregister control and register again
                    //if (triggered_mod(KC_C)) 
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

      case RT_FLO:    if (control_flag) //same 'saving control' issue as in previous case
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

// LEFT ROW 1 APPS
      case APP_Q_SNOTE: callApp("q");                         return false; // simple note
      //
      // 10 bytes saved if we don't declare 'APP_W_TWTTR' and don't write the next line
      case APP_W_TWTTR: callApp("w");                         return false; // t W itter
      //
      //
      // [SAVING_SPACE]
      // 88 bytes free when disable Evernote case and 40 bytes when I enable it  -->  it costs 48 bytes of code
      case APP_E_EVERN: 
                        if (control_flag)
                        {
                          register_code(KC_LALT);
                          tap_code(KC_N);
                          unregister_code(KC_LALT);
                          unregister_code(KC_LCTL);                         // quick entry  E vernote
                        }
                        else
                        {
                          callApp("e");                        
                        }
                        return false;                                       // E vernote
      //
      // case APP_R_APSTO: callApp("r");                         return false; // app sto R e
      case APP_T_TERMI: callApp("t");                         return false; // T erminal


// RIGHT ROW 1 APPS
      case APP_Y_TYPIN: callApp("y");                         return false; // t Y pinator
      case APP_U_UROOM: callApp("u");                         return false; // U room
      case APP_I_TEDIT: callApp("i");                         return false; // texted I t
      case APP_O_OMNIF: if (control_flag)
                        {
                          register_code(KC_LALT);
                          tap_code(KC_SPC);
                          unregister_code(KC_LALT);
                          unregister_code(KC_LCTL);                         // quick entry  O mnifocus
                        }
                        else
                        {
                          callApp("o");                       
                        }
                        return false;                                       // O mnifocus
      case APP_P_SPREF: callApp("p");                         return false; // system P references


// LEFT ROW 2 APPS
      // case APP_A_SCRPT: callApp("a");                         return false; // A pple script
      case APP_S_SAFAR: if (control_flag)
                        {
                          triggered_control_mod();
                          // if (shift_flag)
                          // {
                          //   shift_was_activated = true;
                          //   remove_shift_mod();
                          // }

                          if (shift_flag)
                          {
                            shift_was_activated = true;
                            remove_activated_mod(shift_flag);
                            // del_mods     (shift_flag);
                            // del_weak_mods(shift_flag);
                            // send_keyboard_report();
                          }

                          wait_ms(50);
                          callApp("s");
                          wait_ms(50);
                          register_code(KC_LGUI);
                          // wait_ms(50);
                          tap_code(KC_L);                                   // Opens addre S S    bar for introduce an URL...
                          unregister_code(KC_LGUI);
                          if (shift_was_activated)
                          {
                            shift_was_activated = false;
                            wait_ms(50);                                    // ... or googling something
                            send_string("http://www.slack.com\n");          // S lack
                          }
                        }                          
                        else
                        {
                          callApp("s");                                     // S afari     
                        }
                        return false;
      case APP_D_D_ONE: 
                        if (control_flag)
                        {
                          register_code(KC_LSFT);
                          tap_code(KC_D);
                          unregister_code(KC_LSFT);
                          unregister_code(KC_LCTL);                         // quick entry  D ay one
                        }
                        else
                        {
                          callApp("d");
                        }
                        return false;                                       // D ay one
      case APP_F_FINDE: callApp("f");                         return false; // F inder
      // case APP_G_CHRME: callApp("g");                         return false; // G oogle chrome


// RIGHT ROW 2 APPS
      case APP_H_SKTCH: callApp("h");                         return false; // sketc H
      case APP_J_SUBLI: callApp("j");                         return false; // sublime text
      case APP_K_KRBNR: callApp("k");                         return false; // K arabiner-elements
      case APP_L_CLNDR: callApp("l");                         return false; // Calendar
      // case APPSP_EMPTY: callApp(" ");                         return false; // ???? EMPTY EMPTY EMPTY EMPTY 


// LEFT ROW 3 APPS
      // case APP_Z_STUDI: callApp("z");                         return false; // Studies
      case APP_X_XCODE: callApp("x");                         return false; // Xcode
      case APP_C_CALCU: callApp("c");                         return false; // Calculator
      case APP_V_KVIEW: callApp("v");                         return false; // karabiner-event Viewer
      case APP_B_BOOKS: callApp("b");                         return false; // Books


// RIGHT ROW 3 APPS
      case APP_N_NOTES: callApp("n");                         return false; // Notes
      case APP_M_MAIL:  callApp("m");                         return false; // Mail      
      // case APP_ES_KEYN: callApp("\e");                        return false; // Keynote
      // case APP_BS_PAGE: callApp("\b");                        return false; // Pages
      // case APP_EN_NUMB: callApp("\n");                        return false; // Numbers
      case APP_ES_KEYN: callApp("1");                         return false; // Keynote
      case APP_BS_PAGE: callApp("2");                         return false; // Pages
      case APP_EN_NUMB: callApp("3");                         return false; // Numbers
// keycodes for triggering apps
// applications
//
// keycodes for triggering apps


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
                    flashing_LEDs(10, RGB_MY_AZURE, RGB_MY_PURPLE);
                    return false;

      case GET_HSV: flashing_LEDs(5, RGB_MY_YELLOW, RGB_MY_PURPLE);
                    // SEND_STRING("\n===");
                    SEND_STRING("\nget_hsv() -> ");
                    get_hsv();
                    BEEP_1;
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
      case CH_MGNT: rgblight_sethsv(HSV_MY_MAGENTA);              return false;

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
    }

  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {
      // 746-674= 72 bytes saved using TT(layer) instead of my implementation
      // ... but RGB layer color changes too slow.  MY way is instantly changed !
      // if (record->event.pressed) {
      // case TT_NUMB:   lt12_timer = timer_read();
                      // layer_invert(_NUMB);
      //                 return false; 
      // emulates TT(layer)
      case TT_NUMB:   if (timer_elapsed(lt12_timer) > TAPPING_TERM)
                      {  
                        // if we have had pressed this 'trigger layer key' more time than tapping_term
                        // is because we have used it for typing some numbers (or letters if came from
                        // ... numbers layers)
                        //
                        // now, when we release this 'trigger layer key', we return to previous layer
                        layer_invert(_NUMB);
                      }
                      return false;

      case CHANGE_SYMB_TO_NUMB:
                      layer_off(_NUMB);
                      if (symbols_pressed)
                      {
                        layer_on(_SYMB);
                      }
                      return false;

      case TH_L3_KAR_APPS:
                      karabiner_apps_working = false;
                      unregister_code(KC_F20);
                      if (apps_working)
                      {
                        if (multi_apps_karabiner)
                        {
                          multi_apps           = true;
                        }
                        layer_on(_APPS);
                      }
                      else
                      {
                        if (multi_apps_karabiner)
                        {
                          remove_activated_mod(current_flag);
                          // del_mods     (current_flag);
                          // del_weak_mods(current_flag);
                          // send_keyboard_report();

                          multi_apps_karabiner = false;
                        }
                        show_RGB_LEDs();
                      }
                      return false;

      case TH_L4_FUNC_LEDS:
                      if (state_number == _FUNC)
                      {
                         layer_off(_FUNC);
                      }
                      else
                      if (state_number == _LEDS)
                      {
                        layer_off(_LEDS);
                      }
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

//       case APP_Q_SNOTE:
//       case APP_W_TWTTR:
//       case APP_E_EVERN:
//       case APP_R_APSTO:
//       case APP_T_TERMI:

//       case APP_Y_TYPIN:
//       case APP_U_UROOM:
//       case APP_I_TEDIT:
//       case APP_O_OMNIF:
//       case APP_P_SPREF:

//       case APP_A_SCRPT:
//       case APP_S_SAFAR:
//       case APP_D_D_ONE:
//       case APP_F_FINDE:
//       case APP_G_CHRME:

//       case APP_H_SKTCH:
//       case APP_J_SUBLI:
//       case APP_K_KRBNR:
//       case APP_L_CLNDR:
//       case APPSP_EMPTY:

//       case APP_Z_STUDI:
//       case APP_X_XCODE:
//       case APP_C_CALCU:
//       case APP_V_KVIEW:
//       case APP_B_BOOKS:

//       case APP_N_NOTES:
//       case APP_M_MAIL:
//       case APP_ES_KEYN:
//       case APP_BS_PAGE:
//       case APP_EN_NUMB:

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
    }
  }
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
//        active_layer = 0;

  numbers_is_active = false; // #01

  if (apps_just_activated)
  {
    apps_just_activated = false;

    if (!multi_apps)
    {
      HIDEOTH; //Long: SEND_STRING(SS_LALT(SS_LGUI("h"))); //Wrong: register_code(LALT(LGUI(KC_H)));
    }
    else
    {
      multi_apps           = false;
    }
  }
  if (karabiner_apps_working)
  {
    rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
  }
  else
  {
    show_RGB_LEDs();
  }

  break;     


     case _ACCN:   //  1
// //        active_layer = 1;
         rgblight_sethsv_noeeprom(COLOR_ACCN); // (0xD9, 0xA5, 0x21)
         break;

    case _NUMB:   //  2
//        active_layer = 2;
        numbers_is_active = true; // #01
//        send_string(string_state_number);
//        SEND_STRING("[_NUMB]");
//        rgblight_setrgb   (0x00,  0x00, 0xFF); // blue
        show_RGB_LEDs();
        break;

    case _FVIM:   //  3
//        active_layer = 3;
        rgblight_sethsv_noeeprom(COLOR_FVIM); // (0x00, 0x80, 0x80)
        break;

    case _XVIM:   // 4
//        active_layer = 4;
        rgblight_sethsv_noeeprom(COLOR_VIM_); // (320, 255, 255)
        break; 
    case _DVIM:   // 5
//        active_layer = 5;
        rgblight_sethsv_noeeprom(COLOR_DVIM); // (0xFF, 0x00, 0x00)
        break;


    case _MOUS:   // 6
//        active_layer = 6;
        rgblight_sethsv_noeeprom(COLOR_MOUS); // (0x00,  0xFF, 0x00)
        break;

    case _DALY:   //  7
//        active_layer = 7;
        rgblight_sethsv_noeeprom(COLOR_DALY); // (0x7A, 0x00, 0xFF)
        break;

    case _FUNC:   //  8
//        active_layer = 8;
        rgblight_sethsv_noeeprom(COLOR_FUNC); // (0x99, 0xF5, 0xFF)
        break;

    case _SYMB:   //  9
//        active_layer = 9;
        rgblight_sethsv_noeeprom(COLOR_SYMB); // (0x00,  0xFF, 0x00)
        break;

    case _APPS:   //  10
//        active_layer = 10;
        rgblight_sethsv_noeeprom(COLOR_APPS); // (0xFF, 0x80, 0xBF)
        apps_just_activated = true;
        break;

    case _LEDS:   // 11
//      active_layer = 11;
        BEEP_1;
        break;

    case _POWR:   //  12
//        active_layer = 12;
        rgblight_sethsv_noeeprom(COLOR_POWR); // (0xFF, 0xFF, 0x00)
        break;

    default:  break;  //  for any other layers
//        active_layer = 13;
  };
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