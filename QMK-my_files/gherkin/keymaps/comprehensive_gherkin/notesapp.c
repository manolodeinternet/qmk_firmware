
//#ifndef NOTESAPP_H
//#define NOTESAPP_H
//
/* In general it's good to include also the header of the current .c,
   to avoid repeating the prototypes */
// #include QMK_KEYBOARD_H


// 『🔵』『🔵』『🔵』   N O T E S _ A P P   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'NOTES_APP' tap dance.
// TAP DANCE GENERAL SETUP SECTION END //
static tap NOTES_APPtap_state = {
  .is_press_action = true,
  .state = 0
};


void NOTES_APP_finished (qk_tap_dance_state_t *state, void *user_data) {
  NOTES_APPtap_state.state = cur_dance(state);
  switch (NOTES_APPtap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI); register_code(KC_SPC); unregister_code(KC_SPC); unregister_code(KC_LGUI);
                            SEND_STRING("Notes.app");
                            register_code(KC_ENT); unregister_code(KC_ENT);
                            break;

    case SINGLE_HOLD:       register_code(KC_LGUI); register_code(KC_SPC); unregister_code(KC_SPC); unregister_code(KC_LGUI);
                            SEND_STRING("Notes.app");
                            register_code(KC_ENT); unregister_code(KC_ENT);

                            _delay_ms(1000);

                            register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_H);
                            unregister_code(KC_H); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                            break;
  }
}

void NOTES_APP_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (NOTES_APPtap_state.state) {
    case SINGLE_TAP:        break;
    case SINGLE_HOLD:       break;
  }
  NOTES_APPtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   N O T E S _ A P P   【🔴】【🔴】【🔴】

//#endif  /* NOTESAPP_H */
///////////// TAP DANCE SECTION END ///////////////
