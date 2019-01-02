#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define FN1_Q LT(1, KC_Q)

enum custom_tap_dance {
  DO_EUR
 ,EXCLAM
 ,QUESTI
};

///// QUAD FUNCTION TAP DANCE GENERAL SETUP SECTION START /////
///// (no need to edit this section) /////
//Enums used to clearly convey the state of the tap dance
enum tap_dance_states {
 SINGLE_TAP = 1,
 SINGLE_HOLD = 2,
 DOUBLE_TAP = 3,
 DOUBLE_HOLD = 4,
 DOUBLE_SINGLE_TAP = 5, //send SINGLE_TAP twice - NOT DOUBLE_TAP
 TRIPLE_TAP = 6,
 TRIPLE_HOLD = 7,
 TRIPLE_SINGLE_TAP = 8,
 QUADRUPLE_TAP = 9,
 QUADRUPLE_HOLD = 10,
 QUADRUPLE_SINGLE_TAP = 11,
 QUINTUPLE_TAP = 12,
 QUINTUPLE_HOLD = 13,
 QUINTUPLE_SINGLE_TAP = 14
 // Add more enums here if you want for triple, quadruple, etc.
};


typedef struct {
  bool is_press_action;
  int state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    //If count = 1, and it has been interrupted - it doesn't matter if it is pressed or not: Send SINGLE_TAP
    if (state->interrupted || !state->pressed) return SINGLE_TAP;
    else return SINGLE_HOLD;
  }
  //If count = 2, and it has been interrupted - assume that user is trying to type the letter associated
  //with single tap.
  else if (state->count == 2) {
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
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
  else return 15; //magic number. At some point this method will expand to work for more presses
}
///// QUAD FUNCTION TAP DANCE GENERAL SETUP SECTION END /////



///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
//instanalize an instance of 'tap' for the 'DO_EUR' tap dance.
static tap DO_EURtap_state = {
  .is_press_action = true,
  .state = 0
};

void DO_EUR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DO_EURtap_state.state = cur_dance(state);
  switch (DO_EURtap_state.state) {
    case SINGLE_TAP: register_code(KC_LSFT); register_code(KC_4); break;
//    case SINGLE_HOLD: unicode_input_start(); register_hex(0xE2); register_hex(0x82); register_hex(0xAC); unicode_input_finish(); break;
//    case SINGLE_HOLD: send_unicode_hex_string("20AC"); break;
    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;
  }
}

void DO_EUR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DO_EURtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_4); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case SINGLE_HOLD: unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  DO_EURtap_state.state = 0;
}

//instanalize an instance of 'tap' for the 'EXCLAM' tap dance.
static tap EXCLAMtap_state = {
  .is_press_action = true,
  .state = 0
};

void EXCLAM_finished (qk_tap_dance_state_t *state, void *user_data) {
  EXCLAMtap_state.state = cur_dance(state);
  switch (EXCLAMtap_state.state) {
    case SINGLE_TAP: register_code(KC_LSFT); register_code(KC_1); break;
//    case SINGLE_HOLD: unicode_input_start(); register_hex(0xE2); register_hex(0x82); register_hex(0xAC); unicode_input_finish(); break;
//    case SINGLE_HOLD: send_unicode_hex_string("20AC"); break;
    case DOUBLE_TAP:  register_code(KC_LALT); register_code(KC_1); break;
    case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_1); break;
  }
}

void EXCLAM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EXCLAMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_1); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_1); unregister_code(KC_LALT); break;
    case SINGLE_HOLD: unregister_code(KC_1); unregister_code(KC_LALT); break;
  }
  EXCLAMtap_state.state = 0;
}

//instanalize an instance of 'tap' for the 'QUESTI' tap dance.
static tap QUESTItap_state = {
  .is_press_action = true,
  .state = 0
};

void QUESTI_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUESTItap_state.state = cur_dance(state);
  switch (QUESTItap_state.state) {
    case SINGLE_TAP: register_code(KC_LSFT); register_code(KC_SLSH); break;
//    case SINGLE_HOLD: unicode_input_start(); register_hex(0xE2); register_hex(0x82); register_hex(0xAC); unicode_input_finish(); break;
//    case SINGLE_HOLD: send_unicode_hex_string("20AC"); break;
    case DOUBLE_TAP:  register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;
  }
}

void QUESTI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUESTItap_state.state) {
    case SINGLE_TAP: unregister_code(KC_SLSH); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
    case SINGLE_HOLD: unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  QUESTItap_state.state = 0;
}


//QUOTES, DO_EUR, BSL_CI







///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION END /////

//Tap Dance Definitions
//THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION
qk_tap_dance_action_t tap_dance_actions[] = {
// [A_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// Other declarations would go here, separated by commas, if you have them
/*  [Q__TAB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q__TAB_finished, Q__TAB_reset)
 ,[A_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, A_CAPS_finished, A_CAPS_reset)   // LALT(KC_E),
 ,[R_AP_R] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, R_AP_R_finished, R_AP_R_reset, 300)
//
// accents
 ,[J_ACUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, J_ACUT_finished, J_ACUT_reset)
 ,[N_TILD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_TILD_finished, N_TILD_reset)
 ,[U_DIAE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_DIAE_finished, U_DIAE_reset)
 ,[F_GRAV] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, F_GRAV_finished, F_GRAV_reset)
 ,[I_CIRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, I_CIRC_finished, I_CIRC_reset)
 ,[BSL_CI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BSL_CI_finished, BSL_CI_reset)
 ,[QUOT_D] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_D_finished, QUOT_D_reset)
 ,*/
 [DO_EUR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DO_EUR_finished, DO_EUR_reset)
 ,[EXCLAM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, EXCLAM_finished, EXCLAM_reset)
 ,[QUESTI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUESTI_finished, QUESTI_reset)
/* ,[DOUB_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DOUB_0_finished, DOUB_0_reset)
 ,[TRIP_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TRIP_0_finished, TRIP_0_reset)
 ,[BL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BL_finished, BL_reset)
*/
// ,[TD_Q_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC)
// ,[Q__TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_TAB)
// ,[ENT_TAP_DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ENT_finished, ENT_reset)
// ,[DEL_TAP_DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DEL_finished, DEL_reset)
};

//In Layer declaration, add tap dance item in place of a key code
//TD(A_CAPS)

///////////// TAP DANCE SECTION END ///////////////






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_3x10(
    FN1_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ESC,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    KC_ENT
  ),

  [1] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, TD(DO_EUR), _______, _______, _______, _______, _______, BL_INC,
    TD(EXCLAM), TD(QUESTI), _______, _______, _______, _______, RESET,   _______, _______, BL_DEC
  ),

};





// FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF

/*
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_FUNCTION(0),  // Calls action_function()
};







void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case 0:
      UC(EURO);
      break;
  }
}

// FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF



*/




const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
    (void)event;

  switch (id) {

  }
  return MACRO_NONE;
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

  if (usb_led & (1 << USB_LED_NUM_LOCK)) {
    DDRD |= (1 << 5); PORTD &= ~(1 << 5);
  } else {
    DDRD &= ~(1 << 5); PORTD &= ~(1 << 5);
  }

  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    DDRB |= (1 << 0); PORTB &= ~(1 << 0);
  } else {
    DDRB &= ~(1 << 0); PORTB &= ~(1 << 0);
  }

  if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_COMPOSE)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_KANA)) {

  } else {

  }

}
