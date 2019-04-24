/*                              // keymap lleno de send_string para monitorear action_function A_VOWEL.c
 * PROJECT NAME: '30_layout'
 *
 * VERSION NAME: 'cleaning the code'
 * 
 * COPYRIGHT:     2019 manolodeinternet <manolodeinternet@gmail.com>
 *                my code is write over the one from:
 * Copyright      2017 Brian Fong

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,

 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
 * git version controlled firmware for
 * 30 keys keyboards, as GHERKIN.
 * made fromn scratch -  keymap.c
 * also made for this project:  rules.mk, config.h, etc.
 *
// [IMPROVEME] 
    look for the original GNU text and improve the copyright
// [improveme]
 */



// MY_OWN_PREPROCESSING_KEYWORDS for editing my code:
//
// [BOOKMARK] for looking for an important point of the code I'm editing,
//            for putting a bookmark into the code.
//
// [BEAUTIFUL & CLEAN CODE]... you can do a task simply coding or...
//                             you can do the same thing making an artwork,
//                             instead of a bunch of lines of code
//
// [DANGER]
// [danger]   for indicate that we have touch the code, without checking if the change is reliable
//
// [DELETEME]
// [deleteme]  for delete later
//
// [EXAMPLE]
// [example]
//
// [FIXME]
// [fixme]     there's something I HAVE TO FIX for a right working
//
// [IMPROVEME]
// [improveme] there is something we could change for a better working or getting a code more elegant
//
// [INFO]
// [info] some information about any reference relative to our code or application analytics
//
// [INSPIRINGCODE]
// [inspiringcode]
//
// [LAST]     for marking the point where I'm working.
//
// [OLDWAY]
// [oldway] the ugly way I did this before that we aren't going to need any more. It works, but smell...
//
// [TRANSLATION]
// [translation]
//
// [UNDERSTANDING] 
// [understanding] for giving explanations about our code
//
// my_own_preprocessing_keywords



////////////////////////////////////
// COMMENTS SYNTAX FOR LEGIBILITY //
////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
/*  KC_A:  aA  -  accented aA  -  LSHIFT  -  C A P S L O C K                            */
/*                                                                                      */
/*                                                                                      */
/*                                                                                      */
/* BODY                                                                                 */
/*                                                                                      */
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////
// comments syntax for legibility //
////////////////////////////////////


// #include <print.h>
#include QMK_KEYBOARD_H
/*
#include "quantum.h"
#include "keycode.h"
#include "action_util.h"
#include "action_code.h"
*/

// [INSPIRINGCODE]
// #define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
// #define ALL_MODS    (MOD_BIT(KC_LSFT)|MOD_BIT(KC_LCTL)|MOD_BIT(KC_LALT)|MOD_BIT(KC_LGUI))
// [inspiringcode]
#define LSHIFT_MODS (MOD_BIT(KC_LSHIFT))

#define A_VOWEL 0
#define E_VOWEL 1
#define I_VOWEL 2
#define O_VOWEL 3
#define U_VOWEL 4
#define N_TILDE 5
#define RXTND_CAPS 6





// DEFINING LAYERS
//
// [UNDERSTANDING]
// FOR ACCESING LAYERS FROM KEYMAP 'LT(LAYER, KC)', NUMBER LAYER MUST BE BETWEEN 0 AND 15
#define ALPH   0  // 0 gherkin ALPHAS           layer // must be       layer number  0
#define LYRS   1  // 0 gherkin LAYERS           layer // must be       layer number  0
#define SYMB   3  // 1 symbols                  layer // must be under layer number 16
#define L_XTND 5  // 2 LEFT  extended   default layer // must be under layer number 16
#define R_XTND 6  // 3 RIGHT extended   default layer // must be under layer number 16
#define PVIM   9  // 4 Personal             VIM layer // must be under layer number 16
#define DVIM  10  // 5 Delete               VIM layer // must be under layer number 16

// BUT YOU IN ADDITION TO USING LAYERS AMONG 0...15, YOU CAN USE LAYERS AMONG 16...31 IF... 
// ...YOU AREN'T GOING TO ACCESS THEM FROM KEYMAP, BUT CODE, USING 'layer_on(LAYER)', 'layer_off(LAYER)'
#define NMBR   2  // 16 numbers                 layer // I can change it to 15...31 layer's interval
#define FNCT   4  // 17 functions & extended f. layer // I can change it to 15...31 layer's interval
#define APPS   7  // 18 apps                    layer // I can change it to 15...31 layer's interval
#define SUSR   8  // 19 SUPER USER productivity layer // I can change it to 15...31 layer's interval
/*
#define SVIM  10  // 20 Select              VIM layer // I can change it to 15...31 layer's interval
*/
#define XVIM  11  // 21 eXtra               VIM layer // I can change it to 15...31 layer's interval
#define ZVIM  12  // 22 Z extra             VIM layer // I can change it to 15...31 layer's interval
#define AVIM  13  // 23 Alignment           VIM layer // I can change it to 15...31 layer's interval
#define MOUS  14  // 24 mouse                   layer // I can change it to 15...31 layer's interval
#define BLIT  15  // 25 backlight               layer // I can change it to 15...31 layer's interval
#define TEST  31  // 31 LAYER FOR TRYING AND TESTING  // must be over layer number 15
// [understanding]
//
// defining layers




    









// DEFINING READABILITY CODES 
#define _______ KC_TRNS
#define NO_KEY  KC_NO
#define XXXXXXX KC_NO

// DEFINING LAYER LEVELS OF BACKLIGHTNING
#define BL_OFF  0
#define BL_MIN  1
#define BL_LOW  3
#define BL_MED  7
#define BL_HGH 12
#define BL_MAX 15

#define BL_GHKN  0
#define BL_XTND  5
#define BL_FNCT  5
#define BL_VIM   6
#define BL_PVIM  8
#define BL_APPS 10
#define BL_SVIM 10
#define BL_MOUS 10
#define BL_SYMB 11
#define BL_DVIM 15
#define BL_SUSR 15
#define BL_NMBR 15
// defining layer levels of backlightning

// DEFINING BACKLIGHTNING SITUATIONS
#define BL_CAPS 10
#define BL_RESE 15

// DEFINING BACKLIGHT BREATHING LELVELS
#define BR_CAPS  1
#define BR_SYMB  2
#define BR_NMBR  2
#define BR_DFLT  6

// DEFINING SYMBOLS
#define SYM_EURO         LSFT(LALT(KC_2))  // euro symbol
#define SYM_QUES            LSFT(KC_SLSH)  // question mark
#define SYM_I_QU      LSFT(LALT(KC_SLSH))  // inverted question mark
#define SYM_EXCL               LSFT(KC_1)  // exclamation mark
#define SYM_I_EX               LALT(KC_1)  // inverted exclamation mark
// defining symbols
// DEFINING XTND COMMANDS
#define PREV_APP       LSFT(LGUI(KC_TAB))  // previous app
#define NEXT_APP             LGUI(KC_TAB)  //     next app
#define PREV_WIN     LSFT(LGUI(KC_GRAVE))  // previous window
#define NEXT_WIN           LGUI(KC_GRAVE)  //     next window
#define PREV_TAB       LSFT(LCTL(KC_TAB))  // previous tab
#define NEXT_TAB             LCTL(KC_TAB)  //     next tab

#define SPT_SIRI             LGUI(KC_SPC)  // spotlight & siri

#define     DESK                    KC_F5
#define APP_WIND            LCTL(KC_DOWN)  // applications windows
#define MISS_CTL              LCTL(KC_UP)  // mission control
#define    SPEAK   LCTL(LALT(LGUI(KC_H)))
#define  LNCHPAD                   KC_F17  // F17 (set at 'System Preferences/Keyboard/Shortcuts/Launchpad&Doc')
#define  DASHBRD                   KC_F18
#define ACTV_WIN              LCTL(KC_F4)  //   active window
#define FLOA_WIN              LCTL(KC_F6)  // floating window

#define REOPEN_L         LSFT(LGUI(KC_T))  // reopen last closed window/tab
#define  CLOSE_A               LGUI(KC_Q)  // close application
#define  CLOSE_W               LGUI(KC_W)  // close window
#define  CLOSE_T               LGUI(KC_W)  // close tab

#define XT_UNDO                LGUI(KC_Z)   //UNDO
#define XT_REDO          LSFT(LGUI(KC_Z))   //REDO
#define XT_CUT                 LGUI(KC_X)   //CUT
#define XT_COPY                LGUI(KC_C)   //COPY
#define XT_PAST                LGUI(KC_V)   //PASTE
#define XT_MTCH    LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE
// defining xtnd commands

// DEFINING SUSR COMMANDS
#define LCK_SCR          LCTL(LGUI(KC_Q))   //LOCK SCREEN (ask for pasword screen)
// defining susr commands

// SUBLIME COMMANDS
#define P_ST_HY          LALT(LGUI(KC_V))   //(SUBLIME TEXT) PASTE FROM HISTORY
// sublime commands

// APPS COMMANDS
#define HIDEOTH          SEND_STRING(SS_LALT(SS_LGUI("h")))  //LALT(LGUI(KC_H))   //HIDE OTHER APPS
// apps commands



/*
#define PERVIM     (SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p"))
#define K_PERV(kc) (PERVIM; send_string(kc))
*/
/*
quantum/quantum_keycodes.h:484:18: error: large integer implicitly truncated to unsigned type [-Werror=overflow]
 #define HYPR(kc) (QK_LCTL | QK_LSFT | QK_LALT | QK_LGUI | (kc))
                  ^
quantum/quantum_keycodes.h:681:17: note: in expansion of macro 'HYPR'
 #define KC_HYPR HYPR(KC_NO)
                 ^~~~
*/


  enum tap_dance_states { // EACH ONE RECEIVE ITS VALUE...
   SINGLE_TAP           = 1,
   SINGLE_HOLD          = 2,
   DOUBLE_TAP           = 3,
   DOUBLE_HOLD          = 4,
   DOUBLE_SINGLE_TAP    = 5, //send SINGLE_TAP twice - NOT DOUBLE_TAP
   TRIPLE_TAP           = 6,
   TRIPLE_HOLD          = 7,
   TRIPLE_SINGLE_TAP    = 8,
   QUADRUPLE_TAP        = 9,
   QUADRUPLE_HOLD       = 10,
   QUADRUPLE_SINGLE_TAP = 11,
   QUINTUPLE_TAP        = 12,
   QUINTUPLE_HOLD       = 13,
   QUINTUPLE_SINGLE_TAP = 14,
   SEXTUPLE_TAP         = 15,
   SEXTUPLE_HOLD        = 16,
   SEXTUPLE_SINGLE_TAP  = 17
   // Add more enums here if you want for sevenfold, eightfold], etc.
 };
 // [TRANSLATION]
 //
 // web link:https://www.practicaespanol.com/los-multiplos-en-espanol-doble-triple-cuadruple/
 // spanish: doble, triple, cuádruple, quíntuple, séxtuple,
 //          séptuple, óctuple, nónuplo, décuplo,
 //          undécuplo, duodécuplo, terciodécuplo, cuartodécuplo, quintodécuplo, sextodécuplo,
 //          septodécuplo, octodécuplo, novodécuplo, ... céntuple, ...
 //
 // web link:https://www.collinsdictionary.com/dictionary/english/quintuple
 // english: double, triple/trifold, quadruple/fourfold, quintuple/fivefold, sextuple/sixfold,
 //          septuple/sevenfold, octuple/eightfold, nonuple/ninefold, decuple/tenfold,
 //          eleventhfold, twelfthfold, thirdfold, fourthfold, fifthfold, sixthfold,
 //          seventhfold, eighthfold, ninethfold, ... hundredfold, ...
 //
 // [translation]

// TAP DANCE DECLARATIONS (LIST OF MY TAP DANCE CONFIGURATIONS)
enum tap_dance_keycodes { // IT BEGINS BY 0...

// TAP DANCE KEYCODES ACCESSIBLE FROM *GHKN (GHERKIN DEFAULT LAYER)
/*   Q_SUSR = 0  //    super user layer  // ... **TAB
    ,P_SUSR  //        super user layer  

    ,W_APPS  // apps & multi apps layer  // ...                                    // R_APPS -> W_APPS
    ,O_APPS  // apps & multi apps layer  // ...                                    // U_APPS -> O_APPS
*/

//   ACCESIBLE FROM LAYER LYRS #1
     Q_P_SU_TB = 0  // *super user layer  // **tab
    ,W_O_APP    // *multiapps & **apps layer

    ,A_SH_CP    // capslock  // *shift
    ,SP_SH_CP   // capslock  // *shift

    ,LY_NMB     // *numbers layer
//   accesible from layer lyrs #1


    ,R_AC_RE // left  accents trigger    // ... ***RESET                           // V_ACCE -> R_AC_RE
    ,U_ACCE  // right accents trigger                                              // M_ACCE -> U_ACCE

/*
    ,A_CAPS  //                          // ... **caps lock
    ,F_CAPS  //                          // ... **caps lock

    ,SP_SHF  //           space / lshift

    ,MOU_FN  //  mouse / function layer
    ,ESC_FN  //        *functions layer  /  **functions layer

    ,G_SYMB  //           symbols layer
    ,H_SYMB  //           symbols layer
*/
//    ,B_NMBR  //           numbers layer
    ,N_LYRS  //           numbers layer  // ... **tilde for building a 'tilded n'
    ,B_LYRS  //           numbers layer  // ... **tilde for building a 'tilded n'
    ,X_DVIM
    ,V_PVIM

// F_ALPH,
 ,G_NMBR
 ,H_LYRS
 ,T_SYMB
 ,Y_SYMB
// ,J_ALPH
 ,Z_ALPH
// N_NMBR,
 ,EN_ALPH

/*
OLD TAP_DANCE ON ALPHA: 
* R_AC_RE
* U_ACCE.
NEW TAP_DANCE ON ALPHA: 
* F_ALPH,
* G_NMBR,
* H_LYRS,
* T_SYMB,
* Y_SYMB,
* J_ALPH,
* Z_ALPH,
* N_NMBR,
* EN_ALPH

NEW TAP_DANCE ON LAYERS: 
* Q_P_SU_TB
* W_O_APP
* A_SH_CP
* SP_SH_CP
* LY_NMB
*/








// TAP DANCE KEYCODES ACCESSIBLE FROM *NMBR (NUMBERS LAYER)
    ,TRIP_0  //                          // ...  *  space / **          000
    ,DOUB_0  //                          // ...  * delete / **           00
//  ,SING_0  //                          // ...  *      0 / ** percentaje %
    ,DONMBR  //   return to *GHKN layer (gherkin default layer)  // ... dot
    ,SLNMBR  //   return to *GHKN layer (gherkin default layer)  // ... slash

// TAP DANCE KEYCODES ACCESSIBLE FROM *SYMB (SYMBOLS LAYER)
    ,BSL_CI  // backslash & circumflex accent
    ,QUOT_D  //     quote & double quote
    ,DO_EUR  //     dolar & euro
    ,EXCLAM  // american exclamation mark & inverted exclamation mark
    ,QUESTI  // american    question mark & inverted    question mark

// TAP DANCE KEYCODES FOR ACCENTS, ACCESSIBLE FROM *GHKN (GHERKIN DEFAULT LAYER)
    ,J_ACUT  // acute / grave accent  'á' / 'à'

// TAP DANCE KEYCODES FOR *SUSR (SUPER USER LAYER)
    ,LOGOUT   // logout user session
    ,HRESET   // on hold RESET keyboard
    ,SLEP_M   //   menu bar / (on hold) SLEEP
    ,KILM_D   //   dock bar / (on hold) KILL MENU
    ,KILA_T   //  tools bar / (on hold) KILL CURRENT APP
    ,SHUT_S   // status bar / (on hold) COMPUTER SHUT DOWN
    ,RSTT_F   // floating w / (on hold) COMPUTER   RESTART

// TAP DANCE BACKLIGHT
    ,BCKLIT   // accessing *BCKLIT layer from tap dance in *GHKN layer instead of *SUSR layer

// TAP DANCE FOR UNFOLDING KEYS INTO TWO FUNCTIONS IN *?VIM LAYERS
    ,SX_VIM                                                                 // NEW
    ,DA_VIM                                                                 // NEW
    ,MOU_ZV  //      SVIM or ZVIM layer                                     // NEW: SZ_VIM -> MOU_ZV  

// (i.e. KC_U: *'begin of line'/**'begin of paragraph')
    ,PVIM_uU ,PVIM_pP

    ,DVIM_uU ,DVIM_pP

    ,SVIM_uU ,SVIM_pP

// TAP DANCE FOR FUNCIONS

};

enum custom_keycodes { // IT BEGINS AT A SAFE_RANGE... (this is the last enum)

     BLIT_OFF = SAFE_RANGE


// MACROS for APPS layer
    ,APP_Q_QQQQQ ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_RRRRR ,APP_T_TERMI ,APP_Y_TYPIN ,APP_U_UUUUU ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF 
    ,APP_A_SNOTE ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME ,APP_H_SKTCH ,APP_J_SUBLI ,APP_K_KVIEW ,APP_L_CLNDR ,APP_SP_SPSP 
    ,APP_Z_STUDI ,APP_X_XXXXX ,APP_C_CALCU ,APP_V_VVVVV ,APP_B_BBBBB ,APP_N_NOTES ,APP_M_MAIL ,APP_ES_KEYN ,APP_BS_PAGE ,APP_EN_NUMB   
// macros for apps layer
////////////////////////////////////////////////////////////////////////////////////////////////////////



// MACROS for process_record_user()

// MACROS for BLIT 
    ,BLIT_01 ,BLIT_02 ,BLIT_03 ,BLIT_04 ,BLIT_05
    ,BLIT_06 ,BLIT_07 ,BLIT_08 ,BLIT_09 ,BLIT_10
    ,BLIT_11 ,BLIT_12 ,BLIT_13 ,BLIT_14 ,BLIT_15

                                        ,BRTH_00
    ,BRTH_01 ,BRTH_02 ,BRTH_03 ,BRTH_04 ,BRTH_05
    ,BRTH_06 ,BRTH_07 ,BRTH_08 ,BRTH_09 ,BRTH_10
             ,BRTH_12                   ,BRTH_15
// macros for blit
////////////////////////////////////////////////////////////////////////////////////////////////////////



    ,DICTAD

//[DELETE]
//    ,LAYER_IS
//[delete]
    ,PVIM_Y
    ,PVIM_H
    ,PVIM_N


                    ,DVIM_I  ,DVIM_O            // it's used tap_dance for U,P
    ,DVIM_H ,DVIM_J ,DVIM_K  ,DVIM_L  ,DVIM_SP
            ,DVIM_M ,DVIM_ES ,DVIM_BS ,DVIM_EN

    ,SVIM_Y                                    // it's used tap_dance for U,P
    ,SVIM_N

    ,XVIM_Y ,XVIM_U ,XVIM_I           ,XVIM_P
    ,XVIM_H ,XVIM_J ,XVIM_K  ,XVIM_L  ,XVIM_SP
    ,XVIM_N ,XVIM_M ,XVIM_ES ,XVIM_BS ,XVIM_EN

    ,ZVIM_Y ,ZVIM_U                   ,ZVIM_P
    ,ZVIM_H ,ZVIM_J ,ZVIM_K  ,ZVIM_L  ,ZVIM_SP
    ,ZVIM_N

    ,AVIM_Y ,AVIM_U ,AVIM_I  ,AVIM_O  ,AVIM_P
    ,AVIM_H ,AVIM_J                   ,AVIM_SP
    ,AVIM_N ,AVIM_M ,AVIM_ES

}; // enum custom keycodes


// GLOBAL VARIABLES

  static uint8_t shift_flag;
//  static uint8_t shift_flag_tmp;

   bool  left_shift_pressed  = false;
   bool right_shift_pressed  = false;
   bool accent_pressed       = false;
   bool acute_requested      = false;
   bool diaeresis_requested  = false;
   bool circumflex_requested = false;
   bool grave_requested      = false;

//   uint8_t actual_mods       = 0;

// [DELETEME] 
/*
   void enable_capslock_after_accents_function(void) {};  // MY CAPSLOCK RESET FUNCTION
   void disable_capslock_before_accents_function(void) {}; // MY CAPSLOCK FINISHED FUNCTION
   void acute_finished_function(void) {};
   void acute_reset_function(void) {};
*/
// [deleteme]
// [FIXME]  CHANGE TO BOOLEAN VARIABLES !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   uint8_t disabled_caps_before_accent = 0;
   uint8_t backlight_caps = 0;
   static uint8_t gherkinBacklightLevel = 0;
   static uint8_t gherkinBacklightLevelBeforeCapsLock = 0;   

// global variables


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                                                                                      */
/* TAP DANCE GENERAL SETUP SECTION START                                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
typedef struct {
	bool is_press_action;
	int  state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) 
  {
   if (state->interrupted || !state->pressed) 
   // IF the key has been pressed only once 
   // AND  (the key has been interrupted by pressing another key after it
   //       OR   the key is not pressed at present)
     return SINGLE_TAP;
     else 
     // IF  the key has been pressed only once
     // AND the key has not been interrupted
     // AND the key is still pressed  
       return SINGLE_HOLD;
    }
    else 
    { 
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
              return DOUBLE_HOLD;
            else
            // IF  the key has been pressed twice
            // AND the key has not being interrupted by pressing another key
            // AND the key is not pressed at present
              return DOUBLE_TAP;
        }
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
    }
}
/*                                                                                      */
/* TAP DANCE GENERAL SETUP SECTION END                                                  */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                                                                                      */
/* QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
void pvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p");
    send_string(key);
}

void dvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"d");
    send_string(key);
}

void svim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"s");
    send_string(key);
}

void xvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"x");
    send_string(key);
}

void zvim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"z");
    send_string(key);
}

void avim(char *key)
{
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"a");
    send_string(key);
}

void callApp(char *appName)
{
    register_code(KC_LGUI);   register_code (KC_SPC);
  unregister_code (KC_SPC); unregister_code(KC_LGUI);
    send_string  (appName); 
    // next delay is for avoiding that SpotLight remains on screen without calling our app
    _delay_ms(40); 
    register_code (KC_ENT); unregister_code (KC_ENT);
}  

//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] ACUTE & CAPSLOCK COMPLEMENTARY FUNCTIONS                                  */
/*            KC_A, KC_E, KC_I, KC_O, KC_U,                                             */
/*            KC_N                                                                      */
/*            KC_J                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
void press_capslock(void) { // MY CAPSLOCK FINISHED FUNCTION

  SEND_STRING(SS_DOWN(X_CAPSLOCK));
  register_code(KC_LCAP);

  if (backlight_caps == 0)
  {
    backlight_caps  = 1;
    breathing_period_set(BR_CAPS);
    breathing_enable();
    gherkinBacklightLevelBeforeCapsLock = gherkinBacklightLevel;
    gherkinBacklightLevel = BL_CAPS;
  }
  else
  {
    backlight_caps  = 0;
    breathing_period_set(BR_DFLT);
    breathing_disable();
    gherkinBacklightLevel = gherkinBacklightLevelBeforeCapsLock;
  }
  layer_clear();
} //  my capslock finished function

void release_capslock(void) {  // MY CAPSLOCK RESET FUNCTION
  unregister_code(KC_CAPS); SEND_STRING(SS_UP(X_CAPSLOCK));
}  // MY CAPSLOCK RESET FUNCTION

void capslock_tap(void) {
  //CAPS_LOCK tap
  SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
  register_code(KC_LCAP);            // press

  unregister_code(KC_CAPS);          // release
  SEND_STRING(SS_UP(X_CAPSLOCK));    // release
}

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (disabled_caps_before_accent == 1)
    {
      capslock_tap();
      disabled_caps_before_accent = 0;
  }
} // MY ENABLE_CAPSLOCK_AFTER_ACCENTS_FUNCTION

void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (backlight_caps == 1)
    {
      capslock_tap();
      disabled_caps_before_accent = 1;
    }
} // MY DISABLE_CAPSLOCK_BEFORE_ACCENTS_FUNCTION

void acute_finished_function(void) {
  register_code(KC_LALT); register_code(KC_E);
}

void acute_reset_function(void) {
  unregister_code(KC_E); unregister_code(KC_LALT);
}
void acute_accent_function(void) {
  register_code(KC_LALT); register_code(KC_E);
  unregister_code(KC_E); unregister_code(KC_LALT);
}
void diaeresis_accent_function(void) {
    register_code(KC_LALT); register_code(KC_U);
    unregister_code(KC_U);  unregister_code(KC_LALT);
}
void circumflex_accent_function(void) {
    register_code(KC_LALT); register_code(KC_I);
    unregister_code(KC_I);  unregister_code(KC_LALT);
}
void grave_accent_function(void) {
    register_code(KC_LALT); register_code(KC_GRAVE);
    unregister_code(KC_GRAVE);  unregister_code(KC_LALT);
}
void tilde_accent_function(void) {
    register_code(KC_LALT); register_code(KC_N);
    unregister_code(KC_N);  unregister_code(KC_LALT);
}
/*                                                                                      */
/*            KC_J                                                                      */
/*            KC_N                                                                      */
/*            KC_A, KC_E, KC_I, KC_O, KC_U,                                             */
/* [TAPDANCE] ACUTE & CAPSLOCK COMPLEMENTARY FUNCTIONS                                  */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_Q  -  Q _ S U S R  -  SUPER USER LAYER  -  TAB                         */
/*                                                                                      */
/*  KC_Q:  qQ  -  [SUSR]  -  TAB  -  [BLIT]                                             */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'Q_SUSR' tap dance.

/*
static tap Q_SUSR_tap_state = {
  .is_press_action = true,
  .state = 0
};
void Q_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  Q_SUSR_tap_state.state = cur_dance(state);
  switch (Q_SUSR_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_Q);     break;
    case SINGLE_HOLD:       layer_on(SUSR);          break;

    case DOUBLE_TAP:        register_code(KC_TAB);   break;

    case DOUBLE_HOLD:       layer_on(BLIT);          break;

    case DOUBLE_SINGLE_TAP: register_code(KC_Q); unregister_code(KC_Q);
                            register_code(KC_Q);     break;
  }
}
void Q_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Q_SUSR_tap_state.state) {
    case SINGLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_Q);   break;

    case SINGLE_HOLD:       layer_off(SUSR);         break;
    case DOUBLE_TAP:        unregister_code(KC_TAB); break;
    case DOUBLE_HOLD:       layer_off(BLIT);         break;
  }
  Q_SUSR_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [TAPDANCE] KC_Q  -  Q _ S U S R  -  SUPER USER LAYER  -  TAB                         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [LYRS] - [TAPDANCE] - KC_Q, KC_P :   S U _ T B  -  SUPER USER LAYER  -  TAB         */
/*                                                                                      */
/*  KC_Q, KC_P:   [Q_P_SU_TB]  -  TAB                                                   */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'Q_P_SU_TB' tap dance.
static tap Q_P_SU_TB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void Q_P_SU_TB_finished (qk_tap_dance_state_t *state, void *user_data) {
  Q_P_SU_TB_tap_state.state = cur_dance(state);
  switch (Q_P_SU_TB_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_TAB);   break;
    case SINGLE_HOLD:       layer_on(SUSR);          break;
    case DOUBLE_HOLD:       layer_on(BLIT);          break;
  }
}

void Q_P_SU_TB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Q_P_SU_TB_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_TAB);   break;
    case SINGLE_HOLD:       layer_off(SUSR);         break;
    case DOUBLE_HOLD:       layer_off(BLIT);         break;
  }
  Q_P_SU_TB_tap_state.state = 0;
}
/*                                                                                      */
/* [lyrs] - [tapdance] - kc_q, kc_p :   s u _ t b  -  super user layer  -  tab          */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE]  W _ A P P S                                                              */
/*                                                                                      */
/*  KC_W:  wW  -  [APPS]  -  [MAPS]                                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'W_APPS' tap dance.

/*
static tap W_APPS_tap_state = {
  .is_press_action = true,
  .state = 0
};
void W_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  W_APPS_tap_state.state = cur_dance(state);
  switch (W_APPS_tap_state.state) {
    case SINGLE_TAP:         register_code(KC_W); break;

    case DOUBLE_TAP:         
    case DOUBLE_SINGLE_TAP:  register_code(KC_W); unregister_code(KC_W);
                             register_code(KC_W); break;

    case SINGLE_HOLD:        
    case DOUBLE_HOLD:        layer_on(APPS);      break;
  }
}
void W_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (W_APPS_tap_state.state) {
    case SINGLE_TAP:         
    case DOUBLE_TAP:         
    case DOUBLE_SINGLE_TAP:  unregister_code(KC_W); break;

    case DOUBLE_HOLD:        HIDEOTH;
    case SINGLE_HOLD:        layer_off(APPS);       break;
  }
  W_APPS_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance]     w _ a p p s                                                           */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [LYRS] - [TAPDANCE] - KC_W, KC_O :   A P P S,   M A P S                              */
/*                                                                                      */
/*  KC_W, KC_O:   [APPS]  -  [MAPS]                                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'W_O_APP' tap dance.
static tap W_O_APP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void W_O_APP_finished (qk_tap_dance_state_t *state, void *user_data) {
  W_O_APP_tap_state.state = cur_dance(state);
  switch (W_O_APP_tap_state.state) {

    case SINGLE_HOLD:        
    case DOUBLE_HOLD:        layer_on(APPS);      break;
  }
}

void W_O_APP_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (W_O_APP_tap_state.state) {

    case DOUBLE_HOLD:        HIDEOTH;
    case SINGLE_HOLD:        layer_off(APPS);       break;
  }
  W_O_APP_tap_state.state = 0;
}
/*                                                                                      */
/* [lyrs] - [tapdance] - kc_w, kc_o :   a p p s,   m a p s                              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE]  [ALPH]  KC_R:   R, RIGHT ACCENTS TRIGGER,  RESET                         */
/*                                                                                      */
/*  KC_R:  rR  -  rr  RR  -  MANAGEMENT OF ALL KIND OF ACCENTS  -  RESET                */
/*                                                                                      */
/*                          (ACUTE, GRAVE, DIAERESIS, CIRCUMFLEX & TILDE) ACCENTS       */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_R :   R  -  ACUTE, DIAEREIS, GRAVE, CIRCUMFLEX  -  RESET    */
/*                                                                                      */
/*  R: FUNCTIONS USED BY R_AC_RE  ( R_ACCENTS_RESET )                                   */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
// RESET MY KEYBOARD FUNCTION
//
// [EXAMPLE] 
//     Using a delay between keystrokes with the following function: '_delay_ms(milliseconds)'
//       case DOUBLE_SINGLE_TAP: _delay_ms(1000); register_code(KC_R); break;
//     Using the function: 'reset_keyboard()'' into my function 'reset_my_keyboard_function()'
// [example]
//
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      // ends backlight triple blink
                      reset_keyboard();

}  // reset my keyboard function

//instantalize an instance of 'tap' for the 'R_AC_RE' tap dance.
static tap R_AC_RE_tap_state = {
  .is_press_action = true,
  .state = 0
};
void R_AC_RE_finished(qk_tap_dance_state_t* state, void* user_data) {
    R_AC_RE_tap_state.state = cur_dance(state);
    shift_flag = get_mods()&LSHIFT_MODS;

  switch (R_AC_RE_tap_state.state) {

    case TRIPLE_TAP: 
    case TRIPLE_SINGLE_TAP: register_code(KC_R); unregister_code(KC_R);

    case DOUBLE_TAP: 
    case DOUBLE_SINGLE_TAP: register_code(KC_R); unregister_code(KC_R);

    case SINGLE_TAP:        register_code(KC_R);           break;

    case SINGLE_HOLD:       acute_requested      = true;   break;

    case DOUBLE_HOLD:       diaeresis_requested  = true;   break;

    case TRIPLE_HOLD:       grave_requested      = true;   break;

    case QUADRUPLE_HOLD:    circumflex_requested = true;   break;

    case QUINTUPLE_HOLD:  // starts backlight triple blink RESET function
                            reset_my_keyboard_function();  break;
  }
}

void R_AC_RE_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (R_AC_RE_tap_state.state) {

        case SINGLE_TAP:            
        case DOUBLE_TAP:            
        case DOUBLE_SINGLE_TAP:     
        case TRIPLE_TAP: 
        case TRIPLE_SINGLE_TAP:     unregister_code(KC_R); break;        

        case SINGLE_HOLD:         acute_requested = false; break;

        case DOUBLE_HOLD:     diaeresis_requested = false; break;

        case TRIPLE_HOLD:         grave_requested = false; break;

        case QUADRUPLE_HOLD: circumflex_requested = false; break;
    }
    R_AC_RE_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_r :   r  -  acute, diaereis, grave, circumflex  -  reset    */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_U :   U  -  ACUTE, DIAEREIS, GRAVE, CIRCUMFLEX              */
/*                                                                                      */
/*  KC_U:  uU  -  uu   UU  -  MANAGEMENT OF ALL KIND OF ACCENTS                         */
/*                                                                                      */
/*                          (ACUTE, GRAVE, DIAERESIS, CIRCUMFLEX & TILDE) ACCENTS       */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'U_ACCE' tap dance.
static tap U_ACCE_tap_state = {
  .is_press_action = true,
  .state = 0
};
void U_ACCE_finished(qk_tap_dance_state_t* state, void* user_data) {
    U_ACCE_tap_state.state = cur_dance(state);
    shift_flag = get_mods()&LSHIFT_MODS;

  switch (U_ACCE_tap_state.state) {

    case SINGLE_TAP:        action_function(NULL, U_VOWEL, U_VOWEL);
                            break;

    case TRIPLE_TAP: 
    case TRIPLE_SINGLE_TAP: register_code(KC_U); unregister_code(KC_U);

    case DOUBLE_TAP: 
    case DOUBLE_SINGLE_TAP: register_code(KC_U); unregister_code(KC_U);
                            register_code(KC_U);
                            break;

    case SINGLE_HOLD:       acute_requested      = true;   break;

    case DOUBLE_HOLD:       diaeresis_requested  = true;   break;

    case TRIPLE_HOLD:       grave_requested      = true;   break;

    case QUADRUPLE_HOLD:    circumflex_requested = true;   break;
  }
}

void U_ACCE_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (U_ACCE_tap_state.state) {

        case SINGLE_TAP:                                   break;

        case DOUBLE_TAP:            
        case DOUBLE_SINGLE_TAP:     unregister_code(KC_U); break;

        case SINGLE_HOLD:         acute_requested = false; break;

        case DOUBLE_HOLD:     diaeresis_requested = false; break;

        case TRIPLE_HOLD:         grave_requested = false; break;

        case QUADRUPLE_HOLD: circumflex_requested = false; break;
    }
    U_ACCE_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_u :   u  -  acute, diaereis, grave, circumflex              */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] O _ A P P S    -    M U L T I A P P S                                     */
/*                                                                                      */
/*  KC_O:  oO  -  accented oO  -  [APPS]  -  [MAPS]                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'O_APPS' tap dance.

/*
static tap O_APPS_tap_state = {
  .is_press_action = true,
  .state = 0
};
void O_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  O_APPS_tap_state.state = cur_dance(state);
  switch (O_APPS_tap_state.state) {

    case SINGLE_TAP:        action_function(NULL, O_VOWEL, O_VOWEL); break;

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_O); 
                            unregister_code(KC_O);
                            register_code(KC_O);                     break;

    case SINGLE_HOLD:       
    case DOUBLE_HOLD:       layer_on(APPS);                          break;
// [INFO]
//    case SINGLE_HOLD:     layer_state_set(0x00000002);             break;
// [info]
//
  }
}
void O_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (O_APPS_tap_state.state) {
    case DOUBLE_TAP:         
    case DOUBLE_SINGLE_TAP:  unregister_code(KC_O); break;

    case DOUBLE_HOLD:        HIDEOTH;
    case SINGLE_HOLD:        layer_off(APPS);       break;
  }
  O_APPS_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] o _ a p p s    -    m u l t i a p p s                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] P _ S U S R           S U P E R U S E R                                   */
/*                                                                                      */
/*  KC_P:  pP  -  pp  -  PP  -  [SUSR]                                                  */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'P_SUSR' tap dance.

/*
static tap P_SUSR_tap_state = {
  .is_press_action = true,
  .state = 0
};
void P_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  P_SUSR_tap_state.state = cur_dance(state);
  switch (P_SUSR_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_P);  break;

    case SINGLE_HOLD:       layer_on(SUSR);       break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P);  break;

    case DOUBLE_HOLD:       layer_on(BLIT);          break;
  }
}
void P_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (P_SUSR_tap_state.state) {
    case SINGLE_TAP:        
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_P);  break;

    case SINGLE_HOLD:       layer_off(SUSR);        break;
    case DOUBLE_HOLD:       layer_off(BLIT);          break;
  }
  P_SUSR_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] p _ s u p e r u s e r                                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
/*  KC_A:  aA  -  áÁ  -  LSHIFT  -  C A P S L O C K                                     */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'A_CAPS' tap dance.

/*
static tap A_CAPS_tap_state = {
  .is_press_action = true,
  .state = 0
};
void A_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {    
    A_CAPS_tap_state.state = cur_dance(state);
   // shift_flag = get_mods()&LSHIFT_MODS;  // ✳️ shift_flag is moved at the very beginning of (action_function)
  switch (A_CAPS_tap_state.state) {
    case SINGLE_TAP:        // SEND_STRING("\ncalling action_function with: NULL, A_VOWEL, A_VOWEL\n");
                            action_function(NULL, A_VOWEL, A_VOWEL);
                            break;
    case SINGLE_HOLD:       left_shift_pressed = true;
                            register_code(KC_LSFT); 
                            break;
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A);
                            break;
 // MY CAPSLOCK FINISHED FUNCTION (the function defined above)                           
    case DOUBLE_HOLD:       press_capslock();  
                            break;
*/
/*
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); break;
*/
/*                            
  }
}
void A_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (A_CAPS_tap_state.state) {
    case SINGLE_TAP:        // SEND_STRING("CALLED action_function\n");
                            break;
    case SINGLE_HOLD:       left_shift_pressed = false;
                            if (!right_shift_pressed) 
                            {
                                unregister_code(KC_LSFT);
                            }; break;
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_A);    break;
 // MY CAPSLOCK RESET FUNCTION (the function defined above)
    case DOUBLE_HOLD:       release_capslock();       break;  // MY CAPSLOCK RESET FUNCTION
*/
/*
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: unregister_code(KC_A);    break;
*/
/*
  }
  A_CAPS_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_a  -  c a p s l o c k  -                                               */
/*                                                                                      */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* Z_ALPH                                                                              */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_Z  :   Z   -   L _ S H I F T                                */
/*                                                                                      */
/*  KC_Z:  zZ   -   zzZZ   -   zzzZZZ  -  LSHIFT                                        */
/*                                                                                      */
// ************************************************************************************ //
//instantalize an instance of 'tap' for the 'Z_ALPH' tap dance.

static tap Z_ALPH_tap_state = {
  .is_press_action = true,
  .state = 0
};
void Z_ALPH_finished (qk_tap_dance_state_t *state, void *user_data) {    
    Z_ALPH_tap_state.state = cur_dance(state);
   // shift_flag = get_mods()&LSHIFT_MODS;  // ✳️ shift_flag is moved at the very beginning of (action_function)
  switch (Z_ALPH_tap_state.state) {

    case SINGLE_HOLD:       left_shift_pressed = true;
                            register_code(KC_LSFT); 
                            break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_Z); unregister_code(KC_Z);

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_Z); unregister_code(KC_Z);

    case SINGLE_TAP:        register_code(KC_Z); break;                            
  }
}
void Z_ALPH_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Z_ALPH_tap_state.state) {

    case SINGLE_HOLD:       left_shift_pressed = false;
                            if (!right_shift_pressed) 
                            {
                                unregister_code(KC_LSFT);
                            }; break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP:
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: 
    case SINGLE_TAP:        unregister_code(KC_Z); break;
  }
  Z_ALPH_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_z :   z   -   l _ s h i f t   -   kc_z                      */
/*                                                                                      */
/* Z_ALPH                                                                              */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* EN_ALPH                                                                             */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_ENT :   ENTER   -   L _ S H I F T                           */
/*                                                                                      */
/*  KC_Z:  ENTER   -   L_SHIFT                                                          */
/*                                                                                      */
// ************************************************************************************ //
//instantalize an instance of 'tap' for the 'EN_ALPH' tap dance.

static tap EN_ALPH_tap_state = {
  .is_press_action = true,
  .state = 0
};
void EN_ALPH_finished (qk_tap_dance_state_t *state, void *user_data) {    
    EN_ALPH_tap_state.state = cur_dance(state);
   // shift_flag = get_mods()&LSHIFT_MODS;  // ✳️ shift_flag is moved at the very beginning of (action_function)
  switch (EN_ALPH_tap_state.state) {

    case SINGLE_HOLD:       right_shift_pressed = true;
                            register_code(KC_LSFT); 
                            break;


    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_ENT); unregister_code(KC_ENT);

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_ENT); unregister_code(KC_ENT);

    case SINGLE_TAP:        register_code(KC_ENT);
                            break;
  }
}
void EN_ALPH_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EN_ALPH_tap_state.state) {

    case SINGLE_HOLD:       right_shift_pressed = false;
                            if (!left_shift_pressed) 
                            {
                                unregister_code(KC_LSFT);
                            }; break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: 

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: 

    case SINGLE_TAP:        unregister_code(KC_ENT); 
                            break;
  }
  EN_ALPH_tap_state.state = 0;
}

/*                                                                                      */
/* [alph] - [tapdance] - kc_en :   enter   -   l _ s h i f t                            */
/*                                                                                      */
/* EN_ALPH                                                                             */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* A_SH_CP   < - - - >   SP_SH_CP                                                       */
/*                                                                                      */
/*    KC_A   < - - - >   KC_SPACE                                                       */
/*                                                                                      */
/* [LYRS] - [TAPDANCE] - KC_A :   S H I F T   -   C A P S L O C K                       */
/*                                                                                      */
/* KC_A:  LSHIFT  -  CAPSLOCK                                                           */
/*                                                                                      */
// ************************************************************************************ //
//instantalize an instance of 'tap' for the 'A_SH_CP' tap dance.
static tap A_SH_CP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void A_SH_CP_finished (qk_tap_dance_state_t *state, void *user_data) {    
    A_SH_CP_tap_state.state = cur_dance(state);

  switch (A_SH_CP_tap_state.state) {
                         // MY CAPSLOCK FINISHED FUNCTION (the function defined above)                           
    case SINGLE_TAP:        press_capslock();  
                            break;

    case SINGLE_HOLD:       left_shift_pressed = true;
                            register_code(KC_LSFT); 
                            break;
  }
}

void A_SH_CP_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (A_SH_CP_tap_state.state) {
                         // MY CAPSLOCK RESET FUNCTION
    case SINGLE_TAP:        release_capslock();       
                            break;

    case SINGLE_HOLD:       left_shift_pressed = false;
                            if (!right_shift_pressed) 
                            {
                                unregister_code(KC_LSFT);
                            }; break;
  }
  A_SH_CP_tap_state.state = 0;
}
/*                                                                                      */
/* [lyrs] - [tapdance] - kc_a :   s h i f t   -   c a p s l o c k                       */
/*                                                                                      */
/* A_SH_CP                                                                              */
// ************************************************************************************ //


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* A_SH_CP   < - - - >   SP_SH_CP                                                       */
/*                                                                                      */
/*    KC_A   < - - - >   KC_SPACE                                                       */
/*                                                                                      */
/* [LYRS] - [TAPDANCE] - KC_SP :   S H I F T   -   C A P S L O C K                      */
/*                                                                                      */
/*  KC_SP:  LSHIFT  -  CAPSLOCK                                                         */
/*                                                                                      */
// ************************************************************************************ //
//instantalize an instance of 'tap' for the 'SP_SH_CP' tap dance.
static tap SP_SH_CP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SP_SH_CP_finished (qk_tap_dance_state_t *state, void *user_data) {    
    SP_SH_CP_tap_state.state = cur_dance(state);

  switch (SP_SH_CP_tap_state.state) {
                         // MY CAPSLOCK FINISHED FUNCTION (the function defined above)                           
    case SINGLE_TAP:        press_capslock();  
                            break;

    case SINGLE_HOLD:       right_shift_pressed = true;
                            register_code(KC_LSHIFT); 
                            break;
  }
}

void SP_SH_CP_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SP_SH_CP_tap_state.state) {
                        //  MY CAPSLOCK RESET FUNCTION
    case SINGLE_TAP:        release_capslock();       
                            break;

    case SINGLE_HOLD:   //  release LSHIFT
                            right_shift_pressed = false;
                            if (!left_shift_pressed) {
                              unregister_code(KC_LSHIFT);
                            }; break;
  }
  SP_SH_CP_tap_state.state = 0;
}
/*                                                                                      */
/* [lyrs] - [tapdance] - kc_sp :   s h i f t   -   c a p s l o c k                      */
/*                                                                                      */
/* SP_SH_CP                                                                             */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_F  -  C A P S L O C K  -  KC_F                                         */
/*                                                                                      */
/*  KC_F:  fF  -  LGUI  -  C A P S L O C K                                              */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'F_CAPS' tap dance.

/*
static tap F_CAPS_tap_state = {
  .is_press_action = true,
  .state = 0
};
void F_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  F_CAPS_tap_state.state = cur_dance(state);
  switch (F_CAPS_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_F); break;
    case SINGLE_HOLD:       register_code(KC_LGUI); break;

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;

    case DOUBLE_HOLD:       press_capslock(); break;  // MY CAPSLOCK FINISHED FUNCTION
*/    
/*
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;
*/
/*                            
  }
}
void F_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (F_CAPS_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_F); break;
    case SINGLE_HOLD:       unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: unregister_code(KC_F); break;

    case DOUBLE_HOLD:       release_capslock(); break;  // MY CAPSLOCK RESET FUNCTION
*/    
/*
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: unregister_code(KC_F);    break;
*/
/*    
  }
  F_CAPS_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_f  -  c a p s l o c k  -  kc_f                                         */
/*                                                                                      */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* F_ALPH                                                                              */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_F :   KC_F   -   P V I M                                    */
/*                                                                                      */
/*  KC_F:   fF  -  ffFF  -  fffFFF  -  PVIM                                             */
/*                                                                                      */
// ************************************************************************************ //
//instantalize an instance of 'tap' for the 'F_ALPH' tap dance.

/*
static tap F_ALPH_tap_state = {
  .is_press_action = true,
  .state = 0
};

void F_ALPH_finished (qk_tap_dance_state_t *state, void *user_data) {
  F_ALPH_tap_state.state = cur_dance(state);
  switch (F_ALPH_tap_state.state) {

    case DOUBLE_HOLD:       layer_on(PVIM); break;  // MY CAPSLOCK FINISHED FUNCTION

// [BEAUTIFUL & CLEAN CODE]...
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);

    case SINGLE_TAP:        register_code(KC_F); break;
// [beautiful & clean code]...
  }
}

void F_ALPH_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (F_ALPH_tap_state.state) {
    case SINGLE_TAP:
    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP:
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: unregister_code(KC_F);    break;

    case DOUBLE_HOLD:       layer_off(PVIM); break;  // MY CAPSLOCK RESET FUNCTION

    
  }
  F_ALPH_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [alph] - [tapdance] - kc_f :   kc_f   -   p v i m                                    */
/*                                                                                      */
/* F_ALPH                                                                              */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_J  -  A C U T E    &   G R A V E    A C C E N T  -  KC_J               */
/*                                                                                      */
/*  KC_J:  jJ  -  LGUI  -  ACUTE ACCENT  -  GRAVE ACCENT                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'J_ACUT' tap dance.

/*
static tap J_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};
void J_ACUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  J_ACUT_tap_state.state = cur_dance(state);
  switch (J_ACUT_tap_state.state) {

    case SINGLE_TAP:        register_code(KC_J); break;

    case SINGLE_HOLD:       register_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: disable_capslock_before_accents_function(); // caps_lock will not affect accent
                            acute_finished_function(); break;  // acute accent
  }
}
void J_ACUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (J_ACUT_tap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_J); break;

    case SINGLE_HOLD:       unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: acute_reset_function(); 
                            enable_capslock_after_accents_function(); break;
  }
  J_ACUT_tap_state.state = 0;
}
*/
/*                                                                                      */
/* [tapdance] kc_j  -  a c u t e    &   g r a v e    a c c e n t  -  kc_j               */
/*                                                                                      */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* J_ALPH                                                                              */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_J :   KC_J   -   A C U T E    A C C E N T                   */
/*                                                                                      */
/*  KC_J:  jJ   -   ACUTE ACCENT   -   jjjJJJ                                           */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'J_ALPH' tap dance.

/*
static tap J_ALPH_tap_state = {
  .is_press_action = true,
  .state = 0
};

void J_ALPH_finished (qk_tap_dance_state_t *state, void *user_data) {
  J_ALPH_tap_state.state = cur_dance(state);
  switch (J_ALPH_tap_state.state) {

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: disable_capslock_before_accents_function(); // caps_lock will not affect accent
                            acute_finished_function(); break;  // acute accent

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_J); unregister_code(KC_J);
                            register_code(KC_J); unregister_code(KC_J);
    case SINGLE_TAP:        register_code(KC_J); break;
  }
}

void J_ALPH_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (J_ALPH_tap_state.state) {

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: acute_reset_function(); 
                            enable_capslock_after_accents_function(); break;

    case SINGLE_TAP:
    case TRIPLE_TAP:
    case TRIPLE_SINGLE_TAP: unregister_code(KC_J);    break;

  }
  J_ALPH_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [alph] - [tapdance] - kc_j :   kc_j   -   a c u t e    a c c e n t                   */
/*                                                                                      */
/* J_ALPH                                                                              */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                  [TAPDANCE] KC_SP  -  S P A C E  -  L S H I F T                      */
/*                                                                                      */
/*  KC_SP:  SPACE  -  LEFT SHIFT                                                        */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SP_SHF' tap dance.

/*
static tap SP_SHF_tap_state = {
  .is_press_action = true,
  .state = 0
};
void SP_SHF_finished (qk_tap_dance_state_t *state, void *user_data) {
  SP_SHF_tap_state.state = cur_dance(state);
  switch (SP_SHF_tap_state.state) {

    case SINGLE_TAP:        register_code(KC_SPC);    break;

    case SINGLE_HOLD:       right_shift_pressed = true;
                            register_code(KC_LSHIFT); break;
//
// [INFO]
// another way of press LSHIFT instead of register_code(KC_LSHIFT) is the following:
//                                add_mods(LSHIFT_MODS); // shift_flag
//                                send_keyboard_report();
// [info]
//
  }
}
void SP_SHF_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SP_SHF_tap_state.state) {
    
    case SINGLE_TAP:        unregister_code(KC_SPC); break;

    case SINGLE_HOLD:       //  release LSHIFT
                            right_shift_pressed = false;
                            if (!left_shift_pressed) {
                              unregister_code(KC_LSHIFT);
                            }; break;
//
// [INFO]
// another way of release LSHIFT instead of unregister_code(KC_LSHIFT) is the following:
//                                del_mods(LSHIFT_MODS); // shift_flag
//                                send_keyboard_report();
// [info]
//
  }
  SP_SHF_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_sp  -  l e f t    s h i f t  -                                         */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_C:   MOUSE / FUNCTIONS  LAYERS                       */
/*                                                                                      */
/*  KC_C:  MOUS / FNCT                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'MOU_FN' tap dance.

/*
static tap MOU_FN_tap_state = {
  .is_press_action = true,
  .state = 0
};
void MOU_FN_finished(qk_tap_dance_state_t* state, void* user_data) {
    MOU_FN_tap_state.state = cur_dance(state);
    switch (MOU_FN_tap_state.state) {

        case SINGLE_TAP:   register_code(KC_C);   break;

        case SINGLE_HOLD:  layer_on(MOUS);        break;
        
        case DOUBLE_HOLD:  layer_on(FNCT);        break;
    }
}

void MOU_FN_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (MOU_FN_tap_state.state) {

        case SINGLE_TAP:   unregister_code(KC_C); break;

        case SINGLE_HOLD:  layer_off(MOUS);       break;
        
        case DOUBLE_HOLD:  layer_off(FNCT);       break;
    }
    MOU_FN_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_c  -  m o u s e  /  f u n c t i o n     l a y e r                      */
/*                                                                                      */
// ************************************************************************************ //


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_ESC:   E S C A P E    -     F N C T   /   F N C T    */
/*                                                                                      */
/*  KC_ESC:  ESC   -   FNCT / FNCT                                                      */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'ESC_FN' tap dance.

/*static tap ESC_FN_tap_state = {
  .is_press_action = true,
  .state = 0
};
void ESC_FN_finished(qk_tap_dance_state_t* state, void* user_data) {
    ESC_FN_tap_state.state = cur_dance(state);
    switch (ESC_FN_tap_state.state) {

        case SINGLE_TAP:   register_code(KC_ESC); break;

        case SINGLE_HOLD:  
        case DOUBLE_HOLD:  layer_on(FNCT);        break;
    }
}

void ESC_FN_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (ESC_FN_tap_state.state) {

        case SINGLE_TAP:   unregister_code(KC_ESC); break;

        case SINGLE_HOLD:  
        case DOUBLE_HOLD:  layer_off(FNCT);         break;
    }
    ESC_FN_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_esc  -  fnct / fnct                                                      */
/*                                                                                      */
// ************************************************************************************ //








//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_B  -  B _ N M B R  -  KC_B                                             */
/*                                                                                      */
/*  KC_B:  bB  -  [NMBR] toggle layer -  [NMBR] fix layer                               */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'B_NMBR' tap dance.

/*
static tap B_NMBR_tap_state = {
  .is_press_action = true,
  .state = 0
};

void B_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  B_NMBR_tap_state.state = cur_dance(state);
  switch (B_NMBR_tap_state.state) {
    case SINGLE_TAP:    register_code(KC_B); break;

    case DOUBLE_HOLD:
    case SINGLE_HOLD:// SWITCH temporarily [NMBR] ON
                  //      layer_clear();
                        layer_on(NMBR);
                  //      breathing_period_set(BR_NMBR);
                  //      breathing_enable();
                        break;
*/
/*    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break;
*/
/*
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;
  }
}

void B_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (B_NMBR_tap_state.state) {
    case SINGLE_TAP:    
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_B); break;

    case SINGLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_clear();
                      break;      
*/
/*    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break;
*/
/*
    case DOUBLE_HOLD:    // I left it intentionally empty for allowing 'SET [NMBR] ON' works properly
                        break;
  }
  B_NMBR_tap_state.state = 0;
}
*/
/*                                                                                      */
/* [tapdance] kc_b  -  b _ n m b r  -  kc_b                                             */
/*                                                                                      */
// ************************************************************************************ //








//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* LY_NMB                                                                               */
/*                                                                                      */
/* [LYRS] - [TAPDANCE] - KC_B, KC_N :   N _ N M B R S                                   */
/*                                                                                      */
/*  KC_B, KC_N:     [NMBR] toggle layer -  [NMBR] set layer up                          */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'LY_NMB' tap dance.
static tap LY_NMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void LY_NMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  LY_NMB_tap_state.state = cur_dance(state);
  switch (LY_NMB_tap_state.state) {

    case DOUBLE_HOLD:
    case SINGLE_HOLD:// SWITCH temporarily [NMBR] ON
                  //      layer_clear();
                        layer_on(NMBR);
                  //      breathing_period_set(BR_NMBR);
                  //      breathing_enable();
                        break;

/*    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break; */
  }
}

void LY_NMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (LY_NMB_tap_state.state) {

    case SINGLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_off(NMBR);
                      break;      

/*    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was selected ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was selected ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break; */

    case DOUBLE_HOLD:// I left it intentionally empty for allowing 'SET [NMBR] ON' works properly
                        break;
  }
  LY_NMB_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] [lyrs] kc_b, kc_n  -   n _ n m b r s   -   kc_b, kc_n                     */
/*                                                                                      */
/* LY_NMB                                                                               */
// ************************************************************************************ //





//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_T  -  T _ S Y M B  -  KC_T                                             */
/*                                                                                      */
/*  KC_T:  tT  -  tt  -  TT  -  [SYMB]                                                  */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'T_SYMB' tap dance.


static tap T_SYMB_tap_state = {
  .is_press_action = true,
  .state = 0
};
void T_SYMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  T_SYMB_tap_state.state = cur_dance(state);
  switch (T_SYMB_tap_state.state) {

    case SINGLE_HOLD:// SWITCH temporarily [SYMB] ON
                  //      layer_clear();
                        layer_on(SYMB);
                  //      breathing_period_set(BR_SYMB);
                  //      breathing_enable();
                        break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_T); unregister_code(KC_T);

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_T); unregister_code(KC_T);

    case SINGLE_TAP:        register_code(KC_T); break;
  }
}
void T_SYMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (T_SYMB_tap_state.state) {
    case SINGLE_TAP:    
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_T); break;

/*
    case SINGLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_clear();
                      break;
*/

    case SINGLE_HOLD:// Return to [SYMB] OFF
                        layer_off(SYMB);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break;

  }
  T_SYMB_tap_state.state = 0;
}

/*                                                                                      */
/* [tapdance] kc_t  -  t _ s y m b  -  kc_t                                             */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_Y  -  Y _ S Y M B  -  KC_Y                                             */
/*                                                                                      */
/*  KC_Y:  yY  -  yy  -  YY  -  [SYMB]                                                  */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'Y_SYMB' tap dance.



static tap Y_SYMB_tap_state = {
  .is_press_action = true,
  .state = 0
};
void Y_SYMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  Y_SYMB_tap_state.state = cur_dance(state);
  switch (Y_SYMB_tap_state.state) {

    case SINGLE_HOLD:// SWITCH temporarily [SYMB] ON
                    //    layer_clear();
                        layer_on(SYMB);
                    //    breathing_period_set(BR_SYMB);
                    //    breathing_enable();
                        break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_Y); unregister_code(KC_Y);

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_Y); unregister_code(KC_Y);

    case SINGLE_TAP:        register_code(KC_Y); break;
  }
}
void Y_SYMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Y_SYMB_tap_state.state) {
    case SINGLE_TAP:    
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_Y); break;

/*
    case SINGLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_clear();
                      break;      
*/
    case SINGLE_HOLD:// Return to [SYMB] OFF
                        layer_off(SYMB);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break;

  }
  Y_SYMB_tap_state.state = 0;
}

/*                                                                                      */
/* [tapdance] kc_y  -  y _ s y m b  -  kc_y                                             */
/*                                                                                      */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* G_NMBR                                                                               */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_G :     KC_G   -   G _ N M B R S    -   C A P S L O C K     */
/*                                                                                      */
/*  KC_G:   gG   -   ggGG   -   gggGGG   -  [NMBR]   -   CAPSLOCK                       */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'G_NMBR' tap dance.
static tap G_NMBR_tap_state = {
  .is_press_action = true,
  .state = 0
};

void G_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  G_NMBR_tap_state.state = cur_dance(state);
  switch (G_NMBR_tap_state.state) {

    case SINGLE_HOLD:       
    case DOUBLE_HOLD:       layer_on(NMBR); break;

// [BEAUTIFUL & CLEAN CODE]...
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_G); unregister_code(KC_G);

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_G); unregister_code(KC_G);

    case SINGLE_TAP:        register_code(KC_G); break;
// [beautiful & clean code]...

  }
}

void G_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (G_NMBR_tap_state.state) {

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP:
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP:
    case SINGLE_TAP:  unregister_code(KC_G); break;

    case SINGLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_off(NMBR);
                      break;      
    case DOUBLE_HOLD:// I left it intentionally empty for allowing 'SET [NMBR] ON' works properly
                        break;
  }
  G_NMBR_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_g :     kc_g   -   g _ n m b r s                            */
/*                                                                                      */
/* G_NMBR                                                                               */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* H_LYRS                                                                               */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_H :     KC_H   -   H _ L Y R S    -   C A P S L O C K       */
/*                                                                                      */
/*  KC_H:   hH   -   hhHH   -   hhhHHH   -   [LYRS]   -   CAPSLOCK                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'H_LYRS' tap dance.
static tap H_LYRS_tap_state = {
  .is_press_action = true,
  .state = 0
};

void H_LYRS_finished (qk_tap_dance_state_t *state, void *user_data) {
  H_LYRS_tap_state.state = cur_dance(state);
  switch (H_LYRS_tap_state.state) {

    case SINGLE_HOLD:       layer_on(LYRS);   break;
    case DOUBLE_HOLD:       press_capslock(); break;

// [BEAUTIFUL & CLEAN CODE]...
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_H); unregister_code(KC_H);

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_H); unregister_code(KC_H);

    case SINGLE_TAP:        register_code(KC_H); break;
// [beautiful & clean code]...

  }
}

void H_LYRS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (H_LYRS_tap_state.state) {

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP:
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP:
    case SINGLE_TAP:  unregister_code(KC_H); break;

    case SINGLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_off(LYRS);
                      break;      
/* case SINGLE_HOLD:// Return to [SYMB] OFF
                        layer_off(SYMB);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break; */
    case DOUBLE_HOLD: release_capslock(); break;
  }
  H_LYRS_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_h :     kc_h   -   h _ l y r s                              */
/*                                                                                      */
/* H_LYRS                                                                               */
// ************************************************************************************ //







//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_N  -  N _ N M B R  -  KC_N                                             */
/*                                                                                      */
/*  KC_N:  nN  -  [NMBR] toggle layer  -  ˜ ñÑ  -   [NMBR] fix layer                    */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'N_NMBR' tap dance.


/*
static tap N_NMBR_tap_state = {
  .is_press_action = true,
  .state = 0
};

void N_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_NMBR_tap_state.state = cur_dance(state);
  switch (N_NMBR_tap_state.state) {
    case SINGLE_TAP:    
                        action_function(NULL, N_TILDE, N_TILDE); break;

    case SINGLE_HOLD:// SWITCH temporarily [NMBR] ON
    case DOUBLE_HOLD: 
                  //      layer_clear();
                        layer_on(NMBR);
                  //      breathing_period_set(BR_NMBR);
                  //      breathing_enable();
                        break;

                     // ~ for making a ñ
    case DOUBLE_TAP:    register_code(KC_LALT); register_code(KC_N); break;
*/
/*    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                  //      breathing_period_set(BR_NMBR);
                  //      breathing_enable();
                        break;
*/
/*
    case DOUBLE_SINGLE_TAP: register_code(KC_N); unregister_code(KC_N); register_code(KC_N); break;

                         // ñ
    case TRIPLE_HOLD:       
    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_N);
                            unregister_code(KC_N);  unregister_code(KC_LALT);
                            register_code(KC_N);    break;

  }
}

void N_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_NMBR_tap_state.state) {
    case SINGLE_TAP:    break;
    case SINGLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_clear();
                      break;      

*/
/*    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();

                        if (!backlight_caps)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break;
*/
/*
    case DOUBLE_TAP:        unregister_code(KC_N); unregister_code(KC_LALT); break;

    case DOUBLE_HOLD:    // I left it intentionally empty for allowing 'SET [NMJFBR] ON' works properly
                            break;

    case DOUBLE_SINGLE_TAP: 
    case TRIPLE_HOLD:       
    case TRIPLE_TAP:        unregister_code(KC_N); 
                            //register_code(KC_NO); unregister_code(KC_NO);
                            break;
  }
  N_NMBR_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_n  -  n _ n m b r  -  kc_n                                             */
/*                                                                                      */
// ************************************************************************************ //








//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* B_LYRS                                                                               */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_B :   KC_B   -   L A Y E R S                                */
/*                                                                                      */
/*  KC_B:  bB   -   bbBB   -   bbbBBB   [LYRS] toggle layer                             */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'B_LYRS' tap dance.
static tap B_LYRS_tap_state = {
  .is_press_action = true,
  .state = 0
};

void B_LYRS_finished (qk_tap_dance_state_t *state, void *user_data) {
  B_LYRS_tap_state.state = cur_dance(state);
  switch (B_LYRS_tap_state.state) {

    case SINGLE_HOLD:       layer_on(LYRS); break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B);

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B);

    case SINGLE_TAP:        register_code(KC_B); break;


  }
}

void B_LYRS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (B_LYRS_tap_state.state) {

    case SINGLE_HOLD: layer_off(LYRS);
                      if (backlight_caps)
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

    case TRIPLE_HOLD:       
    case TRIPLE_TAP:
    case TRIPLE_SINGLE_TAP:
    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP:    
    case SINGLE_TAP:          unregister_code(KC_B); break;
  }
  B_LYRS_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_b :   kc_b   -   l a y e r s                                */
/*                                                                                      */
/* B_LYRS                                                                               */
// ************************************************************************************ //




//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* N_LYRS                                                                               */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_N :   KC_N   -   L A Y E R S   -   ñÑ                       */
/*                                                                                      */
/*  KC_N:  nN   -   nnNN   -   ñÑ   -   [LYRS] toggle layer                             */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'N_LYRS' tap dance.
static tap N_LYRS_tap_state = {
  .is_press_action = true,
  .state = 0
};

void N_LYRS_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_LYRS_tap_state.state = cur_dance(state);
  switch (N_LYRS_tap_state.state) {

    case SINGLE_HOLD:       layer_on(LYRS); break;

    case SINGLE_TAP:        action_function(NULL, N_TILDE, N_TILDE); break;

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_N); unregister_code(KC_N);
                            register_code(KC_N); break;

    case TRIPLE_HOLD:    // ñ  
    case TRIPLE_TAP:
    case TRIPLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_N);
                            unregister_code(KC_N);  unregister_code(KC_LALT);
                            register_code(KC_N);    break;

  }
}

void N_LYRS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_LYRS_tap_state.state) {

    case SINGLE_HOLD: layer_off(LYRS);
                      if (backlight_caps)
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

    case TRIPLE_HOLD:       
    case TRIPLE_TAP:
    case TRIPLE_SINGLE_TAP:
    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP:   unregister_code(KC_N);  
    case SINGLE_TAP:          break;
  }
  N_LYRS_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_n :   kc_n   -   l a y e r s   -   ññ                       */
/*                                                                                      */
/* N_LYRS                                                                               */
// ************************************************************************************ //






//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* X_DVIM                                                                               */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_X :   KC_X   -   D V I M                                    */
/*                                                                                      */
/*  KC_X:  xX   -   xxXX   -   [DVIM] toggle layer                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'X_DVIM' tap dance.
static tap X_DVIM_tap_state = {
  .is_press_action = true,
  .state = 0
};

void X_DVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  X_DVIM_tap_state.state = cur_dance(state);
  switch (X_DVIM_tap_state.state) {

    case SINGLE_HOLD:       layer_on(DVIM); break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_X); unregister_code(KC_X);

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_X); unregister_code(KC_X);

    case SINGLE_TAP:        register_code(KC_X); break;

  }
}

void X_DVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (X_DVIM_tap_state.state) {

    case SINGLE_HOLD: layer_off(DVIM);
                      if (backlight_caps)
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

    case TRIPLE_TAP:
    case TRIPLE_SINGLE_TAP:
    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP:    
    case SINGLE_TAP:          unregister_code(KC_X); break;
  }
  X_DVIM_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_x :   kc_x   -   x _ d v i m                                */
/*                                                                                      */
/* X_DVIM                                                                               */
// ************************************************************************************ //






//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* V_PVIM                                                                               */
/*                                                                                      */
/* [ALPH] - [TAPDANCE] - KC_V :   KC_V   -   P V I M                                    */
/*                                                                                      */
/*  KC_V:  vV   -   vvVV   -   [DVIM] toggle layer                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'V_PVIM' tap dance.
static tap V_PVIM_tap_state = {
  .is_press_action = true,
  .state = 0
};

void V_PVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  V_PVIM_tap_state.state = cur_dance(state);
  switch (V_PVIM_tap_state.state) {

    case SINGLE_HOLD:       layer_on(PVIM); break;
    case DOUBLE_HOLD:       press_capslock(); break;

    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_V); unregister_code(KC_V);

    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP: register_code(KC_V); unregister_code(KC_V);

    case SINGLE_TAP:        register_code(KC_V); break;

  }
}

void V_PVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (V_PVIM_tap_state.state) {

    case SINGLE_HOLD: layer_off(PVIM);
                      if (backlight_caps)
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

    case DOUBLE_HOLD: release_capslock(); break;

    case TRIPLE_TAP:
    case TRIPLE_SINGLE_TAP:
    case DOUBLE_TAP:
    case DOUBLE_SINGLE_TAP:    
    case SINGLE_TAP:          unregister_code(KC_V); break;
  }
  V_PVIM_tap_state.state = 0;
}
/*                                                                                      */
/* [alph] - [tapdance] - kc_v :   kc_v   -   v _ p v i m                                */
/*                                                                                      */
/* V_PVIM                                                                               */
// ************************************************************************************ //






//////////////////////////////////////////////////////////////////////////////////////////
//           T A P   D A N C E    F O R  - ( S Y M B O L S     L A Y E R ) -            //
//////////////////////////////////////////////////////////////////////////////////////////




//           B A C K S L A S H     - ( S Y M B O L ) -    C I R C U M F L E X           //
//instantalize an instance of 'tap' for the 'BSL_CI' tap dance.
static tap BSL_CI_tap_state = {
  .is_press_action = true,
  .state = 0
};

void BSL_CI_finished (qk_tap_dance_state_t *state, void *user_data) {
  BSL_CI_tap_state.state = cur_dance(state);
  switch (BSL_CI_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_BSLS); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        register_code(KC_LSFT); register_code(KC_6); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_BSLS); unregister_code(KC_BSLS); register_code(KC_BSLS); break;
  }
}

void BSL_CI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (BSL_CI_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_BSLS); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        unregister_code(KC_6); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_BSLS); break;
  }
  BSL_CI_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  B A C K S L A S H  【🔴】  - ( S Y M B O L ) -  【🔴】  C I R C U M F L E X  【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q U O T E    『🔵』  - ( S Y M B O L ) -  『🔵』    D O U B L E    Q U O T E S  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'QUOT_D' tap dance.
static tap QUOT_D_tap_state = {
  .is_press_action = true,
  .state = 0
};

void QUOT_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUOT_D_tap_state.state = cur_dance(state); 
  switch (QUOT_D_tap_state.state) {

    case SINGLE_TAP:        register_code(KC_QUOT);                         break; // single quote

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_LSFT); register_code(KC_QUOT); break; // double quotes
  }
}

void QUOT_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUOT_D_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_QUOT); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
  }
  QUOT_D_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  Q U O T E    【🔴】  - ( S Y M B O L ) -  【🔴】    D O U B L E    Q U O T E S  【🔴】【🔴】【🔴】






// 『🔵』『🔵』『🔵』  D O L L A R    『🔵』  - ( S Y M B O L ) -  『🔵』    E U R O  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'DO_EUR' tap dance.
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
//instantalize an instance of 'tap' for the 'DO_EUR' tap dance.
static tap DO_EUR_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DO_EUR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DO_EUR_tap_state.state = cur_dance(state);
  switch (DO_EUR_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT); register_code(KC_4);                         break;  // dollar

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;  // euro
  }
}

void DO_EUR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DO_EUR_tap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_4); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  DO_EUR_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  D O L L A R    【🔴】  - ( S Y M B O L ) -  【🔴】    E U R O  【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  E X C L A M A T I O N    M A R K _ S  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'EXCLAM' tap dance.
static tap EXCLAM_tap_state = {
  .is_press_action = true,
  .state = 0
};

void EXCLAM_finished (qk_tap_dance_state_t *state, void *user_data) {
  EXCLAM_tap_state.state = cur_dance(state);
  switch (EXCLAM_tap_state.state) {

    case SINGLE_TAP:        register_code(KC_LSFT); register_code(KC_1); break;  //  exclamation mark

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_1); break;  //  inverted exclamation mark
  }
}

void EXCLAM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EXCLAM_tap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_1); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_1); unregister_code(KC_LALT); break;
  }
  EXCLAM_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  E X C L A M A T I O N    M A R K _ S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q U E S T I O N    M A R K _ S  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'QUESTI' tap dance.
static tap QUESTI_tap_state = {
  .is_press_action = true,
  .state = 0
};

void QUESTI_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUESTI_tap_state.state = cur_dance(state);
  switch (QUESTI_tap_state.state) {

    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_SLSH);                         break;  //  question mark

    case DOUBLE_TAP:  
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;  // inverted question mark
  }
}

void QUESTI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUESTI_tap_state.state) {

    case SINGLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LSFT);                           break;

    case DOUBLE_TAP:  
    case SINGLE_HOLD: unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  QUESTI_tap_state.state = 0;
}





/*                                                                                     */
/*  X: ?, ¿                                                                            */
/*                                                                                     */
/*  [TAPDANCE]   QUESTI   //  Q U E S T I O N    M A R K                               */
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*   T A P   D A N C E    F O R :   S Y M B O L S    L A Y E R                         */
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*   T A P   D A N C E    F O R :   N U M B E R S    L A Y E R                         */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*                   [TAPDANCE]   TRIP_0     -     T R I P L E    Z E R O              */
/*                                                                                     */
/*  KC_A: BACKSPACE, 000                                                               */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'TRIP_0' tap dance.
static tap TRIP_0_tap_state = {
  .is_press_action = true,
  .state = 0
};

void TRIP_0_finished (qk_tap_dance_state_t *state, void *user_data) {
  TRIP_0_tap_state.state = cur_dance(state);
  switch (TRIP_0_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_SPC); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_0); unregister_code(KC_0); register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
  }
}

void TRIP_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TRIP_0_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_SPC); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0);   break;
  }
  TRIP_0_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_a  -  backspace, triple zero  -  kc_a                                  */
/*                                                                                      */
// ************************************************************************************ //


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*              [TAPDANCE] DOUB_0     -      DELETE,   D O U B L E   Z E R O            */
/*                                                                                      */
/*  KC_S:  DELETE, 00                                                                   */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'DOUB_0' tap dance.
static tap DOUB_0_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DOUB_0_finished (qk_tap_dance_state_t *state, void *user_data) {
  DOUB_0_tap_state.state = cur_dance(state);
  switch (DOUB_0_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_DEL); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
  }
}

void DOUB_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DOUB_0_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_DEL); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0); break;
  }
  DOUB_0_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_s  -  delete, double zero  -  kc_s                                     */
/*                                                                                      */
// ************************************************************************************ //


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*             [TAPDANCE] DONMBR into [NMBR]:  DOT,  N U M B E R S   L A Y E R   O F F  */
/*                                                                                      */
/*  KC_B:   KC_PDOT,  [NMBR]OFF                                                         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
// instantalize an instance of 'tap' for the 'DONMBR' tap dance.
static tap DONMBR_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DONMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DONMBR_tap_state.state = cur_dance(state);
  switch (DONMBR_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_PDOT); break;

    case DOUBLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_clear();
                      break;      

/*    case DOUBLE_HOLD:    // SET [NMBR] OFF
                            layer_off(NMBR);
                            breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                            breathing_enable();

                            if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                            {
                              breathing_period_set(BR_DFLT);
                              breathing_disable();
                            };
                            break; */
  }
}

void DONMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DONMBR_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PDOT); break;
  }
  DONMBR_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_b  -  kc_pdot, [nmbr]off  -  kc_b                                      */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*        [TAPDANCE] SLNMBR into [NMBR] :   SLASH,  N U M B E R S   L A Y E R   O F F   */
/*                                  l                                                   */
/*  KC_N:   KC_KP_SLASH,  [NMBR]OFFl                                                    */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SLNMBR' tap dance.
static tap SLNMBR_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SLNMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLNMBR_tap_state.state = cur_dance(state);
  switch (SLNMBR_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_PSLS); break;

    case DOUBLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_clear();
                      break;      
/*
    case DOUBLE_HOLD:    // SET [NMBR] OFF
                         // layer_clear();
                            layer_off(NMBR);
                            breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                            breathing_enable();

                            if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                            {
                              breathing_period_set(BR_DFLT);
                              breathing_disable();
                            };
                            break;*/
  }
}

void SLNMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNMBR_tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PSLS); break;
  }
  SLNMBR_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_n  -  kc_pslash, [nmbr]off  -  kc_n                                    */
/*                                                                                      */
// ************************************************************************************ //
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R  - ( N U M B E R S     L A Y E R ) -  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_Z into [PVIM]:   SVIM   /   XVIM                     */
/*                                                                                      */
/*  KC_Z:  SVIM / XVIM                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'SX_VIM' tap dance.

/*
static tap SX_VIM_tap_state = {
  .is_press_action = true,
  .state = 0
};
void SX_VIM_finished(qk_tap_dance_state_t* state, void* user_data) {
    SX_VIM_tap_state.state = cur_dance(state);

    switch (SX_VIM_tap_state.state) {
        case SINGLE_HOLD:  layer_on(SVIM);  break;
        case DOUBLE_HOLD:  layer_on(XVIM);  break;
    }
}

void SX_VIM_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (SX_VIM_tap_state.state) {
        case SINGLE_HOLD:  layer_off(SVIM); break;
        case DOUBLE_HOLD:  layer_off(XVIM); break;
    }
    SX_VIM_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_z  -  svim / xvim                                                      */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_X into [PVIM]:   DVIM   /   AVIM                     */
/*                                                                                      */
/*  KC_X:  DVIM / AVIM                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'DA_VIM' tap dance.

/*
static tap DA_VIM_tap_state = {
  .is_press_action = true,
  .state = 0
};
void DA_VIM_finished(qk_tap_dance_state_t* state, void* user_data) {
    DA_VIM_tap_state.state = cur_dance(state);

    switch (DA_VIM_tap_state.state) {
        case SINGLE_HOLD:  layer_on(DVIM);  break;
        case DOUBLE_HOLD:  layer_on(AVIM);  break;
    }
}

void DA_VIM_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (DA_VIM_tap_state.state) {
        case SINGLE_HOLD:  layer_off(DVIM); break;
        case DOUBLE_HOLD:  layer_off(AVIM); break;
    }
    DA_VIM_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_x  -  dvim / avim                                                      */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_C into [PVIM]:   MOUS   /   ZVIM                     */
/*                                                                                      */
/*  KC_C:  MOUS / ZVIM                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'MOU_ZV' tap dance.

/*
static tap MOU_ZV_tap_state = {
  .is_press_action = true,
  .state = 0
};
void MOU_ZV_finished(qk_tap_dance_state_t* state, void* user_data) {
    MOU_ZV_tap_state.state = cur_dance(state);

    switch (MOU_ZV_tap_state.state) {
        case SINGLE_HOLD:  layer_on(MOUS);  break;
        case DOUBLE_HOLD:  layer_on(ZVIM);  break;
    }
}

void MOU_ZV_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (MOU_ZV_tap_state.state) {
        case SINGLE_HOLD:  layer_off(MOUS); break;
        case DOUBLE_HOLD:  layer_off(ZVIM); break;
    }
    MOU_ZV_tap_state.state = 0;
}
*/

/*                                                                                      */
/* [tapdance] kc_c  -  mous / zvim                                                      */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_U [ PVIM ]  -  B E G I N N I N G   O F   L I N E  /  P A R A G R A P H */
/*                                                                                      */
/*  KC_U:   B E G I N N I N G   O F    L I N E  /  P A R A G R A P H                    */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'PVIM_uU' tap dance.
static tap PVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void PVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  PVIM_uU_tap_state.state = cur_dance(state);
  switch (PVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_UP);
                          unregister_code(KC_UP);   unregister_code(KC_LALT); break;
  }
  PVIM_uU_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_u  [ pvim ]  -  beginning of line  /  paragraph                        */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_P [ PVIM ]    -    E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
/*  KC_P:   E N D   O F   L I N E  /  P A R A G R A P H                                 */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'PVIM_pP' tap dance.
static tap PVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void PVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  PVIM_pP_tap_state.state = cur_dance(state);
  switch (PVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_DOWN);
                          unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
  }
  PVIM_pP_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_p  [ pvim ]  -  end of line  /  paragraph                              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                           D E L E T E     T O                                        */
/* [TAPDANCE] KC_U [ DVIM ]  -  B E G I N N I N G   O F   L I N E  /  P A R A G R A P H */
/*                                                                                      */
/*  KC_U:  D E L E T E   T O   B E G I N N I N G   O F    L I N E  /  P A R A G R A P H */
/*                                                                                      */
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
/*                                                                                      */
/* [tapdance] kc_u  [ dvim ]  -  delete to beginning of line  /  paragraph              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                             D E L E T E      T O                                     */
/* [TAPDANCE] KC_P [ DVIM ]    -    E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
/*  KC_P:   D E L E T E     T O     E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
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
}
/*                                                                                      */
/* [tapdance] kc_p  [ dvim ]  -  delete to end of line  /  paragraph                    */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                           S E L E C T     T O                                        */
/* [TAPDANCE] KC_U [ SVIM ]  -  B E G I N N I N G   O F   L I N E  /  P A R A G R A P H */
/*                                                                                      */
/*  KC_U:  S E L E C T   T O   B E G I N N I N G   O F    L I N E  /  P A R A G R A P H */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SVIM_uU' tap dance.
static tap SVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  SVIM_uU_tap_state.state = cur_dance(state);
  switch (SVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);   register_code(KC_LGUI);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI); unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);  register_code(KC_LALT);   register_code(KC_UP);
                         unregister_code(KC_UP); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                            break;
  }
  SVIM_uU_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_u  [ svim ]  -  select to beginning of line  /  paragraph              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                           S E L E C T     T O                                        */
/* [TAPDANCE] KC_P [ SVIM ]    -    E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
/*  KC_P:  S E L E C T   T O   E N D   O F   L I N E  /  P A R A G R A P H              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SVIM_pP' tap dance.
static tap SVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  SVIM_pP_tap_state.state = cur_dance(state);
  switch (SVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);   register_code(KC_LGUI);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);   register_code(KC_LALT);   register_code(KC_DOWN);
                          unregister_code(KC_DOWN); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                            break;
  }
  SVIM_pP_tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_p  [ svim ]  -  select to end of line  /  paragraph                    */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//               T A P   D A N C E   F O R  -  V   I   M  -  L A Y E R S                //
//////////////////////////////////////////////////////////////////////////////////////////













// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R   - S U P E R U S E R     L A Y E R ) -   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

// 『🔵』『🔵』『🔵』   reset(SUSR)     -   R E S E T (HRESET) -   reset(SUSR)  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'HRESET' tap dance.
static tap HRESET_tap_state = {
  .is_press_action = true,
  .state = 0
};

void HRESET_finished (qk_tap_dance_state_t *state, void *user_data) {
  HRESET_tap_state.state = cur_dance(state);
  switch (HRESET_tap_state.state) {

///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀    reset_keyboard();   🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
    case SINGLE_HOLD: // starts backlight triple blink and then reset the keyboard for about 7 seconds
                      reset_my_keyboard_function();
                      break;
  }
}

void HRESET_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (HRESET_tap_state.state) {
    case SINGLE_HOLD:        break;
  }
  HRESET_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   reset(SUSR)     -   R E S E T (HRESET) -   reset(SUSR)  【🔴】【🔴】【🔴】

/*

case RESTARTING:
      if (record->event.pressed) {
        register_code(KC_POWER); _delay_ms(500); unregister_code(KC_POWER);
        SEND_STRING("r");
      }
      return false;
      break;

    case SHUT_DOWNING:
      if (record->event.pressed) {
        register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
        register_code(KC_ENT); unregister_code(KC_ENT);
      }
      return false;
      break;


*/


// 『🔵』『🔵』『🔵』   L O G O U T   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'LOGOUT' tap dance.
static tap LOGOUT_tap_state = {
  .is_press_action = true,
  .state = 0
};

void LOGOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  LOGOUT_tap_state.state = cur_dance(state);
  switch (LOGOUT_tap_state.state) {
    case SINGLE_TAP:  
                      break;

                      // (guessed by try and fail method)
                      // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
                      // if we add ALT, we don't have to answer any menu, we logout directly
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_Q);
                      unregister_code(KC_Q); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      break;
  }
}

void LOGOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (LOGOUT_tap_state.state) {
    case SINGLE_TAP:  
                     
    case SINGLE_HOLD: break;
  }
  LOGOUT_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   L O G O U T   【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   M E N U   B A R   /   S L E E P   『🔵』『🔵』『🔵』
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

            /* The KC_EJCT keycode doesn't work with QMK, but with KarabinerElements works vey well*/
                  /*register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_EJCT);*/

////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                    */
/*   KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down)    */
/*                                                                                                    */
/*                          register_code(KC_POWER);                                                  */
/*                                                                                                    */
////////////////////////////////////////////////////////////////////////////////////////////////////////
  }
}

void SLEP_M_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLEP_M_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F2); unregister_code(KC_LCTL); break;
                     
    case SINGLE_HOLD: /* if we unregister_code(KC_POWER) here, at SLEP_M_reset
                         it will appear the POWER dialog box and we have to press the related initial letter
                         or chosing an option with the mouse.

                         unregister_code(KC_POWER);
                      */

                      /*
                      unregister_code(KC_EJCT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      */
                      break;                       
  }
  SLEP_M_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   M E N U   B A R   /   S L E E P   【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』    D O C K   B A R   /   K I L L   M E N U    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'KILM_D' tap dance.
static tap KILM_D_tap_state = {
  .is_press_action = true,
  .state = 0
};

void KILM_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILM_D_tap_state.state = cur_dance(state);
  switch (KILM_D_tap_state.state) {

    case SINGLE_TAP:  //clear_keyboard();
                      register_code(KC_LCTL);   register_code  (KC_F3);
                      break;
                      // SEND_STRING(SS_LALT(SS_LGUI("d")));
                            
    case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */
  }
}

void KILM_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILM_D_tap_state.state) {

    case SINGLE_TAP:  unregister_code  (KC_F3); unregister_code(KC_LCTL);
                      //unregister_code(KC_D); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      break;
                     
    case SINGLE_HOLD: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); 
                      break;
                            
  }
  KILM_D_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】    D O C K   B A R   /   K I L L   M E N U    【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』    T O O L S   B A R    /   F O R C E   T O   K I L L   C U R R E N T   A P P    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'KILA_T' tap dance.
static tap KILA_T_tap_state = {
  .is_press_action = true,
  .state = 0
};

void KILA_T_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILA_T_tap_state.state = cur_dance(state);
  switch (KILA_T_tap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F5);
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */


  }
}

void KILA_T_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILA_T_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F5); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT); 
                      break;
          
  }
  KILA_T_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】    T O O L S   B A R    /   F O R C E   T O   K I L L   C U R R E N T   A P P    【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   S T A T U S   B A R    /    S H U T   D O W N    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'SHUT_S' tap dance.
static tap SHUT_S_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data) {
  SHUT_S_tap_state.state = cur_dance(state);
  switch (SHUT_S_tap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F8);
                      break;
    case SINGLE_HOLD:                        
    case DOUBLE_TAP:  register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
                      register_code(KC__VOLUP); unregister_code(KC__VOLUP);

                  //  keystrokes for shutting down:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);

                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   

                      break;

                   // Another way for shutting down, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_ENT); unregister_code(KC_ENT);

                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      */
  }
}

void SHUT_S_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SHUT_S_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F8); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  SHUT_S_tap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   S T A T U S   B A R    /    S H U T   D O W N    【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』    F L O A T I N G   W I N D O W   /   R E S T A R T    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'RSTT_F' tap dance.
static tap RSTT_F_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RSTT_F_finished (qk_tap_dance_state_t *state, void *user_data) {
  RSTT_F_tap_state.state = cur_dance(state);
  switch (RSTT_F_tap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F6);
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  
                  //  keystrokes for restarting:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);
                      
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);

                      break;

                   // Another way for restarting, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_R); unregister_code(KC_R);

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
// 【🔴】【🔴】【🔴】    F L O A T I N G   W I N D O W   /   R E S T A R T    【🔴】【🔴】【🔴】

// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R   - S U P E R U S E R     L A Y E R ) -   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// END - my own tap_dance harvest
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION END /////

//Tap Dance Definitions
//THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION
qk_tap_dance_action_t tap_dance_actions[] = {
//
// [INFO]
// ACTION_TAP_DANCE_DUAL_ROLE(kc, layer): Sends the kc keycode when tapped once, ...
//   ... or moves to layer. (this is similar to the keycode: 'TO' layer)
// [info]
//
// [A_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// Other declarations would go here, separated by commas, if you have them
//
// LAYERS
//  [Q_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q_SUSR_finished, Q_SUSR_reset)
  [Q_P_SU_TB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q_P_SU_TB_finished, Q_P_SU_TB_reset)

// ,[P_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, P_SUSR_finished, P_SUSR_reset)

// RUNNING APPS
// ,[W_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, W_APPS_finished, W_APPS_reset)
// ,[O_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, O_APPS_finished, O_APPS_reset)
 ,[W_O_APP] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, W_O_APP_finished, W_O_APP_reset)
 //running apps

// ACTIVATES ACCENTS VARIABLE
 ,[R_AC_RE]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, R_AC_RE_finished,  R_AC_RE_reset,  170)
 ,[U_ACCE]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, U_ACCE_finished,   U_ACCE_reset,   170)

 ,[Z_ALPH]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, Z_ALPH_finished,  Z_ALPH_reset,  170)
 ,[EN_ALPH] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, EN_ALPH_finished, EN_ALPH_reset, 170) 

/*
 ,[T_SYMB]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, T_SYMB_finished, T_SYMB_reset, 180)
 ,[Y_SYMB]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, Y_SYMB_finished, Y_SYMB_reset, 180)
*/

// ,[F_ALPH] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, F_ALPH_finished, F_ALPH_reset, 180)
// ,[J_ALPH] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, J_ALPH_finished, J_ALPH_reset, 180)  

 ,[A_SH_CP]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, A_SH_CP_finished,  A_SH_CP_reset,  170) // remove _TIME
 ,[SP_SH_CP] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SP_SH_CP_finished, SP_SH_CP_reset, 170) // remove _TIME

/*
 ,[G_NMBR]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, G_NMBR_finished, G_NMBR_reset, 180)
 ,[H_LYRS]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, H_LYRS_finished, H_LYRS_reset, 180)
*/

 /*
 ,[N_LYRS]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, N_LYRS_finished, N_LYRS_reset, 180)
 ,[B_LYRS]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, B_LYRS_finished, B_LYRS_reset, 180)
 */

 ,[X_DVIM]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, X_DVIM_finished, X_DVIM_reset, 180)
 ,[V_PVIM]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, V_PVIM_finished, V_PVIM_reset, 180)
 ,[LY_NMB]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, LY_NMB_finished, LY_NMB_reset, 170)

// activates accents variable

// ACCENTS & CAPSLOCK

/*
 ,[A_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, A_CAPS_finished, A_CAPS_reset, 180)
 ,[F_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, F_CAPS_finished, F_CAPS_reset)
 ,[J_ACUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, J_ACUT_finished, J_ACUT_reset)  // it includes J->command tap dance funcionality
*/
// accents & capslock

// SPACE / SHIFT
// ,[SP_SHF]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SP_SHF_finished, SP_SHF_reset, 180)
// space / shift


// MOUSE / FUNCTIONS
// ,[MOU_FN] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, MOU_FN_finished, MOU_FN_reset, 250)
// ,[ESC_FN] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, ESC_FN_finished, ESC_FN_reset, 250)
// mouse / functions
// ,[G_SYMB] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, G_SYMB_finished, G_SYMB_reset, 170)
// ,[H_SYMB] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, H_SYMB_finished, H_SYMB_reset, 170)

// ACCESSING NUMBERS
// ,[B_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, B_NMBR_finished, B_NMBR_reset)
// ,[N_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_NMBR_finished, N_NMBR_reset)
// accessing numbers

// VIM LAYERS
// SVIM / XVIM
// ,[SX_VIM]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SX_VIM_finished, SX_VIM_reset, 250)
// DVIM / AVIM
// ,[DA_VIM]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, DA_VIM_finished, DA_VIM_reset, 250)
// MOUS / ZVIM
// ,[MOU_ZV]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, MOU_ZV_finished, MOU_ZV_reset, 250)
// vim layers

// SYMBOLS (TWO IN A KEY)


 ,[BSL_CI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BSL_CI_finished, BSL_CI_reset)
 ,[QUOT_D] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_D_finished, QUOT_D_reset)
 ,[DO_EUR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DO_EUR_finished, DO_EUR_reset)
 ,[EXCLAM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, EXCLAM_finished, EXCLAM_reset)
 ,[QUESTI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUESTI_finished, QUESTI_reset)

// symbols (two in a key)

// NUMPAD
 ,[TRIP_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TRIP_0_finished, TRIP_0_reset)
 ,[DOUB_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DOUB_0_finished, DOUB_0_reset)
 
 ,[SLNMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNMBR_finished, SLNMBR_reset)
 ,[DONMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DONMBR_finished, DONMBR_reset)
//numpad

//SUSR
 ,[LOGOUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, LOGOUT_finished, LOGOUT_reset)
 ,[HRESET]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)
 ,[SLEP_M]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)
 ,[KILM_D]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILM_D_finished, KILM_D_reset)
 ,[KILA_T]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILA_T_finished, KILA_T_reset)
 ,[SHUT_S]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SHUT_S_finished, SHUT_S_reset)
 ,[RSTT_F]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSTT_F_finished, RSTT_F_reset)
 //susr 

// PVIM
 ,[PVIM_uU] = ACTION_TAP_DANCE_FN(PVIM_uU_function)
 ,[PVIM_pP] = ACTION_TAP_DANCE_FN(PVIM_pP_function)
// pvim

// DVIM
 ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
 ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// dvim

// SVIM
 ,[SVIM_uU] = ACTION_TAP_DANCE_FN(SVIM_uU_function)
 ,[SVIM_pP] = ACTION_TAP_DANCE_FN(SVIM_pP_function)
// svim

};

////////////////////////////////////////////////////////////////////////////////////////////////////////

void matrix_init_user(void) {

  breathing_disable();

  //backlight_level(BL_GHKN);

  // set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
} // end of matrix_init_user





////////////////////////////////////////////////////////////////////////////////////////////////////////

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Keymap ALPH 0: gherkin default layer
  * ,--------------------------------------------. ,--------------------------------------------.
  * |        |        |accented|        |        | |        |accented|accented|accented|        |
  * |    Q   |    W   |    E   |    R   |   T    | |    Y   |    U   |    I   |    O   |    P   |
  * |        |        |        |  5* RST|        | |        |        |        |        |        |
  * |        |        |        |1.4* ACC| *[SYMB]| | *[SYMB]|1.4* ACC|        |        |        |
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |accented|        |        |        |        | |        |        |        |        |        |
  * |    A   |    S   |    D   |    F   |    G   | |    H   |    J   |    K   |    L   |  Space |
  * |        |        |        |        |        | |        |        |        |        |        |
  * |        |        |        |        | *[NMBR]| | *[SYMB]|        |        |        |        |
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |        |        |        |        |        | |        |        |        |        |        |
  * |    Z   |    X   |    C   |    V   |    B   | |    N   |    M   | Escape |Bckspace|  Enter |
  * |        |        |        |@@ Caps |        | |        |        |        |        |        |
  * |  LSft  | *[DVIM]|        | *[PVIM]| *[LYRS]| | *[LYRS]|        |        |        |  LSft  |
  * '--------------------------------------------' '--------------------------------------------'
  *  LEGENDS for all KEYMAPS:
  *   * access a layer  through one    tap
  *  ** access a layer  through double tap
  *  ## SET    a layer  through double tap
  *  @@ get a keystroke through double tap
  */
[ALPH] = LAYOUT_ortho_3x10(  // layer 0 : default layer
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,------------+---------------+-----------+------------+----------------++---------------+------------+-----------+-----------+------------.
           KC_Q,           KC_W, F(E_VOWEL), TD(R_AC_RE), LT(SYMB, KC_T),   LT(SYMB, KC_Y),  TD(U_ACCE), F(I_VOWEL), F(O_VOWEL),       KC_P, \
//|------------|---------------|-----------+------------+----------------||---------------|------------+-----------+-----------+------------|
     F(A_VOWEL),           KC_S,       KC_D,        KC_F, LT(NMBR, KC_G),   LT(SYMB, KC_H),        KC_J,       KC_K,       KC_L,     KC_SPC, \
//|------------|---------------|-----------+------------+----------------||---------------|------------+-----------+-----------+------------|
     TD(Z_ALPH), LT(DVIM, KC_X),       KC_C,  TD(V_PVIM), LT(LYRS, KC_B),   LT(LYRS, KC_N),        KC_M,     KC_ESC,    KC_BSPC, TD(EN_ALPH) ),
//|------------+---------------+-----------+------------+----------------++---------------+------------+-----------+-----------+------------.
// END OF ALPH 0kffff
//

/*
OLD TAP_DANCE ON ALPHA: 
* R_AC_RE
* U_ACCE.
NEW TAP_DANCE ON ALPHA: 
* F_ALPH,
* G_NMBR,
* H_LYRS,
* J_ALPH,
* Z_ALPH,
* N_LYRS,
* EN_ALPH.
*/

/*
////////////////////////////////////////////////////////////////////////////////////////////////////////
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
*/
 /* Keymap GHKN 0: gherkin default layer
  * ,--------------------------------------------. ,--------------------------------------------.
  * |@@ Tab  |        |        |        |        | |        |        |        |        |        |
  * |    Q   |    W   |    E   |    R   |   T    | |    Y   |    U   |    I   |    O   |    P   |
  * |**[BLIT]|**[MAPS]|        |  5* RST|        | |        |        |        |**[MAPS]|**[BLIT]|
  * | *[SUSR]| *[APPS]|        |1.4* ACC| [TEST] | |        |1.4* ACC|        | *[APPS]| *[SUSR]|
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |@@ Caps |        |        |@@ Caps |        | |        |        |        |        |        |
  * |    A   |    S   |    D   |    F   |    G   | |    H   |    J   |    K   |    L   |  Space |
  * |        |        |        |        |        | |        |@@ Acute|        |        |        |
  * |  LSft  |  LCtl  |  LAlt  |  LGui  | [SYMB] | | [SYMB] |  LGui  |  LAlt  |  LCtl  |  LSft  |
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |        |        |        |        |        | |        |        |        |        |        |
  * |    Z   |    X   |    C   |    V   |    B   | |    N   |    M   | Escape |Bckspace|  Enter |
  * |        |        |**[FNCT]|        |##[NMBR]| |##[NMBR]|        |**[FNCT]|        |        |
  * |[L_XTND]| [DVIM] | *[MOUS]| [PVIM] | *[NMBR]| | *[NMBR]| [PVIM] | *[FNCT]| [DVIM] |[R_XTND]|
  * '--------------------------------------------' '--------------------------------------------'
  *  LEGENDS for all KEYMAPS:
  *   * access a layer  through one    tap    
  *  ** access a layer  through double tap
  *  ## SET    a layer  through double tap
  *  @@ get a keystroke through double tap
  */
/*
[GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default layer
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-----------------+---------------+-------------+---------------+----------------++---------------+---------------+-------------+------------------+-------------------.
          TD(Q_SUSR),     TD(W_APPS),   F(E_VOWEL),    TD(R_AC_RE), LT(TEST, KC_T),   LT(BLIT, KC_Y),     TD(U_ACCE),   F(I_VOWEL),        TD(O_APPS),        TD(P_SUSR), \
//|-----------------|---------------|-------------+---------------+----------------||---------------|---------------+-------------+------------------+-------------------|
          TD(A_CAPS),   LCTL_T(KC_S), LALT_T(KC_D),     TD(F_CAPS),     TD(G_SYMB),       TD(H_SYMB),     TD(J_ACUT), LALT_T(KC_K),      LCTL_T(KC_L),        TD(SP_SHF), \
//|-----------------|---------------|-------------+---------------+----------------||---------------|---------------+-------------+------------------+-------------------|
    LT(L_XTND, KC_Z), LT(DVIM, KC_X),   TD(MOU_FN), LT(PVIM, KC_V),     TD(B_NMBR),       TD(N_NMBR), LT(PVIM, KC_M),   TD(ESC_FN), LT(DVIM, KC_BSPC), LT(R_XTND, KC_ENT) ),
//|-----------------+---------------+-------------+---------------+----------------++---------------+---------------+-------------+------------------+-------------------.
// END OF GHKN 0
////////////////////////////////////////////////////////////////////////////////////////////////////////
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////

 /* Keymap LYRS 1: gherkin layers
  * ,--------------------------------------------. ,--------------------------------------------.
  * |   Tab  |        |        |        |        | |        |        |        |        |   Tab  |
  * |        |        |        |        |        | |        |        |        |        |        |
  * |**[BLIT]|**[MAPS]|        |        |        | |        |        |        |**[MAPS]|**[BLIT]|
  * | *[SUSR]| *[APPS]| *[FNCT]|        | *[SYMB]| | *[SYMB]|        | *[FNCT]| *[APPS]| *[SUSR]|
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |  Caps  |        |        |        |        | |        |        |        |        |  Caps  |
  * |        |        |        |        |        | |        |        |        |        |        |
  * |        |        |        |        |        | |        |        |        |        |        |
  * |  LSft  |  LCtl  |  LAlt  |  LGui  | *[SYMB]| | *[SYMB]|  LGui  |  LAlt  |  LCtl  |  LSft  |
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |        |        |        |        |        | |        |        |        |        |        |
  * |        |        |        |        |        | |        |        |        |        |        |
  * |        |        |        |        |##[NMBR]| |##[NMBR]|        |        |        |        |
  * | *L_XTND| *[DVIM]| *[MOUS]| *[PVIM]| *[NMBR]| | *[NMBR]| *[PVIM]| *[FNCT]| *[DVIM]| *R_XTND|
  * '--------------------------------------------' '--------------------------------------------'
  *  LEGENDS for all KEYMAPS:
  *   * access a layer  through one    tap    
  *  ** access a layer  through double tap
  *  ## SET    a layer  through double tap
  *  @@ get a keystroke through double tap
  */

/*
NEW TAP_DANCE ON LAYERS: 
* Q_P_SU_TB
* W_O_APP
* A_SH_CP
* SP_SH_CP
* LY_NMB
*/

[LYRS] = LAYOUT_ortho_3x10(  // layer 1 : default layer
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,--------------+------------+---------+---------+------------++-----------+---------+---------+------------+---------------.
    TD(Q_P_SU_TB), TD(W_O_APP), MO(FNCT),  XXXXXXX,   MO(SYMB),     MO(SYMB),  XXXXXXX, MO(FNCT), TD(W_O_APP), TD(Q_P_SU_TB), \
//|--------------|------------|---------+---------+------------||-----------|---------+---------+------------+---------------|
      TD(A_SH_CP),     KC_LCTL,  KC_LALT,  KC_LGUI,   MO(SYMB),     MO(SYMB),  KC_LGUI,  KC_LALT,     KC_LCTL,  TD(SP_SH_CP), \
//|--------------|------------|---------+---------+------------||-----------|---------+---------+------------+---------------|
       MO(L_XTND),    MO(DVIM), MO(MOUS), MO(PVIM), TD(LY_NMB),   TD(LY_NMB), MO(PVIM), MO(MOUS),    MO(DVIM),     MO(R_XTND) ),
//|--------------+------------+---------+---------+------------++-----------+---------+---------+------------+---------------.
// END OF LYRS 1
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap NMBR 1: numbers layer
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* | SPACE|DELETE|      |   =  | $ / €||   -  |   4  |   5  |   6  |   +  |
* |  000 |  00  |   0  |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* | ENTER|BCKSPC|  TAB |   ,  |   .  ||   /  |   1  |   2  |   3  |   *  |
* |      |      |      |      |      ||      |      |      |      |      |
* `----------------------------------'`----------------------------------'
*/
[NMBR] = LAYOUT_ortho_3x10(  // layer 2 : numbers layer
  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,-----------+------------+-------+--------+------------++-----------+------+------+------+---------.
            KC_1,        KC_2,   KC_3,    KC_4,       KC_5,         KC_6,  KC_7,  KC_8,  KC_9,    KC_0,
  //|-----------|------------|-------+--------+------------||-----------|------+------+------+---------|
      TD(TRIP_0),  TD(DOUB_0),  KC_P0, KC_PEQL, TD(DO_EUR),      KC_PMNS,  KC_4,  KC_5,  KC_6, KC_PPLS,
  //|-----------|------------|-------+--------+------------||-----------|------+------+------+---------|
         KC_PENT,     KC_BSPC, KC_TAB, KC_COMM, TD(DONMBR),   TD(SLNMBR),  KC_1,  KC_2,  KC_3, KC_PAST ),
  //,-----------+------------+-------+--------+------------++-----------+------+------+------+---------.
  // END OF NMBR 2
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap SYMB 2: symbols Layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |   `  |   ~  |   =  |   _  |   %  || \  ^ |   (  |   )  |   *  |   /  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | '  " |   @  |   +  |   -  | $   €||   |  |   {  |   }  |   :  |   ;  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | !  ¡ | ?  ¿ |   <  |   >  |   #  ||   &  |   [  |   ]  |   ,  |   .  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// SYMBOLS 
[SYMB] = LAYOUT_ortho_3x10(  // layer 3: symbols layer
//,------------+-----------+---------------+---------------+------------++-----------+---------------+-------------+-------------+---------------.
         KC_GRV,    KC_TILD,         KC_EQL,        KC_UNDS,    KC_PERC,   TD(BSL_CI),        KC_LPRN,      KC_RPRN,      KC_ASTR,       KC_SLSH,
//|------------|-----------|---------------+---------------+------------||-----------|---------------+-------------+-------------+---------------|
    TD(QUOT_D),       KC_AT,        KC_PLUS,        KC_MINS,  TD(DO_EUR),      KC_PIPE,        KC_LCBR,      KC_RCBR,      KC_COLN,       KC_SCLN,
//|------------|-----------|---------------+---------------+------------||-----------|---------------+-------------+-------------+---------------|
    TD(EXCLAM),  TD(QUESTI),        KC_LABK,        KC_RABK,    KC_HASH,      KC_AMPR,        KC_LBRC,      KC_RBRC,      KC_COMM,        KC_DOT ),
//,------------+-----------+---------------+---------------+------------++-----------+---------------+-------------+-------------+---------------.
// [info] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
// END OF SYMB 3
////////////////////////////////////////////////////////////////////////////////////////////////////////


/* Keymap SYMB 2: symbols Layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |  F01 |  F02 |  F03 |  F04 |  F05 ||  F06 |  F07 |  F08 |  F09 |  F10 |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |  F11 |  F12 |  F13 |  F14 |  F15 ||  F16 |  F17 |  F18 |  F19 |  F20 |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |  F21 |  F22 |  F23 |  F24 |   €  ||   ^  |   "  |      |   ¿  |   ¡  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// SYMBOLS 

[FNCT] = LAYOUT_ortho_3x10(  // layer 4 : multiple apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-------+-------+-------+-------+----------++--------+--------+--------+---------+----------.
     KC_F1,  KC_F2,  KC_F3,  KC_F4,    KC_F5,     KC_F6,   KC_F7,   KC_F8,    KC_F9,   KC_F10,
//|-------|-------|-------+-------+----------||--------|--------+--------+---------+----------|
    KC_F11, KC_F12, KC_F13, KC_F14,   KC_F15,    KC_F16,  KC_F17,  KC_F18,   KC_F19,   KC_F20,
//|-------|-------|-------+-------+----------||--------|--------+--------+---------+----------|
    KC_F21, KC_F22, KC_F23, KC_F24, SYM_EURO,   KC_CIRC, KC_DQUO, XXXXXXX, SYM_I_QU, SYM_I_EX ),    //    €   ^   "   XXXXXXX   ¿   ¡   
//|-------+-------+-------+-------+----------++--------+--------+--------+---------+----------.
// END OF FNCT 4
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap XTND 5 & 6: BOTH LEFT & RIGHT extended gherkin layers // BOTH LEFT & RIGHT 5 & 6

 * ,-----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      | •Spot|
 * |  Tab | Desk |Windws|Mision|Float.|| Close| Prev | Next |Launch| Light|
 * |      |      | Apps |Contrl|Window||  APP | APP  | APP  |  Pad |••SIRI|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | Caps |Dictat| EMPTY| Speak|Active|| Close| Prev | Next | Dash | SPACE|
 * |      |      |      |      |Window||Window|Window|Window| Board|      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |APP   |APP   |APP   |APP   |      ||      |      |      |      |      |
 * | OMNI |      |EVER  |      |Reopen|| Close| Prev | Next |DELETE| ENTER|
 * | FOCUS| MAIL | NOTE | NVALT|  tab ||  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/

/* Keymap L_XTND 5: LEFT eXtended default layer
 * ,-----------------------------------.,----------------------------------.
 * |      |      | Vol. | Vol. |      ||      |      |      |      | •Spot|
 * |      | Mute |      |      |      || Close| Prev | Next |Launch| Light|
 * |      |      | Down |  Up  |      ||  APP | APP  | APP  |  Pad |••SIRI|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |Rewind|  UP  |Forwrd| Play || Close| Prev | Next | Dash | SPACE|
 * |      |      |      |      |      ||Window|Window|Window| Board|      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |@@@@@@|      |      |      |      ||      |      |      |      |      |
 * |@@@@@@| LEFT | DOWN | RIGHT|Reopen|| Close| Prev | Next |DELETE| ENTER|
 * |@@@@@@|      |      |      |  tab ||  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/
[L_XTND] = LAYOUT_ortho_3x10(  // layer 5: LEFT eXtended default layer
//|---------|------------|----------+--------+----------||--------|---------|---------|--------+----------|
    KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_SLCK,  KC_PAUS,   CLOSE_A, PREV_APP, NEXT_APP, LNCHPAD, SPT_SIRI,
//|---------|------------|----------+--------+----------||--------|---------|---------|--------+----------|
     _______,     KC_MRWD,     KC_UP, KC_MFFD,  KC_MPLY,   CLOSE_W, PREV_WIN, NEXT_WIN, DASHBRD,   KC_SPC,
//|---------|------------|----------+--------+----------||--------|---------|---------|--------+----------|
     _______,     KC_LEFT,   KC_DOWN, KC_RGHT, REOPEN_L,   CLOSE_T, PREV_TAB, NEXT_TAB,  KC_DEL,   KC_ENT ), 
//|---------|------------|----------+--------+----------||--------|---------|---------|--------+----------|
// END OF L_XTND 5
// KC_BRIGHTNESS_DOWN(KC_BRID); KC_BRIGHTNESS_UP(KC_BRIU)
////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Keymap R_XTND 6: RIGHT eXtended default layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      | Vol. | Vol. |      |      |
 * |  Tab | Desk |Windws|Mision|Float.||      |      |      | Mute |      |
 * |      |      | Apps |Contrl|Window||      |  Up  | Down |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |Sublim|      |      ||      |      |      |      |      |
 * | Caps |Dictat|Text 3| Speak|Active||      |      |  UP  |      |      |
 * |      |      |Histry|      |Window||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      | PASTE||      |      |      |      |@@@@@@|
 * |      |      |      |      |   &  ||      | LEFT | DOWN | RIGHT|@@@@@@|
 * | UNDO |  CUT | COPY | PASTE| MATCH|| REDO |      |      |      |@@@@@@|
 * '------+------+------+------+------'`------+------+------+------+------'
 */
[R_XTND] = LAYOUT_ortho_3x10(  // layer 6: RIGHT eXtended default layer
//|--------------|-------|---------+---------+----------||--------|--------|----------|------------+----------|
           KC_TAB,   DESK, APP_WIND, MISS_CTL, FLOA_WIN,   KC_PAUS, KC_SLCK, KC__VOLUP, KC__VOLDOWN, KC__MUTE,
//|--------------|-------|---------+---------+----------||--------|--------|----------|------------+----------|
    F(RXTND_CAPS), DICTAD,  P_ST_HY,    SPEAK, ACTV_WIN,   XXXXXXX, _______,     KC_UP,     _______,  _______,
//|--------------|-------|---------+---------+----------||--------|--------|----------|------------+----------|
          XT_UNDO, XT_CUT,  XT_COPY,  XT_PAST,  XT_MTCH,   XT_REDO, KC_LEFT,   KC_DOWN,     KC_RGHT,  _______ ), 
//|--------------|-------|---------+---------+----------||--------|--------|----------|------------+----------|
// END OF R_XTND 6
////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Keymap APPS 7: APPS layer
 * ,----------------------------------.,----------------------------------.
 * |      |@@@@@@| EVER |      | TERMI|| TYPI |      | TEXT |@@@@@@|SYSTEM|
 * |      |@@@@@@|-NOTE |      |-NAL  ||-NATOR|      |-EDIT |@@@@@@|PREFE-|
 * |      |TWITTR|      |      |      ||      |      |      |OMNIFO|RENCES|
 * |------+------+------+------+------||------+------+------+------+------|
 * |SIMPLE|      |  DAY |      |GOOGLE||      | SUBLI|KARBNR| CALEN|      |
 * | NOTE |SAFARI|  ONE |FINDER|CHROME||SKETCH|-ME   | EVENT|-DAR  |      |
 * |      |      |      |      |      ||      | TEXT |VIEWER|      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * | STU  |      | CALCU|      |      ||      |      | KEY- |      | NUM- |
 * |-DIES |      |-LATOR|      |      || NOTES| MAIL | NOTE | PAGES| BERS |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// APPS layer 7
[APPS] = LAYOUT_ortho_3x10(  // layer 7 : apps layer
  //,------------+------------+------------+------------+-------------++------------+------------+------------+------------+--------------.
      APP_Q_QQQQQ, APP_W_TWTTR, APP_E_EVERN, APP_R_RRRRR, APP_T_TERMI,   APP_Y_TYPIN, APP_U_UUUUU, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF,
  //|------------|------------|------------+------------+-------------||------------|------------+------------+------------+--------------|
      APP_A_SNOTE, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME,   APP_H_SKTCH, APP_J_SUBLI, APP_K_KVIEW, APP_L_CLNDR, APP_SP_SPSP,
  //|------------|------------|------------+------------+-------------||------------|------------+------------+------------+--------------|
      APP_Z_STUDI, APP_X_XXXXX, APP_C_CALCU, APP_V_VVVVV, APP_B_BBBBB,   APP_N_NOTES,  APP_M_MAIL, APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB ),
  //,------------+------------+------------+------------+-------------++------------+------------+------------+------------+--------------.
// END OF APPS 7
////////////////////////////////////////////////////////////////////////////////////////////////////////




/* Keymap SUSR 8: Super USeR productivity layer
* ,-----------------------------------.,---------------------------------.
* |@@@@@@|      |      |      |      ||      |      |      |      |@@@@@@| 
* |@@@@@@|      |      |onHold|      ||      |      |      |      |@@@@@@|
* | BLIT |LOGOUT|LCKSCR| RESET|      ||      |      |      |      | BLIT |
* |------+------+------+------+------||------+------+------+------+------|
* | Menu | Dock | Tool |Status|Float.||      |      |      |      |      |
* | _bar | _bar | _bar | _bar |Window||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* |onHold|onHold|onHold|onHold|onHold||      | LGui | LAlt | LCtl | LSft |
* | SLEEP|K_MENU|KILL_A|SHUT_D|RSTART||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* |      |      |      |      |      ||      |      |      |      |      |
* | RSft | RCtl | RAlt | RGui |      ||      | RGui | RAlt | RCtl | RSft |
* '------+------+------+------+------'`------+------+------+------+------'
*/
// SUSR layer 8
[SUSR] = LAYOUT_ortho_3x10(  // layer 8: Super USeR productivity layer
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------.
      MO(BLIT), TD(LOGOUT),    LCK_SCR, TD(HRESET),    XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(BLIT),
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------|
    TD(SLEP_M), TD(KILM_D), TD(KILA_T), TD(SHUT_S), TD(RSTT_F),   XXXXXXX, _______, _______, _______,  _______,
//               ALT+CMD+ESC SFT+ALT+CMD+ESC
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------|
       KC_RSFT,    KC_RCTL,    KC_RALT,    KC_RGUI,    XXXXXXX,   XXXXXXX, KC_RGUI, KC_RALT, KC_RCTL,  KC_RSFT ), 
//|-----------|-----------|-----------+-----------+------------||--------|--------|--------|--------+----------'
// END OF SUSR 8
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap PVIM 9: PVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      || Move | Move | Move | Move | Move |
 * |      |      |      |      |      ||Prgrph| Begin| Word | Word |End Of|
 * |      |      |      |      |      ||  Up  |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||Center| Move | Move | Move | Move |
 * |[SVIM]|      |      |      |      ||LineIn|      |      |      |      |
 * |      |      |      |      |      || View | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |@@@@@@|      || Move | Move | Move | Move | Move |
 * |      |      |      |@@@@@@|      ||Prgrph|      | Page | Page |      |
 * |[XVIM]|[AVIM]|[ZVIM]|@@@@@@|      || Down | HOME |  UP  | DOWN |  END |
 * `----------------------------------'`----------------------------------'
*/
// PVIM layer 9

//[DELETE]
//#define PERVIM     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p")
//#define K_PERV(kc) send_string(kc)
//[delete]
[PVIM] = LAYOUT_ortho_3x10(  // layer 9 : PVIM layer
  //,---------+---------+---------+--------+---------||------+--------------+--------------+----------------+--------------.
       XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,  PVIM_Y,   TD(PVIM_uU), LALT(KC_LEFT),   LALT(KC_RGHT), TD(PVIM_pP),  // LCTL(LGUI(KC_UP))
  //|---------|---------|---------+--------+---------||------+--------------+--------------+----------------+--------------|
       KC_LSFT,  _______,  _______, _______, XXXXXXX,  PVIM_H,       KC_LEFT,         KC_UP,         KC_DOWN,     KC_RGHT,
  //|---------|---------|---------+--------+---------||------+--------------+--------------+----------------+--------------|
      MO(XVIM), MO(AVIM), MO(ZVIM), _______, XXXXXXX,  PVIM_N, LALT(KC_HOME), LALT(KC_PGUP), LALT(KC_PGDOWN), LALT(KC_END) ),  // LCTL(LGUI(KC_DOWN))
  //,---------+---------+---------+--------+---------||------+--------------+--------------+----------------+--------------.
  // END OF PVIM 9
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap DVIM 10: DVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |Delete|Delete|Delete|Delete|
 * |      |      |      |      |      ||      | Begin| Word | Word |End Of|
 * |      |      |      |      |      ||      |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------||------+------+------+------+------|
 * |Delete|Delete|Delete|Delete|      ||      |Delete|Delete|Delete|Delete|
 * | Char | Line | Line | Char |      || Yank | Char | Line | Line | Char |
 * | LEFT |  UP  | DOWN | RIGHT|      ||      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |@@@@@@|      |@@@@@@|      ||      |Delete|Delete|@@@@@@|Delete|
 * |      |      |      |@@@@@@|      ||      |      | Page |Delete|      |
 * |      |      |      |@@@@@@|      ||      | HOME |  UP  |PgDown|  END |
 * `----------------------------------'`----------------------------------'
*/
// DVIM layer 10
[DVIM] = LAYOUT_ortho_3x10(  // layer 10 : DVIM layer
  //,--------+--------+--------+--------+---------++--------+------------+--------+--------+-------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, TD(DVIM_uU),  DVIM_I,  DVIM_O, TD(DVIM_pP),  // DVIM_Y is empty
  //|--------|--------|--------+--------+---------||--------+------------+--------+--------+-------------|
       DVIM_J,  DVIM_K,  DVIM_L, DVIM_SP, XXXXXXX,    DVIM_H,      DVIM_J,  DVIM_K,  DVIM_L,     DVIM_SP,
  //|--------|--------|--------+--------+---------||--------+------------+--------+--------+-------------|
      _______, _______, _______, _______, XXXXXXX,   XXXXXXX,      DVIM_M, DVIM_ES, DVIM_BS,     DVIM_EN ),// DVIM_N is empty
  //,--------+--------+--------+--------+---------++--------+------------+--------+--------+-------------.
  // END OF DVIM 10
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap SVIM X10X: SVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||Select|Select|Select|Select|Select|
 * |      |      |      |      |      ||Prgrph| Begin| Word | Word |End Of|
 * |      |      |      |      |      || Above|Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |Select|Select|Select|Select|
 * |      |      |      |      |      ||      | Char | Line | Line | Char |
 * |      |      |      |      |      ||      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------||------+------+------+------+------|
 * |@@@@@@|      |      |@@@@@@|      ||Select|Select|Select|Select|Select|
 * |      |      |      |@@@@@@|      ||Prgrph|      | Page | Page |      |
 * |      |      |      |@@@@@@|      || Below| HOME |  UP  | DOWN |  END |
 * `----------------------------------'`----------------------------------'
*/
// SVIM layer X10X

/*
[SVIM] = LAYOUT_ortho_3x10(  // layer X10X : SVIM layer
  //,--------+--------+--------+--------+---------++--------+--------------+--------------------+--------------------+---------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    SVIM_Y,   TD(SVIM_uU), LSFT(LALT(KC_LEFT)), LSFT(LALT(KC_RGHT)),   TD(SVIM_pP),
  //|--------|--------|--------+--------+---------||--------+--------------+--------------------+--------------------+---------------|
      _______, _______, _______, _______, XXXXXXX,   XXXXXXX, LSFT(KC_LEFT),         LSFT(KC_UP),       LSFT(KC_DOWN), LSFT(KC_RGHT), // SVIM_H is empty
  //|--------|--------|--------+--------+---------||--------+--------------+--------------------+--------------------+---------------|
      _______, _______, _______, _______, XXXXXXX,    SVIM_N, LSFT(KC_HOME),       LSFT(KC_PGUP),     LSFT(KC_PGDOWN),  LSFT(KC_END) ),
  //,--------+--------+--------+--------+---------++--------+--------------+--------------------+--------------------+---------------.
*/

  // END OF SVIM X10X                               // SVIM_H is empty
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap XVIM 11: XVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      || Copy |Upper |Capita|      |Lower |
 * |      |      |      |      |      || prev.|case  |lize  |      |case  |
 * |      |      |      |      |      ||prgrph| Word | Word |      | Word |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||Duplct|  25  |  50  |  50  |  25  |
 * |      |      |      |      |      ||prgrph| lines| lines| lines| lines|
 * |      |      |      |      |      || Below|  UP  |  UP  | DOWN | DOWN |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |@@@@@@|      || Copy |Scroll|Scroll|Scroll|Scroll|
 * |@@@@@@|      |      |@@@@@@|      || next |      | Page | Page |      |
 * |@@@@@@|      |      |@@@@@@|      ||prgrph| HOME |  UP  | DOWN |  END |
 * `----------------------------------'`----------------------------------'
*/
// XVIM layer 11
[XVIM] = LAYOUT_ortho_3x10(  // layer 11 : XVIM layer
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XVIM_Y, XVIM_U,  XVIM_I, XXXXXXX,  XVIM_P,
  //|--------|--------|--------+--------+---------||-------+-------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   XVIM_H, XVIM_J,  XVIM_K,  XVIM_L, XVIM_SP,
  //|--------|--------|--------+--------+---------||-------+-------+--------+------------------|
      _______, _______, _______, _______, XXXXXXX,   XVIM_N, XVIM_M, XVIM_ES, XVIM_BS, XVIM_EN ),
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
  // END OF XVIM 11
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap ZVIM 12: ZVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||Insert|Trans |      |      |Trans |
 * |      |      |      |      |      ||LnAbve|pose  |      |      |pose  |
 * |      |      |      |      |      ||prgrph| Words|      |      |Chrctr|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||Select|Select|Select|Select|Select|
 * |      |      |      |      |      ||& Copy|& Copy|& Copy|& Copy|& Copy|
 * |      |      |      |      |      ||Chrctr| Word | Line |prgrph|  All |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |@@@@@@|      ||Insert|      |      |      |      |
 * |      |      |@@@@@@|@@@@@@|      ||LnBlow|      |      |      |      |
 * |      |      |@@@@@@|@@@@@@|      ||prgrph|      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// ZVIM layer 12 
[ZVIM] = LAYOUT_ortho_3x10(  // layer 12 : ZVIM layer
  //,--------+--------+--------+--------+---------++-------+--------+--------+--------+---------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   ZVIM_Y,  ZVIM_U, XXXXXXX, XXXXXXX,  ZVIM_P,
  //|--------|--------|--------+--------+---------||-------+--------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   ZVIM_H,  ZVIM_J,  ZVIM_K,  ZVIM_L, ZVIM_SP,
  //|--------|--------|--------+--------+---------||-------+--------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   ZVIM_N, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
  //,--------+--------+--------+--------+---------++-------+--------+--------+--------+---------.
  // END OF ZVIM 12
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap AVIM 13: AVIM layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      || Super|Align |Align |Align |Align |
 * |      |      |      |      |      ||script|      |      | Justi|      |
 * |      |      |      |      |      ||      | Left |Center|-fied | Right|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||  Un  |  Out |      |      |  In  |
 * |      |      |      |      |      ||script|-dent |      |      |-dent |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |@@@@@@|      || Subs | Check|Ignore|      |      |
 * |      |@@@@@@|      |@@@@@@|      ||script| spell| spell|      |      |
 * |      |@@@@@@|      |@@@@@@|      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// AVIM layer 13
[AVIM] = LAYOUT_ortho_3x10(  // layer 13 : AVIM layer
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   AVIM_Y, AVIM_U,  AVIM_I,  AVIM_O,  AVIM_P,
  //|--------|--------|--------+--------+---------||-------+-------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   AVIM_H, AVIM_J, XXXXXXX, XXXXXXX, AVIM_SP,
  //|--------|--------|--------+--------+---------||-------+-------+--------+--------+---------|
      _______, _______, _______, _______, XXXXXXX,   AVIM_N, AVIM_M, AVIM_ES, XXXXXXX, XXXXXXX ),
  //,--------+--------+--------+--------+---------++-------+-------+--------+--------+---------.
  // END OF AVIM 13
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap MOUS 14: Mouse layer
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |Accel0|      |      |      |      ||      | wLeft|  wUp | wDown|wRight|
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* | LSft | LCtl | LAlt | LGui |      ||      | mLeft|  mUp | mDown|mRight|
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |@@@@@@|@@@@@@|      ||      |      |      |      |      |
* |Accel1|Accel2|      | mBtn1|Accel0|| mBtn1| mBtn2| mBtn3| mBtn4| mBtn5|
* |      |      |      |@@@@@@|      ||      |      |      |      |      |
* '------+------+------+------+------'`------+------+------+------+------'
*/
// MOUS layer 14
[MOUS] = LAYOUT_ortho_3x10(  // layer 14: mouse layer
  KC_ACL0, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
  _______, _______, _______, _______, XXXXXXX,   XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
  KC_ACL1, KC_ACL2, _______, KC_BTN1, KC_ACL0,   KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5 ),
//
/*    C O N F I G      F I L E
#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_DELAY       50
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
*/
// END OF MOUS 14
////////////////////////////////////////////////////////////////////////////////////////////////////////



/*  
*  Keymap BLIT 15: BACKLIT - BackLIghT layer
* .-----------------------------------------------------------------------------------------.
* |  BL_1  |  BL_2  |  BL_3  |  BL_4  |  BL_5  |BREATH_1|BREATH_2|BREATH_3|BREATH_4|BREATH_T|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_6  |  BL_7  |  BL_8  |  BL_9  |  BL_10 |BREATH_5|BREATH_6|BREATH_7|BREATH12|BL_TOGGL|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|F
* |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |BREATH15| BL_ON | BL_INC | BL_DEC | BL_OFF |
* '-----------------------------------------------------------------------------------------'
*/
// BLIT layer 15
[BLIT] = LAYOUT_ortho_3x10( // layer 15: BLIT layer
  BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05, BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG,
  BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10, BRTH_05, KC_LGUI, BRTH_07, BRTH_12,  BL_TOGG,
  BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15, BRTH_15,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF )

/*

  ,// BL_OFF

*/




// QMK standard keycode BL_OFF doesn't work ! ! !
// I've made a macro (BLIT_OFF) who call the function backlight_level(BL_OFF) ! ! !
// END OF BLIT 15
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap TEST 31: TEST transparent layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |      |   E  |      |      ||      |   U  |   I  |   O  |      |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |   A  |      |      |      |      ||      |      |      |      |      |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |      |      |      |      ||   N  |      |      |      |      |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/

/*
// TEST transparent layer 31
[TEST] = LAYOUT_ortho_3x10(  // layer 31 : TEST layer 
  //,-----------+--------+-----------+--------+---------++-----------+-----------+-----------+-----------+----------.
         _______, _______, F(E_VOWEL), _______, _______,      _______, F(U_VOWEL), F(I_VOWEL), F(O_VOWEL), _______,
  //|-----------|--------|-----------+--------+---------||-----------|-----------+-----------+-----------+----------|
      F(A_VOWEL), _______,    _______, _______, _______,      _______,    _______,    _______,    _______, _______,
  //|-----------|--------|-----------+--------+---------||-----------|-----------+-----------+-----------+----------|
         _______, _______,    _______, _______, _______,   F(N_TILDE),    _______,    _______,    _______, _______ )
  //,-----------+--------+-----------+--------+---------++-----------+-----------+-----------+-----------+----------.
  // END OF TEST 31
////////////////////////////////////////////////////////////////////////////////////////////////////////
*/
};


const uint16_t PROGMEM fn_actions[] = {
  [A_VOWEL] = ACTION_FUNCTION(A_VOWEL),  // Calls action_function()
  [E_VOWEL] = ACTION_FUNCTION(E_VOWEL),
  [I_VOWEL] = ACTION_FUNCTION(I_VOWEL),
  [O_VOWEL] = ACTION_FUNCTION(O_VOWEL),
  [U_VOWEL] = ACTION_FUNCTION(U_VOWEL),
  [N_TILDE] = ACTION_FUNCTION(N_TILDE),
  [RXTND_CAPS] = ACTION_FUNCTION(RXTND_CAPS)
};
////////////////////////////////////////////////////////////////////////////////////////////////////////



void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
//  static uint8_t mods_pressed;
//MODS
//  static uint8_t shift_flag;
//    SEND_STRING(" \n    \n    action_function WORKING !!!\n");
  shift_flag = get_mods()&LSHIFT_MODS;
  accent_pressed = acute_requested | diaeresis_requested | grave_requested | circumflex_requested;
  switch (id) {
//    SEND_STRING("switch WORKING\n");
    case A_VOWEL:
//      SEND_STRING("case A_VOWEL\n");
      if (record->event.pressed) 
      {
//        SEND_STRING("recordeventpressed\n");
        if (accent_pressed)
        {
//            SEND_STRING("accent pressed\n");
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
//                SEND_STRING("shift flag\n");
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };            
        } // [FIXME] [FIX THE FO LINE LOCATION]
        register_code(KC_A);
        unregister_code(KC_A);
    }
    else
    {
//        SEND_STRING("NO record event pressed");
    }
      break;

    case E_VOWEL:
      if (record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
           
        }
        register_code(KC_E);
        unregister_code(KC_E);
      }
      else
      {
      }
      break;

    case I_VOWEL:
      if (record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
        register_code(KC_I);
        unregister_code(KC_I);
      }
      else
      {
      }
      break;

    case O_VOWEL:
      if (record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
        register_code(KC_O);
        unregister_code(KC_O);
      }
      else
      {
      }
      break;

    case U_VOWEL:
      if (record->event.pressed) 
      {
        if (accent_pressed)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            if (acute_requested) { acute_accent_function(); }
                else { if (diaeresis_requested) { diaeresis_accent_function(); }
                else { if (grave_requested) { grave_accent_function(); } 
                else { if (circumflex_requested) { circumflex_accent_function(); } } } }
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
        register_code(KC_U);       
        unregister_code(KC_U);
      }
      else
      {
      }  
      break;

    case N_TILDE:
      if (record->event.pressed) 
      {
        if (acute_requested)
        {
         /* The key is being pressed.*/
            if (shift_flag)  // ✳️ shift_flag is grabbed at the very beginning of this function (action_function)
            {
            //  release LSHIFT
                del_mods(shift_flag);
                del_weak_mods(shift_flag);
                send_keyboard_report();
            };
        //  tap accent
            disable_capslock_before_accents_function();
            tilde_accent_function();
            enable_capslock_after_accents_function();
            if (shift_flag)
            {
            //  press LSHIFT
                add_mods(shift_flag);
                add_weak_mods(shift_flag);
                send_keyboard_report();
            };
            
        }
        register_code(KC_N);
        unregister_code(KC_N);
      }
      else 
      {
      }
      break;


    case RXTND_CAPS:
      if (record->event.pressed) 
      {
         /* The key is being pressed.*/
        press_capslock();
      }
      else 
      {
        release_capslock();
      }
      break;

 }
}
// end of action_function
////////////////////////////////////////////////////////////////////////////////////////////////////////



// [MACROS]
// BEGINNING OF NEW MACROS WAY
//
// [UNDERSTANDING]
// We implement MACROS when we need using QMK functions, or more than one keystroke in a specific layer
// and we don't have the need to use tap dance cases
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    0    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              pvim(j);                                                                                                      */
/*                                                                                                                            */
/*              this is the best one and it's posible because of the following function definition:                           */
/*                                                                                                                            */
/*              void pvim(char *key)                                                                                          */
/*              {                                                                                                             */
/*                SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p");                                                   */
/*                send_string(key);                                                                                           */
/*              }                                                                                                             */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    1    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"pj");                                                    */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////            
/*                                                                                                                            */
/*   W A Y    2    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              actual_mods = get_mods();                                                                                     */
/*              add_mods(ALL_MODS); send_keyboard_report();                                                                   */
/*              SEND_STRING("v");                                                                                             */
/*              set_mods(actual_mods); send_keyboard_report();                                                                */
/*              SEND_STRING("pj");                                                                                            */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    3    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*              register_code(KC_LSFT);   register_code(KC_LCTL);   register_code(KC_LALT);   register_code(KC_LGUI);         */
/*              register_code(KC_V);    unregister_code(KC_V);                                                                */
/*            unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);         */
/*              register_code(KC_P);    unregister_code(KC_P);                                                                */                               
/*              register_code(KC_J);    unregister_code(KC_J);                                                                */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                                            */
/*   W A Y    4    T O    A C C E S I N G    K E Y B I N D I N G S     F R O M      M A C    O S X     S Y S T E M            */
/*                                                                                                                            */
/*                            T H I S    W A Y     D O E S N ' T      W O R K  ! ! !                                          */
/*              register_code(MOD_HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(MOD_HYPR);               */
/*              register_code(KC_HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(KC_HYPR);                 */
/*              register_code(HYPR); register_code(KC_V); unregister_code(KC_V); unregister_code(HYPR);                       */
/*              register_code(KC_P);    unregister_code(KC_P);                                                                */                               
/*              register_code(KC_J);    unregister_code(KC_J);                                                                */
/*                                                                                                                            */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (record->event.pressed)
    {
        switch(keycode)
        {
//    ,APP_Q_QQQQQ ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_RRRRR ,APP_T_TERMI ,APP_Y_TYPIN ,APP_U_UUUUU ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF 
//    ,APP_A_SNOTE ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME ,APP_H_SKTCH ,APP_J_SUBLI ,APP_K_KVIEW ,APP_L_CLNDR ,APP_SP_SPSP 
//    ,APP_Z_STUDI ,APP_X_XXXXX ,APP_C_CALCU ,APP_V_VVVVV ,APP_B_BBBBB ,APP_N_NOTES ,APP_M_MAIL ,APP_ES_KEYN ,APP_BS_PAGE ,APP_EN_NUMB   

            case APP_Q_QQQQQ: callApp("");                   return false; break;  //
            case APP_W_TWTTR: callApp("Twitter");            return false; break;  // Twitter
            case APP_E_EVERN: callApp("Evernote");           return false; break;  // Evernote
            case APP_R_RRRRR: callApp("");                   return false; break;  //
            case APP_T_TERMI: callApp("Terminal");           return false; break;  // Terminal

            case APP_Y_TYPIN: callApp("Typinator");          return false; break;  // Typinator
            case APP_U_UUUUU: callApp("");                   return false; break;  //
            case APP_I_TEDIT: callApp("TextEdit");           return false; break;  // TextEdit
            case APP_O_OMNIF: callApp("OmniFocus");          return false; break;  // OmniFocus
            case APP_P_SPREF: callApp("System Preferences"); return false; break;  // System Preferences

            case APP_A_SNOTE: callApp("Simplenote");         return false; break;  // Simplenote
            case APP_S_SAFAR: callApp("Safari");             return false; break;  // Safari        // _delay_ms(50);
            case APP_D_D_ONE: callApp("Day One Classic");    return false; break;  // Day One
            case APP_F_FINDE: callApp("Finder");             return false; break;  // Finder
            case APP_G_CHRME: callApp("Chrome");             return false; break;  // Google Chrome

            case APP_H_SKTCH: callApp("Sketch.app");         return false; break;  // Sketch
            case APP_J_SUBLI: callApp("Sublime Text");       return false; break;  // Sublime Text
            case APP_K_KVIEW: callApp("Karabiner-EventViewer");return false; break;  // Karabiner Event Viewer
            case APP_L_CLNDR: callApp("Calendar");           return false; break;  // Calendar
            case APP_SP_SPSP: callApp("");                   return false; break;  //

            case APP_Z_STUDI: callApp("Studies");            return false; break;  // Studies
            case APP_X_XXXXX: callApp("");                   return false; break;  //
            case APP_C_CALCU: callApp("Calculator");         return false; break;  // Calculator
            case APP_V_VVVVV: callApp("");                   return false; break;  //
            case APP_B_BBBBB: callApp("");                   return false; break;  // 

            case APP_N_NOTES: callApp("Notes.app");              return false; break;  // Notes
            case APP_M_MAIL:  callApp("Mail");               return false; break;  // Mail
            case APP_ES_KEYN: callApp("Keynote");                   return false; break;  //
            case APP_BS_PAGE: callApp("Pages");                   return false; break;  //
            case APP_EN_NUMB: callApp("Numbers");                   return false; break;  //




// PVIM
            case PVIM_H: pvim("h"); return false; break;
/* [info]
 * [#ref] Escape sequences in C
 * wikipedia link: 
   https://en.wikipedia.org/wiki/Escape_sequences_in_C        
        case PVIM_ES:if (record->event.pressed) { pvim("\e"); } break;   // \e    \x001B   // register_code (KC_ESC); unregister_code (KC_ESC); } break;
        case PVIM_BS:if (record->event.pressed) { pvim("\b"); } break;   // \b    \x0008   // register_code(KC_BSPC); unregister_code(KC_BSPC); } break;

        case PVIM_EN:if (record->event.pressed) { pvim("\n"); } break;   // \n    \x000A      new line
                                                                         // \r    \x000D      carriage return   
                                                                                           // register_code (KC_ENT); unregister_code (KC_ENT); } break; 
 */
// PVIM
            case PVIM_Y: pvim("y");  return false; break;
            case PVIM_N: pvim("n");  return false; break;
// DVIM
            case DVIM_I: dvim("i");  return false; break;
            case DVIM_O: dvim("o");  return false; break;

            case DVIM_H: dvim("h");  return false; break;
            case DVIM_J: dvim("j");  return false; break;
            case DVIM_K: dvim("k");  return false; break;
            case DVIM_L: dvim("l");  return false; break;
            case DVIM_SP:dvim(" ");  return false; break;

            case DVIM_M: dvim("m");  return false; break;
            case DVIM_ES:dvim("\e"); return false; break;
            case DVIM_BS:dvim("\b"); return false; break;
            case DVIM_EN:dvim("\n"); return false; break;
      
// SVIM
            case SVIM_Y: svim("y");  return false; break;
            case SVIM_N: svim("n");  return false; break;
      
// XVIM
            case XVIM_Y: xvim("y");  return false; break;
            case XVIM_U: xvim("u");  return false; break;
            case XVIM_I: xvim("i");  return false; break;
            case XVIM_P: xvim("p");  return false; break;

            case XVIM_H: xvim("h");  return false; break;
            case XVIM_J: xvim("j");  return false; break;
            case XVIM_K: xvim("k");  return false; break;
            case XVIM_L: xvim("l");  return false; break;
            case XVIM_SP:xvim(" ");  return false; break;

            case XVIM_N: xvim("n");  return false; break;
            case XVIM_M: xvim("m");  return false; break;
            case XVIM_ES:xvim("\e"); return false; break;
            case XVIM_BS:xvim("\b"); return false; break;
            case XVIM_EN:xvim("\n"); return false; break;
      
// ZVIM
            case ZVIM_Y: zvim("y");  return false; break;
            case ZVIM_U: zvim("u");  return false; break;
            case ZVIM_P: zvim("p");  return false; break;

            case ZVIM_H: zvim("h");  return false; break;
            case ZVIM_J: zvim("j");  return false; break;
            case ZVIM_K: zvim("k");  return false; break;
            case ZVIM_L: zvim("l");  return false; break;
            case ZVIM_SP:zvim(" ");  return false; break;

            case ZVIM_N: zvim("n");  return false; break;
      
// AVIM
            case AVIM_Y: avim("y");  return false; break;
            case AVIM_U: avim("u");  return false; break;
            case AVIM_I: avim("i");  return false; break;
            case AVIM_O: avim("o");  return false; break;
            case AVIM_P: avim("p");  return false; break;

            case AVIM_H: avim("h");  return false; break;
            case AVIM_J: avim("j");  return false; break;
            case AVIM_SP:avim(" ");  return false; break;

            case AVIM_N: avim("n");  return false; break;
            case AVIM_M: avim("m");  return false; break;
            case AVIM_ES:avim("\e"); return false; break;
      


            case DICTAD:
                register_code(KC_RGUI); unregister_code(KC_RGUI);
                register_code(KC_RGUI); unregister_code(KC_RGUI);
                return false; break;
/*
  case LAYER_IS:              // for testing reasons
      what_layer_is_this_mine(); return false; break;
*/
            case BLIT_OFF: gherkinBacklightLevel =  0; layer_clear(); return false; 
            case BLIT_01:  gherkinBacklightLevel =  1; layer_clear(); return false;
            case BLIT_02:  gherkinBacklightLevel =  2; layer_clear(); return false;
            case BLIT_03:  gherkinBacklightLevel =  3; layer_clear(); return false;
            case BLIT_04:  gherkinBacklightLevel =  4; layer_clear(); return false;
            case BLIT_05:  gherkinBacklightLevel =  5; layer_clear(); return false; 

            case BLIT_06:  gherkinBacklightLevel =  6; layer_clear(); return false;
            case BLIT_07:  gherkinBacklightLevel =  7; layer_clear(); return false;
            case BLIT_08:  gherkinBacklightLevel =  8; layer_clear(); return false;
            case BLIT_09:  gherkinBacklightLevel =  9; layer_clear(); return false;
            case BLIT_10:  gherkinBacklightLevel = 10; layer_clear();  return false;

            case BLIT_11:  gherkinBacklightLevel = 11; layer_clear(); return false;
            case BLIT_12:  gherkinBacklightLevel = 12; layer_clear(); return false;
            case BLIT_13:  gherkinBacklightLevel = 13; layer_clear(); return false;
            case BLIT_14:  gherkinBacklightLevel = 14; layer_clear(); return false;
            case BLIT_15:  gherkinBacklightLevel = 15; layer_clear(); return false;

           case BRTH_01:  breathing_period_set(1); breathing_enable(); return false; 
           case BRTH_02:  breathing_period_set(2); breathing_enable(); return false; 
           case BRTH_03:  breathing_period_set(3); breathing_enable(); return false; 
           case BRTH_04:  breathing_period_set(4); breathing_enable(); return false; 
           case BRTH_05:  breathing_period_set(5); breathing_enable(); return false; 
           case BRTH_06:  breathing_period_set(6); breathing_enable(); return false;
           case BRTH_07:  breathing_period_set(7); breathing_enable(); return false; 

           case BRTH_12:  breathing_period_set(12); breathing_enable(); return false; 
           case BRTH_15:  breathing_period_set(15); breathing_enable(); return false; 

           default: return true; 
      }
	}
  else
  {
    return true;
  }
}
// END OF NEW MACROS WAY
////////////////////////////////////////////////////////////////////////////////////////////////////////



// QMK POWER tricks
// *****************************************************************************************************
// FOR KNOWING WHAT LAYER WE ARE AT THE MOMENT:
/*
        uint8_t layer = biton32(layer_state);
void what_layer_is_this_mine(void) {
  switch (layer) {
    case GHKN:   SEND_STRING("GHKN");   break;
    case SYMB:   SEND_STRING("SYMB");   break;
    case L_XTND: SEND_STRING("L_XTND"); break;
    case R_XTND: SEND_STRING("R_XTND"); break;
    case PVIM:   SEND_STRING("PVIM");   break;
    case DVIM:   SEND_STRING("DVIM");   break;
    case NMBR:   SEND_STRING("NMBR");   break;
    case FNCT:   SEND_STRING("FNCT");   break;
    case APPS:   SEND_STRING("APPS");   break;
    case SUSR:   SEND_STRING("SUSR");   break;
    case SVIM:   SEND_STRING("SVIM");   break;
    case XVIM:   SEND_STRING("XVIM");   break;
    case ZVIM:   SEND_STRING("ZVIM");   break;
    case AVIM:   SEND_STRING("AVIM");   break;
    case MOUS:   SEND_STRING("MOUS");   break;
    case BLIT:   SEND_STRING("BLIT");   break;
    case TEST:   SEND_STRING("TEST");   break;
    default:     SEND_STRING("UNKNOWN");break;
  }
}
*/

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {

    case ALPH: //  
        /*
        myLevel = layer_state;
        send_string(myLevel);
        send_string(gherkinBacklightLevel);
        SEND_STRING(" [Level GHKN]; ");
        */






//        backlight_level(gherkinBacklightLevel);









//        layer_clear();    // [DANGER] I have commented this line.  Maybe it must be mandatory !
//        breathing_disable();




                      if (backlight_caps)
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





        break; 

    case NMBR:   //  1
        /*
        SEND_STRING(" [Level NMBR]; ");
        */
        backlight_level(BL_NMBR);
        breathing_period_set(BR_NMBR);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
        breathing_enable();
        break;
    case SYMB:   //  2
    /*
        SEND_STRING(" [Level SYMB]; ");
    */
        backlight_level(BL_SYMB);
        breathing_period_set(BR_SYMB); // [LAST]      // BUT if CAPS_LOCK was set out before [SYMB] we loose thhe breathing ...
        breathing_enable();
        break;

/*
    case FNCT:   //  3
// [TESTING]        SEND_STRING(" [Level FNCT]; ");     [testing]
        backlight_level(BL_FNCT);
        break;
    case L_XTND: //  4
// [TESTING]        SEND_STRING(" [Level L_XTND]; ");     [testing]
    case R_XTND: //  5
// [TESTING]        SEND_STRING(" [Level R_XTND]; ");     [testing]
        backlight_level(BL_XTND);
        break;
    case APPS:   //  6
// [TESTING]        SEND_STRING(" [Level APPS]; ");     [testing]
        backlight_level(BL_APPS);
        break;
    case SUSR:   //  7
// [TESTING]        SEND_STRING(" [Level SUSR]; ");     [testing]
        backlight_level(BL_SUSR);
        break;
    case PVIM:   //  8
// [TESTING]        SEND_STRING(" [Level PVIM]; ");     [testing]
        backlight_level(BL_PVIM);
        break;
    case DVIM:   //  9
// [TESTING]        SEND_STRING(" [Level DVIM]; ");     [testing]
        backlight_level(BL_DVIM);
        break;
    case SVIM:   // 10
// [TESTING]        SEND_STRING(" [Level SVIM]; ");     [testing]
        backlight_level(BL_SVIM);
        break;



    case XVIM:   // 11
// [TESTING]        SEND_STRING(" [Level XVIM]; ");     [testing]
//        backlight_level(BL_VIM);  //V
//        break;
    case ZVIM:   // 12
// [TESTING]        SEND_STRING(" [Level ZVIM]; ");     [testing]
//        backlight_level(BL_VIM);  //V
//        break;
    case AVIM:   // 13
// [TESTING]        SEND_STRING(" [Level AVIM]; ");     [testing]
        backlight_level(BL_VIM);  //V
        break;



    case MOUS:   // 14
// [TESTING]        SEND_STRING(" [Level MOUS]; ");     [testing]
        backlight_level(BL_MOUS);
        break;
*/

/*
    case BLIT:   // 15
// [TESTING]        SEND_STRING(" [Level BLIT]; ");     [testing]
        backlight_level(BL_MIN);
        break;
    default: //  for any other layers, or the default layer
// [TESTING]        SEND_STRING(" [Level WITHOU DETERMINE: LEVEL DEFAULT FROM THE SWITCH STATEMENT]; ");     [testing]
        backlight_level(BL_LOW);
        break;
*/
    }
  return state;
}; // END OF THE PROGRAM  //
//    END OF THE PROGRAM  //
//    END OF THE PROGRAM  //
////////////////////////////
//#### T H E    E N D ####//
////////////////////////////

