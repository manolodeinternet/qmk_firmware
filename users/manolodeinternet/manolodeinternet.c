/*
Copyright 2020 manolodeinternet <manolodeinternet@gmail.com> @manolodeinternet

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "manolodeinternet.h"

//
// ======================================================
// Following line is not necesary.  Its place is in 'rgblight_mini_datyl.c':
// ------------------------------------------------------
// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.h"
// ======================================================
//

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
//                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
//                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
//                                                                                      //
// ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
__attribute__ ((weak))
void acute_accent_function(void) {
  register_code(KC_LALT); register_code(KC_E);
  unregister_code(KC_E); unregister_code(KC_LALT);
}

__attribute__ ((weak))
void diaeresis_accent_function(void) {
    register_code(KC_LALT); register_code(KC_U);
    unregister_code(KC_U);  unregister_code(KC_LALT);
}

__attribute__ ((weak))
void circumflex_accent_function(void) {
    register_code(KC_LALT); register_code(KC_I);
    unregister_code(KC_I);  unregister_code(KC_LALT);
}

__attribute__ ((weak))
void grave_accent_function(void) {
    register_code(KC_LALT); register_code(KC_GRAVE);
    unregister_code(KC_GRAVE);  unregister_code(KC_LALT);
}

__attribute__ ((weak))
void tilde_accent_function(void) {
    register_code(KC_LALT); register_code(KC_N);
    unregister_code(KC_N);  unregister_code(KC_LALT);
}
//                                                                                      //
// [functions] [_daly] kc_a, kc_e, kc_i, kc_o, kc_u, kc_n                               //
//                    [f(circu)], [f(grave)], [f(diaer)]                                //
//                    [f(acc_a)], [f(acc_e)],... [f(acc_u)], [f(til_n)]                 //
//                                                                                      //
// accents complementary functions                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


































//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//             T A P   D A N C E   F O R    [ _ P O W R ]    L A Y E R                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [TAPDANCE] [_POWR] KC_W (LCKLOG)                                                     //
//                                                                                      //
//  L O G O U T    /    L O C K    S C R E E N                                          //
//                                                                                      //
//  KC_W: *  LOCK USER SCREEN                                                           //
//        @  LOGOUT CURRENT USER                                                        //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
/*
void LCKLOG_function (qk_tap_dance_state_t *state, void *user_data) {
  switch (cur_dance(state)) {
    case SINGLE_TAP://LOCK SCREEN (ask for pasword screen)
                      register_code(KC_LCTL); register_code(KC_LGUI);
                      tap_code(KC_Q);
                      unregister_code(KC_LGUI); unregister_code(KC_LCTL);
                      reset_tap_dance(state); break;
                      // (guessed by try and fail method)
                      // if we only keystroke SFT+GUI as described at Apple Menu, it appears a menu
                      // if we add ALT, we don't have to answer any menu, we logout directly
    case SINGLE_HOLD: register_code(KC_LSFT); register_code(KC_LALT); register_code(KC_LGUI);
                      tap_code(KC_Q);
                      unregister_code(KC_LGUI); unregister_code(KC_LALT); unregister_code(KC_LSFT);
                      reset_tap_dance(state); break;
  }
}
*/
//                                                                                      //
// [tapdance] [_powr] kc_w (LCKLOG)                                                     //
//                                                                                      //
//  l o g o u t    /    l o c k    s c r e e n                                          //
//////////////////////////////////////////////////////////////////////////////////////////


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
