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
void TD_EXC_finished (qk_tap_dance_state_t *state, void *user_data);
void TD_EXC_reset (qk_tap_dance_state_t *state, void *user_data);
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
void TD_QUE_finished (qk_tap_dance_state_t *state, void *user_data);
void TD_QUE_reset (qk_tap_dance_state_t *state, void *user_data);
//                                                                                      //
// [tapdance] [_symb] kc_p (td_que)                                                     //
//                                                                                      //
//  e x c l a m a t i o n   m a r k    /    o p e n   e x c l a m a t i o n   m a r k   //
//////////////////////////////////////////////////////////////////////////////////////////




























    // TAP DANCE KEYCODES ACCESSIBLE FROM _SYMB  LAYER 09
    ,V_RACI  // right angle bracket & circumflex accent
    //  ,A_GRAV  // grave & tilde         //tilde        accessible while holding SHIFT key !
    //  ,S_QUOT  // quote & double quote  //double quote accessible while holding SHIFT key !
    ,Z_EXCL  // exclamation mark: open & close
    ,TD_EXC
    ,TD_QUE  
    ,X_QUES  // question    mark: open & close
























    // TAP DANCE KEYCODES ACCESSIBLE FROM _POWR LAYER 12
    /*
    ,RC_RWND // right control / rewind       // KC_F7
    ,RA_PLAY // right alt     / play/pause   // KC_SPC
    ,RG_FRWD // right gui     / forward      // KC_F9
    */
    // [ADVICE]
    // ,BCKLIT // accessing _BLIT layer from tap dance into _POWR layer
               // ...this way we don't waste a layer from being accesible from Default layer,
               // ...remember that you only can access 16 layer through LT(lyr, key) and LM(layer, mod)
               // ...but many more layers, accessing them from code (e.g.: tap_dance)
    // [advice]    
    // tap dance keycodes accessible from _powr layer 12






























//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_I (FVIM_iI)                                                  //
//                                                                                      //
//  M O V E   W O R D   B A C K W A R D  /  M O V E   S U B W O R D   B A C K W A R D   //
//                                                                                      //
//  KC_I:  * MOVE WORD    BACKWARD                                                      //
//        ** MOVE SUBWORD BACKWARD                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_iI' tap dance.
static tap FVIM_iI_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_iI_finished (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_iI_tap_state.state = cur_dance(state);
  switch (FVIM_iI_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LALT);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT); unregister_code(KC_LALT); break;

    case DOUBLE_TAP:        register_code(KC_LCTL);   register_code(KC_LEFT);
                          unregister_code(KC_LEFT);   unregister_code(KC_LCTL); break;
  }
}
void FVIM_iI_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (FVIM_iI_tap_state.state) {
  }
  FVIM_iI_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_i (fvim_ii)                                                  //
//                                                                                      //
//  m o v e   w o r d   b a c k w a r d  /  m o v e   s u b w o r d   b a c k w a r d   //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _FVIM ] KC_O (FVIM_oO)                                                  //
//                                                                                      //
//  M O V E   W O R D   F O R W A R D    /    M O V E   S U B W O R D   F O R W A R D   //
//                                                                                      //
//  KC_O:  * MOVE WORD    FORWARD                                                       //
//        ** MOVE SUBWORD FORWARD                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'FVIM_oO' tap dance. esterNoCleiDoMastoiDeo
static tap FVIM_oO_tap_state = {
  .is_press_action = true,
  .state = 0
};

void FVIM_oO_finished (qk_tap_dance_state_t *state, void *user_data) {
  FVIM_oO_tap_state.state = cur_dance(state);
  switch (FVIM_oO_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LALT);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LALT); break;

    case DOUBLE_TAP:        register_code(KC_LCTL);   register_code(KC_RGHT);
                          unregister_code(KC_RGHT); unregister_code(KC_LCTL); break;
  }
}
void FVIM_oO_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (FVIM_oO_tap_state.state) {
  }
  FVIM_oO_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [ _fvim ] kc_o (fvim_oo)                                                  //
//                                                                                      //
//  m o v e   w o r d   f o r w a r d    /    m o v e   s u b w o r d   f o r w a r d   //
//////////////////////////////////////////////////////////////////////////////////////////




































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
// static tap FVIM_uU_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void FVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
//   FVIM_uU_tap_state.state = cur_dance(state);
//   switch (FVIM_uU_tap_state.state) {
//     case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_LEFT);
//                           unregister_code(KC_LEFT); unregister_code(KC_LGUI); break;

//     case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_UP);
//                           unregister_code(KC_UP);   unregister_code(KC_LALT); break;
//   }
//   FVIM_uU_tap_state.state = 0;
// }
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
// static tap FVIM_pP_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void FVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
//   FVIM_pP_tap_state.state = cur_dance(state);
//   switch (FVIM_pP_tap_state.state) {
//     case SINGLE_TAP:        register_code(KC_LGUI);   register_code(KC_RGHT);
//                           unregister_code(KC_RGHT); unregister_code(KC_LGUI); break;

//     case DOUBLE_TAP:        register_code(KC_LALT);   register_code(KC_DOWN);
//                           unregister_code(KC_DOWN); unregister_code(KC_LALT); break;
//   }
//   FVIM_pP_tap_state.state = 0;
// }
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
// static tap DVIM_uU_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void DVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
//   DVIM_uU_tap_state.state = cur_dance(state);
//   switch (DVIM_uU_tap_state.state) {
//     case SINGLE_TAP:        dvim("u"); break;
//     case DOUBLE_TAP:        dvim("U"); break;
//   }
//   DVIM_uU_tap_state.state = 0;
// }
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
// static tap DVIM_pP_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void DVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
//   DVIM_pP_tap_state.state = cur_dance(state);
//   switch (DVIM_pP_tap_state.state) {
//     case SINGLE_TAP:        dvim("p"); break;
//     case DOUBLE_TAP:        dvim("P"); break;
//   }
//   DVIM_pP_tap_state.state = 0;
// }
//                                                                                      //
// [tapdance] [ _dvim ] kc_p (dvim_pp)                                                  //
//                                                                                      //
//  d e l e t e   t o   e n d   o f   l i n e   /   e n d   o f   p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////




//
// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_Q (LOGOUT)                                                     //
// //                                                                                      //
// //  L O G O U T                                                                         //
// //                                                                                      //
// //  KC_Q:  @  LOGOUT CURRENT USER                                                       //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'LOGOUT' tap dance.
// static tap LOGOUT_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void LOGOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
//   LOGOUT_tap_state.state = cur_dance(state);
//   switch (LOGOUT_tap_state.state) {

//     case SINGLE_TAP://user lock screen
//                       register_code(KC_LCTL); register_code(KC_LGUI);
//                       tap_code(KC_Q);
//                       unregister_code(KC_LGUI); unregister_code(KC_LCTL);

//                     //user log out
//                       // (guessed by try and fail method)
//                       // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
//                       // if we add ALT, we don't have to answer any menu, we logout directly
//     case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_Q);

//                       unregister_code(KC_Q);
//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
//                       break;
//   }
// }

// void LOGOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (LOGOUT_tap_state.state) {
                     
//     case SINGLE_HOLD: break;
//   }
//   LOGOUT_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_q (logout)                                                     //
// //                                                                                      //
// //  l o g o u t                                                                         //
// //////////////////////////////////////////////////////////////////////////////////////////


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
// static tap HRESET_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void HRESET_finished (qk_tap_dance_state_t *state, void *user_data) {
//   HRESET_tap_state.state = cur_dance(state);
//   switch (HRESET_tap_state.state) {

//     case SINGLE_HOLD: // starts backlight blinking and then reset the keyboard for about 7 seconds
//                       reset_my_keyboard_function();
//                       break;
//   }
// }

// void HRESET_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (HRESET_tap_state.state) {
//     case SINGLE_HOLD:        break;
//   }
//   HRESET_tap_state.state = 0;
// }
//                                                                                      //
// [tapdance] [_powr] kc_r (hreset)                                                     //
//                                                                                      //
//  r e s e t                                                                           //
//////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_Z (SLEP_M)                                                     //
// //                                                                                      //
// //  M E N U   B A R   /    S L E E P   C O M P U T E R                                  //
// //                                                                                      //
// //  KC_Z:   *  MENU BAR                                                                 //
// //          @  SLEEP COMPUTER                                                           //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'SLEP_M' tap dance.
// static tap SLEP_M_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void SLEP_M_finished (qk_tap_dance_state_t *state, void *user_data) {
//   SLEP_M_tap_state.state = cur_dance(state);
//   switch (SLEP_M_tap_state.state) {
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F2);
//                       //_delay_ms(500);
//                       break;

// // [INFO] HOW TO SLEEP COMPUTER THROUGH KEYBOARD                            
// //  keystrokes for sleeping:  (guessed by try and fail method)
                      
//     case SINGLE_HOLD: register_code(KC_POWER);
//                    // without this delay, POWER doesn't work !!!   
//                       _delay_ms(500); 
//                       unregister_code(KC_POWER);
//                    // SEND_STRING("s");  // 's' for selecting button sleep but it's not necessary
//                       break;

//                       /*
//                       // this way doesn't work

//                       register_code(KC_LSFT);
//                       register_code(KC_POWER);
//                       _delay_ms(500); 
//                       */

//                    KC_EJCT keycode doesn't work with QMK, but with KarabinerElements works vey well
//                   /*register_code(KC_LSFT);   register_code(KC_LCTL); register_code(KC_EJCT);*/

// /////////////////////////////////////////////////////////////////////////////////////////////////// ###
// /*                                                                                                     */
// /*   KC_POWER works very well.  It makes appear shut down menu (Restart, Sleep, Cancel, Shut down)     */
// /*                                                                                                     */
// /*                          register_code(KC_POWER);                                                   */
// /*                                                                                                     */
// /////////////////////////////////////////////////////////////////////////////////////////////////// ###
//   }
// }

// void SLEP_M_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (SLEP_M_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_F2); unregister_code(KC_LCTL); break;
                     
//     case SINGLE_HOLD: /* if we unregister_code(KC_POWER) here, at SLEP_M_reset
//                          it will appear the POWER dialog box and 
//                          we have to press the related initial letter
//                          or chosing an option with the mouse.

//                          unregister_code(KC_POWER);
//                       */

//                       /*
//                       unregister_code(KC_EJCT); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
//                       */
// // [info] how to sleep computer through keyboard

//                       break;                       
//   }
//   SLEP_M_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_z (slep_m)                                                     //
// //                                                                                      //
// //  m e n u   b a r   /    s l e e p   c o m p u t e r                                  //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_X (KILA_D)                                                     //
// //                                                                                      //
// //  D O C K   B A R    /    F O R C E   T O   K I L L   C U R R E N T   A P P           //
// //                                                                                      //
// //  KC_X:   *  DOCK BAR                                                                 //
// //          @  KILL CURRENT APP                                                         //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'KILA_D' tap dance.
// static tap KILA_D_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void KILA_D_finished (qk_tap_dance_state_t *state, void *user_data) {
//   KILA_D_tap_state.state = cur_dance(state);
//   switch (KILA_D_tap_state.state) {

//     case SINGLE_TAP:  register_code(KC_LCTL);   register_code  (KC_F3); // DOCK BAR
//                       break;
//                       // SEND_STRING(SS_LALT(SS_LGUI("d")));
                            
//     case SINGLE_HOLD: 
//     case DOUBLE_TAP: 
//                       register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_ESC);
//                       break;

// // [INFO] HOW TO KILL CURRNT APP THROUGH KEYBOARD              
// //  keystrokes for kill current app:  (guessed by try and fail method)
//                       /* The KC_EJCT keycode doesn't work */
//                       /*
//                       register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
//                       _delay_ms(2000);
//                       unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
//                       */
//   }
// }

// void KILA_D_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (KILA_D_tap_state.state) {
//     case SINGLE_TAP:  unregister_code  (KC_F3); unregister_code(KC_LCTL);
//                       //unregister_code(KC_D); unregister_code(KC_LGUI); unregister_code(KC_LALT);
// // [info] how to kill currnt app through keyboard

//                       break;
                     
//     case SINGLE_HOLD: 
//     case DOUBLE_TAP: 
//                       unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT);
//                       unregister_code(KC_LSFT); 
//                       break;
          
//   }
//   KILA_D_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_x (kila_d)                                                     //
// //                                                                                      //
// //  d o c k   b a r    /    f o r c e   t o   k i l l   c u r r e n t   a p p           //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_C (KILM_T)                                                     //
// //                                                                                      //
// //  T O O L S   B A R   /   K I L L   M E N U                                           //
// //                                                                                      //
// //  KC_C:   *  TOOLS BAR                                                                //
// //          @  KILL MENU                                                                //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'KILM_T' tap dance.
// static tap KILM_T_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void KILM_T_finished (qk_tap_dance_state_t *state, void *user_data) {
//   KILM_T_tap_state.state = cur_dance(state);
//   switch (KILM_T_tap_state.state) {

//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F5); // TOOLS BAR
//                       break;
                            
//     case SINGLE_HOLD: register_code(KC_LALT); register_code(KC_LGUI); register_code(KC_ESC);
//                       break;

// // [INFO] HOW TO ACCESS KILL MENU THROUGH KEYBOARD
// //  keystrokes for kill menu:  (guessed by try and fail method)
//                       /* The KC_EJCT keycode doesn't work */
//                       /*
//                       register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
//                       _delay_ms(2000);
//                       unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
//                       */
// // [info] how to access kill menu through keyboard
//   }
// }

// void KILM_T_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (KILM_T_tap_state.state) {

//     case SINGLE_TAP:  unregister_code(KC_F5); unregister_code(KC_LCTL);
//                       break;
                     
//     case SINGLE_HOLD: 
//                       unregister_code(KC_ESC); unregister_code(KC_LGUI); unregister_code(KC_LALT); 
//                       break;      
//   }
//   KILM_T_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_c (kilm_t)                                                     //
// //                                                                                      //
// //  t o o l s   b a r   /   k i l l   m e n u                                           //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_V (SHUT_S)                                                     //
// //                                                                                      //
// //  S T A T U S   B A R    /    S H U T   D O W N                                       //
// //                                                                                      //
// //  KC_V:   *  STATUS BAR                                                               //
// //          @  SHUT DOWN (SET VOL TO 1 AND SHUT DOWN)                                   //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'SHUT_S' tap dance.
// static tap SHUT_S_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void SHUT_S_finished (qk_tap_dance_state_t *state, void *user_data) {
//   SHUT_S_tap_state.state = cur_dance(state);
//   switch (SHUT_S_tap_state.state) {

// // [SYSTEM PREFERENCES]
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F8);  // STATUS BAR 
//                       break;
// // [system preferences]

//     case SINGLE_HOLD:                        
//     case DOUBLE_TAP:  volumeSetToLevel(1);

//                   //  keystrokes for shutting down:  (guessed by try and fail method)
//                       register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);

//                       register_code(KC_POWER); unregister_code(KC_POWER);

//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);   

//                       break;

// // [OLDWAY]
//                    // Another way for shutting down, but much less elegant:
//                    // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
//                    // register_code(KC_ENT); unregister_code(KC_ENT);
// // [oldway]

// // [INFO]
//                    /* The KC_EJCT keycode doesn't work */
//                       /*
//                       register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_EJCT);
//                       _delay_ms(2000);
//                       unregister_code(KC_EJCT);
//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
//                       */
// // [info]
//   }
// }

// void SHUT_S_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (SHUT_S_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_F8); unregister_code(KC_LCTL);
//                       break;
                     
//     case SINGLE_HOLD: 
//     case DOUBLE_TAP:  break;
                            
//   }
//   SHUT_S_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_v (shut_s)                                                     //
// //                                                                                      //
// //  s t a t u s   b a r    /    s h u t   d o w n                                       //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_B (RSTT_F)                                                     //
// //                                                                                      //
// //  F L O A T I N G   W I N D O W   /   R E S T A R T                                   //
// //                                                                                      //
// //  KC_B:  *  FLOATING WINDOW,                                                          //
// //         @  RESTART                                                                   //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'RSTT_F' tap dance.
// static tap RSTT_F_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void RSTT_F_finished (qk_tap_dance_state_t *state, void *user_data) {
//   RSTT_F_tap_state.state = cur_dance(state);
//   switch (RSTT_F_tap_state.state) {

// // [SYSTEM PREFERENCES]
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_F6);
// // [system preferences]
//                       break;
                            
//     case SINGLE_HOLD: 
//     case DOUBLE_TAP:  
//                   //  keystrokes for restarting:  (guessed by try and fail method)
//                       register_code(KC_LCTL); register_code(KC_LGUI);

//                       register_code(KC_POWER); unregister_code(KC_POWER);
                      
//                       unregister_code(KC_LGUI); unregister_code(KC_LCTL);

//                       break;

// // [OLDWAY]
//                    // Another way for restarting, but much less elegant:
//                    // register_code(KC_POWER); _delay_ms(2000); unregister_code(KC_POWER);
//                    // register_code(KC_R); unregister_code(KC_R);
// // [oldway]                      

//                    /* The KC_EJCT keycode doesn't work */
//                       /*
//                       register_code(KC_LCTL); register_code(KC_LGUI); register_code(KC_EJCT);
//                       _delay_ms(2000);
//                       unregister_code(KC_EJCT); unregister_code(KC_LGUI); unregister_code(KC_LCTL);
//                       */

//   }
// }

// void RSTT_F_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (RSTT_F_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_F6); unregister_code(KC_LCTL);
//                       break;
                     
//     case SINGLE_HOLD: 
//     case DOUBLE_TAP:  break;
                            
//   }
//   RSTT_F_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_b (rstt_f)                                                     //
// //                                                                                      //
// //  f l o a t i n g   w i n d o w   /   r e s t a r t                                   //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_J (RG_ZOIN)                                                    //
// //                                                                                      //
// //  R I G H T    S H I F T    /    Z O O M   I N                                        //
// //                                                                                      //
// //  KC_J:  *  ZOOM IN,                                                                  //
// //         @  RIGHT SHIFT                                                               //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'RG_ZOIN' tap dance.
// static tap RG_ZOIN_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void RG_ZOIN_finished (qk_tap_dance_state_t *state, void *user_data) {
//   RG_ZOIN_tap_state.state = cur_dance(state);
//   switch (RG_ZOIN_tap_state.state) {

// // [SYSTEM PREFERENCES]    
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_EQL);
//                       break;
// // [system preferences]                      

//     case SINGLE_HOLD: register_code(KC_RSFT);
//                       break;
//   }
// }

// void RG_ZOIN_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (RG_ZOIN_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_EQL);
//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
//                       break;
                     
//     case SINGLE_HOLD: unregister_code(KC_RSFT);
//                       break;                       
//   }
//   RG_ZOIN_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_j (RG_ZOIN)                                                    //
// //                                                                                      //
// //  r i g h t    s h i f t    /    z o o m   i n                                        //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_K (RA_ZOUT)                                                    //
// //                                                                                      //
// //  R I G H T    G U I     /     Z O O M    O U T                                       //
// //                                                                                      //
// //  KC_K:  *  ZOOM OUT,                                                                 //
// //         @  RIGHT GUI                                                                 //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'RA_ZOUT' tap dance.
// static tap RA_ZOUT_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void RA_ZOUT_finished (qk_tap_dance_state_t *state, void *user_data) {
//   RA_ZOUT_tap_state.state = cur_dance(state);
//   switch (RA_ZOUT_tap_state.state) {

// // [SYSTEM PREFERENCES]
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_MINS);
//                       break;
// // [system preferences]

//     case SINGLE_HOLD: register_code(KC_RGUI);
//                       break;
//   }
// }

// void RA_ZOUT_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (RA_ZOUT_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_MINS);
//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
//                       break;
                     
//     case SINGLE_HOLD: unregister_code(KC_RGUI);
//                       break;                       
//   }
//   RA_ZOUT_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_k (RA_ZOUT)                                                    //
// //                                                                                      //
// //  r i g h t    g u i     /     z o o m    o u t                                       //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_L (RS_ZOOM)                                                    //
// //                                                                                      //
// //  R I G H T    A L T    /    Z O O M    O N / O F F                                   //
// //                                                                                      //
// //  KC_L:  *  ZOOM ON/OFF,                                                              //
// //         @  RIGHT ALT                                                                 //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'RS_ZOOM' tap dance.
// static tap RS_ZOOM_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void RS_ZOOM_finished (qk_tap_dance_state_t *state, void *user_data) {
//   RS_ZOOM_tap_state.state = cur_dance(state);
//   switch (RS_ZOOM_tap_state.state) {

// // [SYSTEM PREFERENCES]
//     case SINGLE_TAP:  register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
//                       register_code(KC_SCLN);
//                       break;
// // [system preferences]

//     case SINGLE_HOLD: register_code(KC_RALT);
//                       break;
//   }
// }

// void RS_ZOOM_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (RS_ZOOM_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_SCLN);
//                       unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LCTL);
//                       break;
                     
//     case SINGLE_HOLD: unregister_code(KC_RALT);
//                       break;                       
//   }
//   RS_ZOOM_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_l (RS_ZOOM)                                                    //
// //                                                                                      //
// //  r i g h t    a l t    /    z o o m    o n / o f f                                   //
// //////////////////////////////////////////////////////////////////////////////////////////


// //////////////////////////////////////////////////////////////////////////////////////////
// //                                                                                      //
// // [TAPDANCE] [_POWR] KC_SP (RC_INCO)                                                   //
// //                                                                                      //
// //  R I G H T    C O N T R O L     /     I N V E R T    C O L O R S                     //
// //                                                                                      //
// //  KC_SP:  *  INVERT COLORS,                                                           //
// //          @  RIGHT CONTROL                                                            //
// //                                                                                      //
// //////////////////////////////////////////////////////////////////////////////////////////
// //instantalize an instance of 'tap' for the 'RC_INCO' tap dance.
// static tap RC_INCO_tap_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void RC_INCO_finished (qk_tap_dance_state_t *state, void *user_data) {
//   RC_INCO_tap_state.state = cur_dance(state);
//   switch (RC_INCO_tap_state.state) {

// // [SYSTEM PREFERENCES]
//     case SINGLE_TAP:  register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LGUI);
//                       register_code(KC_8);
//                       break;
// // [system preferences]

//     case SINGLE_HOLD: register_code(KC_RCTL);
//                       break;
//   }
// }

// void RC_INCO_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (RC_INCO_tap_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_8);
//                       unregister_code(KC_LGUI); unregister_code(KC_LCTL); unregister_code(KC_LSFT);
//                       break;
                     
//     case SINGLE_HOLD: unregister_code(KC_RCTL);
//                       break;                       
//   }
//   RC_INCO_tap_state.state = 0;
// }
// //                                                                                      //
// // [tapdance] [_powr] kc_sp (rc_inco)                                                   //
// //                                                                                      //
// //  r i g h t    c o n t r o l     /     i n v e r t    c o l o r s                     //
// //////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ p o w r ]    l a y e r                  //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// my own tap_dance harvest                                                             //
//                                                                                      //
// DOUBLE FUNCTION TAP DANCE PERSONALIZATION SECTION END                                //
//////////////////////////////////////////////////////////////////////////////////////////




















































  
  // TAP DANCE KEYCODES ACCESSIBLE FROM _NUMB LAYER 02
   // R_DOEU  // dolar & euro
  // ,B_EQPE  // equal & percent
  // tap dance keycodes accessible from _numb layer 02

  // TAP DANCE KEYCODES ACCESSIBLE FROM _FVIM LAYER 03
  // (i.e. KC_U: *'begin of line'/**'begin of paragraph')
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
  // ,FVIM_uU ,FVIM_pP
  // ,FVIM_iI ,FVIM_oO
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥
  ,DVIM_uU ,DVIM_pP
  // tap dance keycodes accessible from _fvim layer 03
















































  