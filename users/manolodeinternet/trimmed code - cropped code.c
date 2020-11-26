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
    case SINGLE_TAP:        volumeSetToLevel(8);
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
    case SINGLE_TAP:        volumeSetToLevel(1);
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





















#if defined(COMPREHENSIVE_30_LAYOUT)
/* [_POWR] = LAYER 13 : POWER COMMANDS LAYER
 * .--------------------------------------------.        .--------------------------------------------.
 * |        | Clear  |@@@@@@@@|        |        |        |        |        |@@@@@@@@|        |        |
 * |        | Stuck  |LckScren|        |        |        | Medium |  Raise |  Lower | Minimum|  Mute  |
 * |        |Modifirs|    /   |        |        |        | Volume | Volume | Volume | Volume | Volume |
 * | @RESET |& Layers| Log Out|My_Reset|  Reset |        | (Vol.8)|        |        | (Vol.1)|        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * | Toggle |        |  Play  |        | Toggle |        | Toggle |        |        |        |        |
 * |  layer | Rewind |  /Pause| Forward|  Zoom  |        |  Zoom  |  Zoom  |  Zoom  |  Zoom  | Invert |
 * |[_QWER]|        |        |        | Smooth |        |  Focus |   In   |   Out  | Toggle | Colors |
 * |   RCtl |   RAlt |  RSft  |  RGui  | Images |        |Followng|        |        |        |        |
 * |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
 * |  Menu  |  Dock  |  Tool  | Status |Floating|        |        |        |        |        |        |
 * |  _Bar  |  _Bar  |  _Bar  |  _Bar  | Window |        |  Raise |  Raise |  Lower | Minimum|  Lower |
 * |        |        |        |        |        |        |Contrast| Bright | Bright | Bright |Contrast|
 * | @SLEEP |^KIL_APP|^KIL_MEN|@SHUTDWN|^RESTART|        |        |        |        |(Bght.1)|        |
 * '--------------------------------------------'        '--------------------------------------------'
 */ // Toggle Zoom Smooth Images is not in use nowadays.  But its keycode is still alive.    [DELETEME]
// #define ____POWER_L3____ TD(SLEP_M),     KA_DCK,     KM_TOL, TD(SHUT_S),     RT_FLO
// TG(_QWER) has been substituted by TD(TG_QWE) for allowing flash animation before toggling.
#define ____POWER_L1____ TD(HRESET),      MY_CLEAR,     TD(LCKLOG),       XXXXXXX,     RESET
#define ____POWER_L2____ TD(TG_QWE), RSFT_T(KC_F7), RALT_T(KC_SPC), RGUI_T(KC_F9),  ZOOMSMTH
#define ____POWER_L3____ TD(SLEP_M),    TD(KILA_D),     TD(KILM_T),    TD(SHUT_S),TD(RSTT_F)

//#define    ____POWER_R2____ ZOOM_FOL,    ZOOM_IN,         ZOOM_OUT,          ZOOM_TOG,    INV_COLO
#define      ____POWER_R1____ TD(V8_TEST), S(A(KC__VOLUP)), S(A(KC__VOLDOWN)), TD(V1_LAST), KC__MUTE
#define      ____POWER_R2____ ZOOM_FOL,    TD(RG_ZOIN),     TD(RA_ZOUT),       TD(RS_ZOOM), TD(RA_INCO)
#define      ____POWER_R3____ CNTRST_U,    INC_BRGH,        DEC_BRGH,          BRIGHT_1,    CNTRST_D

//#if defined(COMPREHENSIVE_30_LAYOUT)
#elif defined(SIMPLE_30_LAYOUT)





















