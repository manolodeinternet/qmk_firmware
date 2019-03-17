// SPARE code
//
// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵
//instanalize an instance of 'tap' for the 'ESC_AC' tap dance.
static tap ESC_ACtap_state = {
  .is_press_action = true,
  .state = 0
};

void ESC_AC_finished (qk_tap_dance_state_t *state, void *user_data) {
  ESC_ACtap_state.state = cur_dance(state);
  switch (ESC_ACtap_state.state) {
    case SINGLE_TAP: register_code(KC_ESC); break;                          // escape
    case SINGLE_HOLD: layer_on(FNCT); break;                                // FUNC
    case DOUBLE_TAP: register_code(KC_LALT); register_code(KC_E); break;   // acute accent for all vowels
    case DOUBLE_HOLD: register_code(KC_LALT); register_code(KC_N); break;   // tilde accent for ñ
    case DOUBLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_E); break;   // acute accent for all vowels
    case TRIPLE_TAP: register_code(KC_LALT); register_code(KC_U); break;    // diaeresis for ï and ü
    case TRIPLE_HOLD: register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_U); break;    // diaeresis for ï and ü
    case QUADRUPLE_TAP: register_code(KC_LALT); register_code(KC_GRAVE); break; // grave accent for vovels
    case QUADRUPLE_HOLD: register_code(KC_NO); break;
    case QUADRUPLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_GRAVE); break; // grave accent for vovels
    case QUINTUPLE_TAP: register_code(KC_LALT); register_code(KC_I); break; // circunflex accent for vovels
    case QUINTUPLE_HOLD: register_code(KC_NO); break;
    case QUINTUPLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_I); break; // circunflex accent for vovels
    // LALT(KC_GRV), LALT(KC_E), LALT(KC_U), LALT(KC_N), LALT(KC_I), _______, _______, _______, _______, _______,
    // SEND_STRING("little_face"); break;
    // send_unicode_hex_string("0301"); // UC(ACUTE); break;             // acute accent  #define ACUTE   0x0301
  }
}

void ESC_AC_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (ESC_ACtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_ESC); break;
    case SINGLE_HOLD: layer_off(FNCT); break;
    case DOUBLE_TAP: unregister_code(KC_E); unregister_code(KC_LALT); break;    // acute accent for all vowels
    case DOUBLE_HOLD: unregister_code(KC_N); unregister_code(KC_LALT); break;   // tilde accent for ñ
    case DOUBLE_SINGLE_TAP: unregister_code(KC_E); unregister_code(KC_LALT); break;    // acute accent for all vowels
    case TRIPLE_TAP:  unregister_code(KC_U); unregister_code(KC_LALT); break;    // diaeresis for ï and ü
    case TRIPLE_HOLD: unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_U); unregister_code(KC_LALT); break;    // diaeresis for ï and ü
    case QUADRUPLE_TAP: unregister_code(KC_GRAVE); unregister_code(KC_LALT); break; // grave accent for vovels
    case QUADRUPLE_HOLD: unregister_code(KC_NO); break;
    case QUADRUPLE_SINGLE_TAP: unregister_code(KC_GRAVE); unregister_code(KC_LALT); break; // grave accent for vovels
    case QUINTUPLE_TAP: unregister_code(KC_I); unregister_code(KC_LALT); break; // circunflex accent for vovels
    case QUINTUPLE_HOLD: unregister_code(KC_NO); break;
    case QUINTUPLE_SINGLE_TAP: unregister_code(KC_I); unregister_code(KC_LALT); break; // circunflex accent for vovels
  }
  ESC_ACtap_state.state = 0;
} // 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴
//
//
// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵
// commented includes at the beginning of 'keymap.c'
/*#include "quantum.h"
#include "keycode_config.h"
#include "keymap.h"

//include "action_layer.h"    //FIXME  ERASEME
//#include "action.h"          //FIXME  ERASEME
// #include "turbomech.h"


#include "keymap.h"

#include "action_layer.h"
//  #include "keymap_common.h"

#include "backlight.h"
#include "quantum.h"
#include "led.h"
#include "gherkin.h"

// #include "process_unicode.h"
// #include "send_string_keycodes.h"
*/
 // 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴



 // 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵

//

 // 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴
