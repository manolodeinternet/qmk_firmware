};

void P_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  P_SUSRtap_state.state = cur_dance(state);
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_P);  break;

    case SINGLE_HOLD:       layer_on(SUSR);       break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_P); unregister_code(KC_P);
                            register_code(KC_P);  break;

    case DOUBLE_HOLD:       layer_on(BLIT);          break;
  }
}

void P_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:        
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_P);  break;

    case SINGLE_HOLD:       layer_off(SUSR);        break;
    case DOUBLE_HOLD:       layer_off(BLIT);          break;
  }
  P_SUSRtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] p _ s u p e r u s e r                                                     */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_A  -  C A P S L O C K  -  KC_A                                         */
/*                                                                                      */
/*  KC_A:  aA  -  áÁ  -  LSHIFT  -  C A P S L O C K                                     */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'A_CAPS' tap dance.
static tap A_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void A_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {    
    A_CAPStap_state.state = cur_dance(state);
   // shift_flag = get_mods()&LSHIFT_MODS;  // ✳️ shift_flag is moved at the very beginning of (action_function)

  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:        // SEND_STRING("\ncalling action_function with: NULL, A_VOWEL, A_VOWEL\n");
                            action_function(NULL, A_VOWEL, A_VOWEL);
                            break;
    case SINGLE_HOLD:       left_shift_pressed = true;
                            register_code(KC_LSFT); 
                            break;
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A);
                            break;

 // MY CAPSLOCK FINISHED FUNCTION (the function defined above)                           
    case DOUBLE_HOLD:       press_capslock();  
                            break;
/*    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A);
                            break;
*/                            
  }
}

void A_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:        // SEND_STRING("CALLED action_function\n");
                            break;
    case SINGLE_HOLD:       left_shift_pressed = false;
                            if (!right_shift_pressed) 
                            {
                                unregister_code(KC_LSFT); break;
                            }
    case DOUBLE_TAP:        unregister_code(KC_A);    break;

 // MY CAPSLOCK RESET FUNCTION (the function defined above)
    case DOUBLE_HOLD:       release_capslock();       break;

    case DOUBLE_SINGLE_TAP: unregister_code(KC_A);    break;
/*
    case TRIPLE_TAP:        
    case TRIPLE_SINGLE_TAP: unregister_code(KC_A);    break;
*/
  }
  A_CAPStap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_a  -  c a p s l o c k  -                                               */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_F  -  C A P S L O C K  -  KC_F                                         */
/*                                                                                      */
/*  KC_A:  fF  -  LGUI  -  C A P S L O C K                                              */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'F_CAPS' tap dance.
static tap F_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void F_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  F_CAPStap_state.state = cur_dance(state);
  switch (F_CAPStap_state.state) {
    case SINGLE_TAP:        register_code(KC_F); break;
    case SINGLE_HOLD:       register_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_HOLD:       press_capslock(); break;  // MY CAPSLOCK FINISHED FUNCTION

    case DOUBLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;
  }
}

void F_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (F_CAPStap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_F); break;
    case SINGLE_HOLD:       unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_HOLD:       release_capslock(); break;  // MY CAPSLOCK RESET FUNCTION
    
    case DOUBLE_SINGLE_TAP: unregister_code(KC_F); break;
  }
  F_CAPStap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_f  -  c a p s l o c k  -  kc_f                                         */
/*                                                                                      */
// ************************************************************************************ //










//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_J  -  A C U T E    &   G R A V E    A C C E N T  -  KC_J               */
/*                                                                                      */
/*  KC_J:  jJ  -  LGUI  -  ACUTE ACCENT  -  GRAVE ACCENT                                */
/*                                                                                      */
/*                                                                                      */
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'J_ACUT' tap dance.
static tap J_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void J_ACUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  J_ACUTtap_state.state = cur_dance(state);
  switch (J_ACUTtap_state.state) {

    case SINGLE_TAP:        register_code(KC_J); break;

    case SINGLE_HOLD:       register_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: disable_capslock_before_accents_function(); // caps_lock will not affect accent
                            acute_finished_function(); break;  // acute accent
  }
}

void J_ACUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (J_ACUTtap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_J); break;

    case SINGLE_HOLD:       unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: acute_reset_function(); 
                            enable_capslock_after_accents_function(); break;
  }
  J_ACUTtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_j  -  a c u t e    &   g r a v e    a c c e n t  -  kc_j               */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                  [TAPDANCE] KC_SP  -  S P A C E  -  L S H I F T                      */
/*                                                                                      */
/*  KC_SP:  SPACE  -  LEFT SHIFT                                                        */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'SP_SHF' tap dance.
static tap SP_SHFtap_state = {
  .is_press_action = true,
  .state = 0
};

void SP_SHF_finished (qk_tap_dance_state_t *state, void *user_data) {
  SP_SHFtap_state.state = cur_dance(state);
  switch (SP_SHFtap_state.state) {

    case SINGLE_TAP:        register_code(KC_SPC);    break;

    case SINGLE_HOLD:       right_shift_pressed = true;
                            register_code(KC_LSHIFT); break;
//
// [INFO]
// another way of press LSHIFT instead of register_code(KC_LSHIFT) is the following:
//                                add_mods(LSHIFT_MODS/*shift_flag*/);
//                                send_keyboard_report();
// [info]
//
  }
}

void SP_SHF_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SP_SHFtap_state.state) {
    
    case SINGLE_TAP:        unregister_code(KC_SPC); break;

    case SINGLE_HOLD:       //  release LSHIFT
                            right_shift_pressed = false;
                            if (!left_shift_pressed) {
                              unregister_code(KC_LSHIFT);
                            }; break;
//
// [INFO]
// another way of release LSHIFT instead of unregister_code(KC_LSHIFT) is the following:
//                                del_mods(LSHIFT_MODS/*shift_flag*/);
//                                send_keyboard_report();
// [info]
//
  }
  SP_SHFtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_sp  -  l e f t    s h i f t  -                                         */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_C:   MOUSE / FUNCTIONS  LAYERS                       */
/*                                                                                      */
/*  KC_C:  MOUS / FNCT                                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'MOU_FN' tap dance.
static tap MOU_FNtap_state = {
  .is_press_action = true,
  .state = 0
};
void MOU_FN_finished(qk_tap_dance_state_t* state, void* user_data) {
    MOU_FNtap_state.state = cur_dance(state);
    switch (MOU_FNtap_state.state) {

        case SINGLE_TAP:   register_code(KC_C);   break;

        case SINGLE_HOLD:  layer_on(MOUS);        break;
        
        case DOUBLE_HOLD:  layer_on(FNCT);        break;
    }
}

void MOU_FN_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (MOU_FNtap_state.state) {

        case SINGLE_TAP:   unregister_code(KC_C); break;

        case SINGLE_HOLD:  layer_off(MOUS);       break;
        
        case DOUBLE_HOLD:  layer_off(FNCT);       break;
    }
    MOU_FNtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_c  -  m o u s e  /  f u n c t i o n     l a y e r                      */
/*                                                                                      */
// ************************************************************************************ //


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*                   [TAPDANCE] KC_ESC:   E S C A P E    -     F N C T   /   F N C T    */
/*                                                                                      */
/*  KC_ESC:  ESC   -   FNCT / FNCT                                                      */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'ESC_FN' tap dance.
static tap ESC_FNtap_state = {
  .is_press_action = true,
  .state = 0
};
void ESC_FN_finished(qk_tap_dance_state_t* state, void* user_data) {
    ESC_FNtap_state.state = cur_dance(state);
    switch (ESC_FNtap_state.state) {

        case SINGLE_TAP:   register_code(KC_ESC); break;

        case SINGLE_HOLD:  
        case DOUBLE_HOLD:  layer_on(FNCT);        break;
    }
}

void ESC_FN_reset(qk_tap_dance_state_t* state, void* user_data) {
    switch (ESC_FNtap_state.state) {

        case SINGLE_TAP:   unregister_code(KC_ESC); break;

        case SINGLE_HOLD:  
        case DOUBLE_HOLD:  layer_off(FNCT);         break;
    }
    ESC_FNtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_esc  -  fnct / fnct                                                      */
/*                                                                                      */
// ************************************************************************************ //








//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_B  -  B _ N M B R  -  KC_B                                             */
/*                                                                                      */
/*  KC_B:  bB  -  [NMBR] toggle layer -  [NMBR] fix layer                               */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'B_NMBR' tap dance.
static tap B_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void B_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  B_NMBRtap_state.state = cur_dance(state);
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:    register_code(KC_B); break;

    case DOUBLE_HOLD:
    case SINGLE_HOLD:// SWITCH temporarily [NMBR] ON
                  //      layer_clear();
                        layer_on(NMBR);
                  //      breathing_period_set(BR_NMBR);
                  //      breathing_enable();
                        break;

/*    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                        break; */

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;
  }
}

void B_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:    
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_B); break;

    case SINGLE_HOLD: if (backlight_caps)
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

/*    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break; */

    case DOUBLE_HOLD:    // I left it intentionally empty for allowing 'SET [NMBBR] ON' works properly
                        break;

  }
  B_NMBRtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_b  -  b _ n m b r  -  kc_b                                             */
/*                                                                                      */
// ************************************************************************************ //









// [BOOKMARK]   KC_B ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯>  KC_G         [SYMB]
//
// [LAST]
//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_G  -  G _ S Y M B  -  KC_G                                             */
/*                                                                                      */
/*  KC_G:  gG  -  gg  -  GG  -  [SYMB]                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'G_SYMB' tap dance.
static tap G_SYMBtap_state = {
  .is_press_action = true,
  .state = 0
};

void G_SYMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  G_SYMBtap_state.state = cur_dance(state);
  switch (G_SYMBtap_state.state) {
    case SINGLE_TAP:    register_code(KC_G); break;

    case SINGLE_HOLD:// SWITCH temporarily [SYMB] ON
                  //      layer_clear();
                        layer_on(SYMB);
                  //      breathing_period_set(BR_SYMB);
                  //      breathing_enable();
                        break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_G); unregister_code(KC_G); register_code(KC_G); break;
  }
}

void G_SYMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (G_SYMBtap_state.state) {
    case SINGLE_TAP:    
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_G); break;

    case SINGLE_HOLD: if (backlight_caps)
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
/* case SINGLE_HOLD:// Return to [SYMB] OFF
                        layer_off(SYMB);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break; */
  }
  G_SYMBtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_g  -  g _ s y m b  -  kc_g                                             */
/*                                                                                      */
// ************************************************************************************ //



//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_H  -  H _ S Y M B  -  KC_H                                             */
/*                                                                                      */
/*  KC_H:  hH  -  hh  -  HH  -  [SYMB]                                                  */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'H_SYMB' tap dance.
static tap H_SYMBtap_state = {
  .is_press_action = true,
  .state = 0
};

void H_SYMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  H_SYMBtap_state.state = cur_dance(state);
  switch (H_SYMBtap_state.state) {
    case SINGLE_TAP:    register_code(KC_H); break;

    case SINGLE_HOLD:// SWITCH temporarily [SYMB] ON
                    //    layer_clear();
                        layer_on(SYMB);
                    //    breathing_period_set(BR_SYMB);
                    //    breathing_enable();
                        break;

    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_H); unregister_code(KC_H); register_code(KC_H); break;
  }
}

void H_SYMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (H_SYMBtap_state.state) {
    case SINGLE_TAP:    
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_H); break;

    case SINGLE_HOLD: if (backlight_caps)
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
/* case SINGLE_HOLD:// Return to [SYMB] OFF
                        layer_off(SYMB);
                        breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                        breathing_enable();

                        if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break; */
  }
  H_SYMBtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_h  -  h _ s y m b  -  kc_h                                             */
/*                                                                                      */
// ************************************************************************************ //







//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/* [TAPDANCE] KC_N  -  N _ N M B R  -  KC_N                                             */
/*                                                                                      */
/*  KC_N:  nN  -  [NMBR] toggle layer  -  ˜ ñÑ  -   [NMBR] fix layer                    */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'N_NMBR' tap dance.
static tap N_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void N_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_NMBRtap_state.state = cur_dance(state);
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:    
                        action_function(NULL, N_TILDE, N_TILDE); break;

    case SINGLE_HOLD:// SWITCH temporarily [NMBR] ON
    case DOUBLE_HOLD: 
                  //      layer_clear();
                        layer_on(NMBR);
                  //      breathing_period_set(BR_NMBR);
                  //      breathing_enable();
                        break;

                     // ~ for making a ñ
    case DOUBLE_TAP:    register_code(KC_LALT); register_code(KC_N); break;

/*    case DOUBLE_HOLD:// SET [NMBR] ON
                        layer_on(NMBR);
                  //      breathing_period_set(BR_NMBR);
                  //      breathing_enable();
                        break; */

    case DOUBLE_SINGLE_TAP: register_code(KC_N); unregister_code(KC_N); register_code(KC_N); break;

                         // ñ
    case TRIPLE_HOLD:       
    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_N);
                            unregister_code(KC_N);  unregister_code(KC_LALT);
                            register_code(KC_N);    break;


  }
}

void N_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:    break;
    case SINGLE_HOLD: if (backlight_caps)
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

/*    case SINGLE_HOLD:// Return to [NMBR] OFF
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();

                        if (!backlight_caps)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                        break; */

    case DOUBLE_TAP:        unregister_code(KC_N); unregister_code(KC_LALT); break;

    case DOUBLE_HOLD:    // I left it intentionally empty for allowing 'SET [NMBBR] ON' works properly
                            break;

    case DOUBLE_SINGLE_TAP: 
    case TRIPLE_HOLD:       
    case TRIPLE_TAP:        unregister_code(KC_N); 
                            /*register_code(KC_NO); unregister_code(KC_NO);*/ 
                            break;
  }
  N_NMBRtap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_n  -  n _ n m b r  -  kc_n                                             */
/*                                                                                      */
// ************************************************************************************ //
//////////////////////////////////////////////////////////////////////////////////////////
//           T A P   D A N C E    F O R  - ( S Y M B O L S     L A Y E R ) -            //
//////////////////////////////////////////////////////////////////////////////////////////




//           B A C K S L A S H     - ( S Y M B O L ) -    C I R C U M F L E X           //
//instantalize an instance of 'tap' for the 'BSL_CI' tap dance.
static tap BSL_CItap_state = {
  .is_press_action = true,
  .state = 0
};

void BSL_CI_finished (qk_tap_dance_state_t *state, void *user_data) {
  BSL_CItap_state.state = cur_dance(state);
  switch (BSL_CItap_state.state) {
    case SINGLE_TAP:        register_code(KC_BSLS); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        register_code(KC_LSFT); register_code(KC_6); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_BSLS); unregister_code(KC_BSLS); register_code(KC_BSLS); break;
  }
}

void BSL_CI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (BSL_CItap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_BSLS); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        unregister_code(KC_6); unregister_code(KC_LSFT); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_BSLS); break;
  }
  BSL_CItap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  B A C K S L A S H  【🔴】  - ( S Y M B O L ) -  【🔴】  C I R C U M F L E X  【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q U O T E    『🔵』  - ( S Y M B O L ) -  『🔵』    D O U B L E    Q U O T E S  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'QUOT_D' tap dance.
static tap QUOT_Dtap_state = {
  .is_press_action = true,
  .state = 0
};

void QUOT_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUOT_Dtap_state.state = cur_dance(state); 
  switch (QUOT_Dtap_state.state) {

    case SINGLE_TAP:        register_code(KC_QUOT);                         break; // single quote

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_LSFT); register_code(KC_QUOT); break; // double quotes
  }
}

void QUOT_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUOT_Dtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_QUOT); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_QUOT); unregister_code(KC_LSFT); break;
  }
  QUOT_Dtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  Q U O T E    【🔴】  - ( S Y M B O L ) -  【🔴】    D O U B L E    Q U O T E S  【🔴】【🔴】【🔴】






// 『🔵』『🔵』『🔵』  D O L L A R    『🔵』  - ( S Y M B O L ) -  『🔵』    E U R O  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'DO_EUR' tap dance.
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
//instantalize an instance of 'tap' for the 'DO_EUR' tap dance.
static tap DO_EURtap_state = {
  .is_press_action = true,
  .state = 0
};

void DO_EUR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DO_EURtap_state.state = cur_dance(state);
  switch (DO_EURtap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT); register_code(KC_4);                         break;  // dollar

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_2); break;  // euro
  }
}

void DO_EUR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DO_EURtap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_4); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_2); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  DO_EURtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】  D O L L A R    【🔴】  - ( S Y M B O L ) -  【🔴】    E U R O  【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  E X C L A M A T I O N    M A R K _ S  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'EXCLAM' tap dance.
static tap EXCLAMtap_state = {
  .is_press_action = true,
  .state = 0
};

void EXCLAM_finished (qk_tap_dance_state_t *state, void *user_data) {
  EXCLAMtap_state.state = cur_dance(state);
  switch (EXCLAMtap_state.state) {

    case SINGLE_TAP:        register_code(KC_LSFT); register_code(KC_1); break;  //  exclamation mark

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_1); break;  //  inverted exclamation mark
  }
}

void EXCLAM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (EXCLAMtap_state.state) {

    case SINGLE_TAP:        unregister_code(KC_1); unregister_code(KC_LSFT); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_1); unregister_code(KC_LALT); break;
  }
  EXCLAMtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  E X C L A M A T I O N    M A R K _ S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】





// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  Q U E S T I O N    M A R K _ S  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'QUESTI' tap dance.
static tap QUESTItap_state = {
  .is_press_action = true,
  .state = 0
};

void QUESTI_finished (qk_tap_dance_state_t *state, void *user_data) {
  QUESTItap_state.state = cur_dance(state);
  switch (QUESTItap_state.state) {

    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_SLSH);                         break;  //  question mark

    case DOUBLE_TAP:  
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_SLSH); break;  // inverted question mark
  }
}

void QUESTI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (QUESTItap_state.state) {

    case SINGLE_TAP:  unregister_code(KC_SLSH); unregister_code(KC_LSFT);                           break;

    case DOUBLE_TAP:  
    case SINGLE_HOLD: unregister_code(KC_SLSH); unregister_code(KC_LALT); unregister_code(KC_LSFT); break;
  }
  QUESTItap_state.state = 0;
}

/*                                                                                     */
/*  X: ?, ¿                                                                            */
/*                                                                                     */
/*  [TAPDANCE]   QUESTI   //  Q U E S T I O N    M A R K                               */
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*   T A P   D A N C E    F O R :   S Y M B O L S    L A Y E R                         */
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////





/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*   T A P   D A N C E    F O R :   N U M B E R S    L A Y E R                         */
/*                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*                   [TAPDANCE]   TRIP_0     -     T R I P L E    Z E R O              */
/*                                                                                     */
/*  KC_A: BACKSPACE, 000                                                               */
/*                                                                                     */
//instantalize an instance of 'tap' for the 'TRIP_0' tap dance.
static tap TRIP_0tap_state = {
  .is_press_action = true,
  .state = 0
};

void TRIP_0_finished (qk_tap_dance_state_t *state, void *user_data) {
  TRIP_0tap_state.state = cur_dance(state);
  switch (TRIP_0tap_state.state) {
    case SINGLE_TAP:        register_code(KC_SPC); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_0); unregister_code(KC_0); register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
  }
}

void TRIP_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TRIP_0tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_SPC); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0);   break;
  }
  TRIP_0tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_a  -  backspace, triple zero  -  kc_a                                  */
/*                                                                                      */
// ************************************************************************************ //


//////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                      */
/*              [TAPDANCE] DOUB_0     -      DELETE,   D O U B L E   Z E R O            */
/*                                                                                      */
/*  KC_S:  DELETE, 00                                                                   */
/*                                                                                      */
/*                                                                                      */
//instantalize an instance of 'tap' for the 'DOUB_0' tap dance.
static tap DOUB_0tap_state = {
  .is_press_action = true,
  .state = 0
};

void DOUB_0_finished (qk_tap_dance_state_t *state, void *user_data) {
  DOUB_0tap_state.state = cur_dance(state);
  switch (DOUB_0tap_state.state) {
    case SINGLE_TAP:        register_code(KC_DEL); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: register_code(KC_0); unregister_code(KC_0); register_code(KC_0); break;
  }
}

void DOUB_0_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DOUB_0tap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_DEL); break;

    case SINGLE_HOLD:       
    case DOUBLE_TAP:        
    case DOUBLE_SINGLE_TAP: unregister_code(KC_0); break;
  }
  DOUB_0tap_state.state = 0;
}
/*                                                                                      */
/* [tapdance] kc_s  -  delete, double zero  -  kc_s                                     */
/*                                                                                      */
// ************************************************************************************ //


/////////////////////////////////////////////////////////////////////////////////////////
/*                                                                                     */
/*             [TAPDANCE] DONMBR into [NMBR]:  DOT,  N U M B E R S   L A Y E R   O F F */
/*                                                                                     */
/*  KC_B:   KC_PDOT,  [NMBR]OFF                                                        */
/*                                                                                     */
/* instantalize an instance of 'tap' for the 'DONMBR' tap dance.                       */
static tap DONMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

void DONMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  DONMBRtap_state.state = cur_dance(state);
  switch (DONMBRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_PDOT); break;

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

/*    case DOUBLE_HOLD:    // SET [NMBR] OFF
                            layer_off(NMBR);
                            breathing_period_set(BR_CAPS);      // if CAPS_LOCK was set out before [NMBR] was fixed ...
                            breathing_enable();

                            if (!backlight_caps)        // if CAPS_LOCK was NOT set out before [NMBR] was fixed ...
                            {
                              breathing_period_set(BR_DFLT);
                              breathing_disable();
                            };
                            break; */
  }
}

void DONMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (DONMBRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_PDOT); break;
  }
  DONMBRtap_state.state = 0;
}