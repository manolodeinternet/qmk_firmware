#include "wrappers_defines.h"
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// DEFINING LAYERS                      L A Y E R S                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//miniDactyl
#define _DFLT   0  //  gherkin ALPHAS DEFAULT    layer 
#define _ACCN   1  //  gherkin ACCENTS           layer 
#define _NUMB   2  //  gherkin numbers           layer 
#define _FVIM   3  //  Fake                  VIM layer
#define _XVIM   4  //  power edition         VIM layer
#define _DVIM   5  //  Delete                VIM layer
#define _MOUS   6  //  mouse                     layer
#define _DALY   7  //  gherkin DAiLY commands    layer 
#define _FUNC   8  //  gherkin functions         layer 
#define _SYMB   9  //  gherkin symbols           layer 
#define _LEDS  10  //  backlight                 layer
#define _POWR  11  //  POWER        productivity layer

#if defined(COMPREHENSIVE_30_LAYOUT)

    #define _TEST  12  //  LAYER FOR TESTING               // must be over layer number 15 ...
    #define _LAST  17  //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!!!!!!!!!!

#elif defined(SIMPLE_30_LAYOUT)

    // #define _RGBL  _LGHT

#endif
//                                                                                      //
// defining layers                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// This code line is essential (needed) for compile Mini Dactyl keyboard firmware
#define LAYOUT_wrapper(...)                     KEYMAP(__VA_ARGS__)

// This code line is essential (needed) for compile Gherkin keyboard firmware
#define KEYMAP_gherkin_wrapper(...)             LAYOUT_ortho_3x10(__VA_ARGS__)

/*
Blocks for each of the four major keyboard layouts.
Organized so we can quickly adapt and modify all keyboards at once, rather than one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Modifiers on home row is on all of the layouts.
NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/

/*
 * [EMPTY TEMPLATE]
 * .--------------------------------------------.        .--------------------------------------------.
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
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 *
 * 
 *                             < < < < < < < < <         > > > > > > > > > 
 *                            .-----------------.^      ^.-----------------.
 *                            |L5      |L4      |^      ^|      R4|      R5|
 *                            |        |        |^      ^|        |        |
 *                            |        |        |^      ^|        |        |
 *                            |        |        |^      ^|        |        |
 *                   .--------+--------+--------|^      ^|--------+--------|--------.
 *                   |L1      |L2      |L3      |^      ^|      R3|      R2|      R1|
 *                   |        |        |        |^      ^|        |        |        |
 *                   |        |        |        |^      ^|        |        |        |
 *                   |        |        |        |^      ^|        |        |        |
 *                   '--------------------------'^      ^'--------------------------'
 *                  > > > > > > > > > > > > > > >        < < < < < < < < < < < < < < <
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            | _DFLT_LTHMB_RW1_|        | _DFLT_RTHMB_RW1_|
 *                            |        |        |        |        |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |     _DFLT_LTHMB_RW2_     |        |     _DFLT_RTHMB_RW2_     |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
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

  *  ######## key pressed previously for accesing current layer via mirrored trigger
  *  @@@@@@@@ key pressed previously for accesing current layer
  *  ( @@@@ ) key pressed previously for accesing the layer where the trigger for current layer is.
              * i.e.: for accesing _XVIM we press 'V' and 'C'
                'V' is represented with '( @@@@ )' and 'C' is represented with '@@@@@@@@'
  *  (( @@ )) it's not necessary, you can access this layer directly, but maybe this is the ...
              key pressed previously for accesing the layer where the trigger for current layer is. 

  *   * get a keystroke through single tap
  *  ** get a keystroke through double tap
  *
  *   @
  *  @@
  *   H access a layer  through single hold (or modifier)   
  *  HH access a layer  through double hold (or clean all layers)

  *   G holding GUI modifier
  *   A holding ALT modifier
        [UNDERSTANDING]
         * HOLDING G+'Q' = HOLDING G+'P' = G[_1APP] = [SINGLE _APPS LAYER]
         * HOLDING   'Q' =           'P' =  [_APPS] =         [APPS LAYER]
        [understanding]

// [INFO]
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
// [info]
==================
acronym dictionary
==================

[MANAGING MACROS]
#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT) //#if defined(COMPREHENSIVE_30_LAYOUT)
#endif //#elif defined(SIMPLE_30_LAYOUT)

#if defined(MINI_DACTYL_THUMBS)
#endif //#if defined(MINI_DACTYL_THUMBS)
[managing macros]
*/

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// BEGINING OF COMMON LAYERS 01...12
//
// [_DFLT]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_DFLT] = LAYER 00 : DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    Q   |    W   |    E   |    R   |    T   |        |    Y   |    U   |    I   |    O   |    P   |
 * |G[_1APP]|        |        |        |        |        |        |        |        |        |G[_1APP]|
 * | [_APPS]| [_POWR]| [_LEDS]| [_FUNC]| [_SYMB]|        | [_NUMB]| [_FUNC]| [_LEDS]| [_POWR]| [_APPS]|
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
#define ___DEFAULT_L1___ LT(_APPS, KC_Q),LT(_POWR, KC_W),LT(_LEDS, KC_E),LT(_FUNC, KC_R),LT(_SYMB,KC_T)
#define ___DEFAULT_L2___    LCTL_T(KC_A),   LALT_T(KC_S),   LGUI_T(KC_D),   LSFT_T(KC_F),LT(_ACCN,KC_G)
#define ___DEFAULT_L3___ LT(_DALY, KC_Z),LT(_DVIM, KC_X),LT(_MOUS, KC_C),LT(_FVIM, KC_V),LT(_NUMB,KC_B)

#define ___DEFAULT_R1___ LT(_NUMB,KC_Y),LT(_FUNC,KC_U), LT(_LEDS, KC_I),LT(_POWR,KC_O), LT(_APPS, KC_P)
#define ___DEFAULT_R2___ LT(_ACCN,KC_H),  LSFT_T(KC_J),    LGUI_T(KC_K),  LALT_T(KC_L),  LCTL_T(KC_SPC)
#define ___DEFAULT_R3___ LT(_SYMB,KC_N),LT(_FVIM,KC_M),LT(_XVIM,KC_ESC),       KC_BSPC,LT(_DALY,KC_ENT)

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_DFLT] = LAYER 00 : DEFAULT LAYER
 * .--------------------------------------------.        .--------------------------------------------.
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
 */
#define ___DEFAULT_L1___         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T
#define ___DEFAULT_L2___ LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),         KC_G
#define ___DEFAULT_L3___         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B

#define      ___DEFAULT_R1___             KC_Y,         KC_U,         KC_I,         KC_O,          KC_P
#define      ___DEFAULT_R2___             KC_H, LSFT_T(KC_J), LGUI_T(KC_K), LALT_T(KC_L),LCTL_T(KC_SPC)
#define      ___DEFAULT_R3___             KC_N,         KC_M,       KC_ESC,      KC_BSPC,        KC_ENT

//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_DFLT] = LAYER 00 : DEFAULT LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |*AcAccnt|        |alt:LEDS|ONEshoot|
 *                            |        |        |        |        |  layer |
 *                            |        |@@[_LED]|        |        |        |
 *                            |@[_MOUS]|@[_FUNC]|        |@[_POWR]|@[_ACCN]|
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   | Delete |        |        |        |alt:NUMB|alt:FVIM|alt:MOUS|
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |@[_DVIM]|@[_FVIM]|@[_NUMB]|        |@[_APPS]|@[_SYMB]|@[_DALY]|
 *                   '--------------------------'        '--------------------------'
 */
#define _DFLT_LTHMB_RW1_               LT(_MOUS,KC_TAB), MO(_FUNC) // TD(FUNC_LED) /*TH_L4_FUNC_LEDS*/
#define _DFLT_LTHMB_RW2_ TD(DVIM_Del),        MO(_FVIM),   TT_NUMB       /*TT(_NUMB)*/

#define      _DFLT_RTHMB_RW1_                      MO(_POWR),          OSL(_ACCN)
#define      _DFLT_RTHMB_RW2_                      TH_R3_APPS_TRIGGER, TH_R2_SYMB_FVIM, TH_R1_DALY_MOUS
                                                                      /*TH_R3_APPS_TRIGGER*/
//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_DFLT] 00
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_ACCN]
/* [_ACCN] = LAYER 01 : ACCENTS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX|        | XXXXXXX| XXXXXXX|        | XXXXXXX|    U   |    I   |    O   | XXXXXXX|
 * |        |        |    E   |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |@@@@@@@@|        |@@@@@@@@|        |        |        |        |
 * |        | XXXXXXX| XXXXXXX| XXXXXXX|        |        |        | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |    A   |  CIRCUM|  GRAVE |  DIAE- |        |        |        |  DIAE- |  GRAVE |  CIRCUM|        |
 * |        | -MFLEX |        | RESIS  |        |        |        | RESIS  |        |  -FLEX |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|        |        | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
 * |        |        |        |        |        |        |    N   |        |        |        |        |
 * |   RCtl |   RAlt |  RGui  |  RSft  |        |        |        |  RSft  |  RGui  |  RAlt  |  RCtl  |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___ACCENTS_L1___  XXXXXXX, XXXXXXX, F(ACC_E),XXXXXXX, XXXXXXX
#define ___ACCENTS_L2___ F(ACC_A),   CIRCU,    GRAVE,  DIAER, XXXXXXX
#define ___ACCENTS_L3___  KC_RCTL, KC_RALT,  KC_RGUI,KC_RSFT, XXXXXXX

#define      ___ACCENTS_R1___                             XXXXXXX, F(ACC_U), F(ACC_I), F(ACC_O), XXXXXXX
#define      ___ACCENTS_R2___                             XXXXXXX,    DIAER,    GRAVE,    CIRCU, XXXXXXX
#define      ___ACCENTS_R3___                             F(TIL_N), KC_RSFT,  KC_RGUI,  KC_RALT, KC_RCTL

#if defined(MINI_DACTYL_THUMBS)
/* [_ACCN] = LAYER 01 : ACCENTS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |@@@@@@@@|
 *                            |        |        |        |        |  DIAE- |
 *                            |        |        |        |        | RESIS  |
 *                            |        |@[_LEDS]|        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |   LSft |        |        |        |   LSft |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _ACCN_LTHMB_RW1_                      _______, MO(_LEDS)
#define _ACCN_LTHMB_RW2_             _______, KC_LSFT,   _______

#define      _ACCN_RTHMB_RW1_                                         MO(_POWR), DIAER
#define      _ACCN_RTHMB_RW2_                                         GRAVE,     KC_LSFT, CIRCU

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_ACCN] 01
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_NUMB]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_NUMB] = LAYER 02 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
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
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |        |        |        |        |*  $    |        |*   /   |        |        |        |        |
 * |  enter |bckspace|   tab  |    =   |** EURO |        |@ NUMBON|    1   |    2   |    3   |    *   |
 * |        |        |        |        |@@NUMBOF|        |@@NUMBOF|        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___NUMBERS_L1___           KC_1,          KC_2,           KC_3,           KC_4,      KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC),LALT_T(KC_DEL),LGUI_T(KC_PCMM),LSFT_T(KC_PDOT),   KC_PERC
#define ___NUMBERS_L3___        KC_PENT,       KC_BSPC,         KC_TAB,        KC_PEQL,TD(DENUOF)

#define      ___NUMBERS_R1___                                     KC_6,       KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                     KC_PMNS,    KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                     TD(SLNUMB), KC_1, KC_2, KC_3, KC_PAST

//# if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_NUMB] = LAYER 02 : NUMBERS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
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
 */
#define ___NUMBERS_L1___           KC_1,          KC_2,           KC_3,           KC_4,   KC_5
#define ___NUMBERS_L2___ LCTL_T(KC_SPC),LALT_T(KC_DEL),LGUI_T(KC_PCMM),LSFT_T(KC_PDOT),KC_PERC
#define ___NUMBERS_L3___        KC_PENT,       KC_BSPC,         KC_TAB,        KC_PEQL, KC_DLR

#define      ___NUMBERS_R1___                                        KC_6,    KC_7, KC_8, KC_9, KC_0
#define      ___NUMBERS_R2___                                        KC_PMNS, KC_4, KC_5, KC_6, KC_PPLS
#define      ___NUMBERS_R3___                                        KC_PSLS, KC_1, KC_2, KC_3, KC_PAST

//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_NUMB] = LAYER 02 : NUMBERS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |  EURO  |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |@@@@@@@@|        |########|        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |@[_SYMB]|        |
 *                   '--------------------------'        '--------------------------'
 */
#define _NUMB_LTHMB_RW1_                    _______, _______
#define _NUMB_LTHMB_RW2_           _______, _______, _______

#define      _NUMB_RTHMB_RW1_                                            MO(_POWR),  EURO
#define      _NUMB_RTHMB_RW2_                                            _______,    MO(_SYMB), _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_NUMB] 02
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_FVIM]
/* [_FVIM] = LAYER 03 : FAKE VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LEFT  |   UP   |  DOWN  |  RIGHT | XXXXXXX|        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * |        |        |        |        |        |        |paragrph|  Begin |  Word  |  Word  | End Of |
 * |        |        |        |        |        |        |   Up   | Ln/Prg | Bckwrd | Forwrd | Ln/Prg |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | Center |        |        |        |        |
 * |        |        |        |        | XXXXXXX|        |  Line  |        |        |        |        |
 * |        |        |        |        |        |        |   In   |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |  View  |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |@@@@@@@@|        |        |        |@@@@@@@@|        |        |        |
 * |        |        |        |        |        |        |  Shift |  Move  |  Move  |  Move  |  Move  |
 * |        |        |        | TOOGLE |        |        |paragrph|        |  Page  |  Page  |        |
 * |  LSft  |@[_DVIM]|@[_XVIM]|@[_FVIM]|  LSft  |        |  Down  |  HOME  |   UP   |  DOWN  |   END  |
 * '--------------------------------------------'        '--------------------------------------------'
*/
#define ___FAKEVIM_L1___ KC_LEFT,     KC_UP,   KC_DOWN,   KC_RGHT, XXXXXXX
#define ___FAKEVIM_L2___ _______,   _______,   _______,   _______, XXXXXXX
#define ___FAKEVIM_L3___ KC_LSFT, MO(_DVIM), MO(_XVIM), TT(_FVIM), KC_LSFT

#define      ___FAKEVIM_R1___             C(G(KC_UP)), TD(FVIM_uU), A(KC_LEFT), A(KC_RGHT), TD(FVIM_pP)
#define      ___FAKEVIM_R2___                  FVIM_H,     KC_LEFT,      KC_UP,    KC_DOWN,     KC_RGHT
#define      ___FAKEVIM_R3___           C(G(KC_DOWN)),  A(KC_HOME), A(KC_PGUP), A(KC_PGDN),   A(KC_END)

#if defined(MINI_DACTYL_THUMBS)
/* [_FVIM] = LAYER 03 : FAKE VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |@@@@@@@@|        |        |        |########|        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |@[_XVIM]|        |
 *                   '--------------------------'        '--------------------------'
 */
#define _FVIM_LTHMB_RW1_                      _______, _______
#define _FVIM_LTHMB_RW2_             _______, _______, _______

#define      _FVIM_RTHMB_RW1_                                         MO(_POWR), _______
#define      _FVIM_RTHMB_RW2_                                         _______,   MO(_XVIM), _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// MO(_DVIM),MO(_XVIM),MO(_FVIM) allow us changing from any ?VIM_layer to each other ?VIM_layer
// ... because we put '_______' in this locations in the rest of the ?VIM layers
// END OF [_FVIM] 03
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_XVIM]
/* [_XVIM] = LAYER 04 : EXTENDED EDITION VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |  Align |  Align |  Align |  Align |        |        | Insert |  Copy  | Duplict|  Copy  | Insert |
 * | to the | Justi- | in the | to the |Complete|        |  line  |  prev  | current|  next  |  line  |
 * |  right |  fied  | center |  left  |        |        |  above |paragrph|paragrph|paragrph|  below |
 * |        |        |        |        |        |        |paragrph|        |  below |        |paragrph|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |   60   | Trans  | Trans  |   20   |    5   |        |        |        |        |        |        |
 * |  lines |  -pose |  -pose |  lines |  lines |        | Outdent| Upper  | Lower  | Capi   | Indent |
 * |   up   |  chars |  words |   up   |   up   |        |        |  -case |  -case | -talize|        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |@@@@@@@@|( @@@@ )|        |        |        |        |@@@@@@@@|        |        |
 * |   60   | Scroll | Scroll |   20   |    5   |        |        |        |        |        |        |
 * |  lines |  page  |  page  |  lines |  lines |        |  Copy  |  Copy  |  Copy  |  Copy  |  Copy  |
 * |   down |  down  |   up   |   down |   down |        |charactr|  word  |  line  |paragrph|   ALL  |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___EXT_VIM_L1___  XVIM_P,  XVIM_O,  XVIM_I, XVIM_U, XVIM_Y
#define ___EXT_VIM_L2___ XVIM_SP,  XVIM_L,  XVIM_K, XVIM_J, XVIM_H
#define ___EXT_VIM_L3___ XVIM_EN, XVIM_BS, XVIM_ES, XVIM_M, XVIM_N

#define      ___EXT_VIM_R1___                                 CVIM_Y, CVIM_U, CVIM_I,  CVIM_O,  CVIM_P
#define      ___EXT_VIM_R2___                                 OUTDNT, CVIM_J, CVIM_K,  CVIM_L,  CVIM_SP
#define      ___EXT_VIM_R3___                                 CVIM_N, CVIM_M, CVIM_ES, CVIM_BS, CVIM_EN

#if defined(MINI_DACTYL_THUMBS)
/* [_XVIM] = LAYER 04 : EXTENDED EDITION VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |   UP   |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |( @@@@ )|        |        |        |@@@@@@@@|        |
 *                   |  LEFT  |  DOWN  |  RIGHT |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _XVIM_LTHMB_RW1_                        KC_UP, _______
#define _XVIM_LTHMB_RW2_             KC_LEFT, KC_DOWN, KC_RGHT

#define      _XVIM_RTHMB_RW1_                                         MO(_POWR), _______
#define      _XVIM_RTHMB_RW2_                                         _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// [BUG]
// 'OUTDNT = LGUI(KC_LBRC)' implemented because 'OUTDNT:;' in 'DefaultKeyBinding.dict' doesn't work !!!
// ... it happens the same as in 'transposeWord:;' !!!
// [bug]
// END OF [_XVIM] 04
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_DVIM]
/* [_DVIM] = LAYER 05 : DELETE VIM LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        | Delete | Delete | Delete | Delete |
 * |        |        |        |        |        |        |  Yank  |  Begin |  Word  |  Word  | End Of |
 * |        |        |        |        |        |        |        | Ln/Prg | Bckwrd | Forwrd | Ln/Prg |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|        
 * |        |        |        |        |        |        |        | Delete | Delete | Delete | Delete |
 * |        |        |        |   UP   |        |        |        |  Char  |  Line  |  Line  |  Char  |
 * |        |        |        |        |        |        |        |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|        
 * |        |@@@@@@@@|        |(( @@ ))|        |        |        | Delete | Delete | Delete | Delete |
 * |        |        |        |        |        |        |        |        |  Page  |  Page  |  until |
 * |        |        |  LEFT  |  DOWN  |  RIGHT |        |        |  HOME  |   Up   |  Down  |   END  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___DEL_VIM_L1___ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ___DEL_VIM_L2___ XXXXXXX, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX
#define ___DEL_VIM_L3___ XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT

#define      ___DEL_VIM_R1___                        DVIM_Y,  TD(DVIM_uU), DVIM_I,  DVIM_O, TD(DVIM_pP)
#define      ___DEL_VIM_R2___                        DVIM_H,  DVIM_J,      DVIM_K,  DVIM_L,    DVIM_SP
#define      ___DEL_VIM_R3___                        XXXXXXX, DVIM_M,      DVIM_ES, DVIM_BS,   DVIM_EN

#if defined(MINI_DACTYL_THUMBS)
/* [_DVIM] = LAYER 05 : DELETE VIM LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |@@@@@@@@|        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _DVIM_LTHMB_RW1_                      _______, _______
#define _DVIM_LTHMB_RW2_             _______, _______, _______

#define      _DVIM_RTHMB_RW1_                                               MO(_POWR), _______
#define      _DVIM_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
//[BUG] DVIM_H is empty
//[bug]
//      DVIM_N is empty
// END OF [_DVIM] 05
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_MOUS]
/* [_MOUS] = LAYER 06 : MOUSE LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|        |        |  Wheel |  Wheel |  Wheel |  Wheel |
 * |        |        |        |        |        |        |        |  Left  |   Up   |  Down  |  Right |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |  Mouse |  Mouse |  Mouse |  Mouse |
 * |        |        |        |        |        |        |        |  LEFT  |   UP   |  DOWN  |  RIGHT |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |  LGui  |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |Accelera|Accelera|@@@@@@@@|Accelera|  Mouse |        |  Mouse |  Mouse |  Mouse |  Mouse |  Mouse |
 * |  -tion |  -tion |        |  -tion | Button |        | Button | Button | Button | Button | Button |
 * |    1   |    2   |        |    0   |    1   |        |    1   |    2   |    3   |    4   |    5   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____MOUSE_L1____ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ____MOUSE_L2____ _______, _______, _______, _______, KC_LGUI
#define ____MOUSE_L3____ KC_ACL1, KC_ACL2, XXXXXXX, KC_ACL0, KC_BTN1

#define      ____MOUSE_R1____                        XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R
#define      ____MOUSE_R2____                        XXXXXXX, KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R
#define      ____MOUSE_R3____                        KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5

#if defined(MINI_DACTYL_THUMBS)
/* [_MOUS] = LAYER 06 : MOUSE LAYER
 *                            .-----------------.        .-----------------.
 *                            |@@@@@@@@|        |        |        |        |
 *                            |        |        |        |        |   UP   |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |########|
 *                   |        |        |        |        |  LEFT  |  DOWN  |  RIGHT |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _MOUS_LTHMB_RW1_                      _______, _______
#define _MOUS_LTHMB_RW2_             _______, _______, _______

#define      _MOUS_RTHMB_RW1_                                               MO(_POWR), KC_UP
#define      _MOUS_RTHMB_RW2_                                               KC_LEFT,   KC_DOWN, KC_RGHT

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_MOUS] 06
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_DALY]
/* [_DALY] = LAYER 07 : DAILY COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        | Capture| Capture|        |        |        |        |        |        |        |
 * |   Tab  | Dicta  | Screen |  Slide |Floating|        |  Close |  Prev  |  Next  | Mission|  Desk  |
 * |        |  -tion |        |        | Window |        |   App  |   App  |   App  | Control|        |
 * |        |        |^:cpySCR|^:cpySLD|        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | Caps   |  Dash- |   Up   |  Speak | Active |        |  Close |  Prev  |  Next  | Windows| Space  |
 * |   lock |  board |        |        | Window |        | Window | Window | Window |  Apps  |    bar |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |@@@@@@@@|        |        |        | Reopen |        |        |        |        |        |@@@@@@@@|
 * | Reverse|  Left  |  Down  |  Right |        |        |  Close |  Prev  |  Next  | Delete | Launch |
 * |   Tab  |        |        |        | Window |        |   Tab  |   Tab  |   Tab  |        |   -pad |
 * |        |        |        |        |  / Tab |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____DAILY_L1____ KC_TAB,   DICTATION, CAP_SCRN, CAP_SLDE, FLOA_WIN
#define ____DAILY_L2____ F(CAPSL),  DSHBOARD,    KC_UP,    SPEAK, ACTV_WIN
#define ____DAILY_L3____ S(KC_TAB),  KC_LEFT,  KC_DOWN,  KC_RGHT, REOPEN_L

#define      ____DAILY_R1____                        CLOSE_AP, PREV_APP, NEXT_APP, MISS_CTL,     DESK
#define      ____DAILY_R2____                        CLOSE_WI, PREV_WIN, NEXT_WIN, APP_WIND, KC_SPACE
#define      ____DAILY_R3____                        CLOSE_TB, PREV_TAB, NEXT_TAB,   KC_DEL, LANCHPAD

#if defined(MINI_DACTYL_THUMBS)
/* [_DALY] = LAYER 07 : DAILY COMMANDS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |        |        |
 *                            |   Tab  |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |@[_LEDS]|        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |@@@@@@@@|
 *                   |  SIRI  |CAPSLOCK|        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |@[_LEDS]|        |@[_LEDS]|        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _DALY_LTHMB_RW1_                        KC_TAB, CHANGE_DALY_TO_LEDS
#define _DALY_LTHMB_RW2_                SIRI, F(CAPSL), CHANGE_DALY_TO_LEDS

#define      _DALY_RTHMB_RW1_                                     MO(_POWR),           _______
#define      _DALY_RTHMB_RW2_                                     CHANGE_DALY_TO_LEDS, _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// ^ + Capture Screen = Copy Screen
// ^ + Capture Slide  = Copy Slide
// END OF [_DALY] 07
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_FUNC]
/* [_FUNC] = LAYER 08 : FUNCTIONS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |@@@@@@@@|        |        |        |@@@@@@@@|        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |   F01  |   F02  |   F03  |   F04  |   F05  |        |   F06  |   F07  |   F08  |   F09  |   F10  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |KAR-APPS|
 * |        |        |        |        |        |        |        |        |        |        | trigger|
 * |   F11  |   F12  |   F13  |   F14  |   F15  |        |   F16  |   F17  |   F18  |   F19  |   F20  |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |   fn   |        |        |        |   fn   |        |        |        |
 * |        |        |        | (Krbnr)|        |        |        | (Krbnr)|        |        |        |
 * |   F21  |   F22  |   F23  |   F24  |        |        |        |   F24  |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define __FUNCTIONS_L1__ KC_F1,  KC_F2,  KC_F3,  KC_F4,   KC_F5
#define __FUNCTIONS_L2__ KC_F11, KC_F12, KC_F13, KC_F14,  KC_F15
#define __FUNCTIONS_L3__ KC_F21, KC_F22, KC_F23, KC_F24, XXXXXXX

#define      __FUNCTIONS_R1__                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10
#define      __FUNCTIONS_R2__                        KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20
#define      __FUNCTIONS_R3__                        XXXXXXX,  KC_F24, XXXXXXX, XXXXXXX, XXXXXXX

#if defined(MINI_DACTYL_THUMBS)
/* [_FUNC] = LAYER 08 : FUNCTIONS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |@@@@@@@@|        |        |        |
 *                            |        |        |        |        |   fn   |
 *                            |        |        |        |        | (Krbnr)|
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |KAR-APPS|        |KAR-APPS|        |        |
 *                   |        |        | trigger|        | trigger|        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _FUNC_LTHMB_RW1_                       _______, _______
#define _FUNC_LTHMB_RW2_             _______,  _______,  KC_F20

#define      _FUNC_RTHMB_RW1_                                               MO(_POWR), KC_F24
#define      _FUNC_RTHMB_RW2_                                               KC_F20,    _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_FUNC] 08
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_SYMB]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_SYMB] = LAYER 09 : SYMBOLS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |@@@@@@@@|        |        |        |        |        |        |
 * |    +   |    =   |    #   |    *   |    %   |        |    @   |    (   |    )   |    _   |    -   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  `  ~  |  '  "  |    \   |    /   |    |   |        |    &   |    [   |    ]   |     ,  |    .   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |   LSft |  LGui  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |@@@@@@@@|        |        |        |        |
 * |  !  ¡  |  ?  ¿  |  <     |  >  ^  | $ EURO |        |    ^   |    {   |    }   |    ;   |    :   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___SYMBOLS_L1___        KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR,   KC_PERC
#define ___SYMBOLS_L2___ LCTL_T(KC_GRV),LALT_T(KC_QUOT),LGUI_T(KC_BSLS),LSFT_T(KC_SLSH),   KC_PIPE
#define ___SYMBOLS_L3___     TD(Z_EXCL),     TD(X_QUES),        KC_LABK,     TD(V_RACI),TD(G_DOEU)

#define      ___SYMBOLS_R1___                                 KC_AT, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS
#define      ___SYMBOLS_R2___ KC_AMPR,LSFT_T(KC_LBRC), LGUI_T(KC_RBRC), LALT_T(KC_COMM), LCTL_T(KC_DOT)
#define      ___SYMBOLS_R3___                               KC_CIRC, KC_LCBR, KC_RCBR, KC_SCLN, KC_COLN

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_SYMB] = LAYER 09 : SYMBOLS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    +   |    =   |    #   |    *   |    %   |        |    @   |    (   |    )   |    _   |    -   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  `  ~  |  '  "  |    \   |    /   |    |   |        |    &   |    [   |    ]   |     ,  |    .   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |        |        |   LSft |  LGui  |  LAlt  |  LCtl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |    !   |    ?   |    <   |    >   |    $   |        |    ^   |    {   |    }   |    ;   |    :   |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ___SYMBOLS_L1___        KC_PLUS,         KC_EQL,        KC_HASH,        KC_ASTR,KC_PERC
#define ___SYMBOLS_L2___ LCTL_T(KC_GRV),LALT_T(KC_QUOT),LGUI_T(KC_BSLS),LSFT_T(KC_SLSH),KC_PIPE
#define ___SYMBOLS_L3___        KC_EXLM,        KC_QUES,        KC_LABK,        KC_RABK, KC_DLR

#define      ___SYMBOLS_R1___                                 KC_AT, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS
#define      ___SYMBOLS_R2___ KC_AMPR,LSFT_T(KC_LBRC), LGUI_T(KC_RBRC), LALT_T(KC_COMM), LCTL_T(KC_DOT)
#define      ___SYMBOLS_R3___                               KC_CIRC, KC_LCBR, KC_RCBR, KC_SCLN, KC_COLN

//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_SYMB] = LAYER 09 : SYMBOLS LAYER
 *                            .-----------------.        .-----------------.
 *                            |inverted|inverted|        |        |        |
 *                            | exclam.|question|        |        |  EURO  |
 *                            |  mark  |  mark  |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |        |@@@@@@@@|        |
 *                   |  / *   |   * /  |        |        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   |        |        |@[_NUMB]|        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
#define _SYMB_LTHMB_RW1_                               INV_EX,   INV_QU
#define _SYMB_LTHMB_RW2_      O_COMMENT, C_COMMENT, CHANGE_SYMB_TO_NUMB

#define      _SYMB_RTHMB_RW1_                                               MO(_POWR), EURO
#define      _SYMB_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_SYMB] 09
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_APPS]
/* [_APPS] = LAYER 10 : APPLICATIONS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |@@@@@@@@|        |        |        |        |        |        |        |        |        |@@@@@@@@|
 * | Simple | Twitter|Evernote|   App  |Terminal|        |  Typi  |  Uroom |Textedit|  Omni  | System |
 * |  Note  |        |        |  Store |        |        | -nator |        |        | -focus | Prefe  |
 * |        |        |*qck_ent|        |   >_   |        |        |        |        |*qck_ent| -rences|
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        | XXXXXXX|
 * |  Apple |  Slack |  Day   | Finder | Google |        | Sketch | Sublime|Karbiner|Calendar|        |
 * | Script |(safari)|   One  |        | Chrome |        |        |  Text  |Elements|        |        |
 * |        |        |*qck_ent|        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | Studies|  Xcode | Calcu  |Karbiner|  Books |        |  Notes |  Mail  | Keynote|  Pages | Numbers|
 * |        |        | -lator | Event  |        |        |        |        |        |        |        |
 * |        |        |        | Viewer |        |        |        |        |        |        |        |
 * '--------------------------------------------'        '--------------------------------------------'
// *qck_ent: QUICK ENTRY
// [PENDING]
// Feedly
// [pending]
*/

// #define __APPLICATS_L1__ APP_Q_SNOTE, APP_W_TWTTR, APP_E_EVERN, APP_R_APSTO, APP_T_TERMI
// #define __APPLICATS_L2__ APP_A_SCRPT, APP_S_SAFAR, APP_D_D_ONE, APP_F_FINDE, APP_G_CHRME
// #define __APPLICATS_L3__ APP_Z_STUDI, APP_X_XCODE, APP_C_CALCU, APP_V_KVIEW, APP_B_BOOKS

// #define      __APPLICATS_R1__           APP_Y_TYPIN, APP_U_UROOM, APP_I_TEDIT, APP_O_OMNIF, APP_P_SPREF
// #define      __APPLICATS_R2__           APP_H_SKTCH, APP_J_SUBLI, APP_K_KRBNR, APP_L_CLNDR, APPSP_EMPTY
// #define      __APPLICATS_R3__           APP_N_NOTES, APP_M_MAIL,  APP_ES_KEYN, APP_BS_PAGE, APP_EN_NUMB

// #define __APPLICATS_L1__ _______, _______, _______, _______, _______
// #define __APPLICATS_L2__ _______, _______, _______, _______, _______
// #define __APPLICATS_L3__ _______, _______, _______, _______, _______

// #define      __APPLICATS_R1__           _______, _______, _______, _______, _______
// #define      __APPLICATS_R2__           _______, _______, _______, _______, _______
// #define      __APPLICATS_R3__           _______, _______, _______, _______, _______

// #if defined(MINI_DACTYL_THUMBS)
/* [_APPS] = LAYER 10 : APPLICATIONS LAYER
 *                            ,-----------------.        ,-----------------.
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |@[_POWR]|        |
 *                   ,--------+--------+--------|        |--------+--------|--------.
 *                   |        |        |        |        |@@@@@@@@|        |        |
 *                   |        |        |KAR-APPS|        |        |        |        |
 *                   |        |        | trigger|        |        |        |        |
 *                   |        |        |        |        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 */
// #define _APPS_LTHMB_RW1_                      _______,        _______
// #define _APPS_LTHMB_RW2_             _______, _______, TH_L3_KAR_APPS

// #define      _APPS_RTHMB_RW1_                                               MO(_POWR), _______
// #define      _APPS_RTHMB_RW2_                                               _______,   _______, _______

//#if defined(MINI_DACTYL_THUMBS)
// #endif
// END OF [_APPS] 10
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_LEDS]
#if defined(BACKLIGHT_ENABLE)
  /* [_LEDS] = LAYER 11 : LEDS LIGHTS LAYER
   * .--------------------------------------------.        .--------------------------------------------.
   * |        |        |        |        |        |        |        |        |        |        | Toggle |
   * |  Level |  Level |  Level |  Level |  Level |        | Breath | Breath | Breath | Breath | Breath |
   * |   01   |   02   |   03   |   04   |   05   |        |   01   |   02   |   03   |   04   |        |
   * |        |        |        |        |        |        |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |        |        |        |        |        |        |
   * |  Level |  Level |  Level |  Level |  Level |        | Breath | Breath | Breath | Breath | Breath |
   * |   06   |   07   |   08   |   09   |   10   |        |   05   |   06   |   07   |   12   |   15   |
   * |        |        |        |        |        |        |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |        | Toggle |        |  Raise |  Lower |        |
   * |  Level |  Level |  Level |  Level |  Level |        |Backlght|Backlght|Backlght|Backlght|Backlght|
   * |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |        |        |   ON   |        |        |   OFF  |
   * |        |        |        |        |        |        |        |        |        |        |        |
   * '--------------------------------------------'        '--------------------------------------------'
   */
  /* BL_OFF
   QMK standard keycode BL_OFF doesn't work ! ! !
   I've made a macro (BLIT_OFF) who call the function backlight_level(BL_OFF) ! ! !
   */
  #define _LEDS_LIGHTS_L1_ BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05
  #define _LEDS_LIGHTS_L2_ BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10
  #define _LEDS_LIGHTS_L3_ BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15

  #define      _LEDS_LIGHTS_R1_           BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG
  #define      _LEDS_LIGHTS_R2_           BRTH_05, BRTH_06, BRTH_07, BRTH_12,  BRTH_15
  #define      _LEDS_LIGHTS_R3_           BL_TOGG,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF

#elif defined(RGBLIGHT_ENABLE)
  /* [_LEDS] = LAYER 11 : LEDS LIGHTS LAYER
   * .--------------------------------------------.      .--------------------------------------------.
   * |        |        |        |        |        |      |        |        |        |        | Reverse|
   * |   Red  |  Coral | Orange | Golden |  Gold  |      | Yellow |  Raise |  Lower |  Save  |   RGB  |
   * |        |        |        |   Rod  |        |      |        |   Hue  |   Hue  | colors |   Mode |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  Char  |  Green | Spring |  Tur   |  Teal  |      |  White |  Raise |  Lower |   Get  |   RGB  |
   * | -treuse|        |   Green| -quoise|        |      |        |saturat.|saturat.| colors |   Mode |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  Cyan  |  Azure |  Blue  | Purple | Magenta|      |  Pink  |  Raise |  Lower |   No   | Toggle |
   * |        |        |        |        |        |      |        |  value |  value |  color |   RGB  |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * '--------------------------------------------'      '--------------------------------------------'
   */
  #define _LEDS_LIGHTS_L1_  CH_RED, CH_CORL, CH_ORNG, CH_GOLR, CH_GOLD
  #define _LEDS_LIGHTS_L2_ CH_CHRT, CH_GREN, CH_SPRG, CH_TRQS, CH_TEAL
  #define _LEDS_LIGHTS_L3_ RGB_TOG, CH_EMPT, CH_BLUE, CH_PRPL, CH_MGNT

  #define      _LEDS_LIGHTS_R1_                      CH_YLLW, RGB_HUI, RGB_HUD, SAV_COL, RGB_RMOD
  #define      _LEDS_LIGHTS_R2_                      CH_WHIT, RGB_SAI, RGB_SAD, GET_HSV,  RGB_MOD
  #define      _LEDS_LIGHTS_R3_                      CH_PINK, RGB_VAI, RGB_VAD, CH_EMPT,  RGB_TOG

  #if defined(MINI_DACTYL_THUMBS)
    /* [_LEDS] = LAYER 11 : LEDS LIGHTS LAYER
     *                          .-----------------.      .-----------------.
     *                          |        |@@@@@@@@|      |        |        |
     *                          |        |        |      |        |        |
     *                          |        |        |      |        |        |
     *                          |        |        |      |@[_POWR]|        |
     *                 .--------+--------+--------|      |--------+--------|--------.
     *                 |        |        |@@@@@@@@|      |@@@@@@@@|        |( @@@@ )|
     *                 |  Cyan  |  Azure |        |      |        |        |        |
     *                 |        |        |        |      |        |        |        |
     *                 |        |        |        |      |        |        |        |
     *                 '--------------------------'      '--------------------------'
     */
    #define _LEDS_LTHMB_RW1_           _______, _______
    #define _LEDS_LTHMB_RW2_ CH_CYAN,  CH_AZUR, _______

    #define      _LEDS_RTHMB_RW1_                              MO(_POWR), _______
    #define      _LEDS_RTHMB_RW2_                              _______,   _______, _______
     
  //#if defined(MINI_DACTYL_THUMBS)
  #endif

//#elif defined(RGBLIGHT_ENABLE)
#endif
// END OF [_LEDS] 11
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

// [_POWR]
#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_POWR] = LAYER 12 : POWER COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |@@@@@@@@|        |        |        |        |        |        |        |@@@@@@@@|        |
 * | XXXXXXX|  Lock  | Log Out|        | XXXXXXX|        | Medium |  Raise |  Lower | Minimum|  Mute  |
 * |        | Screen |        |        |        |        | Volume | Volume | Volume | Volume | Volume |
 * |        |        |        | @RESET |        |        | (Vol.8)|        |        | (Vol.1)|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |  Play  |        | Toggle |        | Toggle |        |        |        |        |
 * | XXXXXXX| Rewind |  /Pause| Forward|  Zoom  |        |  Zoom  |  Zoom  |  Zoom  |  Zoom  | Invert |
 * |        |        |        |        | Smooth |        |  Focus |   In   |   Out  | Toggle | Colors |
 * |  RCtl  |  RAlt  |  RGui  |  RSft  | Images |        |Followng|  RSft  |  RGui  |  RAlt  |  Rctl  |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |  Menu  |  Dock  |  Tool  | Status |Floating|        |@@@@@@@@|        |        |        |        |
 * |  _Bar  |  _Bar  |  _Bar  |  _Bar  | Window |        |  Raise |  Raise |  Lower | Minimum|  Lower |
 * |        |        |        |        |        |        |Contrast| Bright | Bright | Bright |Contrast|
 * | @SLEEP |@KIL_APP|@KIL_MEN|@SHUTDWN|@RESTART|        |        |        |        |(Bght.1)|        |
 * '--------------------------------------------'        '--------------------------------------------'
// KC_BRIGHTNESS_DOWN(KC_BRID):->KC_PAUS
// KC_BRIGHTNESS_UP  (KC_BRIU):->KC_SLCK
// KC_MRWD:->KC_F7, KC_MPLY:->KC_SPC, KC_MFFD:->KC_F9,
// ###
// RSFT_T(kc) <--- [BOOKMARK] [FIXME]
//             SFT+ALT+CMD+ESC,    ALT+CMD+ESC,
*/
#define ____POWER_L1____    XXXXXXX,       XXXXXXX,     TD(LCKLOG),    TD(HRESET),     XXXXXXX
#define ____POWER_L2____    KC_RCTL, RALT_T(KC_F7), RGUI_T(KC_SPC), RSFT_T(KC_F9),    ZOOMSMTH
#define ____POWER_L3____ TD(SLEP_M),   KILAPP_DOCK,    KILMNU_TOOL,   SHUTD_STATB, RSTRT_FLOAT

#define      ____POWER_R1____           TD(V8_TEST), KC__VOLUP,   KC__VOLDOWN, TD(V1_LAST), KC__MUTE
#define      ____POWER_R2____           ZOOM_FOL,    TD(RS_ZOIN), TD(RG_ZOUT), TD(RA_ZOOM), TD(RC_INCO)
#define      ____POWER_R3____           CNTRST_U,    KC_PAUS,     KC_SLCK,     BRIGHT_1,    CNTRST_D

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)
/* [_POWR] = LAYER 12 : POWER COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |
 * | Toggle |  Lock  | Log Out|        |  Cycle |        | Medium |  Raise |  Lower | Minimum|  Mute  |
 * | Whole  | Screen |        |        |  Steps |        | Volume | Volume | Volume | Volume | Volume |
 * |Indictor|        |        | @RESET |Indictor|        | (Vol.8)|        |        | (Vol.1)|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |        |        |  Play  |        | Toggle |        | Toggle |        |        |        |        |
 * | XXXXXXX| Rewind |  /Pause| Forward|  Zoom  |        |  Zoom  |  Zoom  |  Zoom  |  Zoom  | Invert |
 * |        |        |        |        | Smooth |        |  Focus |   In   |   Out  | Toggle | Colors |
 * |  RCtl  |  RAlt  |  RGui  |  RSft  | Images |        |Followng|        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |  Menu  |  Dock  |  Tool  | Status |Floating|        |@@@@@@@@|        |        |        |        |
 * |  _Bar  |  _Bar  |  _Bar  |  _Bar  | Window |        |  Raise |  Raise |  Lower | Minimum|  Lower |
 * |        |        |        |        |        |        |Contrast| Bright | Bright | Bright |Contrast|
 * | @SLEEP |^KIL_APP|^KIL_MEN|^SHUTDWN|^RESTART|        |        |        |        |(Bght.1)|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */
#define ____POWER_L1____     TOG_ID,        STP_ID,     TD(LCKLOG),    TD(HRESET),   _______
#define ____POWER_L2____    KC_RCTL, RALT_T(KC_F7), RGUI_T(KC_SPC), RSFT_T(KC_F9), ZOOMSMTH
#define ____POWER_L3____ TD(SLEP_M),        KA_DCK,         KM_TOL,        SH_STA,   RT_FLO

#define      ____POWER_R1____                      VOL_8,    KC__VOLUP, KC__VOLDOWN, VOL_1,    KC__MUTE
#define      ____POWER_R2____                      ZOOM_FOL, ZOOM_IN,   ZOOM_OUT,    ZOOM_TOG, INV_COLO
#define      ____POWER_R3____                      CNTRST_U, KC_PAUS,   KC_SLCK,     BRIGHT_1, CNTRST_D




// ALIGN TO RIGHT AND LEFT OR ONLY LEFT ???

// #define ____POWER_L1____      TOG_ID,      LOCK_SCR,        KC_LOGO,      MY_RESET,   STP_ID
// #define ____POWER_L2____     KC_RCTL, RALT_T(KC_F7), RGUI_T(KC_SPC), RSFT_T(KC_F9), ZOOMSMTH
// #define ____POWER_L3____ SLEP_MNUBAR,        KA_DCK,         KM_TOL,        SH_STA,   RT_FLO

// #define      ____POWER_R1____                         VOL_8, KC__VOLUP, KC__VOLDOWN,    VOL_1, KC__MUTE
// #define      ____POWER_R2____                      ZOOM_FOL,   ZOOM_IN,    ZOOM_OUT, ZOOM_TOG, INV_COLO
// #define      ____POWER_R3____                      CNTRST_U,   KC_PAUS,     KC_SLCK, BRIGHT_1, CNTRST_D






// #define ____POWER_L1____ TOG_ID,      LOCK_SCR,      KC_LOGO,        MY_RESET,      STP_ID
// #define ____POWER_L2____ KC_RCTL,     RALT_T(KC_F7), RGUI_T(KC_SPC), RSFT_T(KC_F9), ZOOMSMTH
// #define ____POWER_L3____ SLEP_MNUBAR, KA_DCK,        KM_TOL,         SH_STA,        RT_FLO

// #define      ____POWER_R1____                      VOL_8,    KC__VOLUP, KC__VOLDOWN, VOL_1,    KC__MUTE
// #define      ____POWER_R2____                      ZOOM_FOL, ZOOM_IN,   ZOOM_OUT,    ZOOM_TOG, INV_COLO
// #define      ____POWER_R3____                      CNTRST_U, KC_PAUS,   KC_SLCK,     BRIGHT_1, CNTRST_D
// Align to right and left or only left ???





//#elif defined(SIMPLE_30_LAYOUT)
#endif

#if defined(MINI_DACTYL_THUMBS)
/* [_POWR] = LAYER 12 : POWER COMMANDS LAYER
 *                            .-----------------.        .-----------------.
 *                            |        |        |        |@@@@@@@@|        |
 *                            |        |        |        |        |        |
 *                            |        |        |        |        |        |
 *                            | Control|MY_RESET|        |        |        |
 *                   .--------+--------+--------|        |--------+--------|--------.
 *                   |        |  Clear |        |        |        |        |        |
 *                   |        |   ALL  |        |        |        |        |        |
 *                   |        |Layers->|        |        |        |        |        |
 *                   |        |>[_DFLT]|KC_RESET|        |        |        |        |
 *                   '--------------------------'        '--------------------------'
 * You can reach _POWR key anywhere because it's always at the same position: THUMB_R4, but ...
 * ... maybe you're lost into a layer, which you don't know which one it is and ...
 * ... you can't reach a control key for resetting the keyboard.
 * ... that's why we put one control key here, at 'THUMB_L4' position.
 */
#define _POWR_LTHMB_RW1_                  KC_LCTL, MY_RESET
#define _POWR_LTHMB_RW2_        _______, MY_CLEAR,    RESET

#define      _POWR_RTHMB_RW1_                                                 _______, _______
#define      _POWR_RTHMB_RW2_                                                 _______, _______, _______

//#if defined(MINI_DACTYL_THUMBS)
#endif
// END OF [_POWR] 12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// END OF COMMON LAYERS 01...12
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###



/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
// BEGINING OF SPECIFIC LAYERS 13, 17
//
// [_TEST]
// [_LAST]
#if defined(COMPREHENSIVE_30_LAYOUT)

  // #define _TEST  13  //  LAYER FOR TESTING
  // #define _LAST  17  //  TEST FOR TRYING ACCESS TO A LAYER ABOVE NUMBER 15 !!!!!!!!!!!!!!!!!!!!!!!!!!

  // [_TEST]
  /* [_TEST] = LAYER 01 : ACCENTS LAYER
   * .--------------------------------------------.      .--------------------------------------------.
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |        |        |        |        |        |      |        |    1   |    2   |    3   |        |
   * |    +   |    @   |    #   |    =   |    %   |      |    &   |  Beep  |  Beeps |  Beeps |    -   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  `  ~  |  '  "  |    \   |    /   |  $  €  |      |    |   |    [   |    ]   |    ,   |    .   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  LCtl  |  LAlt  |  LGui  |  LSft  |        |      |        |  LSft  |  LGui  |  LAlt  |  LCtl  |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  !  ¡  |  ?  ¿  |    <   |  >  ^  |    *   |      | XXXXXXX|    {   |    }   |    :   |    ;   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |        |        |        |        |        |      |@[_SYMB]|        |        |        |        |
   * '--------------------------------------------'      '--------------------------------------------'
   */
  #define ____TEST__L1____       KC_PLUS,          KC_AT,        KC_HASH,          KC_EQL,    KC_PERC
  #define ____TEST__L2____ CTL_T(KC_GRV), ALT_T(KC_QUOT), GUI_T(KC_BSLS), LSFT_T(KC_SLSH), TD(G_DOEU)
  #define ____TEST__L3____    TD(Z_EXCL),     TD(X_QUES),        KC_LABK,      TD(V_RACI),    KC_ASTR

  #define      ____TEST__R1____ KC_AMPR, BEEP_1,          BEEP_2,         BEEP_3,         KC_MINS
  #define      ____TEST__R2____ KC_PIPE, LSFT_T(KC_LBRC), GUI_T(KC_RBRC), ALT_T(KC_COMM), CTL_T(KC_DOT)
  #define      ____TEST__R3____ LT(_SYMB, KC_NO),KC_LCBR, KC_RCBR,        KC_COLN,        KC_SCLN
  // END OF _TEST 13
  ///////////////////////////////////////////////////////////////////////////////////////////////// ###

  // [_LAST]
  /* [_LAST] = LAYER 17 : LAST LAYER
   * .--------------------------------------------.      .--------------------------------------------.
   * |        |        |        |        |        |      |        |        |        |        | Toggle |
   * |  Level |  Level |  Level |  Level |  Level |      | Breath | Breath | Breath | Breath | Breath |
   * |   01   |   02   |   03   |   04   |   05   |      |   01   |   02   |   03   |   04   |        |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |  Level |  Level |  Level |  Level |  Level |      | Breath | Breath | Breath | Breath | Breath |
   * |   06   |   07   |   08   |   09   |   10   |      |   05   |   06   |   07   |   12   |   15   |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * |--------+--------+--------+--------+--------|      |--------+--------+--------+--------+--------|
   * |        |        |        |        |        |      | Toggle |        |  Raise |  Lower |        |
   * |  Level |  Level |  Level |  Level |  Level |      |Backlght|Backlght|Backlght|Backlght|Backlght|
   * |  BL_11 |  BL_12 |  BL_13 |  BL_14 |  BL_15 |      |        |   ON   |        |        |   OFF  |
   * |        |        |        |        |        |      |        |        |        |        |        |
   * '--------------------------------------------'      '--------------------------------------------'
   */
  #define ____LAST__L1____ BLIT_01, BLIT_02, BLIT_03, BLIT_04, BLIT_05
  #define ____LAST__L2____ BLIT_06, BLIT_07, BLIT_08, BLIT_09, BLIT_10
  #define ____LAST__L3____ BLIT_11, BLIT_12, BLIT_13, BLIT_14, BLIT_15

  #define      ____LAST__R1____ BRTH_01, BRTH_02, BRTH_03, BRTH_04,  BL_BRTG
  #define      ____LAST__R2____ BRTH_05, BRTH_06, BRTH_07, BRTH_12,  BRTH_15
  #define      ____LAST__R3____ BL_TOGG,   BL_ON,  BL_INC,  BL_DEC, BLIT_OFF

  // END OF _LAST 17
  ///////////////////////////////////////////////////////////////////////////////////////////////// ###

#elif defined(SIMPLE_30_LAYOUT)

    // No extra layers for 'simple_30_layout'

#endif
//
// END OF SPECIFIC LAYERS 13, 17
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/////////////////////////////////////////////////////////////////////////////////////////////////// ###

