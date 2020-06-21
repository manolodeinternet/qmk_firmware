#include "Dactyl.h"
#include "quantum.h"
#include "action_layer.h"
#include "eeconfig.h"


// #include QMK_KEYBOARD_H
// #include "quantum_keycodes.h"

extern keymap_config_t keymap_config;
#define _QWERTY 0
#define _COLEMAK 1

#define _DVORAK 2
#define _LOWER 3
#define _ADJ 4// [CRYSTAL] 16
#define _RAISE 5
#define _FN3 6
//#define _FN4 6
#define _ADJUST 7

/*
#define RGB_M_P  RGB_MODE_PLAIN
#define RGB_M_B  RGB_MODE_BREATHE
#define RGB_M_R  RGB_MODE_RAINBOW
#define RGB_M_SW RGB_MODE_SWIRL
#define RGB_M_SN RGB_MODE_SNAKE
#define RGB_M_K  RGB_MODE_KNIGHT
#define RGB_M_X  RGB_MODE_XMAS
#define RGB_M_G  RGB_MODE_GRADIENT
*/

enum {
	TD_CPY_PST = 0,
	TD_CMD,
	TD_SLSH,
	TD_VRDSK
};
enum custom_keycodes {
	COLEMAK = SAFE_RANGE,
//
	QWERTY,
	DVORAK,
	LOWER,
	RAISE,
	FN3,
//	FN4,
	ADJUST,
//
	dance_cln_finished,
};

#define KC_ KC_TRNS
#define _______ KC_TRNS
#define KC_CAPW LGUI(LSFT(KC_3))        // Capture whole screen
#define KC_CPYW LGUI(LSFT(LCTL(KC_3)))  // Copy whole screen
#define KC_CAPP LGUI(LSFT(KC_4))       // Capture portion of screen
#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen
#define KC_X0 MT(MOD_LCTL, KC_ESC)
#define KC_LDWN LOWER				//Numpad
#define KC_LUP RAISE
#define KC_TOGUP TG(4)
#define KC_REST RESET
//#define KC_X3 LT(_LOWER,KC_EQL)		//function layer 4 ie macros when held tab when pressed
//#define KC_X4 LT(_ADJUST, KC_ENT) //Shift when held enter when pressed
//#define KC_X5 LT(_RAISE, KC_P0)  //Raise to functions when held P0 when pressed
#define KC_X6 TD(TD_SLSH)				//slash vs backslash
#define KC_X7 TD(TD_CPY_PST)		//single tap is copy double is paste
#define KC_X8 TD(TD_CMD)			//single tap is cmd double is ipconfig
#define KC_LEDON RGB_TOG

#define KC_X9 RGUI(KC_TAB)	//gui tab to switch desktops
#define KC_X10 TD(TD_VRDSK)


#define KC_XLgn M(1)
#define KC_EMAL M(2)
#define KC_WWWX M(3)
#define KC_NTAB M(4)
#define KC_0CA M(6)
#define KC_PASS M(10)
#define KC_IPCF M(11)
#define KC_OP M(12)
#define KC_OC M(13)
#define KC_OD M(14)
#define KC_TCLK M(15)
// [MINE]

#define KC_LO_0 LT(_LOWER,  KC_0)
#define KC_RA_1 LT(_RAISE,  KC_1)

#define KC_ADJ2 LT(_ADJ,    KC_2)
#define KC_F3_3 LT(_FN3,    KC_3)

// [mine]
#define KC_ESCT MT(MOD_LCTL, KC_ESC)
#define KC_GUIT M(0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
		[_QWERTY] = KC_KEYMAP(
	//,----+----+----+----+----+----.										,----+----+----+----+----+----.
		Q  , W  , E  , R  , T  ,    										  Y  , U  , I  , O , P  ,
	//|----+----+----+----+----+----|   									|----+----+----+----+----+----|
		 A  , S  , D  , F  , G  ,											H  , J  , K  , L  ,SCLN,
	//|----+----+----+----+----+----|										|----+----+----+----+----+----|
		 Z  , X  , C  , V  , B  ,											N  , M  ,COMM,DOT,SLSH,
	//|----+----+----+----+----+----|										|----+----+----+----+----+----|
	//							`----+----+----+'			`----+----+----'
										ESCT,LALT,			 LGUI, RCTRL,
	//							`----+----+----+'			`----+----+----'
											HOME,			PGUP,
	//							`----+----+----+'			`----+----+----'
	//								BSPC,DEL,END,		    PGDN , ENT, SPC
									BSPC,DEL,END,		    REST , ENT, SPC
	//							`----+----+----+'			`----+----+----'
	),
*/
		[_QWERTY] = KEYMAP(
	//,----+----+----+----+----+----.										,----+----+----+----+----+----.
       KC_Q, KC_W, KC_E, KC_R, KC_T,		                                 KC_Y, KC_U, KC_I,  KC_O, KC_F3_3,
	//|----+----+----+----+----+----|   									|----+----+----+----+----+----|
	    KC_A, KC_S, KC_D, KC_F, KC_ADJ2,									     KC_H, KC_J, KC_K,  KC_L , KC_SCLN,
	//|----+----+----+----+----+----|										|----+----+----+----+----+----|
		KC_Z, KC_X, KC_C, KC_V, KC_B,										  KC_N, KC_M, KC_COMM, KC_DOT, RESET,
	//|----+----+----+----+----+----|										|----+----+----+----+----+----|
  //                             `----+----+----+'     `----+----+----'
                                      KC_1, KC_2,        KC_A, KC_B,
  //                             `----+----+----+'     `----+----+----'
                                            KC_3,        KC_C,
  //                             `----+----+----+'     `----+----+----'
                                KC_4, KC_5, KC_6,        KC_D, KC_E, KC_F
  //                             `----+----+----+'     `----+----+----'

/*
	//							`----+----+----+'			`----+----+----'
			                    KC_ESC, KC_LALT,	      KC_LGUI, KC_RCTRL,
	//							`----+----+----+'			`----+----+----'
					                    KC_HOME,	      KC_PGUP,
	//							`----+----+----+'			`----+----+----'
					   KC_BSPC, KC_DEL, KC_LO_0,          KC_RA_1, KC_ENT, KC_SPC
	//							`----+----+----+'			`----+----+----'
*/
	),

			[_COLEMAK] = KC_KEYMAP(
	//,----+----+----+----+----+----.   									 ,----+----+----+----+----+----.
		Q  , W  , F  , P  , G  , 									  	   J  , L  , U  , Y  ,SCLN,
	//|----+----+----+----+----+----| 									   |----+----+----+----+----+----|
		A  , R  , S  , T  , D  ,									  	    H  , N  , E  , I  , O  ,
	//|----+----+----+----+----+----|									    |----+----+----+----+----+----|
		Z  , X  , C  , V  , B  ,  										  K  , M  ,COMM,DOT ,REST,
	//|----+----+----+----+----+----| 									   |----+----+----+----+----+----|
	//`----+----+----+----+----+----'   									 `----+----+----+----+----+----'
    //							`----+----+----+'			`----+----+----'
										ESCT,LALT,			 LGUI, RCTRL,
	//							`----+----+----+'			`----+----+----'
											HOME,			PGUP,
	//							`----+----+----+'			`----+----+----'
									BSPC,DEL,END,			PGDN, ENT, SPC
	//							`----+----+----+'			`----+----+----'
	),

	[_DVORAK] = KC_KEYMAP(
	//,----+----+----+----+----+----.  								  ,----+----+----+----+----+----.
	//,----+----+----+----+----+----.  								  ,----+----+----+----+----+----.
		QUOT,COMM,DOT , P  , Y  , 								 	    F  , G  , C  , R  , L  ,
	//|----+----+----+----+----+----|    								|----+----+----+----+----+----|
		A  , O  , E  , U  , I  ,  									    D  , H  , T  , N  , S  ,
	//|----+----+----+----+----+----| 								   |----+----+----+----+----+----|
		SCLN, Q  , J  , K  , X  ,  							   			 B  , M  , W  , V  , REST  ,
	//|----+----+----+----+----+----|    							   |----+----+----+----+----+----|
	//`----+----+----+----+----+----'   									 `----+----+----+----+----+----'
	//							`----+----+----+'			`----+----+----'
									  ESCT,LALT,			 LGUI, RCTRL,
	//							`----+----+----+'			`----+----+----'
											HOME,			PGUP,
	//							`----+----+----+'			`----+----+----'
									BSPC,DEL,END,			PGDN, ENT, SPC
	//							`----+----+----+'			`----+----+----'

	),
	
	[_LOWER] = KC_KEYMAP(
	//,----+----+----+----+----+----.  								  ,----+----+----+----+----+----.
	//|----+----+----+----+----+----|   							 |----+----+----+----+----+----|
		    ,WWWX,EMAL,    ,TCLK,   							      ,    ,    ,   ,PASS,   
	//|----+----+----+----+----+----|   							 |----+----+----+----+----+----|
		 0CA ,     ,   ,    ,    ,     									,    , UP ,IPCF,     ,   
	//|----+----+----+----+----+----|   							 |----+----+----+----+----+----|
		 REST ,XLgn,     ,    ,LEDON ,								,LEFT,DOWN,RIGHT,      REST ,
	//|----+---+----+----+----+----|   							 |----+----+----+----+----+----|
	//|----+----+----+----+----+----|  								  |----+----+----+----+----+----|
	//							`----+----+----+'			`----+----+----'
							          PGUP,PGDN,			 HOME, END,
	//							`----+----+----+'			`----+----+----'
									           ,			     ,
	//							`----+----+----+'			`----+----+----'
								BSPC, LSFT,    ,			     , ENT, SPC
	//							`----+----+----+'			`----+----+----'
	),

	[_ADJ] = KEYMAP( \
	QWERTY,   DVORAK,  COLEMAK, RGB_MOD, RGB_HUD,             RGB_HUI, RGB_SAD, RGB_SAI,  RGB_VAD,  RGB_VAI, \
	QWERTY,  RGB_M_K ,    AU_ON,  AU_OFF, _______,             AG_SWAP,  QWERTY, COLEMAK,   DVORAK,  _______, \
	RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUD, RGB_HUI,             RGB_SAD, RGB_SAI, RGB_VAD, KC_LEDON,  KC_REST, \
	                            _______, _______,             _______, _______, 
	                                     _______,             _______, 
	                   _______, _______, _______,             _______, _______, _______ \
	),

/*	[_ADJ] = KEYMAP( \
	//,----+----+----+----+----+----.										,----+----+----+----+----+----.
       KC_2, KC_2, KC_E, KC_R,    KC_T,		                                 KC_Y, KC_U,    KC_I,   KC_O, KC_F3_3,
	//|----+----+----+----+----+----|   									|----+----+----+----+----+----|
	   KC_A, KC_S, KC_D, KC_F, KC_ADJ2,									     KC_H, KC_J,    KC_K,   KC_L, KC_SCLN,
	//|----+----+----+----+----+----|										|----+----+----+----+----+----|
	   KC_Z, KC_X, KC_C, KC_V,    KC_B,										 KC_N, KC_M, KC_COMM, KC_DOT,   RESET,
	//|----+----+----+----+----+----|										|----+----+----+----+----+----|
	//							`----+----+----+'			`----+----+----'
			                    KC_ESC, KC_LALT,	      KC_LGUI, KC_RCTRL,
	//							`----+----+----+'			`----+----+----'
					                    KC_HOME,	      KC_PGUP,
	//							`----+----+----+'			`----+----+----'
					   KC_BSPC, KC_DEL, KC_LO_0,          KC_RA_1, KC_ENT, KC_SPC
	//							`----+----+----+'			`----+----+----'
	),
 */	
	
	[_RAISE] = KC_KEYMAP(
	//,----+----+----+----+----+----.									,----+----+----+----+----+----.
	//|----+----+----+----+----+----|									|----+----+----+----+----+----|
		 1  , WWWX, 1  , 1  , 1  ,										NO , 4  , 5  , 6  ,PMNS,
	//|----+----+----+----+----+----|									|----+----+----+----+----+----|
		 1  , 1  , 1  , 1  , 1  ,										NO , 1   , 2  ,  3 ,PPLS, 
	//|----+----+----+----+----+----|									|----+----+----+----+----+----|
		REST ,1, 1  , 1  , LEDON ,											NO , 0  , 0  , DOT , REST,
	//|----+----+----+----+----+----|									|----+----+----+----+----+----|
	//|----+----+----+----+----+----|  									|----+----+----+----+----+----|
	//							`----+----+----+'			`----+----+----'
									  PGUP,PGDN,			 HOME, END,
	//							`----+----+----+'			`----+----+----'
											   ,			     ,
	//							`----+----+----+'			`----+----+----'
							    BSPC, LSFT,    ,			     , ENT, SPC
	//							`----+----+----+'			`----+----+----'

	//`----+----+----+----+----+----'                                   `----+----+----+----+----+----'
	),
	
	[_FN3] = KC_KEYMAP(
	//|----+----+----+----+----+----|    |----+----+----+----+----+----|
		 3 , 3,  3, 3  , 3  ,         	    ,    ,    ,    ,    ,
	//|----+----+----+----+----+----|    |----+----+----+----+----+----|
			,UP,    ,    ,    ,             ,    ,    , UP ,    ,
	//|----+----+----+----+----+----|    |----+----+----+----+----+----|
		LEFT,DOWN,RIGHT,    , LEDON,              ,LEDON,LEFT,DOWN,REST,  
	//`----+----+----+----+----+----'    `----+----+----+----+----+----'
	//							`----+----+----+'			`----+----+----'
									  PGUP,PGDN,			  END, HOME,
	//							`----+----+----+'			`----+----+----'
										   PSCR,			  DEL,
	//							`----+----+----+'			`----+----+----'
							   BSPC, LDWN, GUIT,		      LUP, ENT, SPC
	//							`----+----+----+'			`----+----+----'
	),

	[_ADJUST] = KEYMAP( \
	QWERTY,   DVORAK,  COLEMAK, RGB_MOD, RGB_HUD,             RGB_HUI, RGB_SAD, RGB_SAI,  RGB_VAD,  RGB_VAI, \
	QWERTY,  _______,    AU_ON,  AU_OFF, AG_NORM,             AG_SWAP,  QWERTY, COLEMAK,   DVORAK,  _______, \
	RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUD, RGB_HUI,             RGB_SAD, RGB_SAI, RGB_VAD, KC_LEDON,  KC_REST, \
	                            _______, _______,             _______, _______, 
	                                     _______,             _______, 
	                   _______, _______, _______,             _______, _______, _______ \
	)

	/* Adjust (Lower + Raise)
* ,-----------------------------------------------------------------------------------.
* |      | Reset|RGB Tg|RGB Md|Hue Up|Hue Dn|Sat Up|Sat Dn|Val Up|Val Dn| RESET|      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |             |      |      |      |      |      |
* `-----------------------------------------------------------------------------------'
*/


};







































































// CRYSTALHAND ORIGINAL FIRMWARE
#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

/*
 *
 void persistent_default_layer_set(uint16_t default_layer) {
 	eeconfig_update_default_layer(default_layer);
 	default_layer_set(default_layer);
 }
 *
 */

/*
void dance_cln_finished(void){
register_code (KC_LGUI);
register_code(KC_TAB);
unregister_code(KC_TAB);
unregister_code(KC_LGUI); 
}*/

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	
	switch (id) {
	case 0:
		if (record->event.pressed) {
			return MACRO(D(LGUI), T(TAB), U(LGUI), END);
		}
	case 1:
		if (record->event.pressed) {
		//	SEND_STRING("admin"SS_TAP(X_TAB)"1111"SS_TAP(X_ENTER));
		//return false;	break;
			return MACRO(I(10), T(A), T(D), T(M), T(I), T(N), W(75), T(TAB), T(1), T(1),T(1), T(1), T(ENTER), END );
		}
	case 2:
		if (record->event.pressed) {
			SEND_STRING("email");// auto send email
			return false;	break;
		}
	case 3:
		if (record->event.pressed) {
			SEND_STRING("www.support.xerox.com"SS_TAP(X_ENTER));
						return false;	break;
		}
	case 4:
		if(record->event.pressed) {
			return MACRO(I(10), D(LCTRL), T(T), T(V), T(ENTER), U(LCTRL), END);
		}
		
	case 5:{
			return  MACRO_TAP_HOLD_LAYER(record, MACRO(TYPE(KC_X), END), _LOWER);	
		}
	case 6: {
			if(record->event.pressed) 
			return MACRO(I(10), T(0), T(C), T(TAB), T(TAB), T(A), T(TAB), END);
		}
	case 10: {
		if(record->event.pressed) {
		SEND_STRING(""); //send string
			return false; break;}
	}		
	case 11: {
		if(record->event.pressed) {
			SEND_STRING("ipconfig /all");
					return false; break;}
	}
	case 12: {
	if(record->event.pressed) 
		return MACRO( I(10),T(TAB), T(O), T(P), T(TAB),T(ENTER), T(TAB),T(TAB),T(TAB),T(Z),T(R),T(TAB),T(ENTER), END );
	}	
		case 13: {
	if(record->event.pressed) 
		return MACRO( I(10),T(TAB), T(O), T(T), T(TAB),T(ENTER), T(TAB),T(TAB),T(TAB),T(Z),T(R),T(TAB),T(ENTER), END );
	}	
		case 14: {
	if(record->event.pressed) 
		return MACRO( I(10),T(TAB), T(I), T(N), T(TAB),T(ENTER), T(TAB),T(TAB),T(TAB),T(I),T(N),T(TAB),T(ENTER), END );
	}	
		case 15: {
	if(record->event.pressed) 
		SEND_STRING("username"SS_TAP(X_TAB)"pass"SS_TAP(X_TAB)SS_TAP(X_ENTER));//allows sending password for things that do NOT need to be secure
		return false; break;
	}	
		break;
	}		
	return MACRO_NONE;
}
//return MACRO_NONE;


void cmd_commands(qk_tap_dance_state_t *state, void *user_data) {
	if (state->count == 1) {
		action_macro_play(MACRO(D(LCTRL), T(C), U(LCTRL),END));
	}
	else if (state->count ==2){
		action_macro_play(MACRO(D(LCTRL), T(V), U(LCTRL),END));
	}
	else {
		action_macro_play(MACRO(D(LCTRL), T(A), T(C), U(LCTRL),END));
	}
}


void cmd(qk_tap_dance_state_t *state, void *user_data) {
	if(state->count==1){
		action_macro_play(MACRO(D(LGUI), T(R),W(255), U(LGUI),W(255), T(C), T(M), T(D), T(ENTER),END));
	}
	else if (state->count == 2) {
		action_macro_play(MACRO(D(LGUI), T(R), U(LGUI), T(C), T(M), T(D), T(ENTER),W(255),W(255), T(I), T(P), T(C), T(O), T(N), T(F), T(I), T(G), T(SPACE), T(SLASH), T(A), T(L), T(L),T(ENTER),END));
	}
	else{
		action_macro_play(MACRO(D(LGUI), T(R),W(255), U(LGUI),W(255), T(C), T(M), T(D), T(ENTER), W(255), T(P), T(I), T(N), T(G),T(SPACE), D(LCTRL), T(V), U(LCTRL), END));
	}
}
void SLSH_BSLSH(qk_tap_dance_state_t *state, void *user_data) {
	if (state->count == 1) {
		register_code (KC_SLSH);
		unregister_code (KC_SLSH);
	}
	else{
		register_code (KC_BSLS);
		unregister_code (KC_BSLS);
	}
}
void VirtualDesktop(qk_tap_dance_state_t *state, void *user_data) {
	if (state->count == 1) 
		action_macro_play(MACRO(D(LGUI),D(LCTRL),T(LEFT),U(LCTRL),U(LGUI),END));
	else if(state->count==2)
		action_macro_play(MACRO(D(LGUI),D(LCTRL),T(RIGHT),U(LCTRL),U(LGUI),END));
}
	
qk_tap_dance_action_t tap_dance_actions[] = {
	
	//Tap once for Esc, twice for Caps Lock
	[TD_CPY_PST] = ACTION_TAP_DANCE_FN(cmd_commands),
	[TD_SLSH]= ACTION_TAP_DANCE_FN(SLSH_BSLSH),
	[TD_CMD]=ACTION_TAP_DANCE_FN(cmd),
	[TD_VRDSK]=ACTION_TAP_DANCE_FN(VirtualDesktop)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

// CRYSTALHAND ORIGINAL FIRMWARE
//

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
	case COLEMAK:
	if (record->event.pressed) {
		#ifdef AUDIO_ENABLE
		PLAY_NOTE_ARRAY(tone_colemak, false, 0);
		#endif
//		persistent_default_layer_set(1UL<<_COLEMAK);
	}
	return false;
	break;
	case QWERTY:
		if (record->event.pressed) {
			#ifdef AUDIO_ENABLE
			PLAY_NOTE_ARRAY(tone_qwerty, false, 0);
			#endif
//			persistent_default_layer_set(1UL<<_QWERTY);
		}
		return false;
		break;
	case DVORAK:
		if (record->event.pressed) {
			#ifdef AUDIO_ENABLE
			PLAY_NOTE_ARRAY(tone_dvorak, false, 0);
			#endif
//			persistent_default_layer_set(1UL<<_DVORAK);
		}
		return false;
		break;
	case LOWER:
		if (record->event.pressed) {
			layer_on(_LOWER);
			update_tri_layer(_LOWER, _RAISE, _ADJUST);
		} else {
			layer_off(_LOWER);
			update_tri_layer(_LOWER, _RAISE, _ADJUST);
		}
		return false;
		break;
	case RAISE:
		if (record->event.pressed) {
			layer_on(_RAISE);
			update_tri_layer(_LOWER, _RAISE, _ADJUST);
		} else {
			layer_off(_RAISE);
			update_tri_layer(_LOWER, _RAISE, _ADJUST);
		}
		return false;
		break;
	case ADJUST:
		if (record->event.pressed) {
			layer_on(_ADJUST);
		} else {
			layer_off(_ADJUST);
		}
		return false;
		break;
	}

	return true;
}

//

// crystalhand original firmware