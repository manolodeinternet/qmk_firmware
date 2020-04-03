#pragma once
#if defined(COMPREHENSIVE_30_LAYOUT)
    #include "comprehensive_30_layout_defines.h"
#elif defined(SIMPLE_30_LAYOUT)
    #include "simple_30_layout_defines.h"
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                               //
// DEFINING AUTOMATOR MAC SERVICES SHORTCUTS                                                     //
//                                                                                               //
//////////////////////////////////////////////////////////////////////////////////////////
#define   BEEP_1               HYPR(KC_R)  // 1 beep
#define   BEEP_2               HYPR(KC_G)  // 2 beeps
#define   BEEP_3               HYPR(KC_B)  // 3 beeps
//                                                                                               //
// defining system preferences shortcuts                                                         //
///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                               //
// DEFINING MACRO SHORTCUTS                                                                      //
//                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////
// #define   BEEP_1               HYPR(KC_R)  // 1 beep
#define   SS_BEEP_1             SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("r")))))    // 1 beep
#define   SS_BEEP_2             SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("g")))))    // 2 beeps
#define   SS_BEEP_3             SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("b")))))    // 3 beeps
//                                                                                               //
// defining system preferences shortcuts                                                         //
///////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// LAYER_STATE_SET_USER                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define HIDEOTH          SEND_STRING(SS_LALT(SS_LGUI("h"))) //LALT(LGUI(KC_H)) //HIDE OTHER _APPS
//                                                                                      //
// layer_state_set_user
//////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                               //
// DEFINING MACRO SHORTCUTS FOR GLOBAL FUNCTIONS                                                 //
//                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////
/*
HYPR(keycode) does work directly into a keymap only !!!
HYPR(keycode) doesn't work into a function: register_code(HYPR(KC_V));
HYPR(keycode) doesn't work into a #define,
quantum/quantum_keycodes.h:484:18: error: 
large integer implicitly truncated to unsigned type [-Werror=overflow]
 #define HYPR(kc) (QK_LCTL | QK_LSFT | QK_LALT | QK_LGUI | (kc))
                  ^
quantum/quantum_keycodes.h:681:17: note: in expansion of macro 'HYPR'
 #define KC_HYPR HYPR(KC_NO)
                 ^~~~
*/
// We have to define HYPR(KC_V) as follows ...
#define HYPR_V     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))))
// #define MY_HYPER(kc)     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI(kc)))))
// #define MY_HYPER(kc)  (LSFT|LCTL|LALT|LGUI(kc))
//
//                                                                                               //
// defining macro shortcuts for global functions                                                 //
///////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                               //
// DEFINING VIM SHORTCUTS 03                                                                     //
//                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////
#define OUTDNT             LGUI(KC_LBRC)  // outdent a paragraph
// [UNUSED]
#define INDENT              LGUI(KC_RBRC)  // indent  a paragraph
// [UNUSED]
//                                                                                      //
// defining vim shortcuts 03                                                               //
//////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// DEFINING _DALY COMMANDS 07                                                                        //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// SPECIFIC DAILY COMMANDS FOR 'COMPREHENSIVE_30_LAYOUT'
#if defined(COMPREHENSIVE_30_LAYOUT)
  #define PREV_APP       LSFT(LGUI(KC_TAB))  // previous app
  #define NEXT_APP             LGUI(KC_TAB)  //     next app
  #define SPT_SIRI             LGUI(KC_SPC)  // spotlight & siri
#endif

// COMMON DAILY COMMANDS FOR ALL KEYMAPS
#define CAP_SCRN          LSFT(LGUI(KC_3))  // Capture whole screen
#define CAP_SLDE          LSFT(LGUI(KC_4))  // Capture portion of screen
// [UNUSED]
//      KC_CPYW          LCTL   (CAP_SCRN)  // Copy whole screen       // LCTL (LSFT(LGUI(KC_3)))
//      KC_CPYP          LCTL   (CAP_SLDE)  // Copy portion of screen  // LCTL (LSFT(LGUI(KC_4)))
// [unused]

#define PREV_WIN     LSFT(LGUI(KC_GRAVE))  // previous window
#define NEXT_WIN           LGUI(KC_GRAVE)  //     next window
#define PREV_TAB       LSFT(LCTL(KC_TAB))  // previous tab
#define NEXT_TAB             LCTL(KC_TAB)  //     next tab


#define APP_WIND            LCTL(KC_DOWN)  // applications windows
#define MISS_CTL              LCTL(KC_UP)  // mission control
#define    SPEAK               LCAG(KC_H)  // start/stop to speak selected text 
                                                //or all the text if any is selected
                                                // LCTL = Hold Left Control, Alt and GUI and press kc
// [SYSTEM PREFERENCES]
#define     DESK                    KC_F6  // show desktop
#define LANCHPAD                   KC_F17  // F17 (set at 'Sys.Pref./Keyboard/Shortcuts/Launchpad & Doc')
#define DSHBOARD                   KC_F18  // F18 (set at 'Sys.Pref./Keyboard/Shortcuts/Mission Control')
#define ACTV_WIN              LCTL(KC_F4)  // active window
#define FLOA_WIN              LCTL(KC_F6)  // floating window
// [system preferences]

#define REOPEN_L         LSFT(LGUI(KC_T))  // reopen last closed window/tab
#define CLOSE_AP               LGUI(KC_Q)  // close application
#define CLOSE_WI               LGUI(KC_W)  // close window
#define CLOSE_TB               LGUI(KC_W)  // close tab

// [UNUSED]
#define AUT_FILL                    KC_F5  // autocompletion
#define PST_MTCH   LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE
// 3ERD PARTY APPLICATIONS // SUBLIME COMMANDS
#define PST_HYST          LALT(LGUI(KC_V))   //PASTE (SUBLIME TEXT) FROM HISTORY
// 3erd party applications // sublime commands
// [unused]
//                                                                                                   //
// defining _daly commands 07                                                                        //
///////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// DEFINING SYMBOLS 09 ( FOR USING INTO 'ACTION_TAP_DANCE_DOUBLE(SYMBOL1, SYMBOL2)' )                //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
// [INFO] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
#define EURO           LSFT(LALT(KC_2))  // euro symbol
// [info]
#define INV_QU      LSFT(LALT(KC_SLSH))  // inverted question mark
#define INV_EX               LALT(KC_1)  // inverted exclamation mark
//                                                                                                   //
// defining symbols 4 ( for using into 'action_tap_dance_double(symbol1, symbol2)' )                 //
///////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                   //
// DEFINING _POWR COMMANDS 12                                                                        //
//                                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////////////////////
#define SLEP_MNUBAR      TD(SLEP_M)

#if defined(COMPREHENSIVE_30_LAYOUT)

  #define KILMNU_TOOL      TD(KILM_T)
  #define KILAPP_DOCK      TD(KILA_D)
  #define SHUTD_STATB      TD(SHUT_S)
  #define RSTRT_FLOAT      TD(RSTT_F)

#elif defined(SIMPLE_30_LAYOUT)


#endif

/*
#define SL_MEN           TD(SLEP_M)
#define KM_TOL           TD(KILM_T)
#define KA_DCK           TD(KILA_D)
#define SH_STA           TD(SHUT_S)
#define RT_FLO           TD(RSTT_F)
*/
#define KC_LOGO  LSFT(LALT(LGUI(KC_Q)))
#define LOCK_SCR      LCTL(LGUI(KC_Q))  //LOCK SCREEN (ask for pasword screen)
// [SYSTEM PREFERENCES]
#define ZOOM_FOL      LCAG(KC_SLSH)      //QMK: Hold Left Control, Alt and GUI and press kc
#define ZOOM_TOG      LCAG(KC_SCLN)
#define ZOOM_IN       LCAG(KC_EQL)
#define ZOOM_OUT      LCAG(KC_MINS)
#define ZOOMSMTH      LCAG(KC_BSLS)
#define CNTRST_U      LCAG(KC_DOT)              //Hold Left Control, Alt and GUI and press kc
#define CNTRST_D      LCAG(KC_COMM)
//
// [UNUSED]
#define INV_COLO      LSFT(LCTL(LGUI(KC_8)))  
// [INFO]
// it can't be used into an 'ACTION_TAP_DANCE_DOUBLE()'
// it can't be used into a statement of tap_dance: 'case SINGLE_TAP: INV_CLR;'  We would get only '8'
// it can't be used into a 'RSFT_T(INV_CLR)' neither
// [info]
// [unused]
//
// [system preferences]
//                                                                                                   //
// defining _powr commands 12                                                                        //
///////////////////////////////////////////////////////////////////////////////////////////////////////



