//mdi
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

/////////////////////////////////////////////////////////////////////////////////////// LINE TOO LONG !!!

///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###

/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
/* MAXIMUM LINE WIDTH FOR RIGHT PRINTING  XX 105  CHARACTERS XX  MAXIMUM LINE WIDTH FOR RIGHT PRINTING */
/*XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/

// [MY_OWN_PREPROCESSING_KEYWORDS] for editing my code:
//
// [ADVICE]
// [advice]        maybe you can use this advice later, for covering a possible need
// 
// [BEAUTIFUL & CLEAN CODE]    you can do a task, just coding or...
//                             you can do the same thing making an artwork,
// [beautiful & clean code]    instead of a bunch of lines of code
//
// [BOOKMARK] 
//                 1) for looking for an important point of the code I'm editing,
// [bookmark]      2) for putting a bookmark into the code.
//
// [BUG?]
// [bug?]          can this code cause a bug ?        
//
// [DANGER]
// [danger]        for indicate that we have touch the code, without checking if the change is reliable
//
// [DATA]
// [data]          some information about any reference relative to our application data
//
// [DELETEME]      this bunch of code is no longer useful
// [deleteme]      we must delete it later
//
// [EXAMPLE]
// [example]
//
// [FIXME]
// [fixme]         there's something I HAVE TO FIX for a right working
//
// [IMPROVEME]
// [improveme]     there is something we could change for a better working or getting a code more elegant
//
// [INFO]
// [info]          some information about any reference relative to our code or application analytics
//
// [INSPIRINGCODE]
// [inspiringcode] cool, clean, powerfull, funny snippet
//
// [LAST]
// [last]          for marking the point where I'm working
//
// [OLDWAY]        it works, but smells ...
//                 the ugly way I did this before that we aren't going to need any more.
// [oldway]        it still remains in the code as an example of how it don't have to do things again
//
// [OPTIONS]
// [options]       different ways of embracing or facing an algorith or any other issue
//
// [REFLEXION]
// [reflexion]     maybe things can be coded (thinked) different !!!
//
// [SYSTEM PREFERENCES]
// [system preferences] sortcut defined in 'System Preferences'
//
// [TRANSLATION]
// [translation]
//
// [UNDERSTANDING] 
// [understanding] for giving explanations about what our code does
//
// [my_own_preprocessing_keywords]



//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
////                                                                                  ////
////  COMMENTS SYNTAX FOR IMPROVING LEGIBILITY OF THE DIFFERENT SECTIONS OF THE CODE  ////
////                                                                                  ////
////                        STANDARDIZED HEADERS & FOOTERS                            ////
////                                                                                  ////
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

// HEADER
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_layer_NAME] kc_KEYCODE (tapdance_NAME)                                  //
//                                                                                      //
//  K E Y C O D E   /   L A Y E R _ X   /   F U N C T I O N   /   . . .                 //
//                                                                                      //
//  KC_KEYCODE:  *  KEYCODE_1,                                                          //
//              **  KEYCODE_2,                                                          //
//               @ [_LAYER_X],                                                          //
//              @@ [_LAYER_Y] OFF,                                                      //
//             @@@ [_LAYER_Z],                                                          //
//               ?  ETCETERA...                                                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

// FOOTER
//                                                                                      //
// [tapdance] [_layer_name] kc_keycode (tapdance_name)                                  //
//                                                                                      //
//  k e y c o d e   /   l a y e r _ x   /   f u n c t i o n   /   . . .                 //
//////////////////////////////////////////////////////////////////////////////////////////

// i.e.:
// HEADER
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] KC_B (PENUMB)                                                     //
//                                                                                      //
//  P E R C E N T  -  N U M B E R S   L A Y E R   O F F                                 //
//                                                                                      //
//  KC_B:  *  KC_PERC,                                                                  //
//        @@ [_NUMB] OFF                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// FOOTER
//                                                                                      //
// [tapdance] [_numb] kc_b (penumb)                                                     //
//                                                                                      //
//  p e r c e n t  -  n u m b e r s   l a y e r   o f f                                 //
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//    comments syntax for improving legibility of the different sections of the code    //
//                                                                                      //
//                          standardized headers & footers                              //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

#include QMK_KEYBOARD_H

// [INSPIRINGCODE]
// #define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)
//                     |MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)
//                     |MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

// #define ALL_LMODS   (MOD_BIT(KC_LSFT)|MOD_BIT(KC_LCTL)|MOD_BIT(KC_LALT)|MOD_BIT(KC_LGUI))
// [inspiringcode]
#define LSHIFT_MODS    (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define LGUI_MODS      (MOD_BIT(KC_LGUI)  |MOD_BIT(KC_RGUI)  )

// [MINE]
extern rgblight_config_t rgblight_config;      // without this line, it doesn't recognize rgblight_config
// [mine]

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING LAYERS                      L A Y E R S                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
#define _ALPH   0  //  gherkin ALPHAS DEFAULT    layer 
#define _ACCN   1  //  gherkin ACCENTS           layer 
/*
#define _DIAE   2  //  gherkin RESET & diaereis  layer
*/
#define _NUMB   3  //  gherkin numbers           layer 
#define _SYMB   4  //  gherkin symbols           layer 
#define _FUNC   5  //  gherkin functions         layer 
#define _DALY   6  //  gherkin DAiLY commands    layer 
#define _APPS   7  //  APPlicationS              layer
#define _POWR   8  //  POWER        productivity layer
#define _PVIM   9  //  Personal              VIM layer
#define _DVIM  10  //  Delete                VIM layer
/*
#define _AVIM  X12X  //  select              VIM layer
We don't use _AVIM because we use instead: 'SHIFT' for getting the same result, but easier and clearer !
*/
#define _CVIM  11  //  power edition         VIM layer
#define _XVIM  12  //  movement              VIM layer
#define _ZVIM  13  //  alignment             VIM layer
#define _MOUS  14  //  mouse                     layer
#define _RGBL  15  //  backlight                 layer

#define _LAST  17  //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!!!!!!!!!!!!
#define _TEST  18  //  LAYER FOR TESTING               // must be over layer number 15 ...
//
// defining layers
//
// [UNDERSTANDING]
// FOR ACCESING LAYERS FROM KEYMAP 'LT(LAYER, KC)', NUMBER LAYER MUST BE BETWEEN 0 AND 15
// I can implement the call to _DVIM,_CVIM & _XVIM from TAP_DANCE functions...
//...renumbering this layers above 16 or even above 32, ...
//...this wayl we'll have THREE FREE LAYERS more for using directly from any keymap (0..15)
     // ... but it works even above 31 & 32 & 33 ...
     // ... consuming an exaggerated amount of memory, ...
     // ... the higher the number of the layer, ...
     // ... the more memory consumed.  
// IMPORTANT: IN ADDITION TO USING LAYERS AMONG 0...15, YOU CAN USE LAYERS AMONG 16...31, IF... 
// ...IF YOU AREN'T GOING TO ACCESS THEM FROM KEYMAP, BUT FROM CODE, USING 'layer_on / layer_off(LAYER)'
// [understanding]
//                                                                                      //
// defining layers                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING READABILITY CODES                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define _______ KC_TRNS
#define XXXXXXX KC_NO
//                                                                                      //
// defining readability codes                                                           //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING FN_ACTIONS                                                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define ACC_A    0
#define ACC_E    1
#define ACC_I    2
#define ACC_O    3
#define ACC_U    4

#define TIL_N    5

#define DIA_A    6
#define DIA_E    7
#define DIA_I    8
#define DIA_O    9
#define DIA_U   10

#define CAPSL   11
//                                                                                      //
// defining fn_actions                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFININING RGB CONSTANTS                                                             //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define OUTER_RGHT  0
#define INNER_RGHT  6

// LEFT HAND
#define INNER_LEFT  7
#define OUTER_LEFT 12
//                                                                                      //
// definining rgb constants                                                             //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING ?VIM SHORTCUTS 9, 10, 11, 12, 13                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define OUTDENT             LGUI(KC_LBRC)  // outdent a paragraph
// [UNUSED]
#define INDENT              LGUI(KC_RBRC)  // indent  a paragraph
// [UNUSED]
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
//                                                                                      //
// defining ?vim shortcuts 9, 10, 11, 12, 13                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING AUTOMATOR MAC SERVICES SHORTCUTS                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define   BEEP_1               SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("r")))))    // 1 beep
#define   BEEP_2               SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("g")))))    // 2 beeps
#define   BEEP_3               SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("b")))))    // 3 beeps
//                                                                                      //
// defining system preferences shortcuts                                                //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING MY SYSTEM PREFERENCES SHORTCUTS                                             //
//                                                                                      //
// macOS High Sierra                                                                    //
// Version 10.13.6 (17G7024)                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
/*
                                                 MODIFIERS (KEY)
                                                      Shift
                                                       Control
                                                        Alt
                                                         Gui
                                                      S
                                                       C
                                                        A
                                                         G

 *  KEYBOARD -> SHORTCUTS -> DISPLAY
      Decrease display brightness                           F14
      Increase display brightness                           F15

 *  KEYBOARD -> SHORTCUTS -> LAUNCHPAD & DOCK
      Turn Dock Hiding On/Off                           AG (D)
      Show Launchpad                                        F17

 *  KEYBOARD -> SHORTCUTS -> MISSION CONTROL
      Mission Control                                  C   (up)
      Show Notification Center                          AG (F15)
      Turn Do Not Disturb On/Off                      SC   (F15)
      Applications windows                             C   (down)
      Show Desktop                                          F6 
      Show Dashboard                                        F18
      Mission Control / Move left a space              C   (left)
      Mission Control / Move right a space             C   (right)
      Mission Control / Switch to Desktop 1            C   (1)

 *  KEYBOARD -> SHORTCUTS -> KEYBOARD
      Change the way Tab moves focus                   C   (F7)
      Turn keyboard access on or off                   C   (F1)
      Move focus to the menu bar                       C   (F2)
      Move focus to the Dock                           C   (F3)
      Move focus to active or next window              C   (F4)
      Move focus to the window toolbar                 C   (F5)
      Move focus to the floating window                C   (F6)
      Move focus to next window                          G (grave)
      Move focus to the window drawer                   AG (grave)
      Move focus to status menus                       C   (F8)

 *  KEYBOARD -> SHORTCUTS -> INPUT SOURCES
      Select the previous input source                  AG (T)
      Select next source in Input menu                 CAG (T)

 *  KEYBOARD -> SHORTCUTS -> SCREEN SHOTS
      Save picture of screen as a file                S  G (3)
      Copy picture of screen to the clipboard         SC G (3)
      Save picture of selected area as a file         S  G (4)
      Copy picture of selected area to the clipboard  SC G (4)

 *  KEYBOARD -> SHORTCUTS -> SERVICES
    PICTURES:
      Capture Full Screen
      Capture Screen using Timer
      Capture Selection from Screen
      Take Screenshot
      Import Image
      Make New File in Filed Documents
      New Day One Entry With Selection
      Open with Pixelmator
      Open with Pixelmator Pro
      Set Desktop Picture

    MESSAGING:
      New Email To Address
      New Email With Selection

    DEVELOPMENT:
      Activity Monitor
      Allocation & Leaks
      File Activity
      System Trace
      Compare files                                   SCAG (C)
      Compare To Master
      Create Service
      Create Workflow
      Get result of AppleScript                          G (asterisk)
      Make New AppleScript
      Run as AppleScript
      Time Profile Active Application
      Time Profile App Under Mouse
      Time Profile Entire System
      Toggle Instruments Recording

    FILES AND FOLDERS:
      Open Selected File in TextEdit
      New Terminal at Folder
      New Terminal Tab at Folder
      Encode Selected Audio Files
      Encode Selected Video Files
      Folder Actions Setup...
      Open as Twitter Username
      Tweet
      Open in Sourcetree
      Run SuperDuper! Settings
      Send File To Bluetooth Device                   S  G (B)

    SEARCHING:
      Look Up in Dictionary
      Search With Google                              S  G (L)
      Spotlight                                       S  G (F)

    TEXT:
      Add Contact
      Call
      Send Message
      Send SMS
      Add to Evernote
      Add to iTunes as a Spoken Track
      Convert Text to Full Width
      Convert Text to Half Width
      Convert Text to Simplified Chinese              SACG (C)
      Convert Text to Traditional Chinese             S CG (C)
      Create Collection From Text
      Create Font Library From Text
      Display Font Information
      Create TextExpander 3 Snippet
      Find in Xcode
      Open Quickly in Xcode
      Make New Sticky Note                            S  G (Y)
      New Email With Selection
      New TextEdit Wi...tainig Selection
      nvALT: New Note from Selection                  S  G (V)
      OmniFocus 2: Send to Inbox
      OmniFocus 3: Send to Inbox
      Open
      Show in Finder
      Show Info in Finder
      Open man Page in Terminal                       S  G (M)
      Search man Page Index in Terminal               S  G (A)
      Open URL in RealPlayer
      Send to LaunchBar
      Show Map
      Summarize
      Translate                                          G (dot)

    INTERNET:
      Add to Reading List
      Open URL

    GENERAL:
    (from Automator/NewFileForServices):
      Aut_Beep_1                                      SCAG (R)
      Aut_Beep_2                                      SCAG (G)
      Aut_Beep_3                                      SCAG (B)
      Launch T-Terminal                               SCAG (T)

 *  KEYBOARD -> SHORTCUTS -> SPOTLIGHT
      Show Spotlight search                              G (Space)
      Show Finder search window                        CAG (Space)

 *  KEYBOARD -> SHORTCUTS -> ACCESSIBILITY
    ZOOM:
      Turn zoom on or off                              CAG (semicolon)
      Turn image smoothing on or off                   CAG (backslash)
      Zoom out                                         CAG (minus)
      Zoom in                                          CAG (equal)
      Turn focus following on or off                   CAG (slash)

    CONTRAST:
      Increase contrast                                CAG (dot)
      Decrease contrast                                CAG (comma)

      Invert colors                                   SC G (8)
      Turn VoiceOver on or off                           G (F5)
      Show Accessibility controls                       AG (F5)

 *  KEYBOARD -> SHORTCUTS -> APP SHORTCUTS
    ALL APPLICATIONS:
      Show Help menu                                  S  G (slash)
      Send to LaunchBar                               S  G (F1)
      Window                                          SCAG (W)

    FINDER.APP:
      Archivo -> Nueva ventana del Finder                G (N)

    CALCULATOR.APP:
      Visualizacion -> De programacion                SCAG (P)
      Visualizacion -> Cientifica                     SCAG (C)

    ATOM.APP:
      Edit -> Lines -> Auto Indent                       G (open square bracket)

    TEXTEDIT.APP:
      Format -> Allow Hyphenation                      CA  (H)
      Format -> Do not allow Hyphenation              SCA  (H)

   XCODE.APP:
     Debug/Step Over Instruction                       C   (F6)
     Debug/Step Into Instruction                       C   (F7)
*/
//                                                                                      //
// defining my system preferences shortcuts                                             //
//                                                                                      //
// macos high sierra                                                                    //
// version 10.13.6 (17g7024)                                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING SYMBOLS 4 ( FOR USING INTO 'ACTION_TAP_DANCE_DOUBLE(SYMBOL1, SYMBOL2)' )    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define SYM_EURO         LSFT(LALT(KC_2))  // euro symbol
#define SYM_I_QU      LSFT(LALT(KC_SLSH))  // inverted question mark
#define SYM_I_EX               LALT(KC_1)  // inverted exclamation mark
//                                                                                      //
// defining symbols 4 ( for using into 'action_tap_dance_double(symbol1, symbol2)' )    //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING _DALY COMMANDS 6                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define KC_CAPW          LSFT(LGUI(KC_3))  // Capture whole screen
#define KC_CAPP          LSFT(LGUI(KC_4))  // Capture portion of screen
// [UNUSED]
//      KC_CPYW          LCTL   (KC_CAPW)  // Copy whole screen       // LCTL (LSFT(LGUI(KC_3)))
//      KC_CPYP          LCTL   (KC_CAPP)  // Copy portion of screen  // LCTL (LSFT(LGUI(KC_4)))
// [unused]

#define PREV_APP       LSFT(LGUI(KC_TAB))  // previous app
#define NEXT_APP             LGUI(KC_TAB)  //     next app
#define PREV_WIN     LSFT(LGUI(KC_GRAVE))  // previous window
#define NEXT_WIN           LGUI(KC_GRAVE)  //     next window
#define PREV_TAB       LSFT(LCTL(KC_TAB))  // previous tab
#define NEXT_TAB             LCTL(KC_TAB)  //     next tab

#define SPT_SIRI             LGUI(KC_SPC)  // spotlight & siri

#define APP_WIND            LCTL(KC_DOWN)  // applications windows
#define MISS_CTL              LCTL(KC_UP)  // mission control
#define    SPEAK               LCAG(KC_H)  // start/stop to speak selected text 
                                                //or all the text if any is selected
                                                // LCTL = Hold Left Control, Alt and GUI and press kc
// [SYSTEM PREFERENCES]
#define     DESK                    KC_F6  // show desktop
#define LANCHPAD                   KC_F17  // F17 (set at 'Sys.Pref./Keyboard/Shortcuts/Launchpad & Doc')
#define  DASHBRD                   KC_F18  // F18 (set at 'Sys.Pref./Keyboard/Shortcuts/Mission Control')
#define ACTV_WIN              LCTL(KC_F4)  // active window
#define FLOA_WIN              LCTL(KC_F6)  // floating window
// [system preferences]

#define REOPEN_L         LSFT(LGUI(KC_T))  // reopen last closed window/tab
#define  CLOSE_A               LGUI(KC_Q)  // close application
#define  CLOSE_W               LGUI(KC_W)  // close window
#define  CLOSE_T               LGUI(KC_W)  // close tab

// [UNUSED]
#define AUTCOMPL                    KC_F5  // autocompletion
#define   P_MTCH   LSFT(LALT(LGUI(KC_V)))   //PASTE & MATCH STYLE

// 3ERD PARTY APPLICATIONS
// SUBLIME COMMANDS
#define P_ST_HY          LALT(LGUI(KC_V))   //PASTE (SUBLIME TEXT) FROM HISTORY
// sublime commands
// 3erd party applications
// [unused]
//                                                                                      //
// defining _daly commands 6                                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING _POWR COMMANDS 8                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define LCK_SCR          LCTL(LGUI(KC_Q))   //LOCK SCREEN (ask for pasword screen)
#define SLEP_MNUBAR      TD(SLEP_M)
#define KILMNU_TOOL      TD(KILM_T)
#define KILAPP_DOCK      TD(KILA_D)
#define SHUTD_STATB      TD(SHUT_S)
#define RSTRT_FLOAT      TD(RSTT_F)

// [SYSTEM PREFERENCES]
#define ZOOM_FOLLOW      LCAG(KC_SLSH)      //QMK: Hold Left Control, Alt and GUI and press kc
#define ZOOM_ON_OFF      LCAG(KC_SCLN)
#define ZOOM_IN          LCAG(KC_EQL)
#define ZOOM_OUT         LCAG(KC_MINS)
#define ZOOM_SMOOTH      LCAG(KC_BSLS)
#define CONTRST_UP       LCAG(KC_DOT)              //Hold Left Control, Alt and GUI and press kc
#define CONTRST_DWN      LCAG(KC_COMM)
//
// [UNUSED]
#define INVRT_COLOR      LSFT(LCTL(LGUI(KC_8)))  
// [INFO]
// it can't be used into an 'ACTION_TAP_DANCE_DOUBLE()'
// it can't be used into a statement of tap_dance: 'case SINGLE_TAP: INVRT_COLOR;'  We would get only '8'
// it can't be used into a 'RSFT_T(INVRT_COLOR)' neither
// [info]
// [unused]
//
// [system preferences]
//                                                                                      //
// defining _powr commands 8                                                            //
//////////////////////////////////////////////////////////////////////////////////////////


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
     FN_PVI

// TAP DANCE KEYCODES ACCESSIBLE FROM _NUMB (NUMBERS LAYER) 3
    ,SLNUMB  //   return to *GHKN layer (gherkin default layer)  // ... slash

// TAP DANCE KEYCODES ACCESSIBLE FROM _SYMB (SYMBOLS LAYER) 4
    ,Y_AMCI  // ampersand & circumflex accent
    ,G_DOEU  // dolar & euro
    ,Z_EXCL
    ,X_QUES


// TAP DANCE KEYCODES FOR _POWR (POWER LAYER) 8
    ,TG_IND   // toggle keyboard as whole indicator for capslock ON/OFF
    ,ST_IND   // steps up width of RGB lights working as capslock indicator
    ,LOGOUT   // logout user session
    ,HRESET   // on hold RESET keyboard
    ,SLEP_M   //   menu bar / (on hold) SLEEP
    ,KILM_T   //   dock bar / (on hold) KILL MENU
    ,KILA_D   //  tools bar / (on hold) KILL CURRENT APP
    ,SHUT_S   // status bar / (on hold) COMPUTER SHUT DOWN
    ,RSTT_F   // floating w / (on hold) COMPUTER   RESTART
/*
    ,RC_RWND // right control / rewind       // KC_F7
    ,RA_PLAY // right alt     / play/pause   // KC_SPC
    ,RG_FRWD // right gui     / forward      // KC_F9
*/

// [ADVICE]
//  ,BCKLIT   // accessing _RGBL layer from tap dance into _POWR layer
              // ...this way we don't waste a layer from being accesible from Default layer,
              // ...remember that you only can access 16 layer through LT(layer, key) and LM(layer, mod).
// [advice]    

// tap dance keycodes for _powr (power layer) 8



// TAP DANCE KEYCODES FOR _RGBL (RGBL LAYER) 15
    ,TG_RGB   // toggle RGB LEDs ON/OFF


// (i.e. KC_U: *'begin of line'/**'begin of paragraph')
    ,PVIM_uU ,PVIM_pP

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

/*
//Dflt
        COLEMAK = SAFE_RANGE,
        QWERTY,
        DVORAK,
        LOWER,
        RAISE,
        FN3,
//        FN4,
        ADJUST,
        dance_cln_finished,
*/

// MACROS FOR _ACCN LAYER 1
     CIRCU = SAFE_RANGE
    ,GRAVE
    ,DIAER 
// macros for _accn layer 1
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR _POWR LAYER 8
    ,VOL_1
    ,VOL_8
    ,BRIGHT_1
// macros for _powr layer 8
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR _APPS LAYER 7
    ,APP_Q_QQQQQ ,APP_W_TWTTR ,APP_E_EVERN ,APP_R_RRRRR ,APP_T_TERMI
                                         ,APP_Y_TYPIN ,APP_U_SUBLI ,APP_I_TEDIT ,APP_O_OMNIF ,APP_P_SPREF
    ,APP_A_SNOTE ,APP_S_SAFAR ,APP_D_D_ONE ,APP_F_FINDE ,APP_G_CHRME
                                         ,APP_H_SKTCH ,APP_J_JJJJJ ,APP_K_KVIEW ,APP_L_CLNDR ,APP_SP_SPSP 
    ,APP_Z_STUDI ,APP_X_XCODE ,APP_C_CALCU ,APP_V_VVVVV ,APP_B_BOOKS
                                         ,APP_N_NOTES ,APP_M_MAIL ,APP_ES_KEYN ,APP_BS_PAGE ,APP_EN_NUMB
// macros for _apps layer 7
//////////////////////////////////////////////////////////////////////////////////////////////////////###


//////////////////////////////////////////////////////////////////////////////////////////////////////###
// MACROS FOR _DALY LAYR 6
    ,DICTAD
// macros for _daly layer 6
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR _?VIM 9, 10, 11, 12, 13

// _PVIM LAYER
// this layer is all implemented without using '/Users/myUser/Library/KeyBindings/DefaultKeyBinding.dict'
// except for the 'H' key:
    ,PVIM_H
// _pvim layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// _DVIM LAYER
    ,DVIM_Y         ,DVIM_I  ,DVIM_O            // it's used tap_dance for U,P
    ,DVIM_H ,DVIM_J ,DVIM_K  ,DVIM_L  ,DVIM_SP
            ,DVIM_M ,DVIM_ES ,DVIM_BS ,DVIM_EN
// _dvim layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// _AVIM LAYER
//    ,AVIM_Y                     // _AVIM is for select VIM layr
//    ,AVIM_N                     // it's used SHIFT+key for the rest of the right side of the keyboard
// _avim layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// _CVIM LAYER
    ,CVIM_Y ,CVIM_U ,CVIM_I  ,CVIM_O  ,CVIM_P
            ,CVIM_J ,CVIM_K  ,CVIM_L  ,CVIM_SP
    ,CVIM_N ,CVIM_M ,CVIM_ES ,CVIM_BS ,CVIM_EN
// _cvim layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// _XVIM LAYER
    ,XVIM_Y ,XVIM_U ,XVIM_I  ,XVIM_O  ,XVIM_P
    ,XVIM_H ,XVIM_J ,XVIM_K  ,XVIM_L  ,XVIM_SP
    ,XVIM_N ,XVIM_M ,XVIM_ES ,XVIM_BS ,XVIM_EN
// _xvim layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// _ZVIM LAYER
    ,ZVIM_Y ,ZVIM_U ,ZVIM_I  ,ZVIM_O  ,ZVIM_P
    ,ZVIM_H ,ZVIM_J ,ZVIM_K  ,ZVIM_L  ,ZVIM_SP
    ,ZVIM_N ,ZVIM_M ,ZVIM_ES ,ZVIM_BS ,ZVIM_EN
// _zvim layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// macros for _?vim 9, 10, 11, 12, 13
//////////////////////////////////////////////////////////////////////////////////////////////////////###

//////////////////////////////////////////////////////////////////////////////////////////////////////###
// MACROS FOR _RGBL 15
// RED
    ,CH_RED  ,CH_CORL ,CH_ORNG ,CH_GOLR ,CH_GOLD          ,CH_YLLW          ,SAV_COL
// GREEN
    ,CH_CHRT ,CH_GREN ,CH_SPRG ,CH_TRQS ,CH_TEAL          ,CH_WHIT
// BLUE
    ,CH_CYAN ,CH_AZUR ,CH_BLUE ,CH_PRPL ,CH_MGNT          ,CH_PINK                   ,CH_EMPT

// macros for _blit 15
//////////////////////////////////////////////////////////////////////////////////////////////////////###

}; // enum custom keycodes
//                                                                                      //
// macros for process_record_user()                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// GLOBAL VARIABLES                                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

  static uint8_t shift_flag;
  static bool    hide_other_apps = false;
  static uint8_t gui_flag;

// [REFLEXION]
// Is it necessary that the 5 following vars were static ? Maybe I can remove 'static'
  static bool diaeresis_requested  = false;
  static bool circumflex_requested = false;
  static bool grave_requested      = false;

  static bool disabled_caps_before_accent = false;
  static bool rgb_caps = false;
  static bool rgb_numb = false;

  static bool whole_keyboard_as_indicator = true;
  static int  diff = 0;
  static int  prev_diff = 0;

  static uint16_t default_r = 0;
  static uint8_t  default_g = 0;
  static uint8_t  default_b = 0;

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
      else return 6;
    }
}
//                                                                                      //
// tap dance general setup section end                                                  //
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
// [FUNCTIONS] [_PVIM], [_DVIM], [_CVIM],     [_XVIM],     [_ZVIM]     & [_APPS]        //
//               KC_V,    KC_X,  [_PVIM]KC_C, [_PVIM]KC_X, [_PVIM]KC_Z   (KC_Q & KC_P)  //
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void pvim(char *key)
{
//  SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
    HYPR_V;
    SEND_STRING("p");
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

void zvim(char *key)
{
    HYPR_V;
    SEND_STRING("z");
    send_string(key);
}


void change_RGB_color(void)
{
    rgblight_setrgb(default_r, default_g, default_b);
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
//                                                                                      //
// [functions] [_pvim], [_dvim], [_cvim],     [_xvim],     [_zvim]     & [_apps]        //
//               kc_v,    kc_x,  [_pvim]kc_c, [_pvim]kc_x, [_pvim]kc_z   (kc_q & kc_p)  //
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

  rgb_caps = !rgb_caps;

// [INFO]
// Note, that instead of unregister_code (KC_LCAP), ...
// ... we write unregister_code (KC_CAPS).
// This is the way it works that I found by the trial and error method.
  unregister_code(KC_CAPS); 
// [info] 

  SEND_STRING(SS_UP(X_CAPSLOCK));

} //  my capslock function  -  [f(capsl)] - my capslock finished function


void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (rgb_caps == true)
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


void show_RGB_LEDs(void)  // MY SWITCH CAPSCLOCK INDICATORS ON FUNCTION
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

// [DELETTE] BUT COMPILER SAYS THAT I NEVER USE 12 PREVIOUS VARIABLES !!!
  uint8_t total;
  total = caps_rght_sta + caps_rght_end + caps_left_sta + caps_left_end + numb_rght_sta + numb_rght_end + numb_left_sta + numb_left_end + dflt_rght_sta + dflt_rght_end + dflt_left_sta + dflt_left_end;
  total = total + total;
// [delete]

  if (!rgblight_config.enable) { return; }

  if (rgb_caps)
  {
    if (whole_keyboard_as_indicator)
    {
      // RGHT = red
      caps_rght_sta = OUTER_RGHT;
      caps_rght_end = INNER_RGHT + 1;

      if (rgb_numb)
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
      // rght = red
      caps_rght_sta = INNER_RGHT - diff - 1;
      caps_rght_end = INNER_RGHT + 1;

      if (rgb_numb)
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
      dflt_left_end = OUTER_LEFT        + 1;
    }
  }
  else // rgb_caps = false
  {
    if (rgb_numb)
    {
      if (whole_keyboard_as_indicator)
      {
        // RGHT = blue
        numb_rght_sta = OUTER_RGHT;
        numb_rght_end = INNER_RGHT + 1;
        // LEFT = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = OUTER_LEFT + 1;
      }
      else // whole_keyboard_as_indicator = false
      {
        // left = blue
        numb_left_sta = INNER_LEFT;
        numb_left_end = INNER_LEFT + diff + 1;
        // rght = blue
        numb_rght_sta = INNER_RGHT - diff - 1;
        numb_rght_end = INNER_RGHT + 1;

        // rght = default color
        dflt_rght_sta = OUTER_RGHT;
        dflt_rght_end = INNER_RGHT - diff - 1;
        // left = default color
        dflt_left_sta = INNER_LEFT + diff + 1;
        dflt_left_end = OUTER_LEFT        + 1;
      }
    }
    else // rgb_numb = false & rgb_caps = false as well !!!
    {
      // LEFT = default color
      dflt_rght_sta = OUTER_RGHT;
      dflt_rght_end = INNER_RGHT + 1;
      // RGHT = default color
      dflt_left_sta = INNER_LEFT;
      dflt_left_end = OUTER_LEFT + 1;
    }
  }

  setrgb_range(RGB_RED,   caps_rght_sta, caps_rght_end);
  setrgb_range(RGB_RED,   caps_left_sta, caps_left_end);

  setrgb_range(RGB_BLUE,  numb_rght_sta, numb_rght_end);
  setrgb_range(RGB_BLUE,  numb_left_sta, numb_left_end);

  setrgb_range(default_r,
               default_g,
               default_b, dflt_rght_sta, dflt_rght_end);
  setrgb_range(default_r,
               default_g,
               default_b, dflt_left_sta, dflt_left_end);

  rgblight_set();

} // my switch capslock indicators on function
//                                                                                      //
// [functions] [_daly] kc_a [f(capsl)]                                                  //
//                                                                                      //
// capslock complementary functions                                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
//                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
//                    [F(DIA_A)], [F(DIA_E)],... [F(DIA_U)]                             // 
//                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
//                                                                                      //
// ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
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
//                                                                                      //
// [functions] [_daly] kc_a, kc_e, kc_i, kc_o, kc_u, kc_n                               //
//                    [f(circu)], [f(grave)], [f(diaer)]                                //
//                    [f(dia_a)], [f(dia_e)],... [f(dia_u)]                             // 
//                    [f(acc_a)], [f(acc_e)],... [f(acc_u)], [f(til_n)]                 //
//                                                                                      //
// accents complementary functions                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (HRESET)                                                    //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

  BEEP_1;
  _delay_ms(1);
  rgblight_enable_noeeprom();
  _delay_ms(1);


  for (uint8_t i = 0; i < 5; i++)
  {
    rgblight_setrgb(RGB_WHITE);
    _delay_ms(50);
    rgblight_setrgb(RGB_RED);
    _delay_ms(100);
  }
  reset_keyboard();
}
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
//             [_POWR] KC_Y (VOL_8)                                                     //
//             [_POWR] KC_M (BRIGHT_1)                                                  //
//                                                                                      //
// VOLUME SET TO LEVEL 1 FUNCTION (USED ALONE AND INTO SHUT DOWN AS WELL)               //
// VOLUME SET TO LEVEL 8 FUNCTION                                                       //
// BRIGHT SET TO LEVEL 1 FUNCTION                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void volumeSetToLevel1(void) {
  for (uint8_t i = 0; i < 16; i++)
  {
    register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
  }
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
}

void volumeSetToLevel8(void) {
  for (uint8_t i = 0; i < 16; i++)
    {
      register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
    }
  for (uint8_t i = 0; i < 8; i++)
    {
      register_code(KC__VOLUP); unregister_code(KC__VOLUP);
    }
}

void brightSetToLevel1(void) {
  for (uint8_t i = 0; i < 16; i++)
  {
    register_code(KC_SLCK); unregister_code(KC_SLCK);
  }
  register_code(KC_PAUS); unregister_code(KC_PAUS);
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
//             T A P   D A N C E   F O R    [ _ N U M B ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_ALPH] R_THUMB_1 (FN_PVI)                                                //
//                                                                                      //
//  F U N C T I O N S    L A Y E R    /    P V I M    L A Y E R    ( O N  /  O F F )    //
//                                                                                      //
//  R_THUMB_1:  @ [_FUNC] LAYER,                                                        //
//             @@ [_PVIM] LAYER                                                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//instantalize an instance of 'tap' for the 'FN_PVI' tap dance.
static tap FN_PVI_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FN_PVI_finished (qk_tap_dance_state_t *state, void *user_data) {
  FN_PVI_tap_state.state = cur_dance(state);
  switch (FN_PVI_tap_state.state) {
    case SINGLE_TAP:    break;

    case SINGLE_HOLD:   layer_on(_FUNC); break;

    case DOUBLE_HOLD:   layer_on(_PVIM); break;
  }
}

void FN_PVI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (FN_PVI_tap_state.state) {

    case SINGLE_TAP:    break;

    case SINGLE_HOLD:   layer_off(_FUNC); break;

    case DOUBLE_HOLD:   layer_off(_PVIM); break;

  }
  FN_PVI_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_alph] r_thumb_1 (fn_pvi)                                                //
//                                                                                      //
//  f u n c t i o n s    l a y e r    /    p v i m    l a y e r    ( o n  /  o f f )    //
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ n u m b ]  l a y e r                    //
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
// [TAPDANCE] [_NUMB] KC_B (PENUMB)                                                     //
//                                                                                      //
//  P E R C E N T  -  N U M B E R S   L A Y E R   O F F                                 //
//                                                                                      //
//  KC_B:  *  KC_PERC,                                                                  //
//        @@ [_NUMB] OFF                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// instantalize an instance of 'tap' for the 'PENUMB' tap dance.
/*static tap PENUMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void PENUMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  PENUMB_tap_state.state = cur_dance(state);
  switch (PENUMB_tap_state.state) {

    // [UNDERSTANDING]
    //  YOU CAN'T USE ANSI SHIFTED KEYCODES INTO TAP_DANCE CODE LIKE 'KC_PERC' !!!
    //  ANSI SHIFTED KEYCODES ARE VALID FOR KEYMAPS LAYOUTS.
    //  ... TAP_DANCE CODE NEEDS BASIC KEYCODES !!!
    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_5); break;  
    // [understanding]
    
    case DOUBLE_HOLD: rgb_numb = false;
                      layer_clear();
                      break;      
  }
}

void PENUMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (PENUMB_tap_state.state) {

    case SINGLE_TAP:    unregister_code(KC_5); unregister_code(KC_LSFT); break;

    case DOUBLE_HOLD:   break;

  }
  PENUMB_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [_numb] kc_b (penumb)                                                     //
//                                                                                      //
//  p e r c e n t  -  n u m b e r s   l a y e r   o f f                                 //
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

    case DOUBLE_HOLD:   rgb_numb = false;
                        layer_clear();
                        break;      
  }
}

void SLNUMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNUMB_tap_state.state) {

    case SINGLE_TAP:    unregister_code(KC_PSLS); break;

    case SINGLE_HOLD:// SET [_NUMB] ON
                        rgb_numb = true;
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
// [TAPDANCE] [ _PVIM ] KC_U (PVIM_uU)                                                  //
//                                                                                      //
//  B E G I N N I N G   O F   L I N E    /    P A R A G R A P H                         //
//                                                                                      //
//  KC_U:  * BEGINING OF LINE                                                           //
//        ** BEGINING OF PARAGRAPH                                                      //
//                                                                                      //
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
//                                                                                      //
// [tapdance] [ _pvim ] kc_u (pvim_uu)                                                  //
//                                                                                      //
//  b e g i n n i n g   o f   l i n e    /    p a r a g r a p h                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _PVIM ] KC_P (PVIM_pP)                                                  //
//                                                                                      //
//  E N D   O F   L I N E  /  P A R A G R A P H                                         //
//                                                                                      //
//  KC_P:  * END OF LINE                                                                //
//        ** END OF PARAGRAPH                                                           //
//                                                                                      //
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
//                                                                                      //
// [tapdance] [ _pvim ] kc_p (pvim_pp)                                                  //
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
}
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
//             T A P   D A N C E   F O R    [ _ P O W R ]    L A Y E R                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_RGBL] KC_ENT (TG_RGB)                                                   //
//                                                                                      //
//  T O G G L E    R G B    M O D E    O N  /  O F F                                    //
//                                                                                      //
//  TOGGLE RGB MODE ON OFF                                                              //
//                                                                                      //
//  KC_ENT:   *  TOGGLE RGB MODE ON OFF                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'TG_RGB' tap dance.
static tap TG_RGB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void TG_RGB_finished (qk_tap_dance_state_t *state, void *user_data) {
  TG_RGB_tap_state.state = cur_dance(state);
  switch (TG_RGB_tap_state.state) {

    case SINGLE_TAP:  //if (rgblight_config.enable && rgb_caps)
//                      show_RGB_LEDs();
                      rgblight_toggle_noeeprom();
//                      wait_ms(50);
                      _delay_ms(10);
                      show_RGB_LEDs();
                      break;

  }
}

void TG_RGB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TG_RGB_tap_state.state) {

    case SINGLE_TAP:  break;
                            
  }
  TG_RGB_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_ent (tg_rgb)                                                   //
//                                                                                      //
//  t o g g l e    r g b    m o d e    o n  /  o f f                                    //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_A (TG_IND)                                                     //
//                                                                                      //
//  T O G G L E    W H O L E    I N D I C A T O R S   /   R I G H T    S H I F T        //
//                                                                                      //
//  TOGGLE 'WHOLE RGB KEYBOARD' / 'THUMBS RGB' AS INDICATOR FOR 'CAPSLOCK', [_NUMB],... //
//                                                                                      //
//  KC_A:   *  TOGGLE 'WHOLE RGB KEYBOARD' / 'THUMBS RGB' AS INDICATOR                  //
//          @  RIGHT SHIFT                                                              //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'TG_IND' tap dance.
static tap TG_IND_tap_state = {
  .is_press_action = true,
  .state = 0
};

void TG_IND_finished (qk_tap_dance_state_t *state, void *user_data) {
  TG_IND_tap_state.state = cur_dance(state);
  switch (TG_IND_tap_state.state) {

    case SINGLE_TAP:  if (rgblight_config.enable && (rgb_caps || rgb_numb))
                      {
                        if (whole_keyboard_as_indicator)
                        {
                          diff = prev_diff;
                        }
                        else
                        {
                          prev_diff = diff;
                          diff  = 0;
                        }
                        whole_keyboard_as_indicator = !whole_keyboard_as_indicator;
                        show_RGB_LEDs();                        
                      }
                      break;
                            
    case SINGLE_HOLD: register_code(KC_RSFT); break;

  }
}

void TG_IND_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TG_IND_tap_state.state) {

    case SINGLE_TAP:  
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RSFT); break;
                            
  }
  TG_IND_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_a (tg_ind)                                                     //
//                                                                                      //
//  t o g g l e    w h o l e    i n d i c a t o r s   /   r i g h t    s h i f t        //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Q (ST_IND)                                                     //
//                                                                                      //
//  S T E P S   U P   W I D T H   O F   R G B   W O R K I N G   A S  I N D I C A T O R S//
//                                                                                      //
//  STEPS UP WIDTH OF RGB USED AS INDICATORS FOR 'CAPSLOCK', [_NUMB] LAYER,...          //
//                                                                                      //
//  KC_Q:   *  STEPS UP RGB WIDTH USED AS INDICATORS FOR CAPSLOCK, [_NUMB] LAYER,...    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'ST_IND' tap dance.
static tap ST_IND_tap_state = {
  .is_press_action = true,
  .state = 0
};

void ST_IND_finished (qk_tap_dance_state_t *state, void *user_data) {
  ST_IND_tap_state.state = cur_dance(state);
  switch (ST_IND_tap_state.state) {

    case SINGLE_TAP:  if (rgblight_config.enable && (rgb_caps || rgb_numb) && !whole_keyboard_as_indicator)
                      {
                        diff = (diff < 5 ? diff + 1 : 0 );
                        show_RGB_LEDs();
                      }
                      break;
  }
}

void ST_IND_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (ST_IND_tap_state.state) {

    case SINGLE_TAP:  
                      break;
  }
  ST_IND_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_q (st_ind)                                                     //
//                                                                                      //
//  s t e p s   u p   w i d t h   o f   r g b   w o r k i n g   a s  i n d i c a t o r s//
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Q (LOGOUT)                                                     //
//                                                                                      //
//  L O G O U T                                                                         //
//                                                                                      //
//  KC_Q:  @  LOGOUT CURRENT USER                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'LOGOUT' tap dance.
static tap LOGOUT_tap_state = {
  .is_press_action = true,
  .state = 0
};

void LOGOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  LOGOUT_tap_state.state = cur_dance(state);
  switch (LOGOUT_tap_state.state) {

                      // (guessed by try and fail method)
                      // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
                      // if we add ALT, we don't have to answer any menu, we logout directly
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_Q);

                      unregister_code(KC_Q);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      break;
  }
}

void LOGOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (LOGOUT_tap_state.state) {
                     
    case SINGLE_HOLD: break;
  }
  LOGOUT_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_q (logout)                                                     //
//                                                                                      //
//  l o g o u t                                                                         //
//////////////////////////////////////////////////////////////////////////////////////////


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
static tap HRESET_tap_state = {
  .is_press_action = true,
  .state = 0
};

void HRESET_finished (qk_tap_dance_state_t *state, void *user_data) {
  HRESET_tap_state.state = cur_dance(state);
  switch (HRESET_tap_state.state) {

    case SINGLE_HOLD: // starts backlight blinking and then reset the keyboard for about 7 seconds
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
//                                                                                      //
// [tapdance] [_powr] kc_r (hreset)                                                     //
//                                                                                      //
//  r e s e t                                                                           //
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

//////////////////////////////////////////////////////////////////////////////////////////////////////###
/*                                                                                                     */
/*   KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down)     */
/*                                                                                                     */
/*                          register_code(KC_POWER);                                                   */
/*                                                                                                     */
//////////////////////////////////////////////////////////////////////////////////////////////////////###
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


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_V (SHUT_S)                                                     //
//                                                                                      //
//  S T A T U S   B A R    /    S H U T   D O W N                                       //
//                                                                                      //
//  KC_V:   *  STATUS BAR                                                               //
//          @  SHUT DOWN (SET VOL TO 1 AND SHUT DOWN)                                   //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SHUT_S' tap dance.
static tap SHUT_S_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data) {
  SHUT_S_tap_state.state = cur_dance(state);
  switch (SHUT_S_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F8);  // STATUS BAR 
                      break;
// [system preferences]

    case SINGLE_HOLD:                        
    case DOUBLE_TAP:  volumeSetToLevel1();

                  //  keystrokes for shutting down:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);

                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   

                      break;

// [OLDWAY]
                   // Another way for shutting down, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_ENT); unregister_code(KC_ENT);
// [oldway]

// [INFO]
                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      */
// [info]
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
//                                                                                      //
// [tapdance] [_powr] kc_v (shut_s)                                                     //
//                                                                                      //
//  s t a t u s   b a r    /    s h u t   d o w n                                       //
//////////////////////////////////////////////////////////////////////////////////////////


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

// [_ALPH] LAYER
  [FN_PVI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, FN_PVI_finished, FN_PVI_reset)
// [_alph] layer

// [_SYMB] LAYER  (TWO IN A KEY)
 ,[Y_AMCI] = ACTION_TAP_DANCE_DOUBLE(KC_AMPR, KC_CIRC )                                   // & ^
//[A_GRAV]  // grave & tilde         //tilde        accessible while holding SHIFT key !  // ` ~
//[S_QUOT]  // quote & double quote  //double quote accessible while holding SHIFT key !  // ' "
 ,[G_DOEU] = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  SYM_EURO)                                   // $ €
 ,[Z_EXCL] = ACTION_TAP_DANCE_DOUBLE(KC_EXLM, SYM_I_EX)                                   // ! ¡
 ,[X_QUES] = ACTION_TAP_DANCE_DOUBLE(KC_QUES, SYM_I_QU)                                   // ? ¿
// [_symb] layer  (two in a key)

// [_NUMB] LAYER
// ,[PENUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, PENUMB_finished, PENUMB_reset)
 ,[SLNUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNUMB_finished, SLNUMB_reset)
// [_numb] layer

// [_POWR] LAYER
 ,[TG_IND]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TG_IND_finished, TG_IND_reset)
 ,[ST_IND]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ST_IND_finished, ST_IND_reset)

 ,[HRESET]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)
 ,[SLEP_M]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)
 ,[LOGOUT]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, LOGOUT_finished, LOGOUT_reset)

 ,[KILM_T]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILM_T_finished, KILM_T_reset)
 ,[KILA_D]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILA_D_finished, KILA_D_reset)
 ,[SHUT_S]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SHUT_S_finished, SHUT_S_reset)
 ,[RSTT_F]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSTT_F_finished, RSTT_F_reset)
 // [_powr] layer

// [_RGBL] LAYER
// `TG_RGB` IS NECESARY BECAUSE KEYCODE 'RGB_TOG' WRITES TO EEPROM AND CONSUMES EEPROM's CYCLES OF LIFE
 ,[TG_RGB]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TG_RGB_finished, TG_RGB_reset)
// [_rgbl] layer

// [_PVIM] LAYER
 ,[PVIM_uU] = ACTION_TAP_DANCE_FN(PVIM_uU_function)
 ,[PVIM_pP] = ACTION_TAP_DANCE_FN(PVIM_pP_function)
// [_pvim] layer

// [_DVIM] LAYER
 ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
 ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// [_dvim] layer

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


// How long (in milliseconds) to wait between animation steps for each of the "Solid color breathing" animations
// const uint8_t  RGBLED_BREATHING_INTERVALS[] PROGMEM = {30, 20, 10, 5}; // [DELETE] ???

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//////////////////////////////////////////////////////////////////////////////////////////////////////###
/*
  *  LEGENDS for all KEYMAPS:
  *   * get a keystroke through single tap
  *  ** get a keystroke through double tap
  *   @ access a layer  through single hold (or modifier)   
  *  @@ access a layer  through double hold (or clean all layers)
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _ALPH 0: Default layer = _ALPH layer
// CMD + R  =  [SINGLE _APPS LAYER]
// CMD + U  =  [SINGLE _APPS LAYER]
  * ,--------------------------------------------.  ,--------------------------------------------.
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    Q   |    W   |    E   |    R   |    T   |  |    Y   |    U   |    I   |    O   |    P   |
  * |        |        |        |⌘[_1APP]|        |  |        |⌘[_1APP]|        |        |        |
  * |@[_DALY]|@[_POWR]|@[_RGBL]|@[_APPS]|@[_SYMB]|  |        |@[_APPS]|@[_RGBL]|@[_POWR]|@[_DALY]|
  * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    A   |    S   |    D   |    F   |    G   |  |    H   |    J   |    K   |    L   |  Space |
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |  @LSft |  @LCtl |  @LAlt |  @LGui |@[_ACCN]|  |@[_ACCN]|  @LGui |  @LAlt |  @LCtl |  @LSft |
  * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    Z   |    X   |    C   |    V   |    B   |  |    N   |    M   | Escape |Bckspace|  Enter |
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |  @LSft |@[_DVIM]|@[_MOUS]|@[_PVIM]|@[_NUMB]|  |@[_SYMB]|@[_PVIM]|@[_FUNC]|        |  @LSft |
  * '--------------------------------------------'  '--------------------------------------------'
*/
[_ALPH] = KEYMAP(  // layer 0 : default layer
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,--------------------------------------------------------------------------------------.  ,------------------------------------------------------------------------------------------.
    LT(_DALY, KC_Q), LT(_POWR, KC_W), LT(_RGBL, KC_E), LT(_APPS, KC_R), LT(_SYMB, KC_T),                 KC_Y, LT(_APPS, KC_U),   LT(_RGBL, KC_I), LT(_POWR, KC_O),   LT(_DALY, KC_P),
//|----------------+----------------+----------------+----------------+------------------|  |----------------+----------------+------------------+----------------+--------------------|
       LSFT_T(KC_A),     CTL_T(KC_S),     ALT_T(KC_D),     GUI_T(KC_F), LT(_ACCN, KC_G),      LT(_ACCN, KC_H),     GUI_T(KC_J),       ALT_T(KC_K),     CTL_T(KC_L),    LSFT_T(KC_SPC),
//|----------------+----------------+----------------+----------------+------------------|  |----------------+----------------+------------------+----------------+--------------------|
       LSFT_T(KC_Z), LT(_DVIM, KC_X), LT(_MOUS, KC_C), LT(_PVIM, KC_V), LT(_NUMB, KC_B),      LT(_SYMB, KC_N), LT(_PVIM, KC_M), LT(_FUNC, KC_ESC),         KC_BSPC, TD(HRESET),//LSFT_T(KC_ENT)
//'--------------------------------------------------------------------------------------'  '------------------------------------------------------------------------------------------'
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
//                                              ,------------------+--------------------,   ,------------------+--------------------,
                                                          MO(_MOUS),         MO(_POWR),              TD(FN_PVI),         MO(_ACCN),
//                                                      |----------+--------------------|   |------------------+--------------------|
                                                                                  KC_1,                    KC_2,
//                                                               |----------------------|   |--------------------|
                              LT(_NUMB, KC_BSPC), LT(_PVIM, KC_SPC), LT(_DALY, KC_DEL),       LT(_RGBL, KC_TAB), LT(_SYMB, KC_SPC), LT(_APPS, KC_ENT)
//                          '-------------------+------------------+--------------------.   .------------------+------------------+-------------------'
),
// END OF _ALPH 0
//////////////////////////////////////////////////////////////////////////////////////////////////////###
/*
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,--------------------------------------------------------------------------------------.
    LT(_DALY, KC_Q), LT(_POWR, KC_W), LT(_RGBL, KC_E), LT(_APPS, KC_R), LT(_SYMB, KC_T),
//|----------------+----------------+----------------+----------------+------------------|
       LSFT_T(KC_A),     CTL_T(KC_S),     ALT_T(KC_D),     GUI_T(KC_F), LT(_ACCN, KC_G),
//|----------------+----------------+----------------+----------------+------------------|
       LSFT_T(KC_Z), LT(_DVIM, KC_X), LT(_MOUS, KC_C), LT(_PVIM, KC_V), LT(_NUMB, KC_B),
//'--------------------------------------------------------------------------------------'

             // RIGHT_HAND
             ,------------------------------------------------------------------------------------------.
                            KC_Y, LT(_APPS, KC_U),   LT(_RGBL, KC_I), LT(_POWR, KC_O), LT(_DALY, KC_P),
             |------------------+----------------+------------------+----------------+------------------|
                 LT(_ACCN, KC_H),     GUI_T(KC_J),       ALT_T(KC_K),     CTL_T(KC_L),  LSFT_T(KC_SPC),
             |------------------+----------------+------------------+----------------+------------------|
                 LT(_SYMB, KC_N), LT(_PVIM, KC_M), LT(_FUNC, KC_ESC),         KC_BSPC,  LSFT_T(KC_ENT),
             '------------------------------------------------------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/



// TESTING [_ALPH] LAYER
/*
  KC_Q, KC_W, KC_E, KC_R, KC_T,          KC_Y, KC_U, KC_I,   KC_O,    KC_P,
  KC_A, KC_S, KC_D, KC_F, KC_G,          KC_H, KC_J, KC_K,   KC_L,    KC_SPC,
  KC_Z, KC_X, KC_C, KC_V, KC_B,          KC_N, KC_M, KC_ESC, KC_BSPC, RESET,
                    KC_1, KC_2,          KC_A, KC_B,
                          KC_3,          KC_C,
              KC_4, KC_5, KC_6,          KC_D, KC_E, KC_F
*/
// testing [_alph] layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/* Keymap _ACCN 1: _ACCN layer
 * ,-----------------------------------.  ,-----------------------------------.
 * |*XXXXX| *XXXXX|   É  |*XXXXX|*XXXXX|  |*XXXXX|   Ú  |   Í  |    Ó  |*XXXXX|
 * |      |       |(éëèê)|      |      |  |      |(úüùû)|(íïìî)| (óöòô)|      |
 * |      |       |(ÉËÈÊ)|      |      |  |      |(ÚÜÙÛ)|(ÍÏÌÎ)| (ÓÖÒÔ)|      |
 * |------+-------+------+------+------|  |------+------+------+-------+------|
 * |   Á  | *XXXXX|*XXXXX|*XXXXX|@@@@@@|  |@@@@@@|*XXXXX|*XXXXX| *XXXXX|*XXXXX|
 * |(áäàâ)|@CIRCUM|@GRAVE|@DIAE-|@@@@@@|  |@@@@@@|@DIAE-|@GRAVE|@CIRCUM|      |
 * |(ÁÄÀÂ)| -MFLEX|      | RESIS|@@@@@@|  |@@@@@@| RESIS|      | -FLEX |      |
 * |------+-------+------+------+------|  |------+------+------+-------+------|
 * |*XXXXX| *XXXXX|*XXXXX|*XXXXX|*XXXXX|  |      |*XXXXX|*XXXXX| *XXXXX|*XXXXX|
 * |      |       |      |      |      |  |  Ñ ñ |      |      |       |      |
 * | @RSft| @RCtl | @RAlt| @RGui|      |  |      | @RGui| @RAlt|  @RCtl| @RSft|
 * '-----------------------------------'  '-----------------------------------'
*/
// _ACCN accent layer 1
[_ACCN] = KEYMAP(  // layer 1 : _ACCN layer 
//,------------------------------------------------. ,--------------------------------------------------.
     _______, _______, F(ACC_E), _______, _______,      _______, F(ACC_U), F(ACC_I), F(ACC_O), _______,
//|---------|--------|---------+--------+----------| |---------|---------+---------+---------+----------|
    F(ACC_A),   CIRCU,    GRAVE,   DIAER, _______,      _______,    DIAER,    GRAVE,    CIRCU, _______,
//|---------|--------|---------+--------+----------| |---------|---------+---------+---------+----------|
     KC_RSFT, KC_RCTL,  KC_RALT, KC_RGUI, _______,     F(TIL_N),  KC_RGUI,  KC_RALT,  KC_RCTL, KC_RSFT,
//|---------+--------+---------+--------+----------| |---------+---------+---------+---------+----------|
//                             ,--------+----------, ,--------+----------,
                                 _______, _______,     _______, _______,
//                             |--------+----------| |--------+----------|
                                          _______,     _______,
//                                      |----------| |---------|
                        _______, _______, _______,     _______, _______, _______
//                    '--------+--------+----------. .--------+--------+---------'
),
//'------------------------------------------------' '--------------------------------------------------'
// END OF _ACCN 1
//////////////////////////////////////////////////////////////////////////////////////////////////////###



/* Keymap _NUMB 3: numbers layer
* ,----------------------------------.  ,----------------------------------.
* |      |      |      |      |      |  |      |      |      |      |      |
* |   1  |   2  |   3  |   4  |   5  |  |   6  |   7  |   8  |   9  |   0  |
* |      |      |      |      |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* | SPACE|DELETE|   ,  |   .  |      |  |      |      |      |      |      |
* |      |      |      |      | $  € |  |   -  |   4  |   5  |   6  |   +  |
* | LSft | LCtl | LAlt | LGui |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* |      |      |      |      |@@@@@@|  |      |      |      |      |      |
* | ENTER|BCKSPC|  TAB |   =  |   %  |  |   /  |   1  |   2  |   3  |   *  |
* |      |      |      |      |@@@@@@|  |      |      |      |      |      |
* '----------------------------------'  '----------------------------------'
*/
// _NUMB layer 3
[_NUMB] = KEYMAP(  // layer 3 : numbers layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,--------------------------------------------------------------------------.  ,-------------------------------------------.
             KC_1,          KC_2,           KC_3,          KC_4,       KC_5,            KC_6,  KC_7,  KC_8,  KC_9,    KC_0,
//|--------------+--------------+---------------+--------------+-------------|  |-----------+------+------+------+----------|
    SFT_T(KC_SPC), CTL_T(KC_DEL), ALT_T(KC_COMM), GUI_T(KC_DOT), TD(G_DOEU),         KC_MINS,  KC_4,  KC_5,  KC_6, KC_PLUS,
//|--------------+--------------+---------------+--------------+-------------|  |-----------+------+------+------+----------|
           KC_ENT,       KC_BSPC,         KC_TAB,        KC_EQL,    KC_PERC,      TD(SLNUMB),  KC_1,  KC_2,  KC_3, KC_ASTR,
//,--------------------------------------------------------------------------.  ,-------------------------------------------.
//                                                       ,--------+----------,  ,--------+----------,
                                                           _______, _______,      _______, KC_UP,
//                                                       |--------+----------|  |--------+----------|
                                                                    _______,      _______,
//                                                                |----------|  |----------|
                                                  _______, _______, _______,      KC_LEFT, KC_DOWN, KC_RGHT
//                                              '--------+--------+----------.  .--------+--------+---------'
),
//'--------------------------------------------------------------------------'  '-------------------------------------------'
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _NUMB 3
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,--------------------------------------------------------------------------.
             KC_1,          KC_2,           KC_3,          KC_4,       KC_5,
//|--------------+--------------+---------------+--------------+-------------|
    SFT_T(KC_SPC), CTL_T(KC_DEL), ALT_T(KC_COMM), GUI_T(KC_DOT), TD(G_DOEU),
//|--------------+--------------+---------------+--------------+-------------|
           KC_ENT,       KC_BSPC,         KC_TAB,        KC_EQL,    KC_PERC,
//'--------------------------------------------------------------------------'

                                                            // RIGHT_HAND
                                                            ,-------------------------------------------.
                                                                    KC_6,  KC_7,  KC_8,  KC_9,    KC_0,
                                                            |-----------+------+------+------+----------|
                                                                 KC_MINS,  KC_4,  KC_5,  KC_6, KC_PLUS,
                                                            |-----------+------+------+------+----------|
                                                              TD(SLNUMB),  KC_1,  KC_2,  KC_3, KC_ASTR ),
                                                            '-------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/

/* Keymap _SYMB 4: symbols Layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |@@@@@@|  |      |      |      |      |      |
 * |   +  |   @  |   #  |   =  |   %  |  | &  ^ |   (  |   )  |   _  |   -  |
 * |      |      |      |      |@@@@@@|  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | LSft | LCtl | LAlt | LGui |      |  |      | LGui | LAlt | LCtl | LSft |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * | `  ~ | '  " |   \  |   /  | $  € |  |   |  |   [  |   ]  |   ,  |   .  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |@@@@@@|      |      |      |      |
 * | !  ¡ | ?  ¿ |   <  |   >  |   *  |  |@@@@@@|   {  |   }  |   :  |   ;  |
 * |      |      |      |      |      |  |@@@@@@|      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/
// SYMBOLS layer 4
[_SYMB] = KEYMAP(  // layer 4: symbols layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-----------------------------------------------------------------------------.  ,-----------------------------------------------------------------------------------.
           KC_PLUS,          KC_AT,        KC_HASH,         KC_EQL,    KC_PERC,            TD(Y_AMCI),        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_MINS,
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
    LSFT_T(KC_GRV), CTL_T(KC_QUOT), ALT_T(KC_BSLS), GUI_T(KC_SLSH), TD(G_DOEU),               KC_PIPE, GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_COMM), LSFT_T(KC_DOT),
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
        TD(Z_EXCL),     TD(X_QUES),        KC_LABK,        KC_RABK,    KC_ASTR,      LT(_SYMB, KC_NO),        KC_LCBR,        KC_RCBR,        KC_COLN,        KC_SCLN,
//,-----------------------------------------------------------------------------'  '-----------------------------------------------------------------------------------.
//                                                          ,--------+----------,  ,--------+----------,
                                                              _______, _______,      _______, _______,
//                                                          |--------+----------|  |--------+----------|
                                                                       _______,      _______,
//                                                                   |----------|  |----------|
                                                     _______, _______, _______,      _______, _______, _______
//                                                 '--------+--------+----------.  .--------+--------+---------'
),

///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// [info] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
// END OF _SYMB 4
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,-----------------------------------------------------------------------------.
           KC_PLUS,          KC_AT,        KC_HASH,         KC_EQL,    KC_PERC,
//|---------------+---------------+---------------+---------------+-------------|
    LSFT_T(KC_GRV), CTL_T(KC_QUOT), ALT_T(KC_BSLS), GUI_T(KC_SLSH), TD(G_DOEU),
//|---------------+---------------+---------------+---------------+-------------|
        TD(Z_EXCL),     TD(X_QUES),        KC_LABK,        KC_RABK,    KC_ASTR,
//,-----------------------------------------------------------------------------'

                    // RIGHT_HAND
                    ,-----------------------------------------------------------------------------------.
                            TD(Y_AMCI),        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_MINS,    
                    |-----------------+---------------+---------------+---------------+-----------------|
                               KC_PIPE, GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_COMM), LSFT_T(KC_DOT),
                    |-----------------+---------------+---------------+---------------+-----------------|
                      LT(_SYMB, KC_NO),        KC_LCBR,        KC_RCBR,        KC_COLN,        KC_SCLN ),
                    '-----------------------------------------------------------------------------------.
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/


/* Keymap _FUNC 5: functions Layer
 * ,------------------------------------.  ,----------------------------------.
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |  F01 |  F02 |   F03  |  F04 |  F05 |  |  F06 |  F07 |  F08 |  F09 |  F10 |
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |------+------+--------+------+------|  |------+------+------+------+------|
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |  F11 |  F12 |   F13  |  F14 |  F15 |  |  F16 |  F17 |  F18 |  F19 |  F20 |
 * |      |      |        |      |      |  |      |      |      |      |      |
 * |------+------+--------+------+------|  |------+------+------+------+------|
 * |      |      |        |      |*XXXXX|  |*XXXXX|      |@@@@@@|      |      |
 * |  F21 |  F22 |   F23  |  F24 |      |  |      | LEFT |  UP  | DOWN | RIGHT|
 * |      |      |@[_FUNC]|      |      |  |      |      |@@@@@@|      |      |
 * '------------------------------------'  '----------------------------------'
*/
// _FUNC layer 5
[_FUNC] = KEYMAP(  // layer 5 : multiple apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,------------------------------------------.           ,----------------------------------------------.
     KC_F1,  KC_F2,  KC_F3,  KC_F4,   KC_F5,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
//|-------+-------+-------+-------+----------|           |--------+--------+--------+--------+----------|
    KC_F11, KC_F12, KC_F13, KC_F14,  KC_F15,                KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,
//|-------+-------+-------+-------+----------|           |--------+--------+--------+--------+----------|
    KC_F21, KC_F22, KC_F23, KC_F24, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//'------------------------------------------'           '----------------------------------------------.
//                       ,--------+----------,           ,--------+----------,
                           _______, _______,               _______, _______,
//                       |--------+----------|           |--------+----------|
                                    _______,               _______,
//                                |----------|           |----------|
                  _______, _______, _______,               _______, _______, _______
//              '--------+--------+----------.           .--------+--------+----------'
),
// END OF _FUNC 5
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _DALY 6: DAiLY commands layer
 * ,----------------------------------.  ,----------------------------------.
 * |@@@@@@|      |Captur|Captur|      |  |      |      |      |      |@@@@@@|
 * |  Tab |Dictat|Window|Selct.|Float.|  | Close| Prev | Next |Mision|Launch|
 * |@@@@@@|      |^:Copy|^:Copy|window|  |  APP | APP  | APP  |Contrl|@@pad@|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |SptLig|*XXXXX|      |      |  |      |      |      |      |      |
 * | Caps |   &  |      | Speak|Active|  | Close| Prev | Next |Windws| Dash |
 * | Lock | Siri |      |      |window|  |Window|Window|Window| Apps | board|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |*XXXXX|*XXXXX|*XXXXX|Reopen|  |      |      |      |      |      |
 * |SftTab|      |      |      |window|  | Close| Prev | Next |DELETE| Desk |
 * |      |      |      |      | / tab|  |  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'  '------+------+------+------+------'
*/
// DALY layer 6
[_DALY] = KEYMAP(  // layer 6: DAiLY commands layer
//,--------------------------------------------------.,-------------------------------------------------.
       KC_TAB,   DICTAD, KC_CAPW, KC_CAPP, FLOA_WIN,    CLOSE_A, PREV_APP, NEXT_APP, MISS_CTL, LANCHPAD,
//|----------+---------+--------+--------+-----------||--------+---------+---------+---------+----------|
     F(CAPSL), SPT_SIRI, XXXXXXX,   SPEAK, ACTV_WIN,    CLOSE_W, PREV_WIN, NEXT_WIN, APP_WIND,  DASHBRD,
//|----------+---------+--------+--------+-----------||--------+---------+---------+---------+----------|
    S(KC_TAB),  XXXXXXX, XXXXXXX, XXXXXXX, REOPEN_L,    CLOSE_T, PREV_TAB, NEXT_TAB,  KC_DEL,      DESK,
//'--------------------------------------------------''-------------------------------------------------'
//                               ,--------+----------,,--------+----------,
                                   _______, _______,    _______, _______,
//                               |--------+----------||--------+----------|
                                            _______,    _______,
//                                        |----------||----------|
                          _______, _______, _______,    _______, _______, _______
//                      '--------+--------+----------..--------+--------+----------'
),
// ^ + KC_CAPW = KC_CPYW
// ^ + KC_CAPP = KC_CPYP
// END OF _DALY 6
////////////////////////////////////////////////////////////////////////////////////////////////////////


/* Keymap _APPS 7: _APPS layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      | EVER |@@@@@@| TERMI|  | TYPI |@@@@@@| TEXT |      |SYSTEM|
 * |*XXXXX|TWITTR|-NOTE |*XXXXX| -NAL |  |-NATOR|SUBLME|-EDIT |OMNIFO|PREFE-|
 * |      |      |      |@@@@@@|      |  |      |@@@@@@|      |      |RENCES|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |SIMPLE|      |  DAY |      |GOOGLE|  |      |      |KARBNR| CALEN|      |
 * | NOTE |SAFARI|  ONE |FINDER|CHROME|  |SKETCH|*XXXXX| EVENT|-DAR  |*XXXXX|
 * |      |      |      |      |      |  |      |      |VIEWER|      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | STU  |      | CALCU|      |      |  |      |      | KEY- |      | NUM- |
 * |-DIES | XCODE|-LATOR|*XXXXX| BOOKS|  | NOTES| MAIL | NOTE | PAGES| BERS |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/
// _APPS layer 7
[_APPS] = KEYMAP(  // layer 7 : apps layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-----------------------------------------------------------------.  ,------------------------------------------------------------------.
        _______, APP_W_TWTTR, APP_E_EVERN, APP_R_RRRRR, APP_T_TERMI,     APP_Y_TYPIN, APP_U_SUBLI, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF,
//|------------+------------+------------+------------+-------------|  |------------+------------+------------+------------+--------------|
    APP_A_SNOTE, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME,     APP_H_SKTCH, APP_J_JJJJJ, APP_K_KVIEW, APP_L_CLNDR,     _______,
//|------------+------------+------------+------------+-------------|  |------------+------------+------------+------------+--------------|
    APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_VVVVV, APP_B_BOOKS,     APP_N_NOTES,  APP_M_MAIL, APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB,
//'-----------------------------------------------------------------'  '------------------------------------------------------------------'
//                                              ,--------+----------,  ,--------+----------,
                                                  _______, _______,      _______, _______,
//                                              |--------+----------|  |--------+----------|
                                                           _______,      _______,
//                                                       |----------|  |----------|
                                         _______, _______, _______,      _______, _______, _______
//                                     '--------+--------+----------.  .--------+--------+---------'
),
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _APPS 7
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,-----------------------------------------------------------------.
    APP_Q_QQQQQ, APP_W_TWTTR, APP_E_EVERN, APP_R_RRRRR, APP_T_TERMI,
//|------------+------------+------------+------------+-------------|
    APP_A_SNOTE, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME,
//|------------+------------+------------+------------+-------------|
    APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_VVVVV, APP_B_BOOKS,
//'-----------------------------------------------------------------'

                                     // RIGHT_HAND
                                     ,------------------------------------------------------------------.
                                       APP_Y_TYPIN, APP_U_SUBLI, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF,
                                     |------------+------------+------------+------------+--------------|
                                       APP_H_SKTCH, APP_J_JJJJJ, APP_K_KVIEW, APP_L_CLNDR, APP_SP_SPSP,
                                     |------------+------------+------------+------------+--------------|
                                       APP_N_NOTES,  APP_M_MAIL, APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB ),
                                     '------------------------------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/


/* Keymap _POWR 8: POWeR productivity layer
* ,----------------------------------.  ,----------------------------------.
* | Step |@@@@@@|LCKSCR|*XXXXX|      |  |midVol|minVol|Vol.Up|@@@@@@|      |
* |throug|LOGOUT|      |onHold|      |  | lev.8| lev.1|      |VolDwn| Vol. |
* |Indctr|@@@@@@|@_RGBL| RESET|      |  | _TEST| _LAST|@_RGBL|@@@@@@| Mute |
* |------+------+------+------+------|  |------+------+------+------+------|
* |Toggle|Rewind| Play/|Forwrd|Toogle|  |Toogle| Zoom | Zoom | Zoom |Invert|
* | Whole|      | Pause|      |Smooth|  |Keybrd|ON/OFF|  IN  |  OUT |Colors|
* |Indctr|      |      |      |Images|  |follow|      |      |      |      |
* |@RShft|@RCtrl|@RAlt |@RCmnd|      |  | Focus|      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* | Menu | Dock | Tool |Status|Float.|  |Cntrst|Bright|Bright|Bright|Cntrst|
* | _bar | _bar | _bar | _bar |Window|  |      |  min.|      |      |      |
* |      |      |      |      |      |  |  Up  |lev. 1|  Up  | Down | Down |
* | SLEEP|KILLAP|K_MENU|SHUT_D|RSTART|  |      |      |      |      |      |
* '------+------+------+------+------'  '------+------+------+------+------'

// KC_BRIGHTNESS_DOWN(KC_BRID):->KC_PAUS
// KC_BRIGHTNESS_UP  (KC_BRIU):->KC_SLCK
// KC_MRWD:->KC_F7, KC_MPLY:->KC_SPC, KC_MFFD:->KC_F9,
*/
// _POWR layer 8
[_POWR] = KEYMAP(  // layer 8: POWeR productivity layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-------------------------------------------------------------------------.  ,-----------------------------------------------------------------------------.
     TD(ST_IND),    TD(LOGOUT), LT(_RGBL, LCK_SCR),    TD(HRESET),     XXXXXXX,        VOL_8,       VOL_1, LT(_RGBL, KC__VOLUP), KC__VOLDOWN,     KC__MUTE,
//|------------+--------------+---------------+--------------+--------------|  |------------+------------+----------------------+------------+---------------|
     TD(TG_IND), RCTL_T(KC_F7), RALT_T(KC_SPC), RGUI_T(KC_F9), ZOOM_SMOOTH,      ZOOM_FOLLOW, ZOOM_ON_OFF,              ZOOM_IN,    ZOOM_OUT,  INVRT_COLOR,
//|------------+--------------+---------------+--------------+--------------|  |------------+------------+----------------------+------------+---------------|
    SLEP_MNUBAR,   KILAPP_DOCK,    KILMNU_TOOL,   SHUTD_STATB, RSTRT_FLOAT,       CONTRST_UP,    BRIGHT_1,               KC_PAUS,     KC_SLCK, CONTRST_DWN,
//'-------------------------------------------------------------------------'  '-----------------------------------------------------------------------------'
//                                                      ,--------+----------,  ,--------+----------,
                                                          _______, _______,      _______, _______,
//                                                      |--------+----------|  |--------+----------|
                                                                   _______,      _______,
//                                                               |----------|  |----------|
                                                 _______, _______, _______,      _______, _______, _______

//                                             '--------+--------+----------.  .--------+--------+---------'
),
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// RSFT_T(kc) <--- [BOOKMARK] [FIXME]
//             SFT+ALT+CMD+ESC,    ALT+CMD+ESC,
//[bookmark]
//[fixme]
// END OF _POWR 8 
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,-----------------------------------------------------------------------------.
     TD(ST_IND),    TD(LOGOUT), LT(_RGBL, LCK_SCR),    TD(HRESET),     XXXXXXX,
//|------------+--------------+-------------------+--------------+--------------|
     TD(TG_IND), RCTL_T(KC_F7),     RALT_T(KC_SPC), RGUI_T(KC_F9), ZOOM_SMOOTH,
//|------------+--------------+-------------------+--------------+--------------|
    SLEP_MNUBAR,   KILAPP_DOCK,        KILMNU_TOOL,   SHUTD_STATB, RSTRT_FLOAT,
//'-----------------------------------------------------------------------------'

                           // RIGHT_HAND
                           ,----------------------------------------------------------------------------.
                                   VOL_8,       VOL_1, LT(_RGBL, KC__VOLUP), KC__VOLDOWN,     KC__MUTE,
                           |------------+------------+---------------------+------------+---------------|
                             ZOOM_FOLLOW, ZOOM_ON_OFF,              ZOOM_IN,    ZOOM_OUT,  INVRT_COLOR,
                           |------------+------------+---------------------+------------+---------------|
                              CONTRST_UP,    BRIGHT_1,              KC_PAUS,     KC_SLCK, CONTRST_DWN ), 
                           '----------------------------------------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/


/* Keymap _PVIM 9: _PVIM layer
 * ,--------------------------------------------.  ,----------------------------------.
 * |        |        |        |        |        |  |      |      |      |      |      |
 * |        |        |        |        |        |  | Shift| Move | Move | Move | Move |
 * |        |        |        |        |        |  |Prgrph| Begin| Word | Word |End Of|
 * |        |        |        |        |        |  |  Up  |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |--------+--------+--------+--------+--------|  |------+------+------+------+------|
 * |        |        |        |        |        |  |      |      |      |      |      |
 * |        |        |        |        |        |  |Center|      |      |      |      |
 * |        |        |        |        |        |  |LineIn| LEFT |  UP  | DOWN | RIGHT|
 * |        |        |        |        |        |  | View |      |      |      |      |
 * |--------+--------+--------+--------+--------|  |------+------+------+------+------|
 * |        |        |        |@@@@@@@@|        |  |      |      |      |      |      |
 * |        |        |        |@@@@@@@@|        |  | Shift| Move | Move | Move | Move |
 * |        |        |        |@@@@@@@@|        |  |Prgrph|      | Page | Page |      |
 * |@[_ZVIM]|@[_XVIM]|@[_CVIM]|@@@@@@@@|        |  | Down | HOME |  UP  | DOWN |  END |
 * '--------------------------------------------'  '----------------------------------'
*/
// _PVIM layer 9
[_PVIM] = KEYMAP(  // layer 9 : _PVIM layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,------------------------------------------------------.  ,-----------------------------------------------------------------------------------.
      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX,        LCTL(LGUI(KC_UP)),   TD(PVIM_uU), LALT(KC_LEFT),   LALT(KC_RGHT),  TD(PVIM_pP),
//|----------+----------|----------+----------+----------|  |--------------------+--------------+--------------+----------------+---------------|
      _______,   _______,   XXXXXXX,   XXXXXXX, XXXXXXX,                   PVIM_H,       KC_LEFT,         KC_UP,         KC_DOWN,      KC_RGHT,
//|----------+----------|----------+----------+----------|  |--------------------+--------------+--------------+----------------+---------------|
    MO(_ZVIM), MO(_XVIM), MO(_CVIM), MO(_PVIM), XXXXXXX,      LCTL(LGUI(KC_DOWN)), LALT(KC_HOME), LALT(KC_PGUP), LALT(KC_PGDOWN), LALT(KC_END),
//'------------------------------------------------------'  '-----------------------------------------------------------------------------------'
//                                    ,--------+---------,  ,--------+----------,
                                        _______, _______,     _______,   KC_UP,
//                                    |--------+---------|  |--------+----------|
                                                 _______,     _______,
//                                             |---------|  |---------|
                               _______, _______, _______,     KC_LEFT, KC_DOWN, KC_RGHT
//                           '--------+--------+---------.  .--------+--------+----------'
),
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// MO(_ZVIM),MO(_XVIM),MO(_CVIM),MO(_PVIM) allow us changing from any ?VIM_layer to each other ?VIM_layer
// ... because we put '_______' in this locations in the rest of the ?VIM layers
// END OF _PVIM 9
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,------------------------------------------------------.
      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX,  
//|----------+----------|----------+----------+----------|
      _______,   _______,   XXXXXXX,   XXXXXXX, XXXXXXX,  
//|----------+----------|----------+----------+----------|
    MO(_ZVIM), MO(_XVIM), MO(_CVIM), MO(_PVIM), XXXXXXX,  
//'------------------------------------------------------'
                  // RIGHT_HAND
                    ,-----------------------------------------------------------------------------------.
                        LCTL(LGUI(KC_UP)),   TD(PVIM_uU), LALT(KC_LEFT),   LALT(KC_RGHT),  TD(PVIM_pP),
                    |--------------------+--------------+--------------+----------------+---------------|
                                   PVIM_H,       KC_LEFT,         KC_UP,         KC_DOWN,      KC_RGHT,
                    |--------------------+--------------+--------------+----------------+---------------|
                      LCTL(LGUI(KC_DOWN)), LALT(KC_HOME), LALT(KC_PGUP), LALT(KC_PGDOWN), LALT(KC_END) ),
                    '-----------------------------------------------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/




/* Keymap _DVIM 10: _DVIM layer  // delete layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |Delete|Delete|Delete|Delete|
 * |      |      |      |      |      |  | Yank | Begin| Word | Word |End Of|
 * |      |      |      |      |      |  |      |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |Delete|Delete|Delete|Delete|
 * |      |      |      |      |      |  |      | Char | Line | Line | Char |
 * |      |      |      |      |      |  |      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |@@@@@@|      |      |      |  |      |Delete|Delete|@@@@@@|Delete|
 * |      |@@@@@@|      |      |      |  |      |      | Page |Delete|      |
 * |      |@@@@@@|      |      |      |  |      | HOME |  UP  |PgDown|  END |
 * '----------------------------------'  '----------------------------------'
 */
// _DVIM layer 10
[_DVIM] = KEYMAP(  // layer 10 : _DVIM layer  // delete layer
//,---------------------------------------------.,------------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    DVIM_Y, TD(DVIM_uU),  DVIM_I,  DVIM_O, TD(DVIM_pP),
//|--------+--------+--------+--------+---------||--------+------------+--------+--------+--------------|
    _______, _______, _______, _______, XXXXXXX,    DVIM_H,      DVIM_J,  DVIM_K,  DVIM_L,     DVIM_SP,
//|--------+--------+--------+--------+---------||--------+------------+--------+--------+--------------|
    _______, _______, _______, _______, XXXXXXX,   XXXXXXX,      DVIM_M, DVIM_ES, DVIM_BS,     DVIM_EN,
//'---------------------------------------------''------------------------------------------------------'
//                           ,--------+---------,,--------+----------,
                               _______, _______,   _______, _______,
//                           |--------+---------||--------+----------|
                                        _______,   _______,
//                                    |---------||---------|
                      _______, _______, _______,   _______, _______, _______
//                  '--------+--------+---------..--------+--------+---------'
),
// DVIM_H is empty, DVIM_N is empty
// END OF _DVIM 10
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _AVIM X10X: _AVIM layer  // select VIM layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |Select|Select|Select|Select|Select|
 * |      |      |      |      |      |  |Prgrph| Begin| Word | Word |End Of|
 * |      |      |      |      |      |  | Above|Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |Select|Select|Select|Select|
 * |@@@@@@|      |      |      |      |  |      | Char | Line | Line | Char |
 * |@@@@@@|      |      |      |      |  |      | LEFT |  UP  | DOWN | RIGHT|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |@@@@@@|      |  |Select|Select|Select|Select|Select|
 * |      |      |      |@@@@@@|      |  |Prgrph|      | Page | Page |      |
 * |      |      |      |@@@@@@|      |  | Below| HOME |  UP  | DOWN |  END |
 * '----------------------------------'  '----------------------------------'
*/
// _AVIM layer X10X
/*
[_AVIM] = KEYMAP(  // layer X10X : _AVIM layer  // select VIM layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,----------------------------------------------.  ,----------------------------------------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       AVIM_Y,   TD(AVIM_uU), LSFT(LALT(KC_LEFT)), LSFT(LALT(KC_RGHT)),   TD(AVIM_pP),
//|--------+--------+--------+--------+----------|  |--------+--------------+--------------------+--------------------+----------------|
    _______, _______, _______, _______, XXXXXXX,      XXXXXXX, LSFT(KC_LEFT),         LSFT(KC_UP),       LSFT(KC_DOWN), LSFT(KC_RGHT),
//|--------+--------+--------+--------+----------|  |--------+--------------+--------------------+--------------------+----------------|
    _______, _______, _______, _______, XXXXXXX,       AVIM_N, LSFT(KC_HOME),       LSFT(KC_PGUP),     LSFT(KC_PGDOWN),  LSFT(KC_END) ),
//'----------------------------------------------'  '----------------------------------------------------------------------------------'
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _AVIM X10X  // AVIM_H is empty
////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  
//|--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,  
//|--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,  
//'----------------------------------------------'

                                     // RIGHT_HAND
                     ,----------------------------------------------------------------------------------.
                        AVIM_Y,   TD(AVIM_uU), LSFT(LALT(KC_LEFT)), LSFT(LALT(KC_RGHT)),   TD(AVIM_pP),
                     |--------+--------------+--------------------+--------------------+----------------|
                       XXXXXXX, LSFT(KC_LEFT),         LSFT(KC_UP),       LSFT(KC_DOWN), LSFT(KC_RGHT),
                     |--------+--------------+--------------------+--------------------+----------------|
                        AVIM_N, LSFT(KC_HOME),       LSFT(KC_PGUP),     LSFT(KC_PGDOWN),  LSFT(KC_END) ),
                     '----------------------------------------------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/


/* Keymap _CVIM 11: _CVIM layer  // power edition layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |Duplct|Insert| Copy | Copy |Insert|
 * |      |      |      |      |      |  |currnt| line | prev | next | line |
 * |      |      |      |      |      |  |prBelw|abvePr|prgrph|prgrph|belwPr|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      | Upper| Lower| Capi |      |
 * |      |      |      |      |      |  |Outdnt| case | case |talize|Indent|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |@@@@@@|      |  | Copy | Copy | Copy | Copy | Copy |
 * |      |      |@@@@@@|@@@@@@|      |  |Chrctr| Word | Line |prgrph|  All |
 * |      |      |@@@@@@|@@@@@@|      |  |      |      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/
// _CVIM layer 11
[_CVIM] = KEYMAP(  // layer 11 : _CVIM layer  // power edition VIM layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###
//,----------------------------------------------.        ,---------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             CVIM_Y, CVIM_U,  CVIM_I,  CVIM_O,  CVIM_P,
//|--------+--------+--------+--------+----------|        |--------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,            OUTDENT, CVIM_J,  CVIM_K,  CVIM_L, CVIM_SP,
//|--------+--------+--------+--------+----------|        |--------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,             CVIM_N, CVIM_M, CVIM_ES, CVIM_BS, CVIM_EN,
//'----------------------------------------------'        '---------------------------------------------'
//                            ,--------+---------,        ,--------+----------,
                                _______, _______,           _______, _______,
//                            |--------+---------|        |--------+----------|
                                         _______,           _______,
//                                     |---------|        |---------|
                       _______, _______, _______,           _______, _______, _______
//                   '--------+--------+---------.        .--------+--------+---------'
),

// 'OUTDENT = LGUI(KC_LBRC)' implemented because 'outdent:;' in 'DefaultKeyBinding.dict' doesn't work !!!
// ... it happens the same as in 'transposeWord:;' !!!
// END OF _CVIM 11
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _XVIM 12: _XVIM layer  // movement VIM layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |   5  |  15  |  25  |  50  |  75  |
 * |      |      |      |      |      |  | lines| lines| lines| lines| lines|
 * |      |      |      |      |      |  |  Up  |  Up  |  Up  |  Up  |  Up  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |Comple|Transp|Transp|Ignore| Check|
 * |      |      |      |      |      |  |  te  | Words| Chars|Spllng|Spllng|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |@@@@@@|      |  |   5  |  15  |  25  |  50  |  75  |
 * |      |@@@@@@|      |@@@@@@|      |  | lines| lines| lines| lines| lines|
 * |      |@@@@@@|      |@@@@@@|      |  | Down | Down | Down | Down | Down |
 * '----------------------------------'  '----------------------------------'
*/
// _XVIM layer 12
[_XVIM] = KEYMAP(  // layer 12 : _XVIM layer  // movement VIM layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###
//,----------------------------------------------.         ,--------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XVIM_Y, XVIM_U,  XVIM_I,  XVIM_O,  XVIM_P,
//|--------+--------+--------+--------+----------|         |-------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,             XVIM_H, XVIM_J,  XVIM_K,  XVIM_L, XVIM_SP,
//|--------+--------+--------+--------+----------|         |-------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,             XVIM_N, XVIM_M, XVIM_ES, XVIM_BS, XVIM_EN,
//'----------------------------------------------'         '--------------------------------------------'
//                            ,--------+---------,         ,--------+----------,
                                _______, _______,            _______, _______,
//                            |--------+---------|         |--------+----------|
                                         _______,            _______,
//                                     |---------|         |---------|
                       _______, _______, _______,            _______, _______, _______
//                   '--------+--------+---------.         .--------+--------+---------'
),
// END OF _XVIM 12
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _ZVIM 13: _ZVIM layer  // alignment VIM layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  | Super|      | Move | Move | Paste|
 * |      |      |      |      |      |  |script|      |2Words|2Words|asRich|
 * |      |      |      |      |      |  |      |      | Left | Right| Text |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |  Un  | Align| Align| Align| Align|
 * |      |      |      |      |      |  |script|to the|in the|Justi-|to the|
 * |      |      |      |      |      |  |      | Left |Center| fied | Right|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |@@@@@@|      |  | Subs |Scroll|Scroll|Scroll|Scroll|
 * |@@@@@@|      |      |@@@@@@|      |  |script| until| Page | Page | until|
 * |@@@@@@|      |      |@@@@@@|      |  |      | HOME |  UP  | DOWN |  END |
 * '----------------------------------'  '----------------------------------'
*/
// _ZVIM layer 13
[_ZVIM] = KEYMAP(  // layer 13 : _ZVIM layer  // alignment VIM layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###
//,----------------------------------------------.        ,---------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            ZVIM_Y, _______,  ZVIM_I,  ZVIM_O,  ZVIM_P,
//|--------+--------+--------+--------+----------|        |-------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,            ZVIM_H,  ZVIM_J,  ZVIM_K,  ZVIM_L, ZVIM_SP,
//|--------+--------+--------+--------+----------|        |-------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,            ZVIM_N,  ZVIM_M, ZVIM_ES, ZVIM_BS, ZVIM_EN,
//'----------------------------------------------'        '---------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
//                           ,--------+---------,         ,--------+----------,
                               _______, _______,            _______, _______,
//                           |--------+---------|         |--------+----------|
                                        _______,            _______,
//                                    |---------|         |---------|
                      _______, _______, _______,            _______, _______, _______
//                  '--------+--------+---------.         .--------+--------+---------'
),
// END OF _ZVIM 13
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _MOUS 14: Mouse layer
* ,----------------------------------.  ,----------------------------------.
* |      |      |      |      |      |  |      |      |      |      |      |
* |      |      |      |      |      |  |      | wLeft|  wUp | wDown|wRight|
* |      |      |      |      |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* |      |      |      |      |      |  |      |      |      |      |      |
* | @LSft| @LCtl| @LAlt| @LGui|      |  |      | mLeft|  mUp | mDown|mRight|
* |      |      |      |      |      |  |      |      |      |      |      |
* |------+------+------+------+------|  |------+------+------+------+------|
* |      |      |@@@@@@|      |      |  |      |      |      |      |      |
* |Accel0|Accel2|@@@@@@|Accel1|Accel0|  | mBtn1| mBtn2| mBtn3| mBtn4| mBtn5|
* |      |      |@@@@@@|      |      |  |      |      |      |      |      |
* '------+------+------+------+------'  '------+------+------+------+------'
*/
// _MOUS layer 14
[_MOUS] = KEYMAP(  // layer 14: mouse layer
//////////////////////////////////////////////////////////////////////////////////////////////////////###
//,----------------------------------------------.       ,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
//|--------+--------+--------+--------+----------|       |--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,           XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
//|--------+--------+--------+--------+----------|       |--------+--------+--------+--------+----------|
    KC_ACL0, KC_ACL2, XXXXXXX, KC_ACL1, KC_ACL0,           KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5,
//'----------------------------------------------'       '----------------------------------------------'
//                            ,--------+---------,       ,--------+----------,
                                _______, _______,          _______, _______,
//                            |--------+---------|       |--------+----------|
                                         _______,          _______,
//                                     |---------|       |---------|
                       _______, _______, _______,          _______, _______, _______
//                   '--------+--------+---------.       .--------+--------+----------'
),
//
// Underlines over ASDF keys allow us using MODs while clickig, (e.g. CTL+click)
/*    C O N F I G      F I L E
#define MOUSEKEY_DELAY            300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_DELAY       50
#define MOUSEKEY_WHEEL_MAX_SPEED    8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
// END OF _MOUS 14

/Mousekeys Settings 0 16 7 60 0 ? ?
#define MOUSEKEY_DELAY              60
#define MOUSEKEY_INTERVAL           50
#define MOUSEKEY_MAX_SPEED           8
#define MOUSEKEY_TIME_TO_MAX        40

// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_DELAY 500
// NO SIRVE PARA NADA, NO EXISTE, CREO !    #define MOUSEKEY_WHEEL_INTERVAL 220
#define MOUSEKEY_WHEEL_MAX_SPEED     2
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200  // max. value: 255

//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/


/*  
*  Keymap _RGBL 15: RGB Light leds layer
* ,--------------------------------------------------.  ,-------------------------------------------------.
* |    RED   |  CORAL |   ORANGE  |GOLDENROD|  GOLD  |  | YELLOW |    HUE   |    HUE   |        | REVERSE |
* |          |        |           |         |        |  |        | DECREMENT| INCREMENT|        | RGB MODE|
* |----------+--------+-----------+---------+--------|  |--------+----------+----------+--------+---------|
* |CHARTREUSE|  GREEN |SPRINGGREEN|TURQUOISE|  TEAL  |  |  WHITE |SATURATION|SATURATION|        |         |
* |          |        |           |         |        |  |        | DECREMENT| INCREMENT|        | RGB MODE|
* |----------+--------+-----------+---------+--------|  |--------+----------+----------+--------+---------|
* |   CYAN   |  AZURE |    BLUE   |  PURPLE | MAGENTA|  |  PINK  |   VALUE  |   VALUE  | WITHOUT| BL_OFF  |
* |          |        |           |         |        |  |        | DECREMENT| INCREMENT|  COLOR |ToggleRGB|
* '--------------------------------------------------'  '-------------------------------------------------'
*/
// _RGBL layer 15
[_RGBL] = KEYMAP( // layer 15: _RGBL layer
//'-----------------------------------------------'     '-------------------------------------------------'
     CH_RED, CH_CORL, CH_ORNG, CH_GOLR, CH_GOLD,          CH_YLLW, RGB_HUD, RGB_HUI, SAV_COL,   RGB_RMOD,
    CH_CHRT, CH_GREN, CH_SPRG, CH_TRQS, CH_TEAL,          CH_WHIT, RGB_SAD, RGB_SAI, _______,    RGB_MOD,
    CH_CYAN, CH_AZUR, CH_BLUE, CH_PRPL, CH_MGNT,          CH_PINK, RGB_VAD, RGB_VAI, CH_EMPT, TD(TG_RGB),
//'-----------------------------------------------'     '-------------------------------------------------'
//                            ,--------+----------,     ,--------+----------,
                                _______, _______,         _______, _______,
//                            |--------+----------|     |--------+----------|
                                         _______,         _______,
//                                     |----------|     |----------|
                       _______, _______, _______,         _______, _______, _______
//                   '--------+--------+----------.     .--------+--------+---------'
)

};


//mdi
/*
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                        M A T R I X   I N I T   U S E R                               //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void matrix_init_user(void) {

//  layer_clear();

// set_unicode_input_mode(UC_OSX);
// REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
}; // end of matrix_init_user
//                                                                                      //
//                        m a t r i x   i n i t   u s e r                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
*/

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

  [DIA_A] = ACTION_FUNCTION(DIA_A),
  [DIA_E] = ACTION_FUNCTION(DIA_E),
  [DIA_I] = ACTION_FUNCTION(DIA_I),
  [DIA_O] = ACTION_FUNCTION(DIA_O),
  [DIA_U] = ACTION_FUNCTION(DIA_U),
  
  [CAPSL] = ACTION_FUNCTION(CAPSL)
};
//////////////////////////////////////////////////////////////////////////////////////////////////////###



void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  shift_flag = get_mods()&LSHIFT_MODS;
  switch (id) {
    case ACC_A:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
/* MAXIMUM LINE WIDTH FOR RIGHT PRINTING  XX 105  CHARACTERS XX  MAXIMUM LINE WIDTH FOR RIGHT PRINTING */
/*XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();

        if (circumflex_requested)
        {
            circumflex_accent_function();
        }
        else 
        { 
            if (grave_requested)       
            {
                grave_accent_function();
            }
            else
            { 
                if (diaeresis_requested)
                {
                    diaeresis_accent_function();
                } 
                else // neither circumflex_requested, nor grave_requested, nor diaeresis_requested
                {
                    acute_accent_function();
                } // if (diaeresis_requested)

            } // if (grave_requested)

          } // if (circumflex_requested)

          enable_capslock_after_accents_function();
          if (shift_flag)
          {
          //  press LSHIFT
              add_mods(shift_flag);
              add_weak_mods(shift_flag);
              send_keyboard_report();
          };            
       // [FIXME] [FIX THE FO LINE LOCATION]
        register_code(KC_A);
        unregister_code(KC_A);
      }
      else
      {
  //        SEND_STRING("NO record event pressed");
      }
    break;


    case ACC_E:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
/* MAXIMUM LINE WIDTH FOR RIGHT PRINTING  XX 105  CHARACTERS XX  MAXIMUM LINE WIDTH FOR RIGHT PRINTING */
/*XX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XXX  USING SUBLIMEPRINT  XX*/
/*XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        
        if (circumflex_requested)           { circumflex_accent_function(); }

          else { if (grave_requested)            { grave_accent_function(); }

             else { if (diaeresis_requested) { diaeresis_accent_function(); } 

                else                             { acute_accent_function(); } 
        } }

        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
           
        register_code(KC_E);
        unregister_code(KC_E);
      }
      else
      {
      }
    break;

    case ACC_I:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        
        if (circumflex_requested)    { circumflex_accent_function(); }

          else { if (grave_requested)         { grave_accent_function(); }

             else { if (diaeresis_requested)  { diaeresis_accent_function(); } 

                else                                  { acute_accent_function(); } 
        } }

        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
            
        register_code(KC_I);
        unregister_code(KC_I);
      }
      else
      {
      }
    break;

    case ACC_O:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        
        if (circumflex_requested)           { circumflex_accent_function(); }

          else { if (grave_requested)            { grave_accent_function(); }

             else { if (diaeresis_requested) { diaeresis_accent_function(); } 

                else                             { acute_accent_function(); } 
        } }

        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
            
        register_code(KC_O);
        unregister_code(KC_O);
      }
      else
      {
      }
    break;

    case ACC_U:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        
        if (circumflex_requested)           { circumflex_accent_function(); }

          else { if (grave_requested)            { grave_accent_function(); }

             else { if (diaeresis_requested) { diaeresis_accent_function(); } 

                else                             { acute_accent_function(); } 
        } }

        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
            
        register_code(KC_U);       
        unregister_code(KC_U);
      }
      else
      {
      }  
    break;



    case TIL_N:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
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
            
        register_code(KC_N);
        unregister_code(KC_N);
      }
      else 
      {
      }
    break;



    case DIA_A:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        diaeresis_accent_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };            
     // [FIXME] [FIX THE FO LINE LOCATION]
      register_code(KC_A);
      unregister_code(KC_A);
    }
    else
    {
//        SEND_STRING("NO record event pressed");
    }
    break;


    case DIA_E:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        diaeresis_accent_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
       
        register_code(KC_E);
        unregister_code(KC_E);
      }
      else
      {
      }
      break;

    case DIA_I:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        diaeresis_accent_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
        
        register_code(KC_I);
        unregister_code(KC_I);
      }
      else
      {
      }
      break;

    case DIA_O:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        diaeresis_accent_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
            
        register_code(KC_O);
        unregister_code(KC_O);
      }
      else
      {
      }
      break;

    case DIA_U:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
        if (shift_flag)  // shift_flag is grabbed at the very beginning of this function (action_function)
        {
        //  release LSHIFT
            del_mods(shift_flag);
            del_weak_mods(shift_flag);
            send_keyboard_report();
        };
    //  tap accent
        disable_capslock_before_accents_function();
        diaeresis_accent_function();
        enable_capslock_after_accents_function();
        if (shift_flag)
        {
        //  press LSHIFT
            add_mods(shift_flag);
            add_weak_mods(shift_flag);
            send_keyboard_report();
        };
            
        register_code(KC_U);       
        unregister_code(KC_U);
      }
      else
      {
      }  
      break;



    case CAPSL:
      if (record->event.pressed) 
      {
      /*The key is being pressed.*/
         capslock_tap();
      }
      else 
      {
      }
      break;
      
 }
};
//                                                                                      //
//                                                                                      //
//                       f n _ a c t i o n s     f u n c t i o n s                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


void matrix_scan_user(void) {
                
}


//////////////////////////////////////////////////////////////////////////////////////////////////////###
//                                                                                                     //
//                                                                                                     //
//                                          M  A  C  R   O  S                                          //
//                                                                                                     //
//                                                                                                     //
//                               P R O C E S S    R E C O R D    U S E R                               //
//                                                                                                     //
//                                                                                                     //
// BEGINNING OF NEW MACROS WAY                                                                         //
//////////////////////////////////////////////////////////////////////////////////////////////////////###
//
// [UNDERSTANDING]
// We implement MACROS when we need QMK functions, or more than one keystroke in a specific keymap layer
// and we don't have the need to use tap dance cases.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////###
/*                                                                                                     */
/*  W A Y   0   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*   pvim(j);                                                                                          */
/*                                                                                                     */
/*   this is the best one and it's posible because of the following function definition:               */
/*                                                                                                     */
/*   void pvim(char *key)                                                                              */
/*   {                                                                                                 */
/*     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"p");                                       */
/*     send_string(key);                                                                               */
/*   }                                                                                                 */
/*                                                                                                     */
//////////////////////////////////////////////////////////////////////////////////////////////////////###
/*                                                                                                     */
/*  W A Y   1   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*   SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v"))))"pj");                                        */
/*                                                                                                     */
//////////////////////////////////////////////////////////////////////////////////////////////////////###            
/*                                                                                                     */
/*  W A Y   2   T O   A C C E S I N G   K E Y B I N D I N G S   F R O M   M A C   O S X   S Y S T E M  */
/*                                                                                                     */
/*   actual_mods = get_mods();                                                                         */
/*   add_mods(ALL_MODS); send_keyboard_report();                                                       */
/*   SEND_STRING("v");                                                                                 */
/*   SEND_STRING("pj");                                                                                */
/*                                                                                                     */
//////////////////////////////////////////////////////////////////////////////////////////////////////###
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
//////////////////////////////////////////////////////////////////////////////////////////////////////###
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
//////////////////////////////////////////////////////////////////////////////////////////////////////###

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

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

/*
  uint8_t default_hue;
  uint8_t default_sat;
  uint8_t default_val;
*/

  if (record->event.pressed)
  // Do something when pressed
  {
    switch(keycode)
    {

      case CIRCU:    circumflex_requested = true; // requested circumflex accent
      return false; break;                        // Skip all further processing of this key when pressed


      case GRAVE:    grave_requested      = true; return false; break; // requested grave      accent
      case DIAER:    diaeresis_requested  = true; return false; break; // requested diaeresis  accent


      case VOL_1:    volumeSetToLevel1();         return false; break; // set volume to minimum (level 1)
      case VOL_8:    volumeSetToLevel8();         return false; break; // set volume to middle  (level 8)
      case BRIGHT_1: brightSetToLevel1();         return false; break; // set bright to minimum (level 1)

      case APP_Q_QQQQQ: callApp("");                          return false; break; //
      case APP_W_TWTTR: callApp("Twitter.app");               return false; break; // t W itter
      case APP_E_EVERN: callApp("Evernote.app");              return false; break; // E vernote
      case APP_R_RRRRR: callApp("");                          return false; break; //
      case APP_T_TERMI: callApp("Terminal.app");              return false; break; // T erminal

      case APP_Y_TYPIN: callApp("Typinator.app");             return false; break; // t Y pinator
      case APP_U_SUBLI: callApp("Sublime Text.app");          return false; break; // s U blime Text
      case APP_I_TEDIT: callApp("TextEdit.app");              return false; break; // textEd I t
      case APP_O_OMNIF: callApp("OmniFocus.app");             return false; break; // O mnifocus
      case APP_P_SPREF: callApp("System Preferences.app");    return false; break; // system P references

      case APP_A_SNOTE: callApp("Simplenote.app");            return false; break; // simplenote
      case APP_S_SAFAR: callApp("Safari.app");                return false; break; // S afari _delay_ms50
      case APP_D_D_ONE: callApp("Day One Classic.app");       return false; break; // D ay one
      case APP_F_FINDE: callApp("Finder.app");                return false; break; // F inder
      case APP_G_CHRME: callApp("Google Chrome.app");         return false; break; // G oogle chrome

      case APP_H_SKTCH: callApp("Sketch.app");                return false; break; // sketc H
      case APP_J_JJJJJ: callApp("");                          return false; break; // 
      case APP_K_KVIEW: callApp("Karabiner-EventViewer.app"); return false; break; // K arabiner Evnt Vwr
      case APP_L_CLNDR: callApp("Calendar.app");              return false; break; // Calendar
      case APP_SP_SPSP: callApp("");                          return false; break; //

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

   // _PVIM
   // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
   // ... except for the 'H' key:
      case PVIM_H: pvim("h");  return false; break;
   // _pvim

// [INFO]
/*
* [#ref] Escape sequences in C
* wikipedia link: 
* https://en.wikipedia.org/wiki/Escape_sequences_in_C        

* \e  \x001B  
* register_code (KC_ESC); unregister_code (KC_ESC); } break;
* case PVIM_ES:if (record->event.pressed) { pvim("\e"); } break;

* \b  \x0008
* register_code(KC_BSPC); unregister_code(KC_BSPC); } break;   
* case PVIM_BS:if (record->event.pressed) { pvim("\b"); } break;

* \n  \x000A      new line
* register_code (KC_ENT); unregister_code (KC_ENT); } break; 
* \r  \x000D      carriage return
      case PVIM_EN:if (record->event.pressed) { pvim("\n"); } break;
*/
// [info]

// _DVIM
      case DVIM_Y: dvim("y");  return false; break;
      //   DVIM_uU is tap_dance
      case DVIM_I: dvim("i");  return false; break;
      case DVIM_O: dvim("o");  return false; break;
      //   DVIM_pP is tap_dance

      case DVIM_H: dvim("h");  return false; break;
      case DVIM_J: dvim("j");  return false; break;
      case DVIM_K: dvim("k");  return false; break;
      case DVIM_L: dvim("l");  return false; break;
      case DVIM_SP:dvim(" ");  return false; break;

      case DVIM_M: dvim("m");  return false; break;
      case DVIM_ES:dvim("\e"); return false; break;
      case DVIM_BS:dvim("\b"); return false; break;
      case DVIM_EN:dvim("\n"); return false; break;

// select _AVIM
//            case AVIM_Y: avim("y");  return false; break;
//            case AVIM_N: avim("n");  return false; break;
// the rest of the keys are combination of _PVIM + SHIFT key            

// _CVIM
      case CVIM_Y: cvim("y");  return false; break;
      case CVIM_U: cvim("u");  return false; break;
      case CVIM_I: cvim("i");  return false; break;
      case CVIM_O: cvim("o");  return false; break;
      case CVIM_P: cvim("p");  return false; break;

//      cvim("h") is disable because "outdent:" from DefaultKeybindigs.dict doesn't work
//      case CVIM_H: cvim("h");  return false; break;
      case CVIM_J: cvim("j");  return false; break;
      case CVIM_K: cvim("k");  return false; break;
      case CVIM_L: cvim("l");  return false; break;
      case CVIM_SP:cvim(" ");  return false; break;

      case CVIM_N: cvim("n");  return false; break;
      case CVIM_M: cvim("m");  return false; break;
      case CVIM_ES:cvim("\e"); return false; break;
      case CVIM_BS:cvim("\b"); return false; break;
      case CVIM_EN:cvim("\n"); return false; break;                        

// _XVIM
      case XVIM_Y: xvim("y");  return false; break;
      case XVIM_U: xvim("u");  return false; break;
      case XVIM_I: xvim("i");  return false; break;
      case XVIM_O: xvim("o");  return false; break;
      case XVIM_P: xvim("p");  return false; break;

      case XVIM_H: xvim("h");  return false; break;
      case XVIM_J: xvim("j");  return false; break;
      case XVIM_K: xvim("k");  return false; break;
      case XVIM_L: xvim("l");  return false; break;
      case XVIM_SP:xvim(" ");  return false; break;

      case XVIM_N:  xvim("n");  return false; break;
      case XVIM_M:  xvim("m");  return false; break;
      case XVIM_ES: xvim("\e"); return false; break;
      case XVIM_BS: xvim("\b"); return false; break;
      case XVIM_EN: xvim("\n"); return false; break;



// _ZVIM
      case ZVIM_Y: zvim("y");  return false; break;
      case ZVIM_U: zvim("u");  return false; break;
      case ZVIM_I: zvim("i");  return false; break;
      case ZVIM_O: zvim("o");  return false; break;
      case ZVIM_P: zvim("p");  return false; break;

      case ZVIM_H: zvim("h");  return false; break;
      case ZVIM_J: zvim("j");  return false; break;
      case ZVIM_K: zvim("k");  return false; break;
      case ZVIM_L: zvim("l");  return false; break;
      case ZVIM_SP:zvim(" ");  return false; break;

      case ZVIM_N: zvim("n");  return false; break;
      case ZVIM_M: zvim("m");  return false; break;
      case ZVIM_ES:zvim("\e"); return false; break;
      case ZVIM_BS:zvim("\b"); return false; break;
      case ZVIM_EN:zvim("\n"); return false; break;

                                                     /*
                                                     get_default_hsv();
                                                     */

                                                     /*
                                                     default_r = rgblight_config.hue; // rgblight_get_hue();
                                                     default_g = rgblight_config.sat; // rgblight_get_sat();
                                                     default_b = rgblight_config.val; // rgblight_get_val();
                                                     */
                                                     //eeconfig_read_user(); //#define HSV_YELLOW        43, 255, 255

/*
#define RGB_RED          0xFF, 0x00, 0x00
#define RGB_CORAL        0xFF, 0x7C, 0x4D
#define RGB_ORANGE       0xFF, 0x80, 0x00
#define RGB_GOLDENROD    0xD9, 0xA5, 0x21
#define RGB_GOLD         0xFF, 0xD9, 0x00

#define RGB_YELLOW       0xFF, 0xFF, 0x00

#define RGB_CHARTREUSE   0x80, 0xFF, 0x00
#define RGB_GREEN        0x00, 0xFF, 0x00
#define RGB_SPRINGGREEN  0x00, 0xFF, 0x80
#define RGB_TURQUOISE    0x47, 0x6E, 0x6A
#define RGB_TEAL         0x00, 0x80, 0x80

#define RGB_WHITE        0xFF, 0xFF, 0xFF

#define RGB_CYAN         0x00, 0xFF, 0xFF
#define RGB_AZURE        0x99, 0xf5, 0xFF
#define RGB_BLUE         0x00, 0x00, 0xFF
#define RGB_PURPLE       0x7A, 0x00, 0xFF
#define RGB_MAGENTA      0xFF, 0x00, 0xFF

#define RGB_PINK         0xFF, 0x80, 0xBF

#define RGB_EMPTY        0x00, 0x00, 0x00
*/

      case CH_RED:  default_r = 0xFF; default_g = 0x00; default_b = 0x00; change_RGB_color(); return false; break;
      case CH_CORL: default_r = 0xFF; default_g = 0x7C; default_b = 0x4D; change_RGB_color(); return false; break;
      case CH_ORNG: default_r = 0xFF; default_g = 0x80; default_b = 0x00; change_RGB_color(); return false; break;
      case CH_GOLR: default_r = 0xD9; default_g = 0xA5; default_b = 0x21; change_RGB_color(); return false; break;
      case CH_GOLD: default_r = 0xFF; default_g = 0xD9; default_b = 0x00; change_RGB_color(); return false; break;

/*
Save the original setting to EEPROM before layer change, and read it back and set it again after returning to base layer.
*/
      case CH_YLLW: default_r = 0xFF; default_g = 0xFF; default_b = 0x00; change_RGB_color(); return false; break;

      case SAV_COL: /* 
                    default_hue = rgblight_get_hue();
                    default_sat = rgblight_get_sat();
                    default_val = rgblight_get_val();
                    rgblight_sethsv(default_hue, default_sat, default_val);
                    */
                    //eeconfig_update_rgblight(rgblight_config.raw);

printf("rgblight_config.hue, rgblight_config.sat, rgblight_config.val: %u, %u, %u.\n", rgblight_config.hue, rgblight_config.sat, rgblight_config.val );
printf("rgblight_get_hue(),  rgblight_get_sat(),  rgblight_get_val() : %u, %u, %u.\n", rgblight_get_hue(),  rgblight_get_sat(),  rgblight_get_val()  );
printf("default_r,           default_g,           default_b          : %u, %u, %u.\n", default_r,           default_g,           default_b           );
/*
                    rgblight_config.enable = 1;
                                                       //rgblight_config.mode = RGBLIGHT_MODE_STATIC_LIGHT;
                    rgblight_config.speed = 0;

                    default_hue = rgblight_config.hue; //= rgblight_get_hue(); // 0;
                    default_sat = rgblight_config.sat; //= rgblight_get_sat(); // 255;
                    default_val = rgblight_config.val; //= rgblight_get_val(); // RGBLIGHT_LIMIT_VAL;
                    
                    LED_TYPE tmp_led;
printf("default_hue,         default_sat,         default_val        : %u, %u, %u.\n", default_hue,         default_sat,         default_val         );
                    sethsv(default_hue, default_sat, default_val, &tmp_led );
printf("tmp_led.r,           tmp_led.g,           tmp_led.b          : %u, %u, %u.\n", tmp_led.r,           tmp_led.g,           tmp_led.b           );
                    rgblight_setrgb(tmp_led.r, tmp_led.g, tmp_led.b);

                    //eeconfig_update_rgblight(rgblight_config.raw);
*/
                    return false; break;

      case CH_CHRT: default_r = 0x80; default_g = 0xFF; default_b = 0x00; change_RGB_color(); return false; break;
      case CH_GREN: default_r = 0x00; default_g = 0xFF; default_b = 0x00; change_RGB_color(); return false; break;      
      case CH_SPRG: default_r = 0x00; default_g = 0xFF; default_b = 0x80; change_RGB_color(); return false; break;
      case CH_TRQS: default_r = 0x12; default_g = 0x5F; default_b = 0x57; change_RGB_color(); return false; break;
      case CH_TEAL: default_r = 0x00; default_g = 0xCC; default_b = 0xCC; change_RGB_color(); return false; break;

      case CH_WHIT: default_r = 0xFF; default_g = 0xFF; default_b = 0xFF; change_RGB_color(); return false; break;

      case CH_CYAN: default_r = 0x00; default_g = 0xFF; default_b = 0xFF; change_RGB_color(); return false; break;
      case CH_AZUR: default_r = 0x99; default_g = 0xF5; default_b = 0xFF; change_RGB_color(); return false; break;
      case CH_BLUE: default_r = 0x00; default_g = 0x00; default_b = 0xFF; change_RGB_color(); return false; break;
      case CH_PRPL: default_r = 0x7A; default_g = 0x00; default_b = 0xFF; change_RGB_color(); return false; break;
      case CH_MGNT: default_r = 0xFF; default_g = 0x00; default_b = 0xFF; change_RGB_color(); return false; break;

      case CH_PINK: default_r = 0xFF; default_g = 0x80; default_b = 0xBF; change_RGB_color(); return false; break;

      case CH_EMPT: default_r = 0x00; default_g = 0x00; default_b = 0x00; change_RGB_color(); return false; break;

      case DICTAD:
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        return false; break;

   // this line is responsible of the management of the presses for THE REST of the keys.
      default: return true; // Process all other keycodes normally when pressed
    }

  } // if (record->event.pressed)
  else 
  {
//  Do something else when release
    switch(keycode)
    {

      case CIRCU: circumflex_requested = false; // non-requested circumflex accent
      return false; break;                      // Skip all further processing of this key when released


      case GRAVE: grave_requested      = false;  // non-requested grave      accent
      return false; break;                      // Skip all further processing of this key when released

      case DIAER: diaeresis_requested  = false;  // non-requested diaeresis  accent
      return false; break;                      // Skip all further processing of this key when released

      case VOL_1:
      case VOL_8:
      case BRIGHT_1:

      case APP_Q_QQQQQ:
      case APP_W_TWTTR:
      case APP_E_EVERN:
      case APP_R_RRRRR:
      case APP_T_TERMI:

      case APP_Y_TYPIN:
      case APP_U_SUBLI:
      case APP_I_TEDIT:
      case APP_O_OMNIF:
      case APP_P_SPREF:

      case APP_A_SNOTE:
      case APP_S_SAFAR:
      case APP_D_D_ONE:
      case APP_F_FINDE:
      case APP_G_CHRME:

      case APP_H_SKTCH:
      case APP_J_JJJJJ:
      case APP_K_KVIEW:
      case APP_L_CLNDR:
      case APP_SP_SPSP:

      case APP_Z_STUDI:
      case APP_X_XCODE:
      case APP_C_CALCU:
      case APP_V_VVVVV:
      case APP_B_BOOKS:

      case APP_N_NOTES:
      case APP_M_MAIL:
      case APP_ES_KEYN:
      case APP_BS_PAGE:
      case APP_EN_NUMB:

   // _PVIM
   // This layer is implemented without using '/Users/navarro/Library/KeyBindings/DefaultKeyBinding.dict'
   // ... except for the 'H' key:
      case PVIM_H:
   // _pvim

// _DVIM
      case DVIM_Y:
      //   DVIM_uU is tap_dance
      case DVIM_I:
      case DVIM_O:
      //   DVIM_pP is tap_dance

      case DVIM_H:
      case DVIM_J:
      case DVIM_K:
      case DVIM_L:
      case DVIM_SP:

      case DVIM_M:
      case DVIM_ES:
      case DVIM_BS:
      case DVIM_EN:

// select _AVIM
//            case AVIM_Y:
//            case AVIM_N:
// the rest of the keys are combination of _PVIM + SHIFT key            

// _CVIM
      case CVIM_Y:
      case CVIM_U:
      case CVIM_I:
      case CVIM_O:
      case CVIM_P:

//      case CVIM_H:
      case CVIM_J:
      case CVIM_K:
      case CVIM_L:
      case CVIM_SP:

      case CVIM_N:
      case CVIM_M:
      case CVIM_ES:
      case CVIM_BS:
      case CVIM_EN:

// _XVIM
      case XVIM_Y:
      case XVIM_U:
      case XVIM_I:
      case XVIM_O:
      case XVIM_P:

      case XVIM_H:
      case XVIM_J:
      case XVIM_K:
      case XVIM_L:
      case XVIM_SP:

      case XVIM_N:
      case XVIM_M:
      case XVIM_ES:
      case XVIM_BS:
      case XVIM_EN:



// _ZVIM
      case ZVIM_Y:
      case ZVIM_U:
      case ZVIM_I:
      case ZVIM_O:
      case ZVIM_P:

      case ZVIM_H:
      case ZVIM_J:
      case ZVIM_K:
      case ZVIM_L:
      case ZVIM_SP:

      case ZVIM_N:
      case ZVIM_M:
      case ZVIM_ES:
      case ZVIM_BS:
      case ZVIM_EN:

      case CH_RED: 
      case CH_CORL:
      case CH_ORNG:
      case CH_GOLR:
      case CH_GOLD:

      case CH_YLLW:
      case SAV_COL:

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
      case CH_EMPT:

      case DICTAD:

      return false; break; // Skip all further processing of ALL these keys when released


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
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//                      P R E D E F I N E D      C O L O R S                            //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
/*              RGB COLORS
#define RGB_EMPTY        0x00, 0x00, 0x00
#define RGB_WHITE        0xFF, 0xFF, 0xFF
#define RGB_RED          0xFF, 0x00, 0x00
#define RGB_CORAL        0xFF, 0x7C, 0x4D
#define RGB_ORANGE       0xFF, 0x80, 0x00
#define RGB_GOLDENROD    0xD9, 0xA5, 0x21
#define RGB_GOLD         0xFF, 0xD9, 0x00
#define RGB_YELLOW       0xFF, 0xFF, 0x00
#define RGB_CHARTREUSE   0x80, 0xFF, 0x00
#define RGB_GREEN        0x00, 0xFF, 0x00
#define RGB_SPRINGGREEN  0x00, 0xFF, 0x80
#define RGB_TURQUOISE    0x47, 0x6E, 0x6A
#define RGB_TEAL         0x00, 0x80, 0x80
#define RGB_CYAN         0x00, 0xFF, 0xFF
#define RGB_AZURE        0x99, 0xf5, 0xFF
#define RGB_BLUE         0x00, 0x00, 0xFF
#define RGB_PURPLE       0x7A, 0x00, 0xFF
#define RGB_MAGENTA      0xFF, 0x00, 0xFF
#define RGB_PINK         0xFF, 0x80, 0xBF
*/
//                                                                                      //
// p r e d e f i n e d      c o l o r s                                                 //
//////////////////////////////////////////////////////////////////////////////////////////

uint32_t layer_state_set_user(uint32_t state) {
    int  state_number; //= 321; //biton32(state);
    state_number = biton32(state);

    char string_state_number[4]; // = "ok.";
// [INFO]           //  convert an integer to string (for showing number layer)
// [STACKOVERFLOW]  //  first answer from Alexander Galkin
//  https://stackoverflow.com/questions/8257714/how-to-convert-an-int-to-string-in-c
    itoa(state_number, string_state_number, 10);
// [stackoverflow]
// [info]

  switch (state_number) {
    case _ALPH:   //  0
        rgb_numb = false;
//        rgblight_setrgb      (0x00, 0x00, 0x00);
//        rgblight_setrgb_range(0x00, 0x00, 0x00, INNER_RGHT - 2, INNER_LEFT_ANIMATION_START + 2);        
//        send_string(string_state_number);
//        SEND_STRING("[_ALPH]");
        if (hide_other_apps == true)
        {
          HIDEOTH; //Long: SEND_STRING(SS_LALT(SS_LGUI("h"))); //Wrong: register_code(LALT(LGUI(KC_H)));
          hide_other_apps = false;
        }
        show_RGB_LEDs();
        break; 

    case _ACCN:   //  1
/*
        send_string(string_state_number);

        backlight_level(BL_ACCN);
        breathing_period_set(BR_ACCN);
        breathing_enable();        
*/
        break;

/*
    case _DIAE:   //  2
        send_string(string_state_number);
*/
/*
        backlight_level(BL_DIAE);
        breathing_period_set(BR_DIAE);
        breathing_enable();        
*/
/*
        break;
*/        
    case _NUMB:   //  3
        rgb_numb = true;
//        send_string(string_state_number);
//        SEND_STRING("[_NUMB]");
//        rgblight_setrgb   (0x00,  0x00, 0xFF); // blue
        show_RGB_LEDs();
/*
        backlight_level(BL_NUMB);
        breathing_period_set(BR_NUMB);
        breathing_enable();
*/
        break;

    case _SYMB:   //  4
//        send_string(string_state_number);
        rgblight_setrgb   (0x00,  0xFF, 0x00); // green
//        SEND_STRING("[_SYMB]");
/*
        backlight_level(BL_SYMB);
        breathing_period_set(BR_SYMB);
        breathing_enable();
*/

        break;

    case _FUNC:   //  5
//        send_string(string_state_number);

/*
        backlight_level(BL_FUNC);
*/

        break;

    case _DALY:   //  6
//        send_string(string_state_number);
//        SEND_STRING("[_DALY]");

/*
        backlight_level(BL_DALY);
*/
        break;

    case _APPS:   //  7
//        send_string(string_state_number);
//        SEND_STRING("[_APPS]");

      gui_flag = get_mods()&LGUI_MODS;
      if (gui_flag)
      {
        hide_other_apps = true;
      }
/*
      backlight_level(BL_APPS);
*/
      break;

    case _POWR:   //  8
//        show_RGB_LEDs();
//        send_string(string_state_number);
//        SEND_STRING("[_POWR]");

/*
        backlight_level(BL_POWR);
*/
        break;

    case _PVIM:   //  9
//        send_string(string_state_number);
//        SEND_STRING("[_PVIM]");

/*
        backlight_level(BL_PVIM);
*/
        break;
    case _DVIM:   // 10
//        send_string(string_state_number);
/*
        backlight_level(BL_DVIM);
*/
        break;
    case _CVIM:   // 11
    case _XVIM:   // 12
    case _ZVIM:   // 13
//        send_string(string_state_number);
/*
        backlight_level(BL_VIM);
*/
        break;

    case _MOUS:   // 14
//        send_string(string_state_number);
//        SEND_STRING("[_MOUS]");

/*
        backlight_level(BL_MOUS);
*/
        break;
    case _RGBL:   // 14
//        send_string(string_state_number);
//        SEND_STRING("[_RGBL]");

/*
        backlight_level(BL_MOUS);
*/
        break;

    default: //  for any other layers

//    rgblight_setrgb   (0x00,  0x00, 0x00);
//      rgblight_setrgb_at(0x00,  0x00, 0x00, /*OUTER_RGHT*/0);
// [FIXME]
      send_string(string_state_number);
/*
      itoa(state, string_state_number, 10);
      send_string(string_state_number);
*/
// [fixme]


/*
        backlight_level(BL_LOW);
*/
        break;
// [adaptation]


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