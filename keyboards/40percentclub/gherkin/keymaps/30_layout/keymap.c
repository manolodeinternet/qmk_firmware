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
// #define GRAVE_MODS  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
// #define ALL_MODS    (MOD_BIT(KC_LSFT)|MOD_BIT(KC_LCTL)|MOD_BIT(KC_LALT)|MOD_BIT(KC_LGUI))
// [inspiringcode]
#define LSHIFT_MODS    (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define LGUI_MODS      (MOD_BIT(KC_LGUI)  |MOD_BIT(KC_RGUI)  )

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING LAYERS                      L A Y E R S                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
#define _ALPH   0  //  gherkin ALPHAS DEFAULT    layer 
#define _ACCN   1  //  gherkin ACCENTS           layer 
#define _DIAE   2  //  gherkin RESET & diaereis  layer
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
#define _BLIT  15  //  backlight                 layer
#define _TEST  16  //  LAYER FOR TESTING               // must be over layer number 15 ...
#define _LAST  17  //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
// DEFINITIONS FOR BACKLIGHTNING & BREATHING                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// DEFINING LAYER LEVELS OF BACKLIGHTNING
#define BL_OFF  0
#define BL_MIN  1
#define BL_LOW  3
#define BL_MED  7
#define BL_HGH 12
#define BL_MAX 15

#define BL_GHKN  0
#define BL_ACCN 10
#define BL_DIAE 10
#define BL_FUNC  5
#define BL_SYMB 10
#define BL_NUMB  8
#define BL_PVIM  8
#define BL_DALY 10
#define BL_APPS 10
#define BL_VIM  12
/*
#define BL_AVIM X12X
*/
#define BL_MOUS 13
#define BL_DVIM 15
#define BL_POWR 15
// defining layer levels of backlightning

// DEFINING BACKLIGHTNING SITUATIONS
#define BL_CAPS 10
#define BL_RESE 15
// defining backlightning situations

// DEFINING BACKLIGHT BREATHING LELVELS
#define BR_ACCN  1
#define BR_DIAE  1
#define BR_CAPS  2
#define BR_NUMB  2
#define BR_SYMB  3
#define BR_DFLT  6
// defining backlight breathing lelvels
//                                                                                      //
// definitions for backlightning & breathing                                            //
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
#define   BEEP_1               HYPR(KC_R)  // 1 beep
#define   BEEP_2               HYPR(KC_G)  // 2 beeps
#define   BEEP_3               HYPR(KC_B)  // 3 beeps
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

// TAP DANCE KEYCODES ACCESSIBLE FROM _NUMB (NUMBERS LAYER) 3
     PENUMB  //   return to *GHKN layer (gherkin default layer)  // ... percent
    ,SLNUMB  //   return to *GHKN layer (gherkin default layer)  // ... slash

// TAP DANCE KEYCODES ACCESSIBLE FROM _SYMB (SYMBOLS LAYER) 4
    ,Y_AMCI  // ampersand & circumflex accent
//  ,A_GRAV  // grave & tilde         //tilde        accessible while holding SHIFT key !
//  ,S_QUOT  // quote & double quote  //double quote accessible while holding SHIFT key !
    ,G_DOEU  // dolar & euro
    ,Z_EXCL
    ,X_QUES

// TAP DANCE KEYCODES FOR _POWR (POWER LAYER) 8
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
    ,RG_ZOOM // right gui     / zoom on/off
    ,RA_ZOIN // right alt     / zoom in
    ,RC_ZOUT // right control / zoom out
    ,RS_INCO // right shift   / invert colors

// [ADVICE]
//  ,BCKLIT   // accessing _BLIT layer from tap dance into _POWR layer
              // ...this way we don't waste a layer from being accesible from Default layer,
              // ...remember that you only can access 16 layer through LT(layer, key) and LM(layer, mod).
// [advice]    

    ,V8_TEST  // accessing _TEST layer from tap dance into _POWR layer
    ,V1_LAST  // accessing _LAST layer from tap dance into _POWR layer
// tap dance keycodes for _powr (power layer) 8

// (i.e. KC_U: *'begin of line'/**'begin of paragraph')
    ,PVIM_uU ,PVIM_iI ,PVIM_oO ,PVIM_pP

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


// MACROS FOR _BLIT 15
     BLIT_OFF = SAFE_RANGE

    ,BLIT_01 ,BLIT_02  ,BLIT_03  ,BLIT_04 ,BLIT_05
    ,BLIT_06 ,BLIT_07  ,BLIT_08  ,BLIT_09 ,BLIT_10
    ,BLIT_11 ,BLIT_12  ,BLIT_13  ,BLIT_14 ,BLIT_15

                                          ,BRTH_00
    ,BRTH_01 ,BRTH_02  ,BRTH_03  ,BRTH_04 ,BRTH_05
    ,BRTH_06 ,BRTH_07  ,BRTH_08  ,BRTH_09 ,BRTH_10
             ,BRTH_12                     ,BRTH_15
// macros for _blit 15
//////////////////////////////////////////////////////////////////////////////////////////////////////###


// MACROS FOR _ACCN LAYER 1
    ,CIRCU ,GRAVE ,DIAER 
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
    ,CVIM_H ,CVIM_J ,CVIM_K  ,CVIM_L  ,CVIM_SP
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
  static uint8_t gui_flag;
  static bool    hide_other_apps = false;

// [REFLEXION]
// Is it necessary that the 5 following vars were static ? Maybe I can remove 'static'
  static bool diaeresis_requested  = false;
  static bool circumflex_requested = false;
  static bool grave_requested      = false;

  static bool disabled_caps_before_accent = false;
  static bool backlight_caps = false;
// [reflexion]

  static uint8_t gherkinBacklightLevel = 0;
  static uint8_t gherkinBacklightLevelBeforeCapsLock = 0;
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

// LIGHTS AND BREATH
  if (backlight_caps == false)
  {
    backlight_caps  = true;
    gherkinBacklightLevelBeforeCapsLock = gherkinBacklightLevel;
    gherkinBacklightLevel = BL_CAPS;

    breathing_period_set(BR_CAPS);
    breathing_enable();
  }
  else
  {
    backlight_caps  = false;
    gherkinBacklightLevel = gherkinBacklightLevelBeforeCapsLock;

    breathing_period_set(BR_DFLT);
    breathing_disable();
  }
// lights and breath

// [INFO]
// Note, that instead of unregister_code (KC_LCAP), ...
// ... we write unregister_code (KC_CAPS).
// This is the way it works that I found by the trial and error method.
  unregister_code(KC_CAPS); 
// [info] 
  SEND_STRING(SS_UP(X_CAPSLOCK));

} //  my capslock function  -  [f(capsl)] - my capslock finished function


void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (backlight_caps == true)
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
// [FUNCTIONS] [_DIAE] KC_A (HRESET)                                                    //
//             [_POWR] KC_R (HRESET)                                                    //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

                   // BACKLIGHT BLINKING
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
                   // ends backlight blinking
                      reset_keyboard();

}
//                                                                                      //
// [functions] [_diae] kc_a (hreset)                                                    //
//             [_powr] kc_r (hreset)                                                    //
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
void volumeSetToLevel1(void) {
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
  register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
}

void volumeSetToLevel8(void) {
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
  register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
  register_code(KC__VOLUP); unregister_code(KC__VOLUP);
}

void brightSetToLevel1(void) {
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_SLCK); unregister_code(KC_SLCK);
  register_code(KC_PAUS); unregister_code(KC_PAUS);
}
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
// [TAPDANCE] [_NUMB] KC_B (PENUMB)                                                     //
//                                                                                      //
//  P E R C E N T  -  N U M B E R S   L A Y E R   O F F                                 //
//                                                                                      //
//  KC_B:  *  KC_PERC,                                                                  //
//        @@ [_NUMB] OFF                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// instantalize an instance of 'tap' for the 'PENUMB' tap dance.
static tap PENUMB_tap_state = {
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
    
    case DOUBLE_HOLD: layer_clear();
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
    case SINGLE_TAP:        register_code(KC_PSLS); break;

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
// [TAPDANCE] [ _PVIM ] KC_I (PVIM_iI)                                                  //
//                                                                                      //
//  M O V E   W O R D   B A C K W A R D  /  M O V E   S U B W O R D   B A C K W A R D   //
//                                                                                      //
//  KC_I:  * MOVE WORD    BACKWARD                                                      //
//        ** MOVE SUBWORD BACKWARD                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'PVIM_iI' tap dance.
static tap PVIM_iI_tap_state = {
  .is_press_action = true,
  .state = 0
};

void PVIM_iI_function (qk_tap_dance_state_t *state, void *user_data) {
  PVIM_iI_tap_state.state = cur_dance(state);
  switch (PVIM_iI_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LALT);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LALT); break;

    case DOUBLE_TAP:        register_code(KC_LCTL);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT);   unregister_code(KC_LCTL); break;
  }
  PVIM_iI_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _pvim ] kc_i (pvim_ii)                                                  //
//                                                                                      //
//  m o v e   w o r d   b a c k w a r d  /  m o v e   s u b w o r d   b a c k w a r d   //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _PVIM ] KC_O (PVIM_oO)                                                  //
//                                                                                      //
//  M O V E   W O R D   F O R W A R D    /    M O V E   S U B W O R D   F O R W A R D   //
//                                                                                      //
//  KC_O:  * MOVE WORD    FORWARD                                                       //
//        ** MOVE SUBWORD FORWARD                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'PVIM_oO' tap dance. esterNoCleiDoMastoiDeo
static tap PVIM_oO_tap_state = {
  .is_press_action = true,
  .state = 0
};

void PVIM_oO_function (qk_tap_dance_state_t *state, void *user_data) {
  PVIM_oO_tap_state.state = cur_dance(state);
  switch (PVIM_oO_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LALT);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LALT); break;

    case DOUBLE_TAP:        register_code(KC_LCTL);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LCTL); break;
  }
  PVIM_oO_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _pvim ] kc_o (pvim_oo)                                                  //
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
    case SINGLE_TAP:        volumeSetToLevel8();
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
    case SINGLE_TAP:        volumeSetToLevel1();
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


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_J (RG_ZOOM)                                                    //
//                                                                                      //
//  R I G H T    G U I    /    Z O O M    O N / O F F                                   //
//                                                                                      //
//  KC_J:  *  ZOOM ON/OFF,                                                              //
//         @  RIGHT GUI                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RG_ZOOM' tap dance.
static tap RG_ZOOM_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RG_ZOOM_finished (qk_tap_dance_state_t *state, void *user_data) {
  RG_ZOOM_tap_state.state = cur_dance(state);
  switch (RG_ZOOM_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_SCLN);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RGUI);
                      break;
  }
}

void RG_ZOOM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RG_ZOOM_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_SCLN);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RGUI);
                      break;                       
  }
  RG_ZOOM_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_j (rg_zoom)                                                    //
//                                                                                      //
//  r i g h t    g u i    /    z o o m    o n / o f f                                   //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_K (RA_ZOIN)                                                    //
//                                                                                      //
//  R I G H T    A L T    /    Z O O M   I N                                            //
//                                                                                      //
//  KC_K:  *  ZOOM IN,                                                                  //
//         @  RIGHT ALT                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
// 『🔵』『🔵』『🔵』   RIGHT ALT   /   ZOOM IN   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'RA_ZOIN' tap dance.
static tap RA_ZOIN_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RA_ZOIN_finished (qk_tap_dance_state_t *state, void *user_data) {
  RA_ZOIN_tap_state.state = cur_dance(state);
  switch (RA_ZOIN_tap_state.state) {

// [SYSTEM PREFERENCES]    
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_EQL);
                      break;
// [system preferences]                      

    case SINGLE_HOLD: register_code(KC_RALT);
                      break;
  }
}

void RA_ZOIN_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RA_ZOIN_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_EQL);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RALT);
                      break;                       
  }
  RA_ZOIN_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_k (ra_zoin)                                                    //
//                                                                                      //
//  r i g h t    a l t    /    z o o m   i n                                            //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_L (RC_ZOUT)                                                    //
//                                                                                      //
//  R I G H T    C T R L     /     Z O O M    O U T                                     //
//                                                                                      //
//  KC_L:  *  ZOOM OUT,                                                                 //
//         @  RIGHT CTRL                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RC_ZOUT' tap dance.
static tap RC_ZOUT_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RC_ZOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  RC_ZOUT_tap_state.state = cur_dance(state);
  switch (RC_ZOUT_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_MINS);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RCTL);
                      break;
  }
}

void RC_ZOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RC_ZOUT_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_MINS);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RCTL);
                      break;                       
  }
  RC_ZOUT_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_l (rc_zout)                                                    //
//                                                                                      //
//  r i g h t    c t r l     /     z o o m    o u t                                     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_SP (RS_INCO)                                                   //
//                                                                                      //
//  R I G H T    S H I F T     /     I N V E R T    C O L O R S                         //
//                                                                                      //
//  KC_SP:  *  INVERT COLORS,                                                           //
//          @  RIGHT SHIFT                                                              //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RS_INCO' tap dance.
static tap RS_INCO_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RS_INCO_finished (qk_tap_dance_state_t *state, void *user_data) {
  RS_INCO_tap_state.state = cur_dance(state);
  switch (RS_INCO_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LGUI);
                      register_code(KC_8);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RSFT);
                      break;
  }
}

void RS_INCO_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RS_INCO_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_8);
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RSFT);
                      break;                       
  }
  RS_INCO_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_sp (rs_inco)                                                   //
//                                                                                      //
//  r i g h t    s h i f t     /     i n v e r t    c o l o r s                         //
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
  [Y_AMCI] = ACTION_TAP_DANCE_DOUBLE(KC_AMPR, KC_CIRC )                                   // & ^
//[A_GRAV]  // grave & tilde         //tilde        accessible while holding SHIFT key !  // ` ~
//[S_QUOT]  // quote & double quote  //double quote accessible while holding SHIFT key !  // ' "
 ,[G_DOEU] = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  SYM_EURO)                                   // $ €
 ,[Z_EXCL] = ACTION_TAP_DANCE_DOUBLE(KC_EXLM, SYM_I_EX)                                   // ! ¡
 ,[X_QUES] = ACTION_TAP_DANCE_DOUBLE(KC_QUES, SYM_I_QU)                                   // ? ¿
// [_symb] layer  (two in a key)

// [_NUMB] LAYER
 ,[SLNUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNUMB_finished, SLNUMB_reset)
 ,[PENUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, PENUMB_finished, PENUMB_reset)
// [_numb] layer

// [_POWR] LAYER
 ,[LOGOUT]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, LOGOUT_finished, LOGOUT_reset)
 ,[HRESET]   = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)

 ,[V8_TEST]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, V8_TEST_finished, V8_TEST_reset)
 ,[V1_LAST]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, V1_LAST_finished, V1_LAST_reset)

 ,[SLEP_M]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)
 ,[KILM_T]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILM_T_finished, KILM_T_reset)
 ,[KILA_D]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILA_D_finished, KILA_D_reset)
 ,[SHUT_S]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SHUT_S_finished, SHUT_S_reset)
 ,[RSTT_F]   = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSTT_F_finished, RSTT_F_reset)

 ,[RG_ZOOM]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RG_ZOOM_finished, RG_ZOOM_reset) 
 ,[RA_ZOIN]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RA_ZOIN_finished, RA_ZOIN_reset) 
 ,[RC_ZOUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RC_ZOUT_finished, RC_ZOUT_reset) 
 ,[RS_INCO]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RS_INCO_finished, RS_INCO_reset) 
 // [_powr] layer

// [_PVIM] LAYER
 ,[PVIM_uU] = ACTION_TAP_DANCE_FN(PVIM_uU_function)
 ,[PVIM_iI] = ACTION_TAP_DANCE_FN(PVIM_iI_function)
 ,[PVIM_oO] = ACTION_TAP_DANCE_FN(PVIM_oO_function)
 ,[PVIM_pP] = ACTION_TAP_DANCE_FN(PVIM_pP_function)
// [_pvim] layer

// [_DVIM] LAYER
 ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
 ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// [_dvim] layer

// [_AVIM] LAYER
// ,[AVIM_uU] = ACTION_TAP_DANCE_FN(AVIM_uU_function)
// ,[AVIM_pP] = ACTION_TAP_DANCE_FN(AVIM_pP_function)
// [_avim] layer

};
//                                                                                      //
//               t a p    d a n c e    d e c l a r a t i o n s                          //
//                                                                                      //
//  this section has to be at the end of the tap dance section                          //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


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


/////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                     //
//                                                                                                     //
//                              K E Y M A P S         ( L A Y O U T S )                                //
//                                                                                                     //
//                                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
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
// CMD + P  =  [SINGLE _APPS LAYER]
// CMD + Q  =  [SINGLE _APPS LAYER]
  * ,--------------------------------------------.  ,--------------------------------------------.
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    Q   |    W   |    E   |    R   |    T   |  |    Y   |    U   |    I   |    O   |    P   |
  * |⌘[_1APP]|        |        |        |        |  |        |        |        |        |⌘[_1APP]|
  * |@[_APPS]|@[_POWR]|        |@[_DIAE]|@[_SYMB]|  |        |        |        |@[_POWR]|@[_APPS]|
  * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    A   |    S   |    D   |    F   |    G   |  |    H   |    J   |    K   |    L   |  Space |
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |  @LSft |  @LCtl |  @LAlt |  @LGui |@[_ACCN]|  |@[_ACCN]|  @LGui |  @LAlt |  @LCtl |  @LSft |
  * |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------|
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |    Z   |    X   |    C   |    V   |    B   |  |    N   |    M   | Escape |Bckspace|  Enter |
  * |        |        |        |        |        |  |        |        |        |        |        |
  * |[@_DALY]|@[_DVIM]|@[_MOUS]|@[_PVIM]|@[_NUMB]|  |@[_SYMB]|@[_PVIM]|@[_FUNC]|        |@[_DALY]|
  * '--------------------------------------------'  '--------------------------------------------'
*/
[_ALPH] = LAYOUT_ortho_3x10(  // layer 0 : default layer
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,--------------------------------------------------------------------------------------.  ,------------------------------------------------------------------------------------------.
    LT(_APPS, KC_Q), LT(_POWR, KC_W),            KC_E, LT(_DIAE, KC_R), LT(_SYMB, KC_T),                 KC_Y,            KC_U,              KC_I, LT(_POWR, KC_O),   LT(_APPS, KC_P),
//|----------------+----------------+----------------+----------------+------------------|  |----------------+----------------+------------------+----------------+--------------------|
       LSFT_T(KC_A),     CTL_T(KC_S),     ALT_T(KC_D),     GUI_T(KC_F), LT(_ACCN, KC_G),      LT(_ACCN, KC_H),     GUI_T(KC_J),       ALT_T(KC_K),     CTL_T(KC_L),    LSFT_T(KC_SPC),
//|----------------+----------------+----------------+----------------+------------------|  |----------------+----------------+------------------+----------------+--------------------|
    LT(_DALY, KC_Z), LT(_DVIM, KC_X), LT(_MOUS, KC_C), LT(_PVIM, KC_V), LT(_NUMB, KC_B),      LT(_SYMB, KC_N), LT(_PVIM, KC_M), LT(_FUNC, KC_ESC),         KC_BSPC, LT(_DALY, KC_ENT) ),
//'--------------------------------------------------------------------------------------'  '------------------------------------------------------------------------------------------'
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _ALPH 0
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/*
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// LEFT_HAND
//,--------------------------------------------------------------------------------------.
    LT(_APPS, KC_Q), LT(_POWR, KC_W),            KC_E, LT(_DIAE, KC_R), LT(_SYMB, KC_T),
//|----------------+----------------+----------------+----------------+------------------|
       LSFT_T(KC_A),     CTL_T(KC_S),     ALT_T(KC_D),     GUI_T(KC_F), LT(_ACCN, KC_G),
//|----------------+----------------+----------------+----------------+------------------|
    LT(_DALY, KC_Z), LT(_DVIM, KC_X), LT(_MOUS, KC_C), LT(_PVIM, KC_V), LT(_NUMB, KC_B),
//'--------------------------------------------------------------------------------------'

             // RIGHT_HAND
             ,------------------------------------------------------------------------------------------.
                         KC_Y,            KC_U,              KC_I, LT(_POWR, KC_O),   LT(_APPS, KC_P),
             |----------------+----------------+------------------+----------------+--------------------|
               LT(_ACCN, KC_H),     GUI_T(KC_J),       ALT_T(KC_K),     CTL_T(KC_L),    LSFT_T(KC_SPC),
             |----------------+----------------+------------------+----------------+--------------------|
               LT(_SYMB, KC_N), LT(_PVIM, KC_M), LT(_FUNC, KC_ESC),         KC_BSPC, LT(_DALY, KC_ENT) ),
             '------------------------------------------------------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/


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
 * |      |       |      |      |      |  |      |      |      |       |      |
 * '-----------------------------------'  '-----------------------------------'
*/
// _ACCN accent layer 1
[_ACCN] = LAYOUT_ortho_3x10(  // layer 1 : _ACCN layer 
//,------------------------------------------------. ,--------------------------------------------------.
     _______, _______, F(ACC_E), _______, _______,      _______, F(ACC_U), F(ACC_I), F(ACC_O), _______,
//|---------|--------|---------+--------+----------| |---------|---------+---------+---------+----------|
    F(ACC_A),   CIRCU,    GRAVE,   DIAER, _______,      _______,    DIAER,    GRAVE,    CIRCU, _______,
//|---------|--------|---------+--------+----------| |---------|---------+---------+---------+----------|
     _______, _______,  _______, _______, _______,     F(TIL_N),  _______,  _______,  _______, _______ ),
//'------------------------------------------------' '--------------------------------------------------'
// END OF _ACCN 1
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/* Keymap _DIAE 2: RESET & DIAERESIS layer
 * ,----------------------------------.  ,----------------------------------.
 * |*XXXXX|*XXXXX|      |*XXXXX|*XXXXX|  |*XXXXX|      |      |      |*XXXXX|
 * |      |      |   Ë  |@@@@@@|      |  |      |   Ü  |   Ï  |   Ö  |      |
 * |@RESET|      |      |@@@@@@|      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |*XXXXX|      |      |      |  |      |      |      |      |      |
 * |   Ä  |      |KEYPAD|KEYPAD|KEYPAD|  |KEYPAD|KEYPAD|KEYPAD|KEYPAD|KEYPAD|
 * |      |      | EQUAL| COMMA|  DOT |  | SLASH|ASTERK| MINUS| PLUS | ENTER|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |KEYPAD|KEYPAD|KEYPAD|KEYPAD|KEYPAD|  |KEYPAD|KEYPAD|KEYPAD|KEYPAD|KEYPAD|
 * |  ONE |  TWO | THREE| FOUR | FIVE |  |  SIX | SEVEN| EIGHT| NINE | ZERO |
 * '----------------------------------'  '----------------------------------'
*/
// _DIAE RESET & diaereis layer 2
[_DIAE] = LAYOUT_ortho_3x10(  // layer 2 : RESET & diaeresis layer 
//,--------------------------------------------------.,-------------------------------------------------.
    TD(HRESET), _______, F(DIA_E), _______, _______,    _______, F(DIA_U), F(DIA_I), F(DIA_O), _______,
//|-----------+--------+---------+--------+----------||--------+---------+---------+---------+----------|
      F(DIA_A), _______,  KC_PEQL, KC_PCMM, KC_PDOT,    KC_PSLS,  KC_PAST,  KC_PMNS,  KC_PPLS, KC_PENT,
//|-----------+--------+---------+--------+----------||--------+---------+---------+---------+----------|
         KC_P1,   KC_P2,    KC_P3,   KC_P4,   KC_P5,      KC_P6,    KC_P7,    KC_P8,    KC_P9,   KC_P0 ),
//'--------------------------------------------------''-------------------------------------------------'
// END OF _DIAE 2
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
[_NUMB] = LAYOUT_ortho_3x10(  // layer 3 : numbers layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,--------------------------------------------------------------------------.  ,-------------------------------------------.
             KC_1,          KC_2,           KC_3,          KC_4,       KC_5,            KC_6,  KC_7,  KC_8,  KC_9,    KC_0,
//|--------------+--------------+---------------+--------------+-------------|  |-----------+------+------+------+----------|
    SFT_T(KC_SPC), CTL_T(KC_DEL), ALT_T(KC_COMM), GUI_T(KC_DOT), TD(G_DOEU),         KC_MINS,  KC_4,  KC_5,  KC_6, KC_PLUS,
//|--------------+--------------+---------------+--------------+-------------|  |-----------+------+------+------+----------|
           KC_ENT,       KC_BSPC,         KC_TAB,        KC_EQL, TD(PENUMB),      TD(SLNUMB),  KC_1,  KC_2,  KC_3, KC_ASTR ),
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
           KC_ENT,       KC_BSPC,         KC_TAB,        KC_EQL, TD(PENUMB),
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
[_SYMB] = LAYOUT_ortho_3x10(  // layer 4: symbols layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-----------------------------------------------------------------------------.  ,-----------------------------------------------------------------------------------.
           KC_PLUS,          KC_AT,        KC_HASH,         KC_EQL,    KC_PERC,            TD(Y_AMCI),        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_MINS,
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
    LSFT_T(KC_GRV), CTL_T(KC_QUOT), ALT_T(KC_BSLS), GUI_T(KC_SLSH), TD(G_DOEU),               KC_PIPE, GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_COMM), LSFT_T(KC_DOT),
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
        TD(Z_EXCL),     TD(X_QUES),        KC_LABK,        KC_RABK,    KC_ASTR,      LT(_SYMB, KC_NO),        KC_LCBR,        KC_RCBR,        KC_COLN,        KC_SCLN ),
//,-----------------------------------------------------------------------------'  '-----------------------------------------------------------------------------------.
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
 * |      |      |        |      |*XXXXX|  |*XXXXX|*XXXXX|*XXXXX|*XXXXX|*XXXXX|
 * |  F21 |  F22 |   F23  |  F24 |      |  |      |      |@@@@@@|      |      |
 * |      |      |@[_FUNC]|      |      |  |      |      |@@@@@@|      |      |
 * '------------------------------------'  '----------------------------------'
*/
// _FUNC layer 5
[_FUNC] = LAYOUT_ortho_3x10(  // layer 5 : multiple apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-----------------------------------------------------.,----------------------------------------------.
     KC_F1,  KC_F2,             KC_F3,  KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
//|-------+-------+------------------+-------+----------||--------+--------+--------+---------+---------|
    KC_F11, KC_F12,            KC_F13, KC_F14,  KC_F15,       KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,
//|-------+-------+------------------+-------+----------||--------+--------+--------+---------+---------|
    KC_F21, KC_F22, LT(_FUNC, KC_F23), KC_F24, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
//'-----------------------------------------------------''----------------------------------------------.
//KC_F24,         ,             ,        ,        ,         ,          ),  
// END OF _FUNC 5
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/* Keymap _DALY 6: DAiLY commands layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |Captur|Captur|      |  |      |      |      |      |      |
 * |  Tab |Dictat|Window|Selct.|Float.|  | Close| Prev | Next |Mision|Launch|
 * |      |      |^:Copy|^:Copy|window|  |  APP | APP  | APP  |Contrl|  pad |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |SptLig|      |      |      |  |      |      |      |      |      |
 * | Caps |   &  |  UP  | Speak|Active|  | Close| Prev | Next |Windws| Dash |
 * | Lock | Siri |      |      |window|  |Window|Window|Window| Apps | board|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |@@@@@@|      |      |      |Reopen|  |      |      |      |      |@@@@@@|
 * |SftTab| LEFT | DOWN | RIGHT|window|  | Close| Prev | Next |DELETE| Desk |
 * |@@@@@@|      |      |      | / tab|  |  tab | tab  | tab  |      |@@@@@@|
 * '------+------+------+------+------'  '------+------+------+------+------'
*/
// DALY layer 6
[_DALY] = LAYOUT_ortho_3x10(  // layer 6: DAiLY commands layer
//,--------------------------------------------------.,-------------------------------------------------.
       KC_TAB,   DICTAD, KC_CAPW, KC_CAPP, FLOA_WIN,    CLOSE_A, PREV_APP, NEXT_APP, MISS_CTL, LANCHPAD,
//|----------+---------+--------+--------+-----------||--------+---------+---------+---------+----------|
     F(CAPSL), SPT_SIRI,   KC_UP,   SPEAK, ACTV_WIN,    CLOSE_W, PREV_WIN, NEXT_WIN, APP_WIND,  DASHBRD,
//|----------+---------+--------+--------+-----------||--------+---------+---------+---------+----------|
    S(KC_TAB),  KC_LEFT, KC_DOWN, KC_RGHT, REOPEN_L,    CLOSE_T, PREV_TAB, NEXT_TAB,   KC_DEL,     DESK),
//'--------------------------------------------------''-------------------------------------------------'
// ^ + KC_CAPW = KC_CPYW
// ^ + KC_CAPP = KC_CPYP
// END OF _DALY 6
////////////////////////////////////////////////////////////////////////////////////////////////////////


/* Keymap _APPS 7: _APPS layer
 * ,----------------------------------.  ,----------------------------------.
 * |*XXXXX|@@@@@@| EVER |*XXXXX| TERMI|  | TYPI | SUBLI| TEXT |@@@@@@|SYSTEM|
 * |      |TWITTR|-NOTE |      |-NAL  |  |-NATOR|-ME   |-EDIT |OMNIFO|PREFE-|
 * |      |@@@@@@|      |      |      |  |      |TEXT  |      |@@@@@@|RENCES|
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |SIMPLE|      |  DAY |      |GOOGLE|  |      |*XXXXX|KARBNR| CALEN|*XXXXX|
 * | NOTE |SAFARI|  ONE |FINDER|CHROME|  |SKETCH|      | EVENT|-DAR  |      |
 * |      |      |      |      |      |  |      |      |VIEWER|      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | STU  |      | CALCU|*XXXXX|      |  |      |      | KEY- |      | NUM- |
 * |-DIES | XCODE|-LATOR|      | BOOKS|  | NOTES| MAIL | NOTE | PAGES| BERS |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/
// _APPS layer 7
[_APPS] = LAYOUT_ortho_3x10(  // layer 7 : apps layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-----------------------------------------------------------------.  ,------------------------------------------------------------------.
    APP_Q_QQQQQ, APP_W_TWTTR, APP_E_EVERN, APP_R_RRRRR, APP_T_TERMI,     APP_Y_TYPIN, APP_U_SUBLI, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF,
//|------------+------------+------------+------------+-------------|  |------------+------------+------------+------------+--------------|
    APP_A_SNOTE, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME,     APP_H_SKTCH, APP_J_JJJJJ, APP_K_KVIEW, APP_L_CLNDR, APP_SP_SPSP,
//|------------+------------+------------+------------+-------------|  |------------+------------+------------+------------+--------------|
    APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_VVVVV, APP_B_BOOKS,     APP_N_NOTES,  APP_M_MAIL, APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB ),
//'-----------------------------------------------------------------'  '------------------------------------------------------------------'
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
* |*XXXXX|@@@@@@|*XXXXX|*XXXXX|      |  |midVol|minVol|      |@@@@@@|      |
* |      |LCKSCR|onHold|onHold|      |  | lev.8| lev.1|      |VolDwn| Vol. |
* |LOGOUT|@@@@@@| _BLIT| RESET|      |  | _TEST| _LAST|Vol.Up|@@@@@@| Mute |
* |------+------+------+------+------|  |------+------+------+------+------|
* |*XXXXX|Rewind| Play/|Forwrd|Toogle|  |Toogle| Zoom | Zoom | Zoom |Invert|
* |      |      | Pause|      |Smooth|  |Keybrd|ON/OFF|  IN  |  OUT |Colors|
* |      |      |      |      |Images|  |follow|      |      |      |      |
* |RShift|RCntrl| RAlt | RCmnd|      |  | Focus| RCmnd| RAlt |RCntrl|RShift|
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
[_POWR] = LAYOUT_ortho_3x10(  // layer 8: POWeR productivity layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-------------------------------------------------------------------------.  ,-----------------------------------------------------------------------------.
     TD(LOGOUT),       LCK_SCR,      MO(_BLIT),    TD(HRESET),     XXXXXXX,      TD(V8_TEST), TD(V1_LAST), LT(_BLIT,  KC__VOLUP), KC__VOLDOWN,     KC__MUTE,
//|------------+--------------+---------------+--------------+--------------|  |------------+------------+----------------------+------------+---------------|
        KC_RSFT, RCTL_T(KC_F7), RALT_T(KC_SPC), RGUI_T(KC_F9), ZOOM_SMOOTH,      ZOOM_FOLLOW, TD(RG_ZOOM),           TD(RA_ZOIN), TD(RC_ZOUT),  TD(RS_INCO),
//|------------+--------------+---------------+--------------+--------------|  |------------+------------+----------------------+------------+---------------|
    SLEP_MNUBAR,   KILAPP_DOCK,    KILMNU_TOOL,   SHUTD_STATB, RSTRT_FLOAT,       CONTRST_UP,    BRIGHT_1,               KC_PAUS,     KC_SLCK, CONTRST_DWN ),
//'-------------------------------------------------------------------------'  '-----------------------------------------------------------------------------'
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
//,-------------------------------------------------------------------------.
     TD(LOGOUT),       LCK_SCR,      MO(_BLIT),    TD(HRESET),     XXXXXXX,
//|------------+--------------+---------------+--------------+--------------|
        KC_RSFT, RCTL_T(KC_F7), RALT_T(KC_SPC), RGUI_T(KC_F9), ZOOM_SMOOTH,
//|------------+--------------+---------------+--------------+--------------|
    SLEP_MNUBAR,   KILAPP_DOCK,    KILMNU_TOOL,   SHUTD_STATB, RSTRT_FLOAT,
//'-------------------------------------------------------------------------'

                          // RIGHT_HAND
                          ,-----------------------------------------------------------------------------.
                            TD(V8_TEST), TD(V1_LAST), LT(_BLIT,  KC__VOLUP), KC__VOLDOWN,     KC__MUTE,
                          |------------+------------+----------------------+------------+---------------|
                            ZOOM_FOLLOW, TD(RG_ZOOM),           TD(RA_ZOIN), TD(RC_ZOUT),  TD(RS_INCO),
                          |------------+------------+----------------------+------------+---------------|
                             CONTRST_UP,    BRIGHT_1,               KC_PAUS,     KC_SLCK, CONTRST_DWN ), 
                          '-----------------------------------------------------------------------------'
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/

/* Keymap _PVIM 9: _PVIM layer
 * ,--------------------------------------------.  ,----------------------------------.
 * |        |        |        |        |        |  | Shift| Move | Move | Move | Move |
 * |        |        |        |        |        |  |Prgrph| Begin| Word | Word |End Of|
 * |        |        |        |        |        |  |  Up  |Ln/Prg|Bckwrd|Forwrd|Ln/Prg|
 * |        |        |        |        |        |  |Center| Move | Move | Move | Move |
 * |--------+--------+--------+--------+--------|  |------+------+------+------+------|
 * |        |        |        |        |        |  |      |      |      |      |      |
 * |        |        |        |        |        |  |LineIn|      |      |      |      |
 * |        |        |        |        |        |  | View | LEFT |  UP  | DOWN | RIGHT|
 * |        |        |        |        |        |  |      |      |      |      |      |
 * |--------+--------+--------+--------+--------|  |------+------+------+------+------|
 * |        |        |        |        |        |  |      |      |      |      |      |
 * |        |        |        |@@@@@@@@|        |  | Shift| Move | Move | Move | Move |
 * |        |        |        |@@@@@@@@|        |  |Prgrph|      | Page | Page |      |
 * |@[_ZVIM]|@[_XVIM]|@[_CVIM]|@@@@@@@@|        |  | Down | HOME |  UP  | DOWN |  END |
 * '--------------------------------------------'  '----------------------------------'
*/
// _PVIM layer 9
[_PVIM] = LAYOUT_ortho_3x10(  // layer 9 : _PVIM layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,------------------------------------------------------.  ,-----------------------------------------------------------------------------------.
      XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX,        LCTL(LGUI(KC_UP)),   TD(PVIM_uU),   TD(PVIM_iI),     TD(PVIM_oO),  TD(PVIM_pP),
//|----------+----------|----------+----------+----------|  |--------------------+--------------+--------------+----------------+---------------|
      _______,   _______,   XXXXXXX,   XXXXXXX, XXXXXXX,                   PVIM_H,       KC_LEFT,         KC_UP,         KC_DOWN,      KC_RGHT,
//|----------+----------|----------+----------+----------|  |--------------------+--------------+--------------+----------------+---------------|
    MO(_ZVIM), MO(_XVIM), MO(_CVIM), MO(_PVIM), XXXXXXX,      LCTL(LGUI(KC_DOWN)), LALT(KC_HOME), LALT(KC_PGUP), LALT(KC_PGDOWN), LALT(KC_END) ),
//'------------------------------------------------------'  '-----------------------------------------------------------------------------------'
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// MO(_ZVIM),MO(_XVIM),MO(_CVIM),MO(_PVIM) allow us changing from any ?VIM_layer to each other ?VIM_layer
// ... because we put '_______' in this locations in the rest of the ?VIM layers
// END OF _PVIM 9
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/*

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
                        LCTL(LGUI(KC_UP)),   TD(PVIM_uU),   TD(PVIM_iI),     TD(PVIM_oO),  TD(PVIM_pP),
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
[_DVIM] = LAYOUT_ortho_3x10(  // layer 10 : _DVIM layer  // delete layer
//,---------------------------------------------.,------------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    DVIM_Y, TD(DVIM_uU),  DVIM_I,  DVIM_O, TD(DVIM_pP),
//|--------+--------+--------+--------+---------||--------+------------+--------+--------+--------------|
    _______, _______, _______, _______, XXXXXXX,    DVIM_H,      DVIM_J,  DVIM_K,  DVIM_L,     DVIM_SP,
//|--------+--------+--------+--------+---------||--------+------------+--------+--------+--------------|
    _______, _______, _______, _______, XXXXXXX,   XXXXXXX,      DVIM_M, DVIM_ES, DVIM_BS,     DVIM_EN ),
//'---------------------------------------------''------------------------------------------------------'
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
[_AVIM] = LAYOUT_ortho_3x10(  // layer X10X : _AVIM layer  // select VIM layer
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
[_CVIM] = LAYOUT_ortho_3x10(  // layer 11 : _CVIM layer  // power edition VIM layer
//,----------------------------------------------.  ,---------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       CVIM_Y, CVIM_U,  CVIM_I,  CVIM_O,  CVIM_P,
//|--------+--------+--------+--------+----------|  |--------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,      OUTDENT, CVIM_J,  CVIM_K,  CVIM_L, CVIM_SP,
//|--------+--------+--------+--------+----------|  |--------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,       CVIM_N, CVIM_M, CVIM_ES, CVIM_BS, CVIM_EN ),
//'----------------------------------------------'  '---------------------------------------------'

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
[_XVIM] = LAYOUT_ortho_3x10(  // layer 12 : _XVIM layer  // movement VIM layer
//,----------------------------------------------.  ,--------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XVIM_Y, XVIM_U,  XVIM_I,  XVIM_O,  XVIM_P,
//|--------+--------+--------+--------+----------|  |-------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,      XVIM_H, XVIM_J,  XVIM_K,  XVIM_L, XVIM_SP,
//|--------+--------+--------+--------+----------|  |-------+-------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,      XVIM_N, XVIM_M, XVIM_ES, XVIM_BS, XVIM_EN ),
//'----------------------------------------------'  '--------------------------------------------'
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
[_ZVIM] = LAYOUT_ortho_3x10(  // layer 13 : _ZVIM layer  // alignment VIM layer
//,----------------------------------------------.  ,---------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      ZVIM_Y, _______,  ZVIM_I,  ZVIM_O,  ZVIM_P,
//|--------+--------+--------+--------+----------|  |-------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,      ZVIM_H,  ZVIM_J,  ZVIM_K,  ZVIM_L, ZVIM_SP,
//|--------+--------+--------+--------+----------|  |-------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,      ZVIM_N,  ZVIM_M, ZVIM_ES, ZVIM_BS, ZVIM_EN ),
//'----------------------------------------------'  '---------------------------------------------'
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
[_MOUS] = LAYOUT_ortho_3x10(  // layer 14: mouse layer
//,----------------------------------------------.  ,----------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
//|--------+--------+--------+--------+----------|  |--------+--------+--------+--------+----------|
    _______, _______, _______, _______, XXXXXXX,      XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
//|--------+--------+--------+--------+----------|  |--------+--------+--------+--------+----------|
    KC_ACL0, KC_ACL2, XXXXXXX, KC_ACL1, KC_ACL0,      KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5 ),
//'----------------------------------------------'  '----------------------------------------------'
//
// Underlines over ASDF keys allow us using MODs while clickig, (e.g. CTL+click)
/*    C O N F I G      F I L E
#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_DELAY       50
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40
*/
// END OF _MOUS 14
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/*  
*  Keymap _BLIT 15: BACKLIT - BackLIghT layer
* ,--------------------------------------------.  ,---------------------------------------------.
* |  BL_1  |  BL_2  |  BL_3  |  BL_4  |  BL_5  |  |BREATH_1|BREATH_2|BREATH_3|BREATH_4|BREATH_T |
* |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+---------|
* |  BL_6  |  BL_7  |  BL_8  |  BL_9  |  BL_10 |  |BREATH_5|BREATH_6|BREATH_7|BREATH12|BL_TOGGL |
* |--------+--------+--------+--------+--------|  |--------+--------+--------+--------+---------|
* |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |  |BREATH15|  BL_ON | BL_INC | BL_DEC | BL_OFF  |
* '--------------------------------------------'  '---------------------------------------------'
*/
// _BLIT layer 15
[_BLIT] = LAYOUT_ortho_3x10( // layer 15: _BLIT layer
//,----------------------------------------------.  ,-----------------------------------------------.
    BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05,      BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG,
//|--------+--------+--------+--------+----------|  |--------+--------+--------+--------+-----------|
    BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10,      BRTH_05, BRTH_06, BRTH_07, BRTH_12,  BL_TOGG,
//|--------+--------+--------+--------+----------|  |--------+--------+--------+--------+-----------|
    BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15,      BRTH_15,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF ),
//'----------------------------------------------'  '-----------------------------------------------'
/*

  ,// BL_OFF

 QMK standard keycode BL_OFF doesn't work ! ! !
 I've made a macro (BLIT_OFF) who call the function backlight_level(BL_OFF) ! ! !

*/
// END OF _BLIT 15
//////////////////////////////////////////////////////////////////////////////////////////////////////###


/*  
*  Keymap _LAST 17: _LAST layer for testing changing to a layer over 16th layer
* .-----------------------------------------------------------------------------------------.
* |  BL_1  |  BL_2  |  BL_3  |  BL_4  |  BL_5  |BREATH_1|BREATH_2|BREATH_3|BREATH_4|BREATH_T|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_6  |  BL_7  |  BL_8  |  BL_9  |  BL_10 |BREATH_5|BREATH_6|BREATH_7|BREATH12|BL_TOGGL|
* |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
* |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |BREATH15|  BL_ON | BL_INC | BL_DEC | BL_OFF |
* '-----------------------------------------------------------------------------------------'
*/
// _LAST layer 17
[_LAST] = LAYOUT_ortho_3x10( // layer 17 : _LAST layer
//,----------------------------------------------.  ,-----------------------------------------------.
    BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05,      BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG,
//|--------+--------+--------+--------+----------|  |--------+--------+--------+--------+-----------|
    BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10,      BRTH_05, KC_LGUI, BRTH_07, BRTH_12,  BL_TOGG,
//|--------+--------+--------+--------+----------|  |--------+--------+--------+--------+-----------|
    BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15,      BRTH_15,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF ),
//'----------------------------------------------'  '-----------------------------------------------'
// END OF _LAST 17
//////////////////////////////////////////////////////////////////////////////////////////////////////###

/* Keymap _TEST 16: _TEST transparent layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |   +  |   @  |   #  |   =  |   %  |  | &  ^ |   (  |   )  |   _  |   -  |
 * |      |      |      |      |      |  |      |      |      |      |      |
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
// _TEST transparent layer 16
[_TEST] = LAYOUT_ortho_3x10(  // layer 16 : _TEST layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-----------------------------------------------------------------------------.  ,-----------------------------------------------------------------------------------.
           KC_PLUS,          KC_AT,        KC_HASH,         KC_EQL,    KC_PERC,            TD(Y_AMCI),         BEEP_1,         BEEP_2,         BEEP_3,        KC_MINS,
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
    LSFT_T(KC_GRV), CTL_T(KC_QUOT), ALT_T(KC_BSLS), GUI_T(KC_SLSH), TD(G_DOEU),               KC_PIPE, GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_COMM), LSFT_T(KC_DOT),
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
        TD(Z_EXCL),     TD(X_QUES),        KC_LABK,        KC_RABK,    KC_ASTR,      LT(_SYMB, KC_NO),        KC_LCBR,        KC_RCBR,        KC_COLN,        KC_SCLN )
//,-----------------------------------------------------------------------------'  '-----------------------------------------------------------------------------------.
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
// ###
// END OF _TEST 16
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
                            TD(Y_AMCI),         BEEP_1,         BEEP_2,         BEEP_3,        KC_MINS,    
                    |-----------------+---------------+---------------+---------------+-----------------|
                               KC_PIPE, GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_COMM), LSFT_T(KC_DOT),
                    |-----------------+---------------+---------------+---------------+-----------------|
                      LT(_SYMB, KC_NO),        KC_LCBR,        KC_RCBR,        KC_COLN,        KC_SCLN ),
                    '-----------------------------------------------------------------------------------.
//////////////////////////////////////////////////////////////////////////////////////////////////////###
*/






};
//                                                                                      //
//                                                                                      //
//                     k e y m a p s        ( l a y o u t s )                           //
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
}
//                                                                                      //
//                                                                                      //
//                       f n _ a c t i o n s     f u n c t i o n s                      //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



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
  if (record->event.pressed)
  {
    switch(keycode)
    {
      case CIRCU:    circumflex_requested = true; return false; break; // requested circumflex accent
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

      case CVIM_H: cvim("h");  return false; break;
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


      case DICTAD:
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        register_code(KC_RGUI); unregister_code(KC_RGUI);
        return false; break;

      case BLIT_OFF: gherkinBacklightLevel =  0; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_01:  gherkinBacklightLevel =  1; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_02:  gherkinBacklightLevel =  2; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_03:  gherkinBacklightLevel =  3; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_04:  gherkinBacklightLevel =  4; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_05:  gherkinBacklightLevel =  5; backlight_level(gherkinBacklightLevel); return false;

      case BLIT_06:  gherkinBacklightLevel =  6; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_07:  gherkinBacklightLevel =  7; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_08:  gherkinBacklightLevel =  8; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_09:  gherkinBacklightLevel =  9; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_10:  gherkinBacklightLevel = 10; backlight_level(gherkinBacklightLevel); return false;

      case BLIT_11:  gherkinBacklightLevel = 11; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_12:  gherkinBacklightLevel = 12; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_13:  gherkinBacklightLevel = 13; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_14:  gherkinBacklightLevel = 14; backlight_level(gherkinBacklightLevel); return false;
      case BLIT_15:  gherkinBacklightLevel = 15; backlight_level(gherkinBacklightLevel); return false;

      case BRTH_01:  breathing_period_set(1); breathing_enable();  return false;
      case BRTH_02:  breathing_period_set(2); breathing_enable();  return false;
      case BRTH_03:  breathing_period_set(3); breathing_enable();  return false;
      case BRTH_04:  breathing_period_set(4); breathing_enable();  return false;
      case BRTH_05:  breathing_period_set(5); breathing_enable();  return false;
      case BRTH_06:  breathing_period_set(6); breathing_enable();  return false;
      case BRTH_07:  breathing_period_set(7); breathing_enable();  return false;

      case BRTH_12:  breathing_period_set(12); breathing_enable(); return false;
      case BRTH_15:  breathing_period_set(15); breathing_enable(); return false;

      default: return true; 
    }
  }
//^^if (record->event.pressed)^^
  else 
  {
    switch(keycode)
    {
      case CIRCU: circumflex_requested = false; return false; break; // non-requested circumflex accent
      case GRAVE: grave_requested      = false; return false; break; // non-requested grave      accent
      case DIAER: diaeresis_requested  = false; return false; break; // non-requested diaeresis  accent

   // this line is responsible of the management of the releases for THE REST of the keys.
      default:                                  return true;  break;
    }
  }
}
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

    case _ALPH:   //  0  
        
        if (hide_other_apps == true)
        {
          HIDEOTH; //Long: SEND_STRING(SS_LALT(SS_LGUI("h"))); //Wrong: register_code(LALT(LGUI(KC_H)));
          hide_other_apps = false;
        }
        backlight_level(gherkinBacklightLevel);

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

    case _ACCN:   //  1
        backlight_level(BL_ACCN);
        breathing_period_set(BR_ACCN);
        breathing_enable();        
        break;

    case _DIAE:   //  2
        backlight_level(BL_DIAE);
        breathing_period_set(BR_DIAE);
        breathing_enable();        
        break;
        
    case _NUMB:   //  3
        backlight_level(BL_NUMB);
        breathing_period_set(BR_NUMB);
        breathing_enable();
        break;

    case _SYMB:   //  4
        backlight_level(BL_SYMB);
        breathing_period_set(BR_SYMB);
        breathing_enable();
        break;

    case _FUNC:   //  5
        backlight_level(BL_FUNC);
        break;

    case _DALY:   //  6
        backlight_level(BL_DALY);
        break;

    case _APPS:   //  7
      gui_flag = get_mods()&LGUI_MODS;
      if (gui_flag)
      {
        hide_other_apps = true;
      }
      backlight_level(BL_APPS);
      break;

    case _POWR:   //  8
        backlight_level(BL_POWR);
        break;

    case _PVIM:   //  9
        backlight_level(BL_PVIM);
        break;
    case _DVIM:   // 10
        backlight_level(BL_DVIM);
        break;
    case _CVIM:   // 11
    case _XVIM:   // 12
    case _ZVIM:   // 13
        backlight_level(BL_VIM);
        break;

    case _MOUS:   // 14
        backlight_level(BL_MOUS);
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