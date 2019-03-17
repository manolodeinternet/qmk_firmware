#include QMK_KEYBOARD_H

#define ___ KC_TRNS
#define FN1_Q LT(1, KC_Q)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_3x10(
    FN1_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U,   KC_I,    KC_O,   KC_P,
     KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J,   KC_K,    KC_L, KC_SPC,
     KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_ESC, KC_BSPC, KC_ENT
  ),

  [1] = LAYOUT_ortho_3x10(
    ___, ___, ___, ___, ___, ___,   ___, ___, ___,    ___,
    ___, ___, ___, ___, ___, ___,   ___, ___, ___, BL_INC,
    ___, ___, ___, ___, ___, ___, RESET, ___, ___, BL_DEC
  )
};






const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
    (void)event;

  switch (id) {

  }
  return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
