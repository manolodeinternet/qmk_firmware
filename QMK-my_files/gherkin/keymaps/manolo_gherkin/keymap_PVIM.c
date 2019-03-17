//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// BOORAR ESTO PARA PREPARARLO PARA ACTION_FUNCTIONS
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     P A R A G R A P H       U P   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'YPVIM' tap dance.
static tap YPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void YPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  YPVIMtap_state.state = cur_dance(state);
  switch (YPVIMtap_state.state) {
    case SINGLE_TAP: // [YPVIM_SHORTCUT] Move paragraph up       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_Y
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_Y); break;
  }
}

void YPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (YPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_Y); break;
  }
  YPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     P A R A G R A P H       U P   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】





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
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
//                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
//                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
//                        register_code(KC_P); unregister_code(KC_P);
//                        register_code(KC_U); break;

    case DOUBLE_TAP: // [UPVIM_SHORTCUT] (ALT + UP) Move to beginning of paragraph  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_U)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
//                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
//                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
//                        register_code(KC_P); unregister_code(KC_P);
//                        register_code(KC_LSFT); register_code(KC_U); break;
  }
}

void UPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (UPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_U); break;
    case DOUBLE_TAP:  unregister_code(KC_U); unregister_code(KC_LSFT); break;
  }
  UPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     T O    B E G I N N I N I N G     O F     W O R D    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'IPVIM' tap dance.
static tap IPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void IPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  IPVIMtap_state.state = cur_dance(state);
  switch (IPVIMtap_state.state) {
    case SINGLE_TAP: // [IPVIM_SHORTCUT] (ALT+LEFT) Move to BEGINNING OF WORD       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_I
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_I); break;
    case DOUBLE_TAP: // [IPVIM_SHORTCUT] (CTL+ALT+LEFT) Move to BEGINNING OF SUBWORD  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_I)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_I); break;
  }
}

void IPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (IPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_I); break;
    case DOUBLE_TAP:  unregister_code(KC_I); unregister_code(KC_LSFT); break;
  }
  IPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     T O    B E G I N N I N I N G     O F     W O R D    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     T O    E N D     O F     W O R D    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'OPVIM' tap dance.
static tap OPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void OPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  OPVIMtap_state.state = cur_dance(state);
  switch (OPVIMtap_state.state) {
    case SINGLE_TAP: // [OPVIM_SHORTCUT] (ALT+RIGHT) Move to END OF WORD       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_O
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_O); break;
    case DOUBLE_TAP: // [OPVIM_SHORTCUT] (CTL+ALT+RIGHT) Move to END OF SUBWORD  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_O)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_O); break;
  }
}

void OPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (OPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_O); break;
    case DOUBLE_TAP:  unregister_code(KC_O); unregister_code(KC_LSFT); break;
  }
  OPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     T O    E N D     O F     W O R D    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'PPVIM' tap dance.
static tap PPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void PPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  PPVIMtap_state.state = cur_dance(state);
  switch (PPVIMtap_state.state) {
    case SINGLE_TAP: // [PVIM_SHORTCUT] (GUI+RIGHT) Move to END OF LINE               LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_P
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_P); break;
    case DOUBLE_TAP: // [PVIM_SHORTCUT] (ALT + DOWN) Move to END OF PARAGRAPH         LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_P)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_P); break;
  }
}

void PPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (PPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_P); break;
    case DOUBLE_TAP:  unregister_code(KC_P); unregister_code(KC_LSFT); break;
  }
  PPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】









//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   CENTER SELECTION IN VISIBLE AREA   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'HPVIM' tap dance.
static tap HPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void HPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  HPVIMtap_state.state = cur_dance(state);
  switch (HPVIMtap_state.state) {
    case SINGLE_TAP: // [HPVIM_SHORTCUT] Move paragraph up       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_Y
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_H); break;
  }
}

void HPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (HPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_H); break;
  }
  HPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    CENTER SELECTION IN VISIBLE AREA   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
// [BOOKMARK]
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
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
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_U); break;
    case DOUBLE_TAP: // [UPVIM_SHORTCUT] (ALT + UP) Move to beginning of paragraph  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_U)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_U); break;
  }
}

void UPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (UPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_U); break;
    case DOUBLE_TAP:  unregister_code(KC_U); unregister_code(KC_LSFT); break;
  }
  UPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     B E G I N     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     T O    B E G I N N I N I N G     O F     W O R D    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'IPVIM' tap dance.
static tap IPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void IPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  IPVIMtap_state.state = cur_dance(state);
  switch (IPVIMtap_state.state) {
    case SINGLE_TAP: // [IPVIM_SHORTCUT] (ALT+LEFT) Move to BEGINNING OF WORD       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_I
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_I); break;
    case DOUBLE_TAP: // [IPVIM_SHORTCUT] (CTL+ALT+LEFT) Move to BEGINNING OF SUBWORD  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_I)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_I); break;
  }
}

void IPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (IPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_I); break;
    case DOUBLE_TAP:  unregister_code(KC_I); unregister_code(KC_LSFT); break;
  }
  IPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     T O    B E G I N N I N I N G     O F     W O R D    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     T O    E N D     O F     W O R D    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'OPVIM' tap dance.
static tap OPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void OPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  OPVIMtap_state.state = cur_dance(state);
  switch (OPVIMtap_state.state) {
    case SINGLE_TAP: // [OPVIM_SHORTCUT] (ALT+RIGHT) Move to END OF WORD       LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_O
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_O); break;
    case DOUBLE_TAP: // [OPVIM_SHORTCUT] (CTL+ALT+RIGHT) Move to END OF SUBWORD  LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_O)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_O); break;
  }
}

void OPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (OPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_O); break;
    case DOUBLE_TAP:  unregister_code(KC_O); unregister_code(KC_LSFT); break;
  }
  OPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     T O    E N D     O F     W O R D    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'PPVIM' tap dance.
static tap PPVIMtap_state = {
  .is_press_action = true,
  .state = 0
};

void PPVIM_finished (qk_tap_dance_state_t *state, void *user_data) {
  PPVIMtap_state.state = cur_dance(state);
  switch (PPVIMtap_state.state) {
    case SINGLE_TAP: // [PVIM_SHORTCUT] (GUI+RIGHT) Move to END OF LINE               LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, KC_P
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_P); break;
    case DOUBLE_TAP: // [PVIM_SHORTCUT] (ALT + DOWN) Move to END OF PARAGRAPH         LSFT(LCTL(LALT(LGUI(KC_V)))), KC_P, LSFT(KC_P)
    /* 🎹 beginning of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM 🎹*/
                        register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_V);
                        unregister_code(KC_V); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
    /* 🎹 end of KEY TRIGGER SHORTCUTS FOR ACCESING MY PERSONAL KEYBINDINGS SYSTEM.  The next keystrokes are for the chosen shortcut 🎹*/
                        register_code(KC_P); unregister_code(KC_P);
                        register_code(KC_LSFT); register_code(KC_P); break;
  }
}

void PPVIM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (PPVIMtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_P); break;
    case DOUBLE_TAP:  unregister_code(KC_P); unregister_code(KC_LSFT); break;
  }
  PPVIMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】    M O V E     E N D     O F     L I N E  &  P A R A G R A P H    【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
