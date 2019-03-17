/* GHERKIN fromn scratch -  KEYMAP.C */

// gherkin keymap big.c

/* Copyright 2017 Brian Fong
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H


// defining layers
#define GHKN 0   // gherkin BASE       layer
#define NMBR 1   // numbers            layer
#define SYMB 2   // symbols            layer

#define FNCT 3   // functions          layer
#define XFNC 4   // eXtended Functions layer

#define XTND 5   // eXtended default   layer
#define APPS 6   // apps               layer

#define PVIM 7   // Personal  VIM layer
#define DVIM 8   // Delete    VIM layer
#define SVIM 9   // Select    VIM layer
#define XVIM 10  // eXtra     VIM layer
#define ZVIM 11  // Z_extra   VIM layer
#define AVIM 12  // Alignment VIM layer

#define MOUS 13  // mouse      layer

#define SUSR 14  // Super USeR layer for productivity

#define BLIT 15  // BackLIghT  layer

// defining readibility codes
#define _______	KC_TRNS
#define NO_KEY  KC_NO    // XXXXXX KC_NO

// defining levels of backlighting
#define BL_OFF  0
#define BL_MIN  1
#define BL_MAX 15
#define BL_LOW  3
#define BL_MED  7
#define BL_HGH 12

#define BL_GHKN  2
#define BL_NMBR  5
#define BL_SYMB  7
#define BL_FNCT  7
#define BL_XFNC  9
#define BL_XTND 10
#define BL_APPS 12

#define BL_PVIM  5
#define BL_DVIM 15
#define BL_SVIM 10
#define BL_XVIM  7
#define BL_ZVIM  9
#define BL_AVIM  7

#define BL_MOUS  3
#define BL_SUSR 15

#define BL_CAPS 15
#define BL_RESE 15

// defining backlight breathing levels
#define BR_CAPS  0
#define BR_NMBR  2
#define BR_DFLT  6

// defining Unicode Characters codes
#define UC_A_AC  0x0301  // ´  acute accent for using with UC(0x...)

// defining XTND commands
#define PREV_APP      LSFT(LGUI(KC_TAB))
#define NEXT_APP           LGUI(KC_TAB)
#define PREV_WIN      LSFT(LGUI(KC_GRAV))
#define NEXT_WIN           LGUI(KC_GRAV)
#define PREV_TAB      LSFT(LCTL(KC_TAB))
#define NEXT_TAB           LCTL(KC_TAB)

#define SPT_SIRI           LGUI(KC_SPC)

#define DESK                    KC_F5
#define APP_WIND           LCTL(KC_DOWN)
#define MISS_CTL           LCTL(KC_UP)
#define SPEAK    LCTL(LALT(LGUI(KC_H)))
#define DASHBRD                 KC_F18
#define ACTV_WIN           LCTL(KC_F4)

/////////////// TAP DANCE SECTION START ///////////////
//Tap Dance Declarations (list of my tap dance configurations)
// enum tap_dance_keycodes {
enum custom_keycodes {
// SAFE_RANGE
	FUN_MACRO = 0

// tap dance states management
// enums used to clearly convey the state of the tap dance
   ,SINGLE_TAP           =  1
   ,SINGLE_HOLD          =  2
   ,DOUBLE_TAP           =  3
   ,DOUBLE_HOLD          =  4
   ,DOUBLE_SINGLE_TAP    =  5
   ,TRIPLE_TAP           =  6
   ,TRIPLE_HOLD          =  7
   ,TRIPLE_SINGLE_TAP    =  8
   ,QUADRUPLE_TAP        =  9
   ,QUADRUPLE_HOLD       = 10
   ,QUADRUPLE_SINGLE_TAP = 11
   ,QUINTUPLE_TAP        = 12
   ,QUINTUPLE_HOLD       = 13
   ,QUINTUPLE_SINGLE_TAP = 14

// tap dance for layers accesible from: ● GKHN 〖 gherkin base layer 〗                 〖 〗 〖 〗  〖 〗  
   ,Q_SUSR
   ,W_MOUS
   ,R_APPS  // triple_hold for RESET_keyboard functionaa
   ,U_APPS  // diaeresis management
   ,P_SUSR
   ,A_CAPS
   ,F_CAPS
   ,B_NMBR
   ,N_NMBR
   ,DONMBR  // into NMBR layer, it's necessary to have NMBR layer key for disconnect this layer when fixed, having "dot key" and ...
   ,SLNMBR  // ... and "slash key" at the same position

// tap dance split symbols keys ● SYMB 〖 symbols layer 〗
   ,BSL_CI  // backslash & circumflex accent
   ,QUOT_D  // quote     & double quote
   ,DO_EUR  // dolar     & euro
   ,EXCLAM  // american exclamation mark & inverted exclamation mark
   ,QUESTI  // american question    mark & inverted question    mark

// tap dance for accents ● GKHN 〖 gherkin base layer 〗 - (acute, grave, diaeresis, circumflex, tilde)
   ,I_CIRC  // circumflex accent      'â'
   ,J_ACUT  // acute / grave accent   'á' / 'à'
   ,N_TILD  // tilde accent           'ñ'
  //U_APPS  // diaeresis accent       'ä'       // U_APPS is defined above

// tap dance for unfolding keys into two functions in PVIM layers (i.e. KC_U: ●'begin of line'/●●'begin of paragraph')


// tap dance for functions


// tap dance backlight
   ,BCKLIT

}; // enum custom_keycodes

// global variables
   uint8_t caps_control_backlight = 0;
   uint8_t disabled_caps_before_accent = 0;

   uint8_t breathing_period = BREATHING_PERIOD;
   uint8_t level_of_breathing_before = 0;


// TAP DANCE GENERAL SETUP SECTION START //
typedef struct {
	bool is_press_action;
	int  state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
	if (state->count == 1) 
	{
	 if (state->interrupted || !state->pressed) 
	 // IF   the key has been pressed only once 
	 // AND  the key has been interrupted by pressing another key after it
	 // OR   the key is not pressed at present
	   return SINGLE_TAP;
     else 
     // IF  the key has been pressed only once
     // AND the key has not been interrupted
     // AND the key is still pressed	
       return SINGLE_HOLD;
    }
    else 
    { 
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
          		return DOUBLE_HOLD;
            else
            // IF  the key has been pressed twice
            // AND the key has not being interrupted by pressing another key
            // AND the key is not pressed at present
              return DOUBLE_TAP;
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
}
// TAP DANCE GENERAL SETUP SECTION END //


///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION START /////
// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instanalize an instance of 'tap' for the 'Q_SUSR' tap dance.


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   Q _ S U S R   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'Q_SUSR' tap dance.
static tap Q_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
};

void Q_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  Q_SUSRtap_state.state = cur_dance(state);
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:        register_code(KC_Q); break;
    case SINGLE_HOLD:       layer_on(SUSR); break;
    case DOUBLE_TAP:        register_code(KC_TAB); break;
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_TAB); break;
  }
}

void Q_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (Q_SUSRtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_Q); break;
    case SINGLE_HOLD:       layer_off(SUSR); break;
    case DOUBLE_TAP:        unregister_code(KC_TAB); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_TAB); break;
  }
  Q_SUSRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   Q _ S U S R   【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   W _ M O U S   『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'W_MOUS' tap dance.
static tap W_MOUStap_state = {
  .is_press_action = true,
  .state = 0
};

void W_MOUS_finished (qk_tap_dance_state_t *state, void *user_data) {
  W_MOUStap_state.state = cur_dance(state);
  switch (W_MOUStap_state.state) {
    case SINGLE_TAP:        register_code(KC_W);
                            break;
    case SINGLE_HOLD:       layer_on(MOUS);
                            break;
    case DOUBLE_TAP:        register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W);
                            break;
    case DOUBLE_HOLD:       register_code(KC_NO);
                            break;
    case DOUBLE_SINGLE_TAP: register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W);
                            break;
    case TRIPLE_TAP:        register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W); unregister_code(KC_W);
                            register_code(KC_W);
                            break;
  }
}

void W_MOUS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (W_MOUStap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_W); break;
    case SINGLE_HOLD:       layer_off(MOUS); break;
    case DOUBLE_TAP:        unregister_code(KC_W); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_W); break;
    case TRIPLE_TAP:        unregister_code(KC_W); break;
  }
  W_MOUStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   W _ M O U S  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
















// LIMPIAR DE BASURA ACERCA DE LAYER BACKLIGHT ESTE TROZO



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』   KC_A  -  C A P S L O C K  -  KC_A  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'A_CAPS' tap dance.

void capslock_finished_function(void) { // MY CAPSLOCK FINISHED FUNCTION
  if (caps_control_backlight == 0)
  {
/*
      register_code(KC_CAPS);
      //SEND_STRING("\n1) ccb==0->subir brillo y ccb=1");
      SEND_STRING("\n1");
      SEND_STRING(") c");


      SEND_STRING(SS_TAP(X_HOME));
      send_string_keycodes()
*/

      //unregister_code(KC_LCAP);
      SEND_STRING(SS_DOWN(X_CAPSLOCK));
      register_code(KC_LCAP);



      caps_control_backlight  = 1;
      breathing_period_set(BR_CAPS);
      breathing_enable();

      /*
      backlight_level_before_caps_look = get_backlight_level();
      backlight_level(BL_CAPS);
      */
  }
  else
  {
       //if (caps_control_backlight == 1)
       //{
/*
         register_code(KC_CAPS);
         //SEND_STRING("\n2) CCB==1->BAJAR BRILLO AL ANTERIOR Y CCB=0");
         SEND_STRING("\n2");
         SEND_STRING(") c");

        SEND_STRING(SS_TAP(X_HOME));

*/


        //unregister_code(KC_LCAP);
        SEND_STRING(SS_DOWN(X_CAPSLOCK));
        register_code(KC_LCAP);



         caps_control_backlight  = 0;
         breathing_period_set(BR_DFLT);
         breathing_disable();

         /*
         backlight_level(backlight_level_before_caps_look);
         */
       //}
  }
} // MY CAPSLOCK FINISHED FUNCTION

void capslock_reset_function(void) {  // MY CAPSLOCK RESET FUNCTION
  unregister_code(KC_CAPS); SEND_STRING(SS_UP(X_CAPSLOCK));
}  // MY CAPSLOCK RESET FUNCTION











void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (caps_control_backlight == 1)
    {
    //CAPS_LOCK tap
      SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
      register_code(KC_LCAP);            // press
      unregister_code(KC_CAPS);          // release
      SEND_STRING(SS_UP(X_CAPSLOCK));    // release
      caps_disabled_before_accent = 1;
    }
} // MY DISABLE_CAPSLOCK_BEFORE_ACCENTS_FUNCTION

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (caps_disabled_before_accent == 1)
    {
    //CAPS_LOCK tap
      SEND_STRING(SS_DOWN(X_CAPSLOCK));  // press
      register_code(KC_LCAP);            // press
      unregister_code(KC_CAPS);          // release
      SEND_STRING(SS_UP(X_CAPSLOCK));    // release
      caps_disabled_before_accent = 0;
  }
} // MY ENABLE_CAPSLOCK_AFTER_ACCENTS_FUNCTION















static tap A_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void A_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  A_CAPStap_state.state = cur_dance(state);
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_A); break;
    case SINGLE_HOLD: register_code(KC_LSFT);
                      //breathing_toggle();

                      break;

    case DOUBLE_TAP:        capslock_finished_function();  // MY CAPSLOCK FINISHED FUNCTION (the function defined just above)
                            break;
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); break;

    case TRIPLE_TAP:        register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); break;
    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); unregister_code(KC_A);
                            register_code(KC_A); break;

  }
}

void A_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (A_CAPStap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_A); break;
    case SINGLE_HOLD:       unregister_code(KC_LSFT); break;

    case DOUBLE_TAP:        capslock_reset_function();  // MY CAPSLOCK RESET FUNCTION (the function defined just above)
                            break;

    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_A); break;

// [FIXTHIS] TRIPLE_TAP ... TRIPLE_SINGLE_TAP is missing
    
  }
  A_CAPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】   KC_A  -  C A P S L O C K  -  KC_A  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  KC_J   -   A C U T E    &   G R A V E    A C C E N T    -   KC_J  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'J_ACUT' tap dance.

void acute_finished_function(void) {
  register_code(KC_LALT); register_code(KC_E);
}
void acute_reset_function(void) {
  unregister_code(KC_E); unregister_code(KC_LALT);
}

static tap J_ACUTtap_state = {
  .is_press_action = true,
  .state = 0
};

void J_ACUT_finished (qk_tap_dance_state_t *state, void *user_data) {
  J_ACUTtap_state.state = cur_dance(state);
  switch (J_ACUTtap_state.state) {
    case SINGLE_TAP:        register_code(KC_J); break;
    case SINGLE_HOLD:       register_code(KC_RGUI); break;

    case DOUBLE_TAP:        disable_capslock_before_accents_function(); // caps_lock doesn't affect accent
                            acute_finished_function(); 
                            break;  // acute accent

    case DOUBLE_HOLD:       backlight_level_before_changing_layer = get_backlight_level();
                            backlight_level(BL_HGH);
                            layer_on(BLIT);
                            break;

    case DOUBLE_SINGLE_TAP: disable_capslock_before_accents_function(); // caps_lock doesn't affect accent
                            acute_finished_function();
                            break;  // acute accent


    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_GRAVE); break;  // grave accent
    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_J); unregister_code(KC_J);
                            register_code(KC_J); unregister_code(KC_J);
                            register_code(KC_J); break;
  }
}

void J_ACUT_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (J_ACUTtap_state.state) {
    case SINGLE_TAP:        unregister_code(KC_J); break;
    case SINGLE_HOLD:       unregister_code(KC_RGUI); break;

    case DOUBLE_TAP:        acute_reset_function();
                            enable_capslock_after_accents_function();
                            break;

    case DOUBLE_HOLD:       backlight_level(backlight_level_before_changing_layer);
                            layer_off(BLIT);
                            break;

    case DOUBLE_SINGLE_TAP: acute_reset_function(); 
                            enable_capslock_after_accents_function();
                            break;

    case TRIPLE_TAP:        unregister_code(KC_GRAVE); unregister_code(KC_LALT); break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_J); break;
  }
  J_ACUTtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  KC_J   -   A C U T E    &   G R A V E    A C C E N T    -   KC_J  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】




// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  KC_F  -  C A P S L O C K  -  KC_F 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'F_CAPS' tap dance.
static tap F_CAPStap_state = {
  .is_press_action = true,
  .state = 0
};

void F_CAPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  F_CAPStap_state.state = cur_dance(state);
  switch (F_CAPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_F); break;
    case SINGLE_HOLD: register_code(KC_LGUI); break;

    case DOUBLE_TAP:        capslock_finished_function(); break;  // MY CAPSLOCK FINISHED FUNCTION
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F); register_code(KC_F); break;


    case TRIPLE_TAP:        register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;
    case TRIPLE_HOLD:       register_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); unregister_code(KC_F);
                            register_code(KC_F); break;
  }
}

void F_CAPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (F_CAPStap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_F); break;
    case SINGLE_HOLD: unregister_code(KC_LGUI); break;

    case DOUBLE_TAP:        capslock_reset_function(); break;  // MY CAPSLOCK RESET FUNCTION
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_F); break;

    case TRIPLE_TAP:        unregister_code(KC_F); break;
    case TRIPLE_HOLD:       unregister_code(KC_NO); break;
    case TRIPLE_SINGLE_TAP: unregister_code(KC_F); break;

  }
  F_CAPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  KC_F  -  C A P S L O C K  -  KC_F  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』  C I R C U M F L E X    A C C E N T  『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'I_CIRC' tap dance.
static tap I_CIRCtap_state = {
  .is_press_action = true,
  .state = 0
};

void I_CIRC_finished (qk_tap_dance_state_t *state, void *user_data) {
  I_CIRCtap_state.state = cur_dance(state);
  switch (I_CIRCtap_state.state) {
    case SINGLE_TAP:  register_code(KC_I); break;
    case SINGLE_HOLD: register_code(KC_NO); break;

    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_I); break;  // circumflex accent
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_LALT); register_code(KC_I); break;
  }
}

void I_CIRC_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (I_CIRCtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_I); break;
    case SINGLE_HOLD: unregister_code(KC_NO); break;

    case DOUBLE_TAP:        unregister_code(KC_I); unregister_code(KC_LALT); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_I); unregister_code(KC_LALT); break;
  }
  I_CIRCtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  C I R C U M F L E X    A C C E N T  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   R _ A P P S     -   R E S E T   -   R _ A P P S  『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'R_APPS' tap dance.
static tap R_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void R_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  R_APPStap_state.state = cur_dance(state);
  switch (R_APPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_R); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_APPS);  // zero backlight
                      layer_on(APPS);
                      register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_F16); break;

    case DOUBLE_TAP:  register_code(KC_R); unregister_code(KC_R); register_code(KC_R); break;
    case DOUBLE_HOLD: layer_on(APPS);
                      register_code(KC_LSFT); register_code(KC_LCTL); register_code(KC_LALT); register_code(KC_LGUI);
                      register_code(KC_F17); break;

    case DOUBLE_SINGLE_TAP: register_code(KC_R); unregister_code(KC_R); register_code(KC_R); break;
    case TRIPLE_TAP:        register_code(KC_NO); break;


///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎
///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎    _delay_ms(milliseconds)     💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎

//    case DOUBLE_SINGLE_TAP: _delay_ms(1000); register_code(KC_R); break;

///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎///// 💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎💎



// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀//// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀    reset_keyboard();   🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀

    case TRIPLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      // starts backlight triple blink
                      backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      backlight_level(BL_RESE);
                      _delay_ms(50);
                      backlight_level(BL_MIN);
                      _delay_ms(100);
                      // ends backlight triple blink
                      reset_keyboard();
                      backlight_level(backlight_level_before_changing_layer);
                      break;

// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀//// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀///// 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀
  }
}

void R_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (R_APPStap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_R); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      /*layer_off(APPS);*/
                      unregister_code(KC_F16); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                      unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                      layer_off(APPS); break;

    case DOUBLE_TAP:        unregister_code(KC_R);  break;
    case DOUBLE_HOLD:       unregister_code(KC_F17); unregister_code(KC_LGUI); unregister_code(KC_LALT);
                            unregister_code(KC_LCTL); unregister_code(KC_LSFT);
                            layer_off(APPS); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_R);  break;
    case TRIPLE_TAP:        unregister_code(KC_NO); break;
    case TRIPLE_HOLD:       break;
  }
  R_APPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   R _ A P P S     -   R E S E T   -   R _ A P P S  【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』   U _ A P P S    -    D I A E R E S I S    A C C E N T   『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'U_APPS' tap dance.
static tap U_APPStap_state = {
  .is_press_action = true,
  .state = 0
};

void U_APPS_finished (qk_tap_dance_state_t *state, void *user_data) {
  U_APPStap_state.state = cur_dance(state);
  switch (U_APPStap_state.state) {
    case SINGLE_TAP:  register_code(KC_U); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_APPS);  // zero backlight
                      /*layer_on(APPS);*/
                      register_code(KC_RCTL);
                      break;

    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_U); break;

    case DOUBLE_HOLD:       register_code(KC_LALT); register_code(KC_U); break;  // diaeresis accent

    case DOUBLE_SINGLE_TAP: register_code(KC_U); unregister_code(KC_U);
                            register_code(KC_U); unregister_code(KC_U);
                            register_code(KC_U); break;

    case TRIPLE_TAP:        register_code(KC_LALT); register_code(KC_U);
                            unregister_code(KC_U);  unregister_code(KC_LALT);
                            register_code(KC_U); break;

  }
}

void U_APPS_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (U_APPStap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_U); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      /*layer_off(APPS);*/
                      unregister_code(KC_RCTL);
                      break;

    case DOUBLE_TAP:        unregister_code(KC_U); unregister_code(KC_LALT); break;

    case DOUBLE_HOLD:       unregister_code(KC_U); unregister_code(KC_LALT); break;

    case DOUBLE_SINGLE_TAP: unregister_code(KC_U); break;

    case TRIPLE_TAP:        unregister_code(KC_U); break;


  }
  U_APPStap_state.state = 0;
}
// 【🔴】【🔴】【🔴】   U _ A P P S    -    D I A E R E S I S    A C C E N T   【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      P _ S U S R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'P_SUSR' tap dance.
static tap P_SUSRtap_state = {
  .is_press_action = true,
  .state = 0
};

void P_SUSR_finished (qk_tap_dance_state_t *state, void *user_data) {
  P_SUSRtap_state.state = cur_dance(state);
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_P); break;
    case SINGLE_HOLD: backlight_level_before_changing_layer = get_backlight_level();
                      backlight_level(BL_SUSR);  // high backlight
                      layer_on(SUSR);
                      break;
    case DOUBLE_TAP:        register_code(KC_P); unregister_code(KC_P); register_code(KC_P); break;
    case DOUBLE_HOLD:       register_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_P); unregister_code(KC_P); register_code(KC_P); break;
  }
}

void P_SUSR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (P_SUSRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_P); break;
    case SINGLE_HOLD: backlight_level(backlight_level_before_changing_layer);
                      layer_off(SUSR);
                      break;
    case DOUBLE_TAP:        unregister_code(KC_P); break;
    case DOUBLE_HOLD:       unregister_code(KC_NO); break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_P); break;
  }
  P_SUSRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      P _ S U S R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】



// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      B _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'B_NMBR' tap dance.
static tap B_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

bool    breathing_before;

void B_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  B_NMBRtap_state.state = cur_dance(state);
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_B); break;

    case SINGLE_HOLD: if (!numbers_layer_backlight)
                      {
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                      };
                      break;

    case DOUBLE_TAP:        register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;

    case DOUBLE_HOLD:       // TOGGLE NUMBERS LAYER
                            if (numbers_layer_backlight == 0)  // NMBR enable
                            {
                              layer_on(NMBR);
                              numbers_layer_backlight = 1;
                              breathing_period_set(BR_NMBR);
                              breathing_enable();
                            }
                            else                               // NMBR disable
                            {
                              layer_off(NMBR);
                              numbers_layer_backlight = 0;
                              breathing_period_set(BR_CAPS);
                              breathing_enable();
                              if (!caps_control_backlight)
                              {
                                breathing_period_set(BR_DFLT);
                                breathing_disable();
                              };
                            }; break;

    case DOUBLE_SINGLE_TAP: register_code(KC_B); unregister_code(KC_B); register_code(KC_B); break;
  }
}

void B_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (B_NMBRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_B); break;
    case SINGLE_HOLD: if (!numbers_layer_backlight)  // '!' is in the case that we are into NMBR layer and we press NMBR trigger
                      {
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                        if (!caps_control_backlight)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                      };
                      break;

    case DOUBLE_TAP:        unregister_code(KC_B); break;
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_B); break;
  }
  B_NMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      B _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


// 『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』      N _ N M B R     『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』『🔵』
//instantalize an instance of 'tap' for the 'N_NMBR' tap dance.
static tap N_NMBRtap_state = {
  .is_press_action = true,
  .state = 0
};

bool    breathing_before;

void N_NMBR_finished (qk_tap_dance_state_t *state, void *user_data) {
  N_NMBRtap_state.state = cur_dance(state);
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:  register_code(KC_N); break;

    case SINGLE_HOLD: if (!numbers_layer_backlight)
                      {
                        layer_on(NMBR);
                        breathing_period_set(BR_NMBR);
                        breathing_enable();
                      };
                      break;

    case DOUBLE_TAP:        register_code(KC_LALT); register_code(KC_N); break;

    case DOUBLE_HOLD:       // TOGGLE NUMBERS LAYER
                            if (numbers_layer_backlight == 0)  // NMBR enable
                            {
                              layer_on(NMBR);
                              numbers_layer_backlight = 1;
                              breathing_period_set(BR_NMBR);
                              breathing_enable();
                            }
                            else                               // NMBR disable
                            {
                              layer_off(NMBR);
                              numbers_layer_backlight = 0;

                              breathing_period_set(BR_DFLT);
                              breathing_disable();

                              if (caps_control_backlight)
                              {
                                breathing_period_set(BR_CAPS);
                                breathing_enable();
                              };
                            }; break;

    case DOUBLE_SINGLE_TAP: register_code(KC_N); unregister_code(KC_N); register_code(KC_N); break;
  }
}

void N_NMBR_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (N_NMBRtap_state.state) {
    case SINGLE_TAP:  unregister_code(KC_N); break;
    case SINGLE_HOLD: if (!numbers_layer_backlight)  // '!' is in the case that we are into NMBR layer and we press NMBR trigger
                      {
                        layer_off(NMBR);
                        breathing_period_set(BR_CAPS);
                        breathing_enable();
                        if (!caps_control_backlight)
                        {
                          breathing_period_set(BR_DFLT);
                          breathing_disable();
                        };
                      };
                      break;

    case DOUBLE_TAP:        unregister_code(KC_N); unregister_code(KC_LALT); break;
    case DOUBLE_HOLD:       break;
    case DOUBLE_SINGLE_TAP: unregister_code(KC_N); break;
  }
  N_NMBRtap_state.state = 0;
}
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】      N _ N M B R     【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】










// limpiar de basura acerca de layers backlight este trozo



































// END - my own tap_dance harvest
///// QUAD FUNCTION TAP DANCE PERSONALIZATION SECTION END /////

//Tap Dance Definitions
//THIS SECTION HAS TO BE AT THE END OF THE TAP DANCE SECTION
qk_tap_dance_action_t tap_dance_actions[] = {
// [A_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
// Other declarations would go here, separated by commas, if you have them

//
// LAYERS
  [Q_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, Q_SUSR_finished, Q_SUSR_reset)
 ,[W_MOUS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, W_MOUS_finished, W_MOUS_reset)
 
 ,[A_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, A_CAPS_finished, A_CAPS_reset)
 ,[F_CAPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, F_CAPS_finished, F_CAPS_reset)
 ,[R_APPS] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, R_APPS_finished, R_APPS_reset, 300)
 ,[U_APPS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, U_APPS_finished, U_APPS_reset)
 ,[P_SUSR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, P_SUSR_finished, P_SUSR_reset)
 ,[B_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, B_NMBR_finished, B_NMBR_reset)
 ,[N_NMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_NMBR_finished, N_NMBR_reset)

 /*
 ,[SLNMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, SLNMBR_finished, SLNMBR_reset)
 ,[DONMBR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DONMBR_finished, DONMBR_reset)
*/
//layers
//

//
// ACCENTS
 ,[I_CIRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, I_CIRC_finished, I_CIRC_reset)
 ,[J_ACUT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, J_ACUT_finished, J_ACUT_reset)  // it includes J->command tap dance funcionality
//,[N_TILD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, N_TILD_finished, N_TILD_reset) // it's integrated into [N_NMBR] tap dance definition
//accents
//

/*
//
// SYMBOLS
 ,[BSL_CI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BSL_CI_finished, BSL_CI_reset)
 ,[QUOT_D] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUOT_D_finished, QUOT_D_reset)
 ,[DO_EUR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DO_EUR_finished, DO_EUR_reset)
 ,[EXCLAM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, EXCLAM_finished, EXCLAM_reset)
 ,[QUESTI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, QUESTI_finished, QUESTI_reset)
//symbols
//

//
// FUNCTIONS
 ,[DICTAD] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DICTAD_finished, DICTAD_reset)
// functions
//
*/



/*
 ,[K_DVIM] = ACTION_TAP_DANCE_FN(K_DVIM_delete_line_down)
 ,[L_DVIM] = ACTION_TAP_DANCE_FN(L_DVIM_delete_line_up)
*/



/*
//
// PVIM
 ,[YPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, YPVIM_finished, YPVIM_reset)
 ,[UPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, UPVIM_finished, UPVIM_reset)
 ,[IPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, IPVIM_finished, IPVIM_reset)
 ,[OPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, OPVIM_finished, OPVIM_reset)
 ,[PPVIM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, PPVIM_finished, PPVIM_reset)
 // pvim
 //

//
// NUMPAD
 ,[DOUB_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, DOUB_0_finished, DOUB_0_reset)
 ,[TRIP_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, TRIP_0_finished, TRIP_0_reset)
// numpad
//

 ,[BCKLIT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BCKLIT_finished, BCKLIT_reset)
*/
 
// ,[Q__TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_W, KC_TAB)
//In Layer declaration, add tap dance item in place of a key code
//i.e.: TD(A_CAPS)

};
///////////// TAP DANCE SECTION END ///////////////






const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵
 /* Keymap GHKN 0: gherkin default layer

 * |      |      |      |      |      ||      |      |      |      |      |



  * ,----------------------------------.,----------------------------------.
  * |BL_HGH|BL_MED|      |BL_OFF|      ||      |BL_OFF|      |      |BL_HGH|
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ Q  |   W  |   E  |   R  |   T  ||   Y  |   U  |   I  |   O  |   P  |
  * |▪︎▪︎ Tab|      |      | APPS |      ||      |U_DIAE|I_CIRC|      |      |
  * | SUSR | MOUS |      | RESET|      ||      | APPS |      |      | SUSR |
  * |------+------+------+------+------||------+------+------+------+------|
  * |BL_HGH|      |      |      |BL_MED||BL_MED|      |      |      |      |
  * |      |      |      |      |      ||      |      |      |      |      |
  * | ▪︎ A  |   S  |   D  |   F  |   G  ||   H  |   J  |   K  |   L  | Space|
  * |▪︎▪︎ Cap|      |      |F_CAPS|      ||      |J_ACUT|      |      |      |
  * | LSft | LCtl | LAlt | LGui | SYMB || SYMB | RGui | RAlt | RCtl | RSft |
  * |------+------+------+------+------||------+------+------+------+------|
  * |BL_MED|BL_HGH|BL_OFF|BL_MED|BL_HGH||BL_HGH|BL_MED|BL_OFF|      |BL_MED|
  * |      |      |      |      |      ||      |      |      |      |      |
  * |   Z  |   X  |   C  |   V  |   B  ||   N  |   M  | ▪︎ ESC|      | Enter|
  * |      |      |      |      |      ||N_TILD|      |▪︎▪︎Acut|  ❌  |      |
  * | XTND | PVIM | FNCT | EFNC | NMBR || NMBR | EFNC | FNCT |      | XTND |
  * '----------------------------------''----------------------------------'
  *                     ,-------------.  ,-------------.
  *                     | Speak| Menu |  | Desk | SpotL|
  *                     | Siri | Dock |  |W_Apps|Launch|
  *                     |Dictat|Status|  |MisCtl|Dashbd|
  *              ,------|      |FloatW|  |TGNMBR|      |------.
  *              |      | SYMB | NMBR |  | NMBR | SYMB |      |
  *              |BackSp|------|------|  |------|------| Space|
  *              |      |Delete|      |  |      | Enter|      |
  *              |      |      |Escape|  |  Tab |      |      |
  *              | PVIM | MOUS | FNCT |  | EFNC | MOUS | PVIM |
  *              `--------------------'  `--------------------'
  */
  [GHKN] = LAYOUT_ortho_3x10(  // layer 0 : default layer
  // LSFT_T(KC_A) = MT(MOD_LSFT, KC_A)
  //,---------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-----------------.
          TD(Q_SUSR),     TD(W_MOUS),           KC_E,     TD(R_APPS),           KC_T,             KC_Y,     TD(U_APPS),       TD(I_CIRC),         KC_O,       TD(P_SUSR),
  //|---------------|---------------|---------------+---------------+----------------||---------------+---------------|-----------------|-------------+-----------------|
        /*LSFT_T(KC_A)*/TD(A_CAPS),   LCTL_T(KC_S),   LALT_T(KC_D),     TD(F_CAPS), LT(SYMB, KC_G),   LT(SYMB, KC_H),     TD(J_ACUT),     RALT_T(KC_K), LCTL_T(KC_L),   RSFT_T(KC_SPC),
  //|---------------|---------------|---------------+---------------+----------------||---------------+---------------|-----------------|-------------+-----------------|
      LT(XTND, KC_Z), LT(PVIM, KC_X), LT(FNCT, KC_C), LT(XFNC, KC_V),     TD(B_NMBR),       TD(N_NMBR), LT(XFNC, KC_M), LT(FNCT, KC_ESC),      KC_BSPC, LT(XTND, KC_ENT)
  //|---------------+---------------+---------------+---------------+----------------++---------------+---------------+-----------------+-------------+-----------------.
  ), // END OF GHKN 0
// 🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴
};
























// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】
// 【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】  END  【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】【🔴】


uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case GHKN: //  0
        backlight_level(BL_GHKN);
        break; 
    case NMBR: //  1
        backlight_level(BL_NMBR);
        break;
    case SYMB: //  2
        backlight_level(BL_SYMB);
        break;
    case FNCT: //  3
        backlight_level(BL_FNCT);
        break;
    case XFNC: //  4
        backlight_level(BL_XFNC);
        break;
    case XTND: //  5
        backlight_level(BL_XTND);
        break;
    case APPS: //  6
        backlight_level(BL_APPS);
        break;
    case PVIM: //  7
        backlight_level(BL_PVIM);
        break;
    case DVIM: //  8
        backlight_level(BL_DVIM);
        break;
    case SVIM: //  9
        backlight_level(BL_SVIM);
        break;
    case XVIM: // 10
        backlight_level(BL_XVIM);
        break;
    case ZVIM: // 11
        backlight_level(BL_ZVIM);
        break;
    case AVIM: // 12
        backlight_level(BL_AVIM);
        break;
    case MOUS: // 13
        backlight_level(BL_MOUS);
        break;
    case SUSR: // 14
        backlight_level(BL_SUSR);
        break;
//    case BLIT: // 15
//        backlight_level(BL_1);
//        break;
    default: //  for any other layers, or the default layer
        backlight_level(BL_MIN);
        break;
    }
  return state;
};





















































