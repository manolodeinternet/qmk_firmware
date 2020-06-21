
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ N U M B ]  L A Y E R                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//

// [INFO]
// ACTION_TAP_DANCE_DUAL_ROLE(kc, layer): Sends the kc keycode when tapped once, ...
//   ... or moves to layer. (this is similar to the keycode: 'TO' layer)
// [info]
//
// [EXAMPLES]
// [TD_ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS)
//
// [A_CAPS]       = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// [examples]
//
// Other declarations would go here, separated by commas, if you have them
//


/*
// [GHERKIN]
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] KC_N (SLNUMB)                                                     //
//                                                                                      //
//  S L A S H  -  N U M B E R S   L A Y E R   O F F                                     //
//                                                                                      //
//  KC_N:  * KC_KP_SLASH = KC_PSLS,                                                     //
//        @@ [_NUMB] OFF                                                                //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [UNDERSTANDING]
// When we are holding 'B' key under [_NUMB] layer, ('B' is the [_NUMB] trigger)...
// ... if we hold down 'N' key and then release 'B' key first ...
// ... when we release 'N' key, what we have just done is setting [_NUMB] ON !!!
// 
// Until we set off again, by ...
// ... double holding 'B' or 'N' key !!!
// [understanding]
//
//instantalize an instance of 'tap' for the 'SLNUMB' tap dance.
static tap SLNUMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SLNUMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  SLNUMB_tap_state.state = cur_dance(state);
  switch (SLNUMB_tap_state.state) {

    case SINGLE_TAP:    register_code(KC_PSLS); break;

    case SINGLE_HOLD:// I left it intentionally empty for allowing 'SET [_NUMB] ON' works properly
                        break;

    case DOUBLE_HOLD:// SET [_NUMB] OFF
                        numbers_is_set = false;

// next line is automatically executed when layer_clear() is done and _DFLT is activated
//                      numbers_is_active = false;
                        layer_clear();
                        break;      
  }
}

void SLNUMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SLNUMB_tap_state.state) {

    case SINGLE_TAP:    unregister_code(KC_PSLS); break;

    case SINGLE_HOLD:// SET [_NUMB] ON
                        numbers_is_set = true;
                        layer_on(_NUMB);
                        break;

    case DOUBLE_HOLD:   break;
  }
  SLNUMB_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] kc_n (slnumb)                                                     //
//                                                                                      //
//  s l a s h  -  n u m b e r s   l a y e r   o f f                                     //
//////////////////////////////////////////////////////////////////////////////////////////
[gherkin]
*/


//
/* WE DON'T NEED 'SETNMB' TAPDANCE ANY MORE SINCE WE USE 'TT(_NUMB)' WITH 'SIMPLE_30_LAYOUT' LAYOUT
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_NUMB] TH_R3 (SETNMB)                                                    //
//                                                                                      //
//  S E T   N U M B E R S   L A Y E R   U P    -    N U M B E R S   L A Y E R   O F F   //
//                                                                                      //
//  TH_R1: * NUMBERS LAYER OFF,                                                         //
//         @ SET NUMBERS LAYER UP                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// [UNDERSTANDING]
// When we are holding 'TH_R3' key under [_NUMB] layer, ('TH_L3' is the [_NUMB] trigger)...
// ... if we hold down 'TH_R3' key and then release 'TH_L3' key first ...
// ... when we release 'TH_R3' key, what we have just done is setting [_NUMB] ON !!!
// 
// Until we set off again, by ...
// ... simple tapping 'TH_R3' key !!!
// [understanding]
//
//instantalize an instance of 'tap' for the 'SETNMB' tap dance.
static tap SETNMB_tap_state = {
  .is_press_action = true,
  .state = 0
};

void SETNMB_finished (qk_tap_dance_state_t *state, void *user_data) {
  SETNMB_tap_state.state = cur_dance(state);
  switch (SETNMB_tap_state.state) {

    case SINGLE_TAP:// SET [_NUMB] OFF
                        numbers_is_set = false;

// next line is automatically executed when layer_clear() is done and _DFLT is activated
//                      numbers_is_active = false;
                        layer_clear();
                        break;      

//  We don't consider ...  
//  case GUI_plus_HOLD:
    case SINGLE_HOLD:// I left it intentionally empty for allowing 'SET [_NUMB] ON' works properly
                        break;
  }
}

void SETNMB_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (SETNMB_tap_state.state) {

    case SINGLE_TAP:    break;

//  We don't consider ...  
//  case GUI_plus_HOLD:
    case SINGLE_HOLD:// SET [_NUMB] ON
                        numbers_is_set = true;
                        layer_on(_NUMB);
                        break;
  }
  SETNMB_tap_state.state = 0;
}
//                                                                                      //
// [tapdance] [_numb] th_r3 (setnmb)                                                    //
//                                                                                      //
//  s e t   n u m b e r s   l a y e r   u p    -    n u m b e r s   l a y e r   o f f   //
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//             t a p   d a n c e   f o r    [ _ n u m b ]  l a y e r                    //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//  we don't need 'setnmb' tapdance any more since we use 'tt(_numb)' with 'SIMPLE_30_LAYOUT' layout */
//


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥




//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _AVIM ] KC_U (AVIM_uU)                                                  //
//                                                                                      //
//  S E L E C T   T O   B E G I N N I N G   O F   L I N E    /    P A R A G R A P H     //
//                                                                                      //
//  KC_U:  * SELECT TO BEGINING OF LINE                                                 //
//        ** SELECT TO BEGINING OF PARAGRAPH                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'AVIM_uU' tap dance.
/*
static tap AVIM_uU_tap_state = {
  .is_press_action = true,
  .state = 0
};

void AVIM_uU_function (qk_tap_dance_state_t *state, void *user_data) {
  AVIM_uU_tap_state.state = cur_dance(state);
  switch (AVIM_uU_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LGUI);   register_code(KC_LEFT);
                          
                          unregister_code(KC_LEFT); unregister_code(KC_LGUI);
                          unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LALT);   register_code(KC_UP);
                         
                         unregister_code(KC_UP); unregister_code(KC_LALT);
                         unregister_code(KC_LSFT);
                            break;
  }
  AVIM_uU_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [ _avim ] kc_u (avim_uu)                                                  //
//                                                                                      //
//  s e l e c t   t o   b e g i n n i n g   o f   l i n e    /    p a r a g r a p h     //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [ _AVIM ] KC_P (AVIM_pP)                                                  //
//                                                                                      //
//  S E L E C T   T O   E N D   O F   L I N E    /    E N D   O F   P A R A G R A P H   //
//                                                                                      //
//  KC_P:  * SELECT TO END OF LINE                                                      //
//        ** SELECT TO END OF PARAGRAPH                                                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//instantalize an instance of 'tap' for the 'AVIM_pP' tap dance.
/*
static tap AVIM_pP_tap_state = {
  .is_press_action = true,
  .state = 0
};

void AVIM_pP_function (qk_tap_dance_state_t *state, void *user_data) {
  AVIM_pP_tap_state.state = cur_dance(state);
  switch (AVIM_pP_tap_state.state) {
    case SINGLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LGUI);   register_code(KC_RGHT);

                          unregister_code(KC_RGHT); unregister_code(KC_LGUI); 
                          unregister_code(KC_LSFT);
                            break;

    case DOUBLE_TAP:        register_code(KC_LSFT);
                            register_code(KC_LALT);   register_code(KC_DOWN);
                          
                          unregister_code(KC_DOWN); unregister_code(KC_LALT);
                          unregister_code(KC_LSFT);
                            break;
  }
  AVIM_pP_tap_state.state = 0;
}
*/
//                                                                                      //
// [tapdance] [ _avim ] kc_p (avim_pp)                                                  //
//                                                                                      //
//  s e l e c t   t o   e n d   o f   l i n e    /    e n d   o f   p a r a g r a p h   //
//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
//              t a p   d a n c e   f o r  -  v   i   m  -  l a y e r s                 //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////



//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


// [_NUMB]&[_SYMB]LAYER
// ,[G_DOEU] = ACTION_TAP_DANCE_DOUBLE(KC_DLR,  SYM_EURO)                                      // $ EURO
// ,[SETNMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SETNMB_finished, SETNMB_reset)
//
// [GHERKIN]
// ,[SLNUMB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNUMB_finished, SLNUMB_reset)
// [gherkin]


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

//
// [UNDERSTANDING]
// TIME  50: is too dificult to typing   so fast !!!
// TIME 100 is a right time for typing very fast !!!
// [understanding]
//

/*
// [_AVIM] LAYER
// ,[AVIM_uU] = ACTION_TAP_DANCE_FN(AVIM_uU_function)
// ,[AVIM_pP] = ACTION_TAP_DANCE_FN(AVIM_pP_function)
// [_avim] layer
*/


//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥


// [_AVIM] LAYER
// ,[AVIM_uU] = ACTION_TAP_DANCE_FN(AVIM_uU_function)
// ,[AVIM_pP] = ACTION_TAP_DANCE_FN(AVIM_pP_function)
// [_avim] layer



