#include "tapdance_setup.h"
// #include QMK_KEYBOARD_H
// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// //                                                                                      //
// // TAP DANCE GENERAL SETUP SECTION START                                                //
// //                                                                                      //
// //  * SINGLE_TAP                                                                        //
// // ** DOUBLE_TAP                                                                        //
// //  @ SINGLE_HOLD                                                                       //
// // @@ DOUBLE_HOLD                                                                       //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// typedef struct {
//     bool is_press_action;
//     int  state;
// } tap;
/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) 
        if (state->interrupted || !state->pressed) 
        // IF the key has been pressed only once 
        // AND  (the key has been interrupted by pressing another key after it
        //       OR   the key is not pressed at present)
          return SINGLE_TAP;
        else    
          //key has not been interrupted, but they key is still held. Means you want to send a 'HOLD'.
          // [MINE]
          // IF  the key has been pressed only once
          // AND the key has not been interrupted
          // AND the key is still pressed  (the key is still held)
          // [mine]
        // {    alt_mod = get_mods()&ALT_MODS;
        //      gui_mod = get_mods()&GUI_MODS;

        //      if (alt_mod)
        //        return ALT_plus_HOLD;
        //      else
        //        if (gui_mod)
        //          return GUI_plus_HOLD;          
        //        else
                 return SINGLE_HOLD;
         // }
//if (state->count == 1) 
  else
  if (state->count == 2)
    { 
      if (state->interrupted)
      // IF   the key has been pressed twice
      // AND  the key has been interrupted by pressing another key after it
      return DOUBLE_SINGLE_TAP;
      else
        if (state->pressed) 
        // IF  the key has been pressed twice
        // AND the key has not been interrupted by pressing another key
        // AND the key is still pressed
        // {
        //   gui_mod = get_mods()&GUI_MODS;
        //   if (gui_mod)
        //     return GUI_plus_DOUBLE_HOLD;          
        //   else
            return DOUBLE_HOLD;
        // }
        else
        // IF  the key has been pressed twice
        // AND the key has not being interrupted by pressing another key
        // AND the key is not pressed at present
          return DOUBLE_TAP;
    } //    if (state->count == 2)
/*
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
        else if (state->count == 6) {
          if (state->interrupted) return SEXTUPLE_SINGLE_TAP;
          else if (state->pressed) return SEXTUPLE_HOLD;
          else return SEXTUPLE_TAP;
        }
        else return 18; //magic number. At some point this method will expand to work for more presses
*/
    else
      return 6/*9*/;
}
//                                                                                      //
// tap dance general setup section end                                                  //
//////////////////////////////////////////////////////////////////////////////////////////


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//               T A P   D A N C E   F O R  -  V   I   M  -  L A Y E R S                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_U (FVIM_uU)                                                  //
//                                                                                      //
//  B E G I N N I N G   O F   L I N E    /    P A R A G R A P H                         //
//                                                                                      //
//  KC_U:  * BEGINING OF LINE                                                           //
//        ** BEGINING OF PARAGRAPH                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_uU' tap dance.
static tap FVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_uU_finished (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_uU_tap_state.state = cur_dance(state);
  switch (FVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_UP);
                          unregister_code(KC_UP);   unregister_code(KC_LALT); break;
  }
}
void FVIM_uU_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (FVIM_uU_tap_state.state) {
  }
  FVIM_uU_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_u (fvim_uu)                                                  //
//                                                                                      //
//  b e g i n n i n g   o f   l i n e    /    p a r a g r a p h                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_P (FVIM_pP)                                                  //
//                                                                                      //
//  E N D   O F   L I N E  /  P A R A G R A P H                                         //
//                                                                                      //
//  KC_P:  * END OF LINE                                                                //
//        ** END OF PARAGRAPH                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_pP' tap dance.
static tap FVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_pP_finished (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_pP_tap_state.state = cur_dance(state);
  switch (FVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_DOWN);
                          unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
  }
}
void FVIM_pP_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (FVIM_pP_tap_state.state) {
  }
  FVIM_pP_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_p (fvim_pp)                                                  //
//                                                                                      //
//  e n d   o f   l i n e  /  p a r a g r a p h                                         //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_U (DVIM_uU)                                                  //
//                                                                                      //
//  D E L E T E   T O   B E G I N N I N G   O F   L I N E   /   P A R A G R A P H       //
//                                                                                      //
//  KC_U:  * DELETE TO BEGINNING OF LINE                                                //
//        ** DELETE TO BEGINNING OF PARAGRAPH                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_uU' tap dance.
static tap DVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_uU_tap_state.state = cur_dance(state);
  switch (DVIM_uU_tap_state.state) {
    case SINGLE_TAP:        dvim("u"); break;
    case DOUBLE_TAP:        dvim("U"); break;
  }
  DVIM_uU_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _dvim ] kc_u (dvim_uu)                                                  //
//                                                                                      //
//  d e l e t e   t o   b e g i n n i n g   o f   l i n e   /   p a r a g r a p h       //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _DVIM ] KC_P (DVIM_pP)                                                  //
//                                                                                      //
//  D E L E T E   T O   E N D   O F   L I N E   /   E N D   O F   P A R A G R A P H     //
//                                                                                      //
//  KC_U:  * DELETE TO END OF LINE                                                      //
//        ** DELETE TO END OF PARAGRAPH                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'DVIM_pP' tap dance.
static tap DVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void DVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  DVIM_pP_tap_state.state = cur_dance(state);
  switch (DVIM_pP_tap_state.state) {
    case SINGLE_TAP:        dvim("p"); break;
    case DOUBLE_TAP:        dvim("P"); break;
  }
  DVIM_pP_tap_state.state = 0;
};
//                                                                                      //
// [tapdance] [ _dvim ] kc_p (dvim_pp)                                                  //
//                                                                                      //
//  d e l e t e   t o   e n d   o f   l i n e   /   e n d   o f   p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////









//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ P O W R ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Q (TG_QWE)                                                     //
//                                                                                      //
//  T O G G L E     _ Q W E R T     L A Y E R                                           //
//                                                                                      //
//  KC_Q: @  TOGGLE _QWERT LAYER                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//instantalize an instance of 'tap' for the 'TG_QWE' tap dance.
static tap TG_QWE_tap_state = {
  .is_press_action = true,
  .state = 0
};

void TG_QWE_finished (qk_tap_dance_state_t *state, void *user_data) {
  TG_QWE_tap_state.state = cur_dance(state);
  switch (TG_QWE_tap_state.state) {

    case SINGLE_HOLD: register_code(KC_RCTL);
                      break;

    case DOUBLE_HOLD: layer_invert(_QWERT);
  
#if defined(RGBLIGHT_ENABLE)
                      flashing_RGB_LEDs(6, RGB_MY_CORAL, RGB_MY_GREEN);
#elif defined(BACKLIGHT_ENABLE)
                      flashing_BCK_LEDs(6, BL_MED, BL_MAX);
#endif
                      break;
  }
}

void TG_QWE_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TG_QWE_tap_state.state) {

    case SINGLE_HOLD: unregister_code(KC_RCTL);
                      break;
  }
  TG_QWE_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_q (tg_qwe)                                                     //
//                                                                                      //
//  t o g g l e     _ q w e r t     l a y e r                                           //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//  T A P   D A N C E   F O R   [ _ D F L T ]  L A Y E R    ( I A E O U  /  Q W E R T)  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] KC_P (L_APPS)                                                     //
//                                                                                      //
//  _ A P P S     L A Y E R                                                             //
//                                                                                      //
//  KC_P: *  KC_P                                                                       //
//        @  _APPS LAYER                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//instantalize an instance of 'tap' for the 'L_APPS' tap dance.
static tap L_APPS_tap_state = {
  .is_press_action = true,
  .state = 0
};
void L_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  L_APPS_tap_state.state = cur_dance(state);
  switch (L_APPS_tap_state.state) {

    case SINGLE_TAP:  //tap_code(KC_P);
                      //Function  Description Aliases
                      //FUNCTION: layer_state_is(layer)
                      //DESCRIPTION: Checks if the specified layer is enabled globally.
                      //ALIASES: IS_LAYER_ON(layer), IS_LAYER_OFF(layer)
                      if (layer_state_is(_QWERT))
                      {
                        tap_code(KC_W);
                      }
                      else
                      {
                        tap_code(KC_P);
                      }
                      break;
                      
    case SINGLE_HOLD: register_code(KC_F21);
                      break;
  }
}

void L_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (L_APPS_tap_state.state) {

    case SINGLE_TAP:  break;

    case SINGLE_HOLD: unregister_code(KC_F21);
                      break;
  }
  L_APPS_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_dflt] kc_p (l_apps)                                                     //
//                                                                                      //
//  _ a p p s     l a y e r                                                             //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_DFLT] KC_L (R_APPS)                                                     //
//                                                                                      //
//  _ A P P S     L A Y E R                                                             //
//                                                                                      //
//  KC_L: *  KC_L                                                                       //
//        @  _APPS LAYER                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//instantalize an instance of 'tap' for the 'R_APPS' tap dance.
static tap R_APPS_tap_state = {
  .is_press_action = true,
  .state = 0
};
void R_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  R_APPS_tap_state.state = cur_dance(state);
  switch (R_APPS_tap_state.state) {

    case SINGLE_TAP:  //tap_code(KC_L);
                      //Function  Description Aliases
                      //FUNCTION: layer_state_is(layer)
                      //DESCRIPTION: Checks if the specified layer is enabled globally.
                      //ALIASES: IS_LAYER_ON(layer), IS_LAYER_OFF(layer)
                      if (layer_state_is(_QWERT))
                      {
                        tap_code(KC_O);
                      }
                      else
                      {
                        tap_code(KC_L);
                      }
                      break;

    case SINGLE_HOLD: register_code(KC_F21);
                      break;
  }
}

void R_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (R_APPS_tap_state.state) {

    case SINGLE_TAP:  break;

    case SINGLE_HOLD: unregister_code(KC_F21);
                      break;
  }
  R_APPS_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_dflt] kc_l (r_apps)                                                     //
//                                                                                      //
//  _ a p p s     l a y e r                                                             //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_E (LCKLOG)                                                     //
//                                                                                      //
//  L O G O U T    /    L O C K    S C R E E N                                          //
//                                                                                      //
//  KC_E: *  LOCK USER SCREEN                                                           //
//        @  LOGOUT CURRENT USER                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//instantalize an instance of 'tap' for the 'LCKLOG' tap dance.
static tap LCKLOG_tap_state = {
  .is_press_action = true,
  .state = 0
};

void LCKLOG_finished (qk_tap_dance_state_t *state, void *user_data) {
  LCKLOG_tap_state.state = cur_dance(state);
  switch (LCKLOG_tap_state.state) {

    case SINGLE_TAP://user lock screen
                      register_code(KC_LCTL); register_code(KC_LGUI);
                      tap_code(KC_Q);
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      break;
                    

    case DOUBLE_HOLD: //user log out
                      // (guessed by try and fail method)
                      // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
                      // if we add ALT, we don't have to answer any menu, we logout directly
#if defined(RGBLIGHT_ENABLE)
                      flashing_RGB_LEDs(6, RGB_MY_MAGENTA, RGB_MY_BLUE);
#elif defined(BACKLIGHT_ENABLE)
                      flashing_BCK_LEDs(6, BL_MED, BL_MAX);
#endif
                      register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_Q);

                      unregister_code(KC_Q);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      break;
  }
}

void LCKLOG_reset (qk_tap_dance_state_t *state, void *user_data) {
  // switch (LCKLOG_tap_state.state) {
  // }
  LCKLOG_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_e (LCKLOG)                                                     //
//                                                                                      //
//  l o g o u t    /    l o c k    s c r e e n                                          //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_R (HRESET)                                                     //
//                                                                                      //
//  R E S E T                                                                           //
//                                                                                      //
//  KC_R:   @   R E S E T                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'HRESET' tap dance.
static tap HRESET_tap_state = {
  .is_press_action = true,
  .state = 0
};

void HRESET_finished (qk_tap_dance_state_t *state, void *user_data) {
  HRESET_tap_state.state = cur_dance(state);
  switch (HRESET_tap_state.state) {

    case SINGLE_HOLD: // starts backlight blinking and then reset the keyboard for about 7 seconds
                      reset_my_keyboard_function();
                      break;
  }
}

void HRESET_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (HRESET_tap_state.state) {
    case SINGLE_HOLD:        break;
  }
  HRESET_tap_state.state = 0;
}
//
// [FIRMWARE_SIZE]
  // Next way, we save only 2 bytes (it doesn't matter, I prefer classic way:
// [firmware_size]
//
    /*
    void HRESET_finished (qk_tap_dance_state_t *state, void *user_data) {
      switch (cur_dance(state)) {

        case SINGLE_HOLD: // starts backlight blinking and then reset the keyboard for about 7 seconds
                          reset_my_keyboard_function();
                          break;
      }
      // reset_tap_dance(state);
    }
    */
//                                                                                      //
// [tapdance] [_powr] kc_r (hreset)                                                     //
//                                                                                      //
//  r e s e t                                                                           //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_J (RS_ZOIN)                                                    //
//                                                                                      //
//  R I G H T    S H I F T    /    Z O O M   I N                                        //
//                                                                                      //
//  KC_J:  *  ZOOM IN,                                                                  //
//         @  RIGHT SHIFT                                                               //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RS_ZOIN' tap dance.
static tap RS_ZOIN_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RS_ZOIN_finished (qk_tap_dance_state_t *state, void *user_data) {
  RS_ZOIN_tap_state.state = cur_dance(state);
  switch (RS_ZOIN_tap_state.state) {

// [SYSTEM PREFERENCES]    
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_EQL);
                      break;
// [system preferences]                      

    case SINGLE_HOLD: register_code(KC_RSFT);
                      break;
  }
}

void RS_ZOIN_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RS_ZOIN_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_EQL);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RSFT);
                      break;                       
  }
  RS_ZOIN_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_j (rs_zoin)                                                    //
//                                                                                      //
//  r i g h t    s h i f t    /    z o o m   i n                                        //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_K (RG_ZOUT)                                                    //
//                                                                                      //
//  R I G H T    G U I     /     Z O O M    O U T                                       //
//                                                                                      //
//  KC_K:  *  ZOOM OUT,                                                                 //
//         @  RIGHT GUI                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RG_ZOUT' tap dance.
static tap RG_ZOUT_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RG_ZOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  RG_ZOUT_tap_state.state = cur_dance(state);
  switch (RG_ZOUT_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_MINS);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RGUI);
                      break;
  }
}

void RG_ZOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RG_ZOUT_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_MINS);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RGUI);
                      break;                       
  }
  RG_ZOUT_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_k (rg_zout)                                                    //
//                                                                                      //
//  r i g h t    g u i     /     z o o m    o u t                                       //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_L (RA_ZOOM)                                                    //
//                                                                                      //
//  R I G H T    A L T    /    Z O O M    O N / O F F                                   //
//                                                                                      //
//  KC_L:  *  ZOOM ON/OFF,                                                              //
//         @  RIGHT ALT                                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RA_ZOOM' tap dance.
static tap RA_ZOOM_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RA_ZOOM_finished (qk_tap_dance_state_t *state, void *user_data) {
  RA_ZOOM_tap_state.state = cur_dance(state);
  switch (RA_ZOOM_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_SCLN);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RALT);
                      break;
  }
}

void RA_ZOOM_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RA_ZOOM_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_SCLN);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RALT);
                      break;                       
  }
  RA_ZOOM_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_l (ra_zoom)                                                    //
//                                                                                      //
//  r i g h t    a l t    /    z o o m    o n / o f f                                   //
//////////////////////////////////////////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_SP (RA_INCO)                                                   //
//                                                                                      //
//  R I G H T    A L T     /     I N V E R T    C O L O R S                             //
//                                                                                      //
//  KC_SP:  *  INVERT COLORS,                                                           //
//          @  RIGHT ALT                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RA_INCO' tap dance.
static tap RA_INCO_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RA_INCO_finished (qk_tap_dance_state_t *state, void *user_data) {
  RA_INCO_tap_state.state = cur_dance(state);
  switch (RA_INCO_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LGUI);
                      register_code(KC_8);
                      break;
// [system preferences]

    case SINGLE_HOLD: register_code(KC_RALT);
                      break;
  }
}

void RA_INCO_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RA_INCO_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_8);
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      break;
                     
    case SINGLE_HOLD: unregister_code(KC_RALT);
                      break;                       
  }
  RA_INCO_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_sp (ra_inco)                                                   //
//                                                                                      //
//  r i g h t    a l t    /     i n v e r t    c o l o r s                              //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_Z (SLEP_M)                                                     //
//                                                                                      //
//  M E N U   B A R   /    S L E E P   C O M P U T E R                                  //
//                                                                                      //
//  KC_Z:   *  MENU BAR                                                                 //
//          @  SLEEP COMPUTER                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SLEP_M' tap dance.
static tap SLEP_M_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SLEP_M_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLEP_M_tap_state.state = cur_dance(state);
  switch (SLEP_M_tap_state.state) {
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F2);
                      //_delay_ms(500);
                      break;

// [INFO] HOW TO SLEEP COMPUTER THROUGH KEYBOARD                            
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

                  /* KC_EJCT keycode doesn't work with QMK, but with KarabinerElements works vey well*/
                  /*register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_EJCT);*/

/////////////////////////////////////////////////////////////////////////////////////////////////// ###
/*                                                                                                     */
/*   KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down)     */
/*                                                                                                     */
/*                          register_code(KC_POWER);                                                   */
/*                                                                                                     */
/////////////////////////////////////////////////////////////////////////////////////////////////// ###
  }
}

void SLEP_M_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLEP_M_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F2); unregister_code(KC_LCTL); break;
                     
    case SINGLE_HOLD: /* if we unregister_code(KC_POWER) here, at SLEP_M_reset
                         it will appear the POWER dialog box and 
                         we have to press the related initial letter
                         or chosing an option with the mouse.

                         unregister_code(KC_POWER);
                      */

                      /*
                      unregister_code(KC_EJCT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      */
// [info] how to sleep computer through keyboard

                      break;                       
  }
  SLEP_M_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_z (slep_m)                                                     //
//                                                                                      //
//  m e n u   b a r   /    s l e e p   c o m p u t e r                                  //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_X (KILA_D)                                                     //
//                                                                                      //
//  D O C K   B A R    /    F O R C E   T O   K I L L   C U R R E N T   A P P           //
//                                                                                      //
//  KC_X:   *  DOCK BAR                                                                 //
//          @  KILL CURRENT APP                                                         //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'KILA_D' tap dance.
static tap KILA_D_tap_state = {
  .is_press_action = true,
  .state = 0
};

void KILA_D_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILA_D_tap_state.state = cur_dance(state);
  switch (KILA_D_tap_state.state) {

    case SINGLE_TAP:  register_code(KC_LCTL);   register_code  (KC_F3); // DOCK BAR
                      break;
                      // SEND_STRING(SS_LALT(SS_LGUI("d")));
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_ESC);
                      break;

// [INFO] HOW TO KILL CURRNT APP THROUGH KEYBOARD              
//  keystrokes for kill current app:  (guessed by try and fail method)
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */
  }
}

void KILA_D_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILA_D_tap_state.state) {
    case SINGLE_TAP:  unregister_code  (KC_F3); unregister_code(KC_LCTL);
                      //unregister_code(KC_D); unregister_code(KC_LGUI); unregister_code(KC_LALT);
// [info] how to kill currnt app through keyboard

                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      unregister_code(KC_LSFT); 
                      break;
          
  }
  KILA_D_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_x (kila_d)                                                     //
//                                                                                      //
//  d o c k   b a r    /    f o r c e   t o   k i l l   c u r r e n t   a p p           //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_C (KILM_T)                                                     //
//                                                                                      //
//  T O O L S   B A R   /   K I L L   M E N U                                           //
//                                                                                      //
//  KC_C:   *  TOOLS BAR                                                                //
//          @  KILL MENU                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'KILM_T' tap dance.
static tap KILM_T_tap_state = {
  .is_press_action = true,
  .state = 0
};

void KILM_T_finished (qk_tap_dance_state_t *state, void *user_data) {
  KILM_T_tap_state.state = cur_dance(state);
  switch (KILM_T_tap_state.state) {

    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F5); // TOOLS BAR
                      break;
                            
    case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
                      break;

// [INFO] HOW TO ACCESS KILL MENU THROUGH KEYBOARD
//  keystrokes for kill menu:  (guessed by try and fail method)
                      /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */
// [info] how to access kill menu through keyboard
  }
}

void KILM_T_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (KILM_T_tap_state.state) {

    case SINGLE_TAP:  unregister_code(KC_F5); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
                      unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); 
                      break;      
  }
  KILM_T_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_c (kilm_t)                                                     //
//                                                                                      //
//  t o o l s   b a r   /   k i l l   m e n u                                           //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_V (SHUT_S)                                                     //
//                                                                                      //
//  S T A T U S   B A R    /    S H U T   D O W N                                       //
//                                                                                      //
//  KC_V:   *  STATUS BAR                                                               //
//          @  SHUT DOWN (SET VOL TO 1 AND SHUT DOWN)                                   //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'SHUT_S' tap dance.
// 
// [FIRMWARE_SIZE]
// this tapdance feature cost 170-12 bytes to implement = 158 bytes
// [firmware_size]
//
static tap SHUT_S_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data) {
  SHUT_S_tap_state.state = cur_dance(state);
  switch (SHUT_S_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F8);  // STATUS BAR 
                      break;
// [system preferences]

    case SINGLE_HOLD:                        
    case DOUBLE_TAP:  volumeSetToLevel(1);

                  //  keystrokes for shutting down:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);

                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   

                      break;

// [OLDWAY]
                   // Another way for shutting down, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_ENT); unregister_code(KC_ENT);
// [oldway]

// [INFO]
                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
                      */
// [info]
  }
}

void SHUT_S_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SHUT_S_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F8); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  SHUT_S_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_v (shut_s)                                                     //
//                                                                                      //
//  s t a t u s   b a r    /    s h u t   d o w n                                       //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_B (RSTT_F)                                                     //
//                                                                                      //
//  F L O A T I N G   W I N D O W   /   R E S T A R T                                   //
//                                                                                      //
//  KC_B:  *  FLOATING WINDOW,                                                          //
//         @  RESTART                                                                   //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'RSTT_F' tap dance.
static tap RSTT_F_tap_state = {
  .is_press_action = true,
  .state = 0
};

void RSTT_F_finished (qk_tap_dance_state_t *state, void *user_data) {
  RSTT_F_tap_state.state = cur_dance(state);
  switch (RSTT_F_tap_state.state) {

// [SYSTEM PREFERENCES]
    case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F6);
// [system preferences]
                      break;
                            
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  
                  //  keystrokes for restarting:  (guessed by try and fail method)
                      register_code(KC_LCTL); register_code(KC_LGUI);

                      register_code(KC_POWER); unregister_code(KC_POWER);
                      
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);

                      break;

// [OLDWAY]
                   // Another way for restarting, but much less elegant:
                   // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
                   // register_code(KC_R); unregister_code(KC_R);
// [oldway]                      

                   /* The KC_EJCT keycode doesn't work */
                      /*
                      register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
                      _delay_ms(2000);
                      unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      */

  }
}

void RSTT_F_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (RSTT_F_tap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F6); unregister_code(KC_LCTL);
                      break;
                     
    case SINGLE_HOLD: 
    case DOUBLE_TAP:  break;
                            
  }
  RSTT_F_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_powr] kc_b (rstt_f)                                                     //
//                                                                                      //
//  f l o a t i n g   w i n d o w   /   r e s t a r t                                   //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ p o w r ]    l a y e r                  //
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//               T A P   D A N C E   F O R  -  S Y M B O L S  -  L A Y E R S            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_SYMB] KC_O (TD_EXC)                                                     //
//                                                                                      //
//  E X C L A M A T I O N   M A R K    /    O P E N   E X C L A M A T I O N   M A R K   //
//                                                                                      //
//  KC_B:  *  EXCLAMATION MARK,                                                         //
//        **  OPEN EXCLAMATION MARK                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'TD_EXC' tap dance.
static tap TD_EXC_tap_state = {
  .is_press_action = true,
  .state = 0
};

void TD_EXC_finished (qk_tap_dance_state_t *state, void *user_data) {
  TD_EXC_tap_state.state = cur_dance(state);
  switch (TD_EXC_tap_state.state) {

    case SINGLE_TAP:  register_code(KC_LSFT); tap_code(KC_1); unregister_code(KC_LSFT);
                      break;

    case DOUBLE_TAP:  B_EXCL;
                      break;
  }
}

void TD_EXC_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TD_EXC_tap_state.state) {
    case SINGLE_TAP:
    case DOUBLE_TAP:  break;                            
  }
  TD_EXC_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_symb] kc_o (td_exc)                                                     //
//                                                                                      //
//  e x c l a m a t i o n   m a r k    /    o p e n   e x c l a m a t i o n   m a r k   //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_SYMB] KC_P (TD_QUE)                                                     //
//                                                                                      //
//  E X C L A M A T I O N   M A R K    /    O P E N   E X C L A M A T I O N   M A R K   //
//                                                                                      //
//  KC_B:  *  EXCLAMATION MARK,                                                         //
//        **  OPEN EXCLAMATION MARK                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'TD_QUE' tap dance.
static tap TD_QUE_tap_state = {
  .is_press_action = true,
  .state = 0
};

void TD_QUE_finished (qk_tap_dance_state_t *state, void *user_data) {
  TD_QUE_tap_state.state = cur_dance(state);
  switch (TD_QUE_tap_state.state) {

    case SINGLE_TAP:  register_code(KC_LSFT); tap_code(KC_SLSH); unregister_code(KC_LSFT);
                      break;

    case DOUBLE_TAP:  B_QUES;
                      break;
  }
}

void TD_QUE_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (TD_QUE_tap_state.state) {
    case SINGLE_TAP:
    case DOUBLE_TAP:  break;                            
  }
  TD_QUE_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_symb] kc_p (td_que)                                                     //
//                                                                                      //
//  e x c l a m a t i o n   m a r k    /    o p e n   e x c l a m a t i o n   m a r k   //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//               t a p   d a n c e   f o r  -  s y m b o l s  -  l a y e r s            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// my own tap_dance harvest                                                             //
//                                                                                      //
// double function tap dance personalization section end                                //
//////////////////////////////////////////////////////////////////////////////////////////
//
