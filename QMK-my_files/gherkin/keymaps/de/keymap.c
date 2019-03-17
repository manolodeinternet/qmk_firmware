#include QMK_KEYBOARD_H

#define _______ KC_TRNS
//#define LAYER_0 0
//#define LAYER_1 1
#define FN1_Q LT(_LAYER_1, KC_Q)

// Levels of backlight BL_XXXX
#define BL_OFF  0
#define BL_MIN  1
#define BL_MAX 15
#define BL_0    0
#define BL_1   12
// End of levels of backlight

// Functions Declarations
enum function_id {
  PVIM_Y,
  PVIM_U,
  PVIM_SHIFTED_U
};

/*
enum safety {
  FIRST_RANGE = 0
};
*/

//Enums used to clearly convey the state of the tap dance
//enum tap_dance_states {
enum {
 SINGLE_TAP = 1,
 SINGLE_HOLD = 2,
 DOUBLE_TAP = 3,
 DOUBLE_HOLD = 4,
 DOUBLE_SINGLE_TAP = 5, //send SINGLE_TAP twice - NOT DOUBLE_TAP
 // Add more enums here if you want for triple, quadruple, etc.
};

//Tap Dance Declarations
//enum custom_tap_dance {
enum {
  EXCLAM = 6,
  UPVIM = 7,
};

//Friendly Layer Names
enum gherkin_layers {
  _LAYER_0,
  _LAYER_1
};

                             // Macro Declarations
// custom keycodes
enum gherkin_keycodes {
                             // enum my_Macros {
    OLD_M1,
    OLD_M2,
    OLD_M3,

    YOUR_NEW_MACRO_1 = SAFE_RANGE, // SAFE_RANGE is for new macros, not for old ones (for old ones, just enum them as it appears just above)
    YOUR_NEW_MACRO_2,
    YOUR_NEW_MACRO_3,

    YOUR_MODERN_MACRO_3,
    YOUR_MODERN_MACRO_4
    // ..., the rest of your macros
};
// Macro Definitions

// BEGINNING OF OLD MACRO WAY
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch(id) {
      case OLD_M1: //Hi!
        if (record->event.pressed) {
          // for basic strings
          return MACRO(D(LSFT), T(H), U(LSFT), T(I), D(LSFT), T(1), U(LSFT), END);
          // for more complex macros (want to add modifiers, etc.)
        }
        break;
      case OLD_M2: //Bye!
        if (record->event.pressed) {
          return MACRO(D(LSFT), T(A), U(LSFT), T(Y), T(E), D(LSFT), T(1), U(LSFT), END);
        }
        break;
      case OLD_M3:  //PVIM_U
        if (record->event.pressed) {
          return MACRO(D(LSFT), D(LCTL), D(LALT), D(LGUI),
                       T(V),
                       U(LGUI), U(LALT), U(LCTL), U(LSFT),
                       T(P),
                       T(U),
                       END);
        }
        break;
    }
    return MACRO_NONE;
}

// END OF OLD MACRO WAY



// BEGINNING OF NEW MACROS WAY
//
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case YOUR_NEW_MACRO_1:  //YOUR_STRING_HERE
      if (record->event.pressed) {
        SEND_STRING("YOUR_STRING_HERE"); // REPLACE with what you want your macro to be
      }
      return false;
      break;
    case YOUR_NEW_MACRO_2:  //z
      if (record->event.pressed) {
        register_code(KC_Z); unregister_code(KC_Z);
        register_code(KC_NO); unregister_code(KC_NO);
        // INSERT CODE HERE for your macro. See https://docs.qmk.fm/macros.html
      }
      return false;
      break;
    case YOUR_NEW_MACRO_3:  //PVIM_U
      if (record->event.pressed) {
        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
        register_code(KC_V); unregister_code(KC_V);
        unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
        register_code(KC_P); unregister_code(KC_P);
        register_code(KC_U); unregister_code(KC_U);
      }
      return false;
      break;
    case YOUR_MODERN_MACRO_3:  //PVIM_U
      if (record->event.pressed) {
        //SEND_STRING(SS_LSFT(SS_LCTRL("a")));
        SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
        SEND_STRING("pu");
      }
      return false;
      break;
    case YOUR_MODERN_MACRO_4:  //Select to the beginning of line.
      if (record->event.pressed) {
        SEND_STRING(SS_LCTRL("e")"- - -");
        SEND_STRING(SS_LSFT(SS_LCTRL("a")));
      }
      return false;
      break;
  }

  return true;
}
// END OF NEW MACROS WAY

///// QUAD FUNCTION TAP DANCE GENERAL SETUP SECTION START /////
///// (no need to edit this section) /////
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
  else return 6; //magic number. At some point this method will expand to work for more presses
};
///// QUAD FUNCTION TAP DANCE GENERAL SETUP SECTION END /////
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
};
void EXCLAM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EXCLAMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_1); unregister_code(KC_LSFT); break;
    case DOUBLE_TAP:  unregister_code(KC_1); unregister_code(KC_LALT); break;
    case SINGLE_HOLD: unregister_code(KC_1); unregister_code(KC_LALT); break;
  }
  EXCLAMtap_state.state = 0;
};
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'UPVIM' tap dance.
static tap UPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void UPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  UPVIMtap_state.state = cur_dance(state);
  switch (UPVIMtap_state.state) {
    case SINGLE_TAP: // [uPVIM_SHORTCUT] (GUI+LEFT) Move to beginning of line      LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_U
                     SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v") ) ) ) );
                     SEND_STRING("p");
                     SEND_STRING(SS_DOWN(X_U));
                     break;

    case DOUBLE_TAP: // [UPVIM_SHORTCUT] (ALT + UP) Move to beginning of paragraph  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_U)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
//                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
//                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
//                        register_code(KC_P); unregister_code(KC_P);
//                        register_code(KC_LSFT); register_code(KC_U); break;
    // F(PVIM_SHIFTED_U); break;
    SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v") ) ) ) );
    SEND_STRING("p");
    SEND_STRING(SS_DOWN(X_LSHIFT)); SEND_STRING(SS_DOWN(X_U));
    break;

  }
};

void UPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (UPVIMtap_state.state) {
    case SINGLE_TAP:        SEND_STRING(SS_UP(X_U)); break;
    case DOUBLE_TAP:        SEND_STRING(SS_UP(X_U)); SEND_STRING(SS_UP(X_LSHIFT)); break;
  }
  UPVIMtap_state.state = 0;
};
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

qk_tap_dance_action_t tap_dance_actions[] = {
  [EXCLAM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, EXCLAM_finished, EXCLAM_reset)
 ,[UPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, UPVIM_finished, UPVIM_reset)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_LAYER_0] = LAYOUT_ortho_3x10(
    FN1_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_ESC,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M, KC_ENT
  ),

  [_LAYER_1] = LAYOUT_ortho_3x10(
      _______,        M(OLD_M1),        M(OLD_M2),           M(OLD_M3),          TD(EXCLAM), TD(UPVIM), _______, _______, BL_BRTG,  BL_OFF,
      _______, YOUR_NEW_MACRO_1, YOUR_NEW_MACRO_2,    YOUR_NEW_MACRO_3,             KC_FN31,   ACTION_FUNCTION_TAP(PVIM_Y), _______, _______, _______,  BL_INC,
       KC_FN0,           KC_FN1,   KC_FN2, YOUR_MODERN_MACRO_3, YOUR_MODERN_MACRO_4,   _______,   RESET, _______, _______,  BL_DEC
  ),

};


const uint16_t PROGMEM fn_actions[] = {
  ACTION_FUNCTION(PVIM_Y),      //
  ACTION_FUNCTION(PVIM_U),   //
  ACTION_FUNCTION(PVIM_SHIFTED_U),
};

void function_1(keyrecord_t *record, uint8_t id, uint8_t opt) {
  if (record->event.pressed) {
    register_code(KC_P);
  } else {
    unregister_code(KC_P);
  }
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case PVIM_Y:
      if (record->event.pressed) {
//        SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v") ) ) ) );
//        SEND_STRING("p");
//        SEND_STRING(SS_DOWN(X_Y));
register_code(KC_P);
//send_keyboard_report();
      } else {
        /* The key is being released.
         */
//        SEND_STRING(SS_UP(X_Y));
unregister_code(KC_P);
//send_keyboard_report();
      }
      break;
    case PVIM_U:
      if (record->event.pressed) {
        SEND_STRING("t");
//        SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v") ) ) ) );
//        SEND_STRING("p");
//        SEND_STRING(SS_DOWN(X_U));
      } else {
//        SEND_STRING(SS_UP(X_U));
      }
      break;
    case PVIM_SHIFTED_U:
      if (record->event.pressed) {
        add_key(KC_W);
        send_keyboard_report();
//        SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v") ) ) ) );
//        SEND_STRING("p");
//        SEND_STRING(SS_DOWN(X_LSHIFT)); SEND_STRING(SS_DOWN(X_U));
      } else {
        del_key(KC_W);
        send_keyboard_report();
//        SEND_STRING(SS_UP(X_LSHIFT)); SEND_STRING(SS_UP(X_U));
      }
      break;
  }
}


/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
    (void)event;

  switch (id) {

  }
  return MACRO_NONE;
}
*/



uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case _LAYER_0:
        backlight_level(BL_0);
        break;
    case _LAYER_1:
        backlight_level(BL_1);
        break;
    default: //  for any other layers, or the default layer
        backlight_level(BL_MIN);
        break;
    }
  return state;
}


void matrix_init_user(void) {
};

void matrix_scan_user(void) {
};

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
*/
// UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;L!!!¡hgJA ;JLPQWERP OIUQO POIUEWRRUQP PIORQRQP POIURQOIERU POIUQOUPO POIUOURQWERQ POIUP Q UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO POIUEWRRUQP PIORQRQP POIURQOIERU POIUQOUPO POIUOURQWERQ POIUP Q UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO POIUEWRRUQP PIORQRQP POIURQOIERU POIUQOUPO POIUOURQWERQ POIUP Q UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO POIUEWRRUQP PIORQRQP POIURQOIERU POIUQOUPO camaseIsANiceKindOfWordsShoping POIUOURQWERQ POIUPuÅÅ Q UFFppFYOUR_Hi!Bye!!¡YOUR_STRING_HEREzghSTRING_HE]REzFFKJAFHi!Hi!Bye!pBye!Hi!Bye!!¡LKJ ;LK!¡J;LqHi!Bye!!YO]UR_STRING_HEREzJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OcbncqcIUQO POIUEWRRUQP PIORQRQP POIURQOIERU POIUQOUPO POIUOURQWERQ POIUP Q UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO POIUEWRRUQP PIORQRQP POIURQOIERU POIUQOUPO POIUOURQWERQ POIUP Q UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO POIUEpppWRRUQP PIORQRQP POIURQOIERU POIUQO UPO POIUOURQopWERQ POIUP Q UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO POIUEWRRUQP PIORQRQP POIURQOIERU POIUQOUPO POIUOURQWERQ POIUP Q UFFFFFKJAFLKJ ;LKJ;LJA LKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO PKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO PKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO PKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO PKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO PKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO PKJFASLDFJA LKJFALJ ;LJ;LJA ;JLPQWERP OIUQO POI- - -- - -- - -




