#pragma once
#include "manolodeinternet.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// // clang-format off
// This code line is essential (needed) for Mini Dactyl keyboard firmware compilation
#define LAYOUT_wrapper(...)                     KEYMAP(__VA_ARGS__)

// next line is a must for gherkin
// #define KEYMAP_wrapper(...)                     LAYOUT(__VA_ARGS__) // good line of code

// #define KEYMAP_wrapper(...)                     KEYMAP_MINI_D(__VA_ARGS__) // good line of code
// #define KEYMAP_wrapper(...)                     LAYOUT(__VA_ARGS__) // good line of code
// #define KEYMAP_wrapper(...)                     KEYMAP(__VA_ARGS__) // trying

// Gherkin keyboard doesn't need any wrapper in my user space

// #define LAYOUT_wrapper(...)                     KEYMAP(__VA_ARGS__)

// [MINE]
// #define KEYMAP_mini_dactyl_base(...)            KEYMAP(__VA_ARGS__)
// [mine]

// #define LAYOUT_ergodox_wrapper(...)          LAYOUT_ergodox(__VA_ARGS__)
// #define LAYOUT_ergodox_pretty_wrapper(...)   LAYOUT_ergodox_pretty(__VA_ARGS__)
// #define LAYOUT_ortho_4x12_wrapper(...)       LAYOUT_ortho_4x12(__VA_ARGS__)
// #define LAYOUT_ortho_5x12_wrapper(...)       LAYOUT_ortho_5x12(__VA_ARGS__)
// #define LAYOUT_gergo_wrapper(...)            LAYOUT_gergo(__VA_ARGS__)

/*
Blocks for each of the four major keyboard layouts
Organized so we can quickly adapt and modify all of them
at once, rather than for each keyboard, one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Tap/Hold for Control on all of the layouts
NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/

//[MINE]
/*
[EMPTY TEMPLATE]
 * ,--------------------------------------------.        ,--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 *                            ,-----------------.        ,-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                   ,--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 *
 * 
 *                             < < < < < < < < <         > > > > > > > > > 
 *                            ,-----------------.^      ^,-----------------.
 *                            |      L5|      L4|^      ^|R4      |R5      |
 *                            |        |        |^      ^|        |        |
 *                            |        |        |^      ^|        |        |
 *                            |        |        |^      ^|        |        |
 *                   ,--------+--------+--------|^      ^|--------+--------|--------.
 *                   |L1      |L2      |L3      |^      ^|      R3|      R2|      R1|
 *                   |        |        |        |^      ^|        |        |        |
 *                   |        |        |        |^      ^|        |        |        |
 *                   |        |        |        |^      ^|        |        |        |
 *                   '--------------------------'^      ^'--------------------------'
 *                  > > > > > > > > > > > > > > >        < < < < < < < < < < < < < < <
[empty template] 
 */

/*
==================
ACRONYM DICTIONARY
==================
{_F_CORE_}:       full core keymap
{_S_CORE_}:     simple core keymap

{__OVER_}: overcharged core keymap

  *  LEGENDS for all KEYMAPS:
  *   * get a keystroke through single tap
  *  ** get a keystroke through double tap

  *   H access a layer  through single hold (or modifier)   
  *  HH access a layer  through double hold (or clean all layers)

  *   G holding GUI modifier
  *   A holding ALT modifier
        [UNDERSTANDING]
         * HOLDING G+'Q' = HOLDING G+'P' = G[_1APP] = [SINGLE _APPS LAYER]
         * HOLDING   'Q' =           'P' =  [_APPS] =         [APPS LAYER]
        [understanding]

==================
acronym dictionary
==================
*/
//
/*
//////////////////////////////////////////////////////////////////////////////////////////////////// ###
[_DFLT] layer 00 : default layer
{_F_CORE_}:       full core keymap
 * ,--------------------------------------------.        ,--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |G[_1APP]|        |        |        |        |        |        |        |        |        |G[_1APP]|
 * | [_APPS]| [_POWR]| [_LGHT]| [_FUNC]| [_SYMB]|        | [_NUMB]| [_FUNC]| [_LGHT]| [_POWR]| [_APPS]|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |   LGui |   LSft | [_ACCN]|        | [_ACCN]|   LSft |   LGui |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   | Escape |Bckspace|  Enter |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | [_DALY]| [_DVIM]| [_MOUS]| [_FVIM]| [_NUMB]|        | [_SYMB]| [_FVIM]| [_XVIM]|        | [_DALY]|
 * '--------------------------------------------'        '--------------------------------------------'
 */
// FULL FINGER ROWS
#define _F_CORE_DFLT_L1_ LT(_APPS, KC_Q),LT(_POWR, KC_W),LT(_LGHT, KC_E),LT(_FUNC, KC_R),LT(_SYMB,KC_T)
#define _F_CORE_DFLT_L2_    LCTL_T(KC_A),   LALT_T(KC_S),   LGUI_T(KC_D),   LSFT_T(KC_F),LT(_ACCN,KC_G)
#define _F_CORE_DFLT_L3_ LT(_DALY, KC_Z),LT(_DVIM, KC_X),LT(_MOUS, KC_C),LT(_FVIM, KC_V),LT(_NUMB,KC_B)

#define _F_CORE_DFLT_R1_ LT(_NUMB,KC_Y),LT(_FUNC,KC_U), LT(_LGHT, KC_I),LT(_POWR,KC_O), LT(_APPS, KC_P)
#define _F_CORE_DFLT_R2_ LT(_ACCN,KC_H),  LSFT_T(KC_J),    LGUI_T(KC_K),  LALT_T(KC_L),  LCTL_T(KC_SPC)
#define _F_CORE_DFLT_R3_ LT(_SYMB,KC_N),LT(_FVIM,KC_M),LT(_XVIM,KC_ESC),       KC_BSPC,LT(_DALY,KC_ENT)
// full finger rows

/*
{_S_CORE_}:     simple core keymap
 * ,--------------------------------------------.        ,--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    A   |    S   |    D   |    F   |    G   |        |    H   |    J   |    K   |    L   |  Space |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   LCtl |   LAlt |   LGui |   LSft |        |        |        |   LSft |   LGui |   LAlt |   LCtl |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Z   |    X   |    C   |    V   |    B   |        |    N   |    M   | Escape |Bckspace|  Enter |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 *                            ,-----------------.        ,-----------------.
 *                            |        |alt:RGBL|        |alt:RGBL|ONEshoot|
 *                            |        |        |        |        |  layer |
 *                            |        |        |        |        |        |
 *                            |  _MOUS |  _FUNC |        |  _POWR |  _ACCN |
 *                   ,--------+--------+--------|        |--------+--------|--------.
 *                   | Delete |        |        |        |alt:NUMB|alt:FVIM|alt:MOUS|
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |  _DVIM |  _FVIM |  _NUMB |        |  _APPS |  _SYMB |  _DALY |
 *                   '--------------------------'        '--------------------------'
 *                            ,-----------------.        ,-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |_DFLT_LTHMB_ROW1_|        |_DFLT_RTHMB_ROW1_|
 *                            |        |        |        |        |        |
 *                   ,--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |     _DFLT_LTHMB_ROW2_    |        |     _DFLT_RTHMB_ROW2_    |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
//
// SIMPLE CORE FINGER ROWS
#define _S_CORE_DFLT_L1_         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T
#define _S_CORE_DFLT_L2_ LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),         KC_G
#define _S_CORE_DFLT_L3_         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B

#define      _S_CORE_DFLT_R1_             KC_Y,         KC_U,         KC_I,         KC_O,          KC_P
#define      _S_CORE_DFLT_R2_             KC_H, LSFT_T(KC_J), LGUI_T(KC_K), LALT_T(KC_L),LCTL_T(KC_SPC)
#define      _S_CORE_DFLT_R3_             KC_N,         KC_M,       KC_ESC,      KC_BSPC,        KC_ENT
// simple core finger rows
//
// THUMB ROWS
#define _DFLT_LTHMB_ROW1_               LT(_MOUS,KC_TAB), TH_L4_FUNC_RGBL
#define _DFLT_LTHMB_ROW2_ TD(DVIM_Del),        MO(_FVIM),       TT(_NUMB)

#define      _DFLT_RTHMB_ROW1_                        TH_R4_POWR_RGBL, OSL(_ACCN)
#define      _DFLT_RTHMB_ROW2_                        TH_R3_APPS_NUMB, TH_R2_SYMB_FVIM, TH_R1_DALY_MOUS
// thumb rows
// END OF _DFLT 00
////////////////////////////////////////////////////////////////////////////////////////////////////###
//
/*
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
[_ACCN] layer 01: accents layer
 * ,--------------------------------------------.        ,--------------------------------------------.
 * | XXXXXXX| XXXXXXX|        | XXXXXXX| XXXXXXX|        | XXXXXXX|    U   |    I   |    O   | XXXXXXX|
 * |        |        |    E   |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        | XXXXXXX| XXXXXXX| XXXXXXX| @@@@@@ |        | @@@@@@ | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |    A   |  CIRCUM|  GRAVE |  DIAE- | @@@@@@ |        | @@@@@@ |  DIAE- |  GRAVE |  CIRCUM|        |
 * |        | -MFLEX |        | RESIS  | @@@@@@ |        | @@@@@@ | RESIS  |        |  -FLEX |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|        |        | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |        |        |        |        |        |        |    N   |        |        |        |        |
 * |   RCtl |   RAlt |  RGui  |  RSft  |        |        |        |  RSft  |  RGui  |  RAlt  |  RCtl  |
 * '--------------------------------------------'        '--------------------------------------------'
 *                            ,-----------------.        ,-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |  _RGBL |        |  _POWR |        |
 *                   ,--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |   LSft |        |        |        |   LSft |        |
 *                   '--------------------------'        '--------------------------'
 */
// _ACCN accent layer 01
// SIMPLE CORE FINGER ROWS
#define ____ACCN_L1____  XXXXXXX, XXXXXXX, F(ACC_E),XXXXXXX, XXXXXXX
#define ____ACCN_L2____ F(ACC_A),   CIRCU,    GRAVE,  DIAER, XXXXXXX
#define ____ACCN_L3____  KC_RCTL, KC_RALT,  KC_RGUI,KC_RSFT, XXXXXXX

#define      ____ACCN_R1____                             XXXXXXX, F(ACC_U), F(ACC_I), F(ACC_O), XXXXXXX
#define      ____ACCN_R2____                             XXXXXXX,    DIAER,    GRAVE,    CIRCU, XXXXXXX
#define      ____ACCN_R3____                             F(TIL_N), KC_RSFT,  KC_RGUI,  KC_RALT, KC_RCTL
// simple core finger rows

// THUMB ROWS
#define _ACCN_LEFT_THUMB_ROW1_                      _______, MO(_RGBL)
#define _ACCN_LEFT_THUMB_ROW2_             _______, KC_LSFT,   _______

#define      _ACCN_RGHT_THUMB_ROW1_                                         MO(_POWR), _______
#define      _ACCN_RGHT_THUMB_ROW2_                                           _______, KC_LSFT, _______
// thumb rows
// END OF _ACCN 01
////////////////////////////////////////////////////////////////////////////////////////////////////###
//
/*
//
////////////////////////////////////////////////////////////////////////////////////////////////////###
{_f_core_}:     full core keymap
[_NUMB] layer 02 : numbers layer
 * ,--------------------------------------------.        ,--------------------------------------------.
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |    %   |        |    -   |    4   |     5  |     6  |    +   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |  enter |bckspace|   tab  |    =   |    $   |        |    /   |    1   |    2   |    3   |    *   |
 * |        |        |        |        |  EURO  |        | @NUMBON|        |        |        |        |
 * |        |        |        |        |@@NUMBOF|        |@@NUMBOF|        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
*/
//
// FULL CORE FINGER ROWS
#define _F_CORE_NUMB_L1_           KC_1,          KC_2,           KC_3,           KC_4,      KC_5
#define _F_CORE_NUMB_L2_ LCTL_T(KC_SPC),LALT_T(KC_DEL),LGUI_T(KC_PCMM),LSFT_T(KC_PDOT),   KC_PERC
#define _F_CORE_NUMB_L3_        KC_PENT,       KC_BSPC,         KC_TAB,        KC_PEQL,TD(DENUOF)

#define      _F_CORE_NUMB_R1_                                  LT(_NUMB,KC_6),KC_7, KC_8, KC_9, KC_0
#define      _F_CORE_NUMB_R2_                                  KC_PMNS,       KC_4, KC_5, KC_6, KC_PPLS
#define      _F_CORE_NUMB_R3_                                  TD(SLNUMB),    KC_1, KC_2, KC_3, KC_PAST
// full core finger rows
//
/*
//
////////////////////////////////////////////////////////////////////////////////////////////////////###
{_s_core_}:     simple core keymap
[_NUMB] layer 02 : numbers layer
 * ,--------------------------------------------.        ,--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    1   |    2   |    3   |    4   |    5   |        |    6   |    7   |    8   |    9   |    0   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |spacebar| delete |    ,   |    .   |    %   |        |    -   |    4   |     5  |     6  |    +   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  enter |bckspace|   tab  |    =   |    $   |        |    /   |    1   |    2   |    3   |    *   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 *                            ,-----------------.        ,-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |    €   |
 *                            |        |        |        |        |        |
 *                            |        |        |        |  _POWR |        |
 *                   ,--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        | SETNMB |  _SYMB |        |
 *                   '--------------------------'        '--------------------------'
 */
/////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
//
// SIMPLE CORE FINGER ROWS
#define _S_CORE_NUMB_L1_                             _F_CORE_NUMB_L1_
#define _S_CORE_NUMB_L2_                             _F_CORE_NUMB_L2_
#define _S_CORE_NUMB_L3_    KC_PENT, KC_BSPC, KC_TAB, KC_PEQL, KC_DLR


#define      _S_CORE_NUMB_R1_                                        KC_6,    KC_7, KC_8, KC_9, KC_0
#define      _S_CORE_NUMB_R2_                                        _F_CORE_NUMB_R2_
#define      _S_CORE_NUMB_R3_                                        KC_PSLS, KC_1, KC_2, KC_3, KC_PAST
// simple core finger rows
//
// THUMB ROWS
#define _NUMB_LTHMB_ROW1_                    _______, _______
#define _NUMB_LTHMB_ROW2_           _______, _______, _______

#define      _NUMB_RTHMB_ROW1_                                          MO(_POWR),  EURO
#define      _NUMB_RTHMB_ROW2_                                          TD(SETNMB), MO(_SYMB), _______
// thumb rows



/* Keymap _SYMB 3: symbols Layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |@@@@@@|  |      |      |      |      |      |
 * |   +  |   =  |   #  |   *  |   %  |  |   @  |   (  |   )  |   _  |   -  |
 * |      |      |      |      |@@@@@@|  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | LCtl | LAlt | LGui | LSft |      |  |      | LSft | LGui | LAlt | LCtl |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * | `  ~ | '  " |   \  |   /  |   |  |  |   &  |   [  |   ]  |   ,  |   .  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |@@@@@@|      |      |      |      |
 * | !  ¡ | ?  ¿ | <    |   >  |  $ € |  |   ^  |   {  |   }  |   ;  |   :  |
 * |      |      |      |      |      |  |@@@@@@|      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/
/* Keymap _SYMB 09: symbols Layer
 * ,----------------------------------.  ,----------------------------------.
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |   +  |   =  |   #  |   *  |   %  |  |   @  |   (  |   )  |   _  |   -  |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * | LCtl | LAlt | LGui | LSft |      |  |      | LSft | LGui | LAlt | LCtl |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * | `  ~ | '  " |   \  |   /  |   |  |  |   &  |   [  |   ]  |   ,  |   .  |
 * |------+------+------+------+------|  |------+------+------+------+------|
 * |      |      |      |      |      |  |      |      |      |      |      |
 * | !  ¡ | ?  ¿ |   <  |   >  |   $  |  |   ^  |   {  |   }  |   ;  |   :  |
 * |      |      |      |      |      |  |      |      |      |      |      |
 * '----------------------------------'  '----------------------------------'
*/// _NUMB layer 2
/*
// SYMBOLS layer 3
//[_SYMB] = LAYOUT_ortho_3x10(  // layer 3: symbols layer
// ###
///////////////////////////////////////////////////////////////// ### BLOCK ### OF LINES TOO LONG !!! ###
//,-----------------------------------------------------------------------------.  ,-----------------------------------------------------------------------------------.
           KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR,    KC_PERC,                 KC_AT,        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_MINS,
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
    LSFT_T(KC_GRV), CTL_T(KC_QUOT), ALT_T(KC_BSLS), GUI_T(KC_SLSH),    KC_PIPE,               KC_AMPR, GUI_T(KC_LBRC), ALT_T(KC_RBRC), CTL_T(KC_COMM), LSFT_T(KC_DOT),
//|---------------+---------------+---------------+---------------+-------------|  |-----------------+---------------+---------------+---------------+-----------------|
        TD(Z_EXCL),     TD(X_QUES),        KC_LABK,     TD(V_RACI), TD(G_DOEU),               KC_CIRC,        KC_LCBR,        KC_RCBR,        KC_SCLN,        KC_COLN ),
//,-----------------------------------------------------------------------------'  '-----------------------------------------------------------------------------------.
///////////////////////////////////////////////////////////////// ### block ### of lines too long !!! ###
*/
#define _F_CORE_SYMB_L1_        KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR,   KC_PERC
#define _F_CORE_SYMB_L2_ LCTL_T(KC_GRV),LALT_T(KC_QUOT),LGUI_T(KC_BSLS),LSFT_T(KC_SLSH),   KC_PIPE
#define _F_CORE_SYMB_L3_     TD(Z_EXCL),     TD(X_QUES),        KC_LABK,     TD(V_RACI),TD(G_DOEU)

#define      _F_CORE_SYMB_R1_                                 KC_AT, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS
#define      _F_CORE_SYMB_R2_ KC_AMPR,LSFT_T(KC_LBRC), LGUI_T(KC_RBRC), LALT_T(KC_COMM), LCTL_T(KC_DOT)
#define      _F_CORE_SYMB_R3_                               KC_CIRC, KC_LCBR, KC_RCBR, KC_SCLN, KC_COLN
// ###
// ###
// ###
#define _S_CORE_SYMB_L1_        _F_CORE_SYMB_L1_
#define _S_CORE_SYMB_L2_        _F_CORE_SYMB_L2_
#define _S_CORE_SYMB_L3_        KC_EXLM, KC_QUES, KC_LABK, KC_RABK, KC_DLR

#define      _S_CORE_SYMB_R1_                                                          _F_CORE_SYMB_R1_
#define      _S_CORE_SYMB_R2_                                                          _F_CORE_SYMB_R2_
#define      _S_CORE_SYMB_R3_                                                          _F_CORE_SYMB_R3_

#define _SYMB_LTHMB_ROW1_                               INV_EX,   INV_QU
#define _SYMB_LTHMB_ROW2_      O_COMMENT, C_COMMENT, CHANGE_SYMB_TO_NUMB

#define      _SYMB_RTHMB_ROW1_                                                MO(_POWR),  EURO
#define      _SYMB_RTHMB_ROW2_                                                _______, _______, _______

// [info] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
// END OF _SYMB 3
//////////////////////////////////////////////////////////////////////////////////////////////////////###
// SYMBOLS layer 09
//[_SYMB] = KEYMAP(  // layer 09: symbols layer
/*[_SYMB] = KEYMAP(  // layer 09: symbols layer
//,--------------------------------------------------------------------------.  ,--------------------------------------------------------------------------.
           KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR, KC_PERC,        KC_AT,        KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_MINS,
//|---------------+---------------+---------------+---------------+----------|  |--------+---------------+---------------+---------------+-----------------|
    LCTL_T(KC_GRV),LALT_T(KC_QUOT),LGUI_T(KC_BSLS),LSFT_T(KC_SLSH), KC_PIPE,      KC_AMPR,LSFT_T(KC_LBRC),LGUI_T(KC_RBRC),LALT_T(KC_COMM), LCTL_T(KC_DOT),
//|---------------+---------------+---------------+---------------+----------|  |--------+---------------+---------------+---------------+-----------------|
           KC_EXLM,        KC_QUES,        KC_LABK,        KC_RABK,  KC_DLR,      KC_CIRC,        KC_LCBR,        KC_RCBR,        KC_SCLN,        KC_COLN,
//,--------------------------------------------------------------------------'  '--------------------------------------------------------------------------.
//                                                        ,---------+-----------,  ,--------+----------,
                                                              INV_EX,   INV_QU,    MO(_POWR),     EURO,
//                                                        |---------+-----------|  |--------+----------|
                                                                       _______,      _______,
//                                                                  |-----------|  |--------|
                                     O_COMMENT, C_COMMENT, CHANGE_SYMB_TO_NUMB,     _______, _______, _______ 
//                                            '---------+----------+------------.  .--------+--------+---------'
),
*/
//[mine]


#define _________________QWERTY_L1_________________        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________        KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________COLEMAK_L1________________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_G
#define _________________COLEMAK_L2________________       KC_A,    KC_R,    KC_S,    KC_T,    KC_D
#define _________________COLEMAK_L3________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________COLEMAK_R1________________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _________________COLEMAK_R2________________       KC_H,    KC_N,    KC_E,    KC_I,    KC_O
#define _________________COLEMAK_R3________________       KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define _________________DVORAK_L1_________________        KC_QUOT, KC_COMM, KC_DOT, KC_P,     KC_Y
#define _________________DVORAK_L2_________________        KC_A,    KC_O,    KC_E,   KC_U,     KC_I
#define _________________DVORAK_L3_________________        KC_SCLN, KC_Q,    KC_J,   KC_K,     KC_X

#define _________________DVORAK_R1_________________        KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define _________________DVORAK_R2_________________        KC_D,    KC_H,    KC_T,    KC_N,    KC_S
#define _________________DVORAK_R3_________________        KC_B,    KC_M,    KC_W,    KC_V,    KC_Z


#define _________________WHITE_R1__________________       KC_V,    KC_Y,    KC_D,    KC_COMM, KC_QUOT
#define _________________WHITE_R2__________________       KC_A,    KC_T,    KC_H,    KC_E,    KC_B
#define _________________WHITE_R3__________________       KC_P,    KC_K,    KC_G,    KC_W,    KC_Q

#define _________________WHITE_L1__________________       KC_INT1, KC_J,    KC_M,    KC_L,    KC_U
#define _________________WHITE_L2__________________       KC_MINS, KC_C,    KC_S,    KC_N,    KC_O  // KC_I
#define _________________WHITE_L3__________________       KC_X,    KC_R,    KC_F,    KC_DOT,  KC_Z


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________        _______, _______, _______, _______, _______


#define _________________LOWER_L1__________________        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define _________________LOWER_L2__________________        _________________FUNC_LEFT_________________
#define _________________LOWER_L3__________________        _________________FUNC_RIGHT________________

#define _________________LOWER_R1__________________        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define _________________LOWER_R2__________________        _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR
#define _________________LOWER_R3__________________        _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT



#define _________________RAISE_L1__________________        ________________NUMBER_LEFT________________
#define _________________RAISE_L2__________________        ___________________BLANK___________________
#define _________________RAISE_L3__________________        ___________________BLANK___________________

#define _________________RAISE_R1__________________        ________________NUMBER_RIGHT_______________
#define _________________RAISE_R2__________________        _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC
#define _________________RAISE_R3__________________        _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END



#define _________________ADJUST_L1_________________        RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG
#define _________________ADJUST_L2_________________        MU_TOG , CK_TOGG, AU_ON,   AU_OFF,  CG_NORM
#define _________________ADJUST_L3_________________        RGB_RMOD,RGB_HUD,RGB_SAD, RGB_VAD, KC_RGB_T

#define _________________ADJUST_R1_________________        KC_SEC1, KC_SEC2, KC_SEC3, KC_SEC4, KC_SEC5
#define _________________ADJUST_R2_________________        CG_SWAP, QWERTY,  COLEMAK, DVORAK,  WORKMAN
#define _________________ADJUST_R3_________________        MG_NKRO, KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT

// clang-format on