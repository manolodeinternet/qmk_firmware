/*                                                                                      */
/* [tapdance] kc_b  -  kc_pdot, [nmbr]off  -  kc_b                                      */
/*                                                                                      */
// ************************************************************************************ //



/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*        [TAPDANCE] SLNMBR into [NMBR] :   SLASH,  N U M B E R S   L A Y E R   O F F  */
/*                                                                                     */
/*  KC_N:   KC_KP_SLASH,  [NMBR]OFF                                                    */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'D' tap dance.
static tap SLNMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void SLNMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLNMBRtap_state.state = cur_dance(state);
  switch (SLNMBRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_PSLS); break;

    case DOUBLE_HOLD: if (backlight_caps)
                      {
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                      }
                      else
                      {
                        breathing_period_set(BR_DFLT);
                        breathing_disable();
                      }
                      layer_clear();
                      break;      
/*
    case DOUBLE_HOLD:    // SET [NMBR] OFF
                         // layer_clear();
                            layer_off(NMBR);
                            breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                            breathing_enable();

                            if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                            {
                              breathing_period_set(BR_DFLT);
                              breathing_disable();
                            };
                            break;*/
  }
}

void SLNMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNMBRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PSLS); break;
  }
  SLNMBRtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_n  -  kc_pslash, [nmbr]off  -  kc_n                                    */
/*                                                                                      */
// ************************************************************************************ //
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R  - ( N U M B E R S     L A Y E R ) -  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_Z into [PVIM]:   SVIM   /   XVIM                     */
/*                                                                                      */
/*  KC_Z:  SVIM / XVIM                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'SX_VIM' tap dance.
static tap SX_VIMtap_state = {
  .is_press_action = true,
  .state = 0
};
void SX_VIM_finished(qk_tap_dance_state_t* state, void* user_data) {
    SX_VIMtap_state.state = cur_dance(state);

    switch (SX_VIMtap_state.state) {
        case SINGLE_HOLD:  layer_on(SVIM);  break;
        case DOUBLE_HOLD:  layer_on(XVIM);  break;
    }
}

void SX_VIM_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (SX_VIMtap_state.state) {
        case SINGLE_HOLD:  layer_off(SVIM); break;
        case DOUBLE_HOLD:  layer_off(XVIM); break;
    }
    SX_VIMtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_z  -  svim / xvim                                                      */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_X into [PVIM]:   DVIM   /   AVIM                     */
/*                                                                                      */
/*  KC_X:  DVIM / AVIM                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'DA_VIM' tap dance.
static tap DA_VIMtap_state = {
  .is_press_action = true,
  .state = 0
};
void DA_VIM_finished(qk_tap_dance_state_t* state, void* user_data) {
    DA_VIMtap_state.state = cur_dance(state);

    switch (DA_VIMtap_state.state) {
        case SINGLE_HOLD:  layer_on(DVIM);  break;
        case DOUBLE_HOLD:  layer_on(AVIM);  break;
    }
}

void DA_VIM_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (DA_VIMtap_state.state) {
        case SINGLE_HOLD:  layer_off(DVIM); break;
        case DOUBLE_HOLD:  layer_off(AVIM); break;
    }
    DA_VIMtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_x  -  dvim / avim                                                      */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_C into [PVIM]:   MOUS   /   ZVIM                     */
/*                                                                                      */
/*  KC_C:  MOUS / ZVIM                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'MOU_ZV' tap dance.
static tap MOU_ZVtap_state = {
  .is_press_action = true,
  .state = 0
};
void MOU_ZV_finished(qk_tap_dance_state_t* state, void* user_data) {
    MOU_ZVtap_state.state = cur_dance(state);

    switch (MOU_ZVtap_state.state) {
        case SINGLE_HOLD:  layer_on(MOUS);  break;
        case DOUBLE_HOLD:  layer_on(ZVIM);  break;
    }
}

void MOU_ZV_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (MOU_ZVtap_state.state) {
        case SINGLE_HOLD:  layer_off(MOUS); break;
        case DOUBLE_HOLD:  layer_off(ZVIM); break;
    }
    MOU_ZVtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_c  -  mous / zvim                                                      */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_U [ PVIM ]  -  B E G I N N I N G   O F   L I N E  /  P A R A G R A P H */
/*                                                                                      */
/*  KC_U:   B E G I N N I N G   O F    L I N E  /  P A R A G R A P H                    */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'PVIM_uU' tap dance.
static tap PVIM_uUtap_state = {
  .is_press_action = true,
  .state = 0
};

void PVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  PVIM_uUtap_state.state = cur_dance(state);
  switch (PVIM_uUtap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_UP);
                          unregister_code(KC_UP);   unregister_code(KC_LALT); break;
  }
  PVIM_uUtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_u  [ pvim ]  -  beginning of line  /  paragraph                        */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_P [ PVIM ]    -    E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
/*  KC_P:   E N D   O F   L I N E  /  P A R A G R A P H                                 */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'PVIM_pP' tap dance.
static tap PVIM_pPtap_state = {
  .is_press_action = true,
  .state = 0
};

void PVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  PVIM_pPtap_state.state = cur_dance(state);
  switch (PVIM_pPtap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_DOWN);
                          unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
  }
  PVIM_pPtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_p  [ pvim ]  -  end of line  /  paragraph                              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                           D E L E T E     T O                                        */
/* [TAPDANCE] KC_U [ DVIM ]  -  B E G I N N I N G   O F   L I N E  /  P A R A G R A P H */
/*                                                                                      */
/*  KC_U:  D E L E T E   T O   B E G I N N I N G   O F    L I N E  /  P A R A G R A P H */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_uU' tap dance.
static tap DVIM_uUtap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_uUtap_state.state = cur_dance(state);
  switch (DVIM_uUtap_state.state) {
    case SINGLE_TAP:        dvim("u"); break;
    case DOUBLE_TAP:        dvim("U"); break;
  }
  DVIM_uUtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_u  [ dvim ]  -  delete to beginning of line  /  paragraph              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                             D E L E T E      T O                                     */
/* [TAPDANCE] KC_P [ DVIM ]    -    E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
/*  KC_P:   D E L E T E     T O     E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_pP' tap dance.
static tap DVIM_pPtap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_pPtap_state.state = cur_dance(state);
  switch (DVIM_pPtap_state.state) {
    case SINGLE_TAP:        dvim("p"); break;
    case DOUBLE_TAP:        dvim("P"); break;
  }
  DVIM_pPtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_p  [ dvim ]  -  delete to end of line  /  paragraph                    */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                           S E L E C T     T O                                        */
/* [TAPDANCE] KC_U [ SVIM ]  -  B E G I N N I N G   O F   L I N E  /  P A R A G R A P H */
/*                                                                                      */
/*  KC_U:  S E L E C T   T O   B E G I N N I N G   O F    L I N E  /  P A R A G R A P H */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SVIM_uU' tap dance.
static tap SVIM_uUtap_state = {
  .is_press_action = true,
  .state = 0
};

void SVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  SVIM_uUtap_state.state = cur_dance(state);
  switch (SVIM_uUtap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);   register_code(KC_LGUI);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI); unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);  register_code(KC_LALT);   register_code(KC_UP);
                         unregister_code(KC_UP); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                            break;
  }
  SVIM_uUtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_u  [ svim ]  -  select to beginning of line  /  paragraph              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
/*                           S E L E C T     T O                                        */
/* [TAPDANCE] KC_P [ SVIM ]    -    E N D   O F   L I N E  /  P A R A G R A P H         */
/*                                                                                      */
/*  KC_P:  S E L E C T   T O   E N D   O F   L I N E  /  P A R A G R A P H              */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SVIM_pP' tap dance.
static tap SVIM_pPtap_state = {
  .is_press_action = true,
  .state = 0
};

void SVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  SVIM_pPtap_state.state = cur_dance(state);
  switch (SVIM_pPtap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);   register_code(KC_LGUI);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);   register_code(KC_LALT);   register_code(KC_DOWN);
                          unregister_code(KC_DOWN); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                            break;
  }
  SVIM_pPtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_p  [ svim ]  -  select to end of line  /  paragraph                    */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//               T A P   D A N C E   F O R  -  V   I   M  -  L A Y E R S                //
//////////////////////////////////////////////////////////////////////////////////////////













// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R   - S U P E R U S E R     L A Y E R ) -   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】

// 『🔵』『🔵』『🔵』   reset(SUSR)     -   R E S E T (HRESET) -   reset(SUSR)  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'HRESET' tap dance.
static tap HRESETtap_state = {
  .is_press_action = true,
  .state = 0
};

void HRESET_finished (qk_tap_dance_state_t *state, void *user_data) {
  HRESETtap_state.state = cur_dance(state);
  switch (HRESETtap_state.state) {

///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀    reset_keyboard();   🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
    case SINGLE_HOLD: // starts backlight triple blink and then reset the keyboard for about 7 seconds
                      reset_my_keyboard_function();
                      break;
  }
}

void HRESET_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (HRESETtap_state.state) {
    case SINGLE_HOLD:        break;
  }
  HRESETtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   reset(SUSR)     -   R E S E T (HRESET) -   reset(SUSR)  【🔴】【🔴】【🔴】

/*

case RESTARTING:
      if (record->event.pressed) {
        register_code(KC_POWER); _delay_ms(500); unregister_code(KC_POWER);
        SEND_STRING("r");
      }
      return false;
      break;

    case SHUT_DOWNING:
      if (record->event.pressed) {
        register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
        register_code(KC_ENT); unregister_code(KC_ENT);
      }
      return false;
      break;


*/


// 『🔵』『🔵』『🔵』   L O G O U T   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'LOGOUT' tap dance.
static tap LOGOUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void LOGOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  LOGOUTtap_state.state = cur_dance(state);
  switch (LOGOUTtap_state.state) {
    case SINGLE_TAP:  
                      break;

                      // (guessed by try and fail method)
                      // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
                      // if we add ALT, we don't have to answer any menu, we logout directly
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_Q);
                      unregister_code(KC_Q); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      break;
  }
}

void LOGOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (LOGOUTtap_state.state) {
    case SINGLE_TAP:  
                     
    case SINGLE_HOLD: break;
  }
  LOGOUTtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   L O G O U T   【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   M E N U   B A R   /   S L E E P   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'SLEP_M' tap dance.
static tap SLEP_Mtap_state = {
  .is_press_action = true,
  .state = 0
};

void SLEP_M_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLEP_Mtap_state.state = cur_dance(state);
  switch (SLEP_Mtap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F2);
                      //_delay_ms(500);
                      break;

                            
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

            /* The KC_EJCT keycode doesn't work with QMK, but with KarabinerElements works vey well*/
                  /*register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_EJCT);*/

////////////////////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                                    */
/*   KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down)    */
/*                                                                                                    */
/*                          register_code(KC_POWER);                                                  */
/*                                                                                                    */
////////////////////////////////////////////////////////////////////////////////////////////////////////
  }
}

void SLEP_M_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLEP_Mtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F2); unregister_code(KC_LCTL); break;
                     
    case SINGLE_HOLD: /* if we unregister_code(KC_POWER) here, at SLEP_M_reset
                         it will appear the POWER dialog box and we have to press the related initial letter
                         or chosing an option with the mouse.

                         unregister_code(KC_POWER);
                      */

                      /*
                      unregister_code(KC_EJCT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      */
                      break;                       
  }
  SLEP_Mtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   M E N U   B A R   /   S L E E P   【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』    D O C K   B A R   /   K I L L   M E N U    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'KILM_D' tap dance.
static tap KILM_Dtap_state = {
  .is_press_action = true,
  .state = 0
};

void KILM_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILM_Dtap_state.state = cur_dance(state);
  switch (KILM_Dtap_state.state) {

    case SINGLE_TAP:  //clear_keyboard();
                      register_code(KC_LCTL);   register_code  (KC_F3);
                      break;
                      // SEND_STRING(SS_LALT(SS_LGUI("d")));
                            
    case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */
  }
}

void KILM_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILM_Dtap_state.state) {

    case SINGLE_TAP:  unregister_code  (KC_F3); unregister_code(KC_LCTL);
                      //unregister_code(KC_D); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      break;
                     
    case SINGLE_HOLD: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); 
                      break;
                            
  }
  KILM_Dtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】    D O C K   B A R   /   K I L L   M E N U    【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』    T O O L S   B A R    /   F O R C E   T O   K I L L   C U R R E N T   A P P    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'KILA_T' tap dance.
static tap KILA_Ttap_state = {
  .is_press_action = true,
  .state = 0
};

void KILA_T_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILA_Ttap_state.state = cur_dance(state);
  switch (KILA_Ttap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F5);
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */


  }
}

void KILA_T_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILA_Ttap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F5); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT); 
                      break;
          
  }
  KILA_Ttap_state.state = 0;
}
// 【🔴】【🔴】【🔴】    T O O L S   B A R    /   F O R C E   T O   K I L L   C U R R E N T   A P P    【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   S T A T U S   B A R    /    S H U T   D O W N    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'SHUT_S' tap dance.
static tap SHUT_Stap_state = {
  .is_press_action = true,
  .state = 0
};

void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data) {
  SHUT_Stap_state.state = cur_dance(state);
  switch (SHUT_Stap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F8);
                      break;
    case SINGLE_HOLD:                        
    case DOUBLE_TAP:  register_code(KC__VOLDOWN); unregister_code(KC__VOLDOWN);
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

                  //  keystrokes for shutting down:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);

                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   

                      break;

                   // Another way for shutting down, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_ENT); unregister_code(KC_ENT);

                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      */
  }
}

void SHUT_S_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SHUT_Stap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F8); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  SHUT_Stap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   S T A T U S   B A R    /    S H U T   D O W N    【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』    F L O A T I N G   W I N D O W   /   R E S T A R T    『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'RSTT_F' tap dance.
static tap RSTT_Ftap_state = {
  .is_press_action = true,
  .state = 0
};

void RSTT_F_finished (qk_tap_dance_state_t *state, void *user_data) {
  RSTT_Ftap_state.state = cur_dance(state);
  switch (RSTT_Ftap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F6);
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  
                  //  keystrokes for restarting:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);
                      
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);

                      break;

                   // Another way for restarting, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_R); unregister_code(KC_R);

                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */

  }
}

void RSTT_F_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RSTT_Ftap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F6); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  RSTT_Ftap_state.state = 0;
}
// 【🔴】【🔴】【🔴】    F L O A T I N G   W I N D O W   /   R E S T A R T    【🔴】【🔴】【🔴】

// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  T A P   D A N C E    F O R   - S U P E R U S E R     L A Y E R ) -   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// END - my own tap_dance harvest
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION END /////

//Tap Dance Definitions
//THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION
qk_tap_dance_action_t tap_dance_actions[] = {
//
// [INFO]
// ACTION_TAP_DANCE_DUAL_ROLE(kc, layer): Sends the kc keycode when tapped once, ...
//   ... or moves to layer. (this is similar to the keycode: 'TO' layer)
// [info]
//
// [A_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// Other declarations would go here, separated by commas, if you have them
//
// LAYERS
  [Q_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q_SUSR_finished, Q_SUSR_reset)
 ,[P_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, P_SUSR_finished, P_SUSR_reset)

// RUNNING APPS
 ,[W_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, W_APPS_finished, W_APPS_reset)
 ,[O_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, O_APPS_finished, O_APPS_reset)
//running apps

// ACTIVATES ACCENTS VARIBLE
 ,[R_AC_RE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, R_AC_RE_finished, R_AC_RE_reset)
 ,[U_ACCE]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_ACCE_finished,  U_ACCE_reset )
// activates accents variable

// ACCENTS & CAPSLOCK
 ,[A_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, A_CAPS_finished, A_CAPS_reset, 160)
 ,[F_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, F_CAPS_finished, F_CAPS_reset)
 ,[J_ACUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, J_ACUT_finished, J_ACUT_reset)  // it includes J->command tap dance funcionality
// accents & capslock

// SPACE / SHIFT
 ,[SP_SHF]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SP_SHF_finished, SP_SHF_reset, 160)
// space / shift

// MOUSE / FUNCTIONS
 ,[MOU_FN] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, MOU_FN_finished, MOU_FN_reset, 250)
 ,[ESC_FN] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, ESC_FN_finished, ESC_FN_reset, 250)
// mouse / functions
 ,[G_SYMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, G_SYMB_finished, G_SYMB_reset)
 ,[H_SYMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, H_SYMB_finished, H_SYMB_reset)

// ACCESSING NUMBERS
 ,[B_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, B_NMBR_finished, B_NMBR_reset)
 ,[N_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_NMBR_finished, N_NMBR_reset)
// accessing numbers

// VIM LAYERS
// SVIM / XVIM
 ,[SX_VIM]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, SX_VIM_finished, SX_VIM_reset, 250)
// DVIM / AVIM
 ,[DA_VIM]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, DA_VIM_finished, DA_VIM_reset, 250)
// MOUS / ZVIM
 ,[MOU_ZV]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, MOU_ZV_finished, MOU_ZV_reset, 250)
// vim layers

// SYMBOLS (TWO IN A KEY)
 ,[BSL_CI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BSL_CI_finished, BSL_CI_reset)
 ,[QUOT_D] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_D_finished, QUOT_D_reset)
 ,[DO_EUR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DO_EUR_finished, DO_EUR_reset)
 ,[EXCLAM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, EXCLAM_finished, EXCLAM_reset)
 ,[QUESTI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUESTI_finished, QUESTI_reset)
// symbols (two in a key)

// NUMPAD
 ,[TRIP_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TRIP_0_finished, TRIP_0_reset)
 ,[DOUB_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DOUB_0_finished, DOUB_0_reset)
 
 ,[SLNMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNMBR_finished, SLNMBR_reset)
 ,[DONMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DONMBR_finished, DONMBR_reset)
//numpad

//SUSR
 ,[LOGOUT]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, LOGOUT_finished, LOGOUT_reset)
 ,[HRESET]  = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, HRESET_finished, HRESET_reset, 1000)
 ,[SLEP_M]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLEP_M_finished, SLEP_M_reset)
 ,[KILM_D]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILM_D_finished, KILM_D_reset)
 ,[KILA_T]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, KILA_T_finished, KILA_T_reset)
 ,[SHUT_S]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SHUT_S_finished, SHUT_S_reset)
 ,[RSTT_F]  = ACTION_TAP_DANCE_FN_ADVANCED(NULL, RSTT_F_finished, RSTT_F_reset)
 //susr 

// PVIM
 ,[PVIM_uU] = ACTION_TAP_DANCE_FN(PVIM_uU_function)
 ,[PVIM_pP] = ACTION_TAP_DANCE_FN(PVIM_pP_function)
// pvim

// DVIM
 ,[DVIM_uU] = ACTION_TAP_DANCE_FN(DVIM_uU_function)
 ,[DVIM_pP] = ACTION_TAP_DANCE_FN(DVIM_pP_function)
// dvim

// SVIM
 ,[SVIM_uU] = ACTION_TAP_DANCE_FN(SVIM_uU_function)
 ,[SVIM_pP] = ACTION_TAP_DANCE_FN(SVIM_pP_function)
// svim

};

////////////////////////////////////////////////////////////////////////////////////////////////////////

void matrix_init_user(void) {

  breathing_disable();

  //backlight_level(BL_GHKN);

  // set_unicode_input_mode(UC_OSX); // REPLACE UC_XXXX with UC_OSX - the Unicode Input Mode for your OS. See table below.
} // end of matrix_init_user
////////////////////////////////////////////////////////////////////////////////////////////////////////

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Keymap GHKN 0: gherkin default layer
  * ,--------------------------------------------. ,--------------------------------------------.
  * |@@ Tab  |        |        |        |        | |        |        |        |        |        |
  * |    Q   |    W   |    E   |    R   |   T    | |    Y   |    U   |    I   |    O   |    P   |
  * |**[BLIT]|**[MAPS]|        |  5* RST|        | |        |        |        |**[MAPS]|**[BLIT]|
  * | *[SUSR]| *[APPS]|        |1.4* ACC| [TEST] | |        |1.4* ACC|        | *[APPS]| *[SUSR]|
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |@@ Caps |        |        |@@ Caps |        | |        |        |        |        |        |
  * |    A   |    S   |    D   |    F   |    G   | |    H   |    J   |    K   |    L   |  Space |
  * |        |        |        |        |        | |        |@@ Acute|        |        |        |
  * |  LSft  |  LCtl  |  LAlt  |  LGui  | [SYMB] | | [SYMB] |  LGui  |  LAlt  |  LCtl  |  LSft  |
  * |--------+--------+--------+--------+--------| |--------+--------+--------+--------+--------|
  * |        |        |        |        |        | |        |        |        |        |        |
  * |    Z   |    X   |    C   |    V   |    B   | |    N   |    M   | Escape |Bckspace|  Enter |
  * |        |        |**[FNCT]|        |##[NMBR]| |##[NMBR]|        |**[FNCT]|        |        |
  * |[L_XTND]| [DVIM] | *[MOUS]| [PVIM] | *[NMBR]| | *[NMBR]| [PVIM] | *[FNCT]| [DVIM] |[R_XTND]|
  * '--------------------------------------------' '--------------------------------------------'
  *  LEGENDS for all KEYMAPS:
  *   * access a layer  through one    tap    
  *  ** access a layer  through double tap
  *  ## SET    a layer  through double tap
  *  @@ get a keystroke through double tap
  */
[GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default layer
// [info] LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-----------------+---------------+-------------+---------------+----------------++---------------+---------------+-------------+------------------+-------------------.
          TD(Q_SUSR),     TD(W_APPS),   F(E_VOWEL),    TD(R_AC_RE), LT(TEST, KC_T),   LT(BLIT, KC_Y),     TD(U_ACCE),   F(I_VOWEL),        TD(O_APPS),        TD(P_SUSR), \
//|-----------------|---------------|-------------+---------------+----------------||---------------|---------------+-------------+------------------+-------------------|
          TD(A_CAPS),   LCTL_T(KC_S), LALT_T(KC_D),     TD(F_CAPS),     TD(G_SYMB),       TD(H_SYMB),     TD(J_ACUT), LALT_T(KC_K),      LCTL_T(KC_L),        TD(SP_SHF), \
//|-----------------|---------------|-------------+---------------+----------------||---------------|---------------+-------------+------------------+-------------------|
    LT(L_XTND, KC_Z), LT(DVIM, KC_X),   TD(MOU_FN), LT(PVIM, KC_V),     TD(B_NMBR),       TD(N_NMBR), LT(PVIM, KC_M),   TD(ESC_FN), LT(DVIM, KC_BSPC), LT(R_XTND, KC_ENT) ),
//|-----------------+---------------+-------------+---------------+----------------++---------------+---------------+-------------+------------------+-------------------.
// END OF GHKN 0
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap NMBR 1: numbers layer
* ,----------------------------------.,----------------------------------.
* |      |      |      |      |      ||      |      |      |      |      |
* |   1  |   2  |   3  |   4  |   5  ||   6  |   7  |   8  |   9  |   0  |
* |      |      |      |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* | SPACE|DELETE|      |   =  | $ / €||   -  |   4  |   5  |   6  |   +  |
* |  000 |  00  |   0  |      |      ||      |      |      |      |      |
* |------+------+------+------+------||------+------+------+------+------|
* |      |      |      |      |      ||      |      |      |      |      |
* | ENTER|BCKSPC|  TAB |   ,  |   .  ||   /  |   1  |   2  |   3  |   *  |
* |      |      |      |      |      ||      |      |      |      |      |
* `----------------------------------'`----------------------------------'
*/
[NMBR] = LAYOUT_ortho_3x10(  // layer 1 : numbers layer
  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,-----------+------------+-------+--------+------------++-----------+------+------+------+---------.
           KC_P1,       KC_P2,  KC_P3,   KC_P4,      KC_P5,        KC_P6, KC_P7, KC_P8, KC_P9,   KC_P0,
  //|-----------|------------|-------+--------+------------||-----------|------+------+------+---------|
      TD(TRIP_0),  TD(DOUB_0),  KC_P0, KC_PEQL, TD(DO_EUR),      KC_PMNS, KC_P4, KC_P5, KC_P6, KC_PPLS,
  //|-----------|------------|-------+--------+------------||-----------|------+------+------+---------|
         KC_PENT,     KC_BSPC, KC_TAB, KC_COMM, TD(DONMBR),   TD(SLNMBR), KC_P1, KC_P2, KC_P3, KC_PAST ),
  //,-----------+------------+-------+--------+------------++-----------+------+------+------+---------.
  // END OF NMBR 1
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap SYMB 2: symbols Layer
 * ,----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      |      |
 * |   `  |   ~  |   =  |   _  |   %  || \  ^ |   (  |   )  |   *  |   /  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | '  " |   @  |   +  |   -  | $   €||   |  |   {  |   }  |   :  |   ;  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | !  ¡ | ?  ¿ |   <  |   >  |   #  ||   &  |   [  |   ]  |   ,  |   .  |
 * |      |      |      |      |      ||      |      |      |      |      |
 * `----------------------------------'`----------------------------------'
*/
// SYMBOLS 
[SYMB] = LAYOUT_ortho_3x10(  // layer 2: symbols layer
//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
         KC_GRV,        KC_TILD,         KC_EQL,        KC_UNDS,          KC_PERC,       TD(BSL_CI),        KC_LPRN,      KC_RPRN,      KC_ASTR,        KC_SLSH,
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(QUOT_D),          KC_AT,        KC_PLUS,        KC_MINS,       TD(DO_EUR),          KC_PIPE,        KC_LCBR,      KC_RCBR,      KC_COLN,        KC_SCLN,
//|------------|---------------|---------------+---------------+------------------||---------------|---------------+-------------+-------------+---------------|
     TD(EXCLAM),     TD(QUESTI),        KC_LABK,        KC_RABK,          KC_HASH,          KC_AMPR,        KC_LBRC,      KC_RBRC,      KC_COMM,         KC_DOT ),
//,------------+---------------+---------------+---------------+------------------++---------------+---------------+-------------+-------------+---------------.
// [info] EURO: http://www.fileformat.info/info/unicode/char/search.htm?q=euro&preview=entity
// END OF SYMB 2
////////////////////////////////////////////////////////////////////////////////////////////////////////



[FNCT] = LAYOUT_ortho_3x10(  // layer 3 : multiple apps layer
// LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
//,-------+-------+-------+-------+--------++----------------+-----------------+-------------------+--------------------+-------------------.
     KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,
//|-------|-------|-------+-------+--------||----------------|-----------------+-------------------+--------------------+-------------------|
    KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20,
//|-------|-------|-------+-------+------------------||----------------|-----------------+-------------------+--------------------+-------------------|
    KC_F21, KC_F22, KC_F23, KC_F24, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ), 
//|-------+-------+-------+-------+------------------++----------------+-----------------+-------------------+--------------------+-------------------.
// END OF FNCT 3
////////////////////////////////////////////////////////////////////////////////////////////////////////



/* Keymap XTND 4 & 5: BOTH LEFT & RIGHT extended gherkin layers // BOTH LEFT & RIGHT 4 & 5

 * ,-----------------------------------.,----------------------------------.
 * |      |      |      |      |      ||      |      |      |      | •Spot|
 * |  Tab | Desk |Windws|Mision|Float.|| Close| Prev | Next |Launch| Light|
 * |      |      | Apps |Contrl|Window||  APP | APP  | APP  |  Pad |••SIRI|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * | Caps |Dictat| EMPTY| Speak|Active|| Close| Prev | Next | Dash | SPACE|
 * |      |      |      |      |Window||Window|Window|Window| Board|      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |APP   |APP   |APP   |APP   |      ||      |      |      |      |      |
 * | OMNI |      |EVER  |      |Reopen|| Close| Prev | Next |DELETE| ENTER|
 * | FOCUS| MAIL | NOTE | NVALT|  tab ||  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/

/* Keymap L_XTND 4: LEFT eXtended default layer
 * ,-----------------------------------.,----------------------------------.
 * |      |      | Vol. | Vol. |      ||      |      |      |      | •Spot|
 * |      | Mute |      |      |      || Close| Prev | Next |Launch| Light|
 * |      |      | Down |  Up  |      ||  APP | APP  | APP  |  Pad |••SIRI|
 * |------+------+------+------+------||------+------+------+------+------|
 * |      |      |      |      |      ||      |      |      |      |      |
 * |      |Rewind|  UP  |Forwrd| Play || Close| Prev | Next | Dash | SPACE|
 * |      |      |      |      |      ||Window|Window|Window| Board|      |
 * |------+------+------+------+------||------+------+------+------+------|
 * |@@@@@@|      |      |      |      ||      |      |      |      |      |
 * |@@@@@@| LEFT | DOWN | RIGHT|Reopen|| Close| Prev | Next |DELETE| ENTER|
 * |@@@@@@|      |      |      |  tab ||  tab | tab  | tab  |      |      |
 * '------+------+------+------+------'`------+------+------+------+------'
*/
[L_XTND] = LAYOUT_ortho_3x10(  // layer 4: LEFT eXtended default layer
//|--------|---------|------------+----------+----------||--------|---------|---------|--------+----------|
    XXXXXXX, KC__MUTE, KC__VOLDOWN, KC__VOLUP,  XXXXXXX,   CLOSE_A, PREV_APP, NEXT_APP, LNCHPAD, SPT_SIRI,
//|--------|---------|------------+----------+----------||--------|---------|---------|--------+----------|
    _______,  KC_MRWD,       KC_UP,   KC_MFFD,  KC_MPLY,   CLOSE_W, PREV_WIN, NEXT_WIN, DASHBRD,   KC_SPC,
//|--------|---------|------------+----------+----------||--------|---------|---------|--------+----------|
    _______,  KC_LEFT,     KC_DOWN,   KC_RGHT, REOPEN_L,   CLOSE_T, PREV_TAB, NEXT_TAB,  KC_DEL,   KC_ENT ), 
//|--------|---------|------------+----------+----------||--------|---------|---------|--------+----------|
// END OF L_XTND 4
////////////////////////////////////////////////////////////////////////////////////////////////////////