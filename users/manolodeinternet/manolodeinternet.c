#include QMK_KEYBOARD_H
#include "manolodeinternet.h"

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

        bool diaeresis_requested = false;
            bool grave_requested = false;
       bool circumflex_requested = false;

bool disabled_caps_before_accent = false;
         bool capslock_is_active = false;

          bool numbers_is_active = false;   // flag for _NUMB layer

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A [F(CAPSL)]                                                  //
//                                                                                      //
// CAPSLOCK COMPLEMENTARY FUNCTIONS                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
// void capslock_tap(void) { // [F(CAPSL)] - MY CAPSLOCK FINISHED FUNCTION

//   SEND_STRING(SS_DOWN(X_CAPSLOCK));
//   register_code(KC_LCAP);

//   capslock_is_active = !capslock_is_active;

// // [INFO]
// // Note, that instead of unregister_code (KC_LCAP), ...
// // ... we write unregister_code (KC_CAPS).
// // This is the way it works that I found by the trial and error method.
//   unregister_code(KC_CAPS); 
// // [info] 

//   SEND_STRING(SS_UP(X_CAPSLOCK));

// } //  my capslock function  -  [f(capsl)] - my capslock finished function




void capslock_tap(void) { // [F(CAPSL)] - MY CAPSLOCK FINISHED FUNCTION

  SEND_STRING(SS_DOWN(X_CAPSLOCK));
  register_code(KC_LCAP);

// LIGHTS AND BREATH
#if defined(BACKLIGHT_ENABLE)
  if (capslock_is_active == false)
  {
    // capslock_is_active  = true;
    gherkinBacklightLevelBeforeCapsLock = gherkinBacklightLevel;
    gherkinBacklightLevel = BL_CAPS;

    breathing_period_set(BR_CAPS);
    breathing_enable();
  }
  else
  {
    // capslock_is_active  = false;
    gherkinBacklightLevel = gherkinBacklightLevelBeforeCapsLock;

    breathing_period_set(BR_DFLT);
    breathing_disable();
  }
#endif
// lights and breath

  capslock_is_active = !capslock_is_active;

// [INFO]
// Note, that instead of unregister_code (KC_LCAP), ...
// ... we write unregister_code (KC_CAPS).
// This is the way it works that I found by the trial and error method.
  unregister_code(KC_CAPS); 
// [info] 
  SEND_STRING(SS_UP(X_CAPSLOCK));

} //  my capslock function  -  [f(capsl)] - my capslock finished function



void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (capslock_is_active)
    {
      capslock_tap();
      disabled_caps_before_accent = true;
    }
} // my disable_capslock_before_accents_function

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (disabled_caps_before_accent)
    {
      capslock_tap();
      disabled_caps_before_accent = false;
  }
} // my enable_capslock_after_accents_function
//                                                                                      //
// capslock complementary functions                                                     //
//                                                                                      //
// [functions] [_daly] kc_a [f(capsl)]                                                  //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
//                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
//                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
//                                                                                      //
// ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

void acute_accent_function(void) {
  register_code(KC_LALT); register_code(KC_E);
  unregister_code(KC_E); unregister_code(KC_LALT);
}

void diaeresis_accent_function(void) {
    register_code(KC_LALT); register_code(KC_U);
    unregister_code(KC_U);  unregister_code(KC_LALT);
}


void circumflex_accent_function(void) {
    register_code(KC_LALT); register_code(KC_I);
    unregister_code(KC_I);  unregister_code(KC_LALT);
}


void grave_accent_function(void) {
    register_code(KC_LALT); register_code(KC_GRAVE);
    unregister_code(KC_GRAVE);  unregister_code(KC_LALT);
}

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
//                                                                                      //
//  GLOBAL  FUNCTIONS                                                                   //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT] [_FVIM], [_DVIM], [_CVIM],     [_XVIM       & [_APPS]            //
//               KC_V,    KC_X,  [_FVIM]KC_C, [_FVIM]KC_X,   [_FVIM]KC_Z   (KC_Q & KC_P)//
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void fvim(char *key)
{
//  SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
    HYPR_V;
    SEND_STRING("f");
    send_string(key);
}

void dvim(char *key)
{
    HYPR_V;
    SEND_STRING("d");
    send_string(key);
}

void cvim(char *key)
{
    HYPR_V;
    SEND_STRING("c");
    send_string(key);
}

void xvim(char *key)
{
    HYPR_V;
    SEND_STRING("x");
    send_string(key);
}
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT] [_FVIM], [_DVIM], [_CVIM],     [_XVIM       & [_APPS]            //
//               KC_V,    KC_X,  [_FVIM]KC_C, [_FVIM]KC_X,   [_FVIM]KC_Z   (KC_Q & KC_P)//
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void add_mod(uint8_t desired_mod)
{
  add_mods     (desired_mod);
  add_weak_mods(desired_mod);
  send_keyboard_report();
}

void remove_mod(uint8_t activated_mod)
{
  del_mods     (activated_mod);
  del_weak_mods(activated_mod);
  send_keyboard_report();
}
//
// [FIRMWARE_SIZE]
  // next function saves from 158 to 216 (58 bytes)
  // ... instead of repeating this bunch or code into 'process_record_user' for ...
  // ... SL_MEN, KA_DCK, KM_TOL, SH_STA, RT_FLO, ...
  // ... we call this function into every function !!!
// [firmware_size]

// bool triggered_control_mod(void)
// {
//   ctl_mod = get_mods()&CTRL_MODS;
//   if (ctl_mod)
//   {
//     remove_mod(ctl_mod);
//     // del_mods     (ctl_mod);
//     // del_weak_mods(ctl_mod);
//     // send_keyboard_report();
//     return true;
//   }
//   return false;
// }

/*****************************************************************************************************/
// using this function, we pass from 674 to 586 bytes free while compile firmware !!!
// bool triggered_mod(uint8_t mod)
// {

//   switch (mod) {
//     case KC_C: ctl_mod = get_mods()&CTRL_MODS;
//                if (ctl_mod)
//                {
//                  remove_mod(ctl_mod);
//                  return true;
//                }
//                return false;
//     case KC_A: alt_mod  = get_mods()&ALT_MODS;
//                if (alt_mod)
//                {
//                  remove_mod(alt_mod);
//                  return true;
//                }
//                return false;
//     case KC_G: gui_mod     = get_mods()&GUI_MODS;
//                if (gui_mod)
//                {
//                  remove_mod(gui_mod);
//                  return true;
//                }
//                return false;
//     case KC_S: sft_mod   = get_mods()&SHFT_MODS;
//                if (sft_mod)
//                {
//                  remove_mod(sft_mod);
//                  return true;
//                }
//                return false;
//   }
//   return false;
// }
/*****************************************************************************************************/

// [FIRMWARE_SIZE]
// using this function, we pass from 674 to 586 bytes free while compile firmware !!!
// [firmware_size]

// [FIRMWARE_SIZE]
// declaring 'mod' as 'uint8_t' instead of 'uint16_t', we pass from 4 to 28 bytes free -> 24 bytes free
// [firmware_size]
bool /*triggered_mod*/ check_mod_and_remove_it(uint8_t mod, bool remove_it)
{
  switch (mod) {
    case CTRL_MODS: ctl_mod = get_mods()&CTRL_MODS;
                    if (ctl_mod)
                    {
                      if (remove_it)
                      {
                        remove_mod(ctl_mod);
                      }
                      return true;
                    }
                    return false;
    case ALT_MODS: alt_mod  = get_mods()&ALT_MODS;
                   if (alt_mod)
                   {
                    if (remove_it)
                    {
                     remove_mod(alt_mod);
                    }
                     return true;
                   }
                   return false;
    case GUI_MODS: gui_mod     = get_mods()&GUI_MODS;
                   if (gui_mod)
                   {
                    if (remove_it)
                    {
                     remove_mod(gui_mod);
                    }
                     return true;
                   }
                   return false;
    case SHFT_MODS: sft_mod   = get_mods()&SHFT_MODS;
                    if (sft_mod)
                    {
                      if (remove_it)
                      {
                      remove_mod(sft_mod);
                      }
                      return true;
                    }
                    return false;
  } // switch (mod)
  return false;
} // bool check_mod_and_remove_it(uint16_t mod, bool remove_it)
/*****************************************************************************************************/

void write_app_name(uint16_t keycode)
{
          register_code (KC_LGUI);
               tap_code (KC_SPC);
        unregister_code (KC_LGUI);

 // type Typinator Abbreviation for Typinator Expansion (/a/?):
    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    tap_code(keycode);
 // in Typinator expansion, there is a 0.01 seconds delay for keeping enough time for expansion
}



void call_app_with_keycode(uint16_t keycode) //keycode is already filtered with '& 0xFF' in the calling
{
  switch(keycode)
  {
    case KC_ESC:  keycode = KC_1; break;  // We change these three commands with numbers 1...3
    case KC_BSPC: keycode = KC_2; break;  // ...because I can't intercept those commands in Typinator
    case KC_ENT:  keycode = KC_3; break;
  }
  
  switch(keycode)
  {
    case KC_D:        //               O: opens Day One
                      //       control+S: opens quick entry of Day One
                      if (control_apps)
                      {
                        control_apps = false;
                        register_code(KC_LCTL);
                        register_code(KC_LSFT);
                        tap_code(KC_D);
                        unregister_code(KC_LSFT);
                        unregister_code(KC_LCTL);                             // quick entry  D ay one
                      }// if (control_apps)
                      else
                      {
                        write_app_name(keycode);                              // D ay one
                      }// else (control_apps)
                      break;

    case KC_E:        //               O: opens Evernote
                      //       control+S: opens quick entry of Evernote
                      if (control_apps)      // check if CTL is pressed
                      {                                                   //...but it doesn't remove it
                        control_apps = false;
                        register_code(KC_LCTL);
                        register_code(KC_LALT);
                        tap_code(KC_N);
                        unregister_code(KC_LALT);
                        unregister_code(KC_LCTL);                             // quick entry  E vernote
                      }// if (control_apps)
                      else
                      {
                        write_app_name(keycode);                              // E vernote
                      }// else (control_apps)
                      break;

    case KC_O:        //               O: opens OmniFocus
                      //       control+S: opens quick entry of OmniFocus
                      if (control_apps)                                   // check if CTL is pressed
                      {                                                   //...but it doesn't remove it
                        control_apps = false;
                        register_code(KC_LCTL);
                        register_code(KC_LALT);
                             tap_code(KC_SPC);
                      unregister_code(KC_LALT);
                      unregister_code(KC_LCTL);                             // quick entry O mnifocus
                      }// if (control_apps)
                      else
                      {
                        write_app_name(keycode);                              // O mnifocus
                      }// else (control_apps)
                      break;

    case KC_S:        //               S: opens Safari
                      //       control+S: opens Safari with address bar focused 
                      // shift+control+S: opens Slack webpage in Safari 
                      if (control_apps)       // check if CTL is pressed
                      {                                                   //...but it doesn't remove it
                        control_apps = false;
                        write_app_name(keycode);
                        wait_ms(3000);  // it's necessary !!!
                        register_code(KC_LGUI);                               // Opens addre SS bar for
                        register_code(KC_L);
                        // wait_ms(100);    // it's necessary !!!
                        unregister_code(KC_L);                                       //...introduce an URL or
                        unregister_code(KC_LGUI);                             //...googling something

                        if (shift_apps)
                        { 
                          shift_apps = false;
                          // waiting_for_success();
                          send_string("http://www.slack.com\n");              // S lack
                        }// if (shift_apps)

                      }// if (control_apps)
                      else
                      {
                        write_app_name(keycode);                              // S afari
                      }// else (control_apps)   
                      break;

///////////////////////////////////////////////////////////////////////////////////////////////////////

    case KC_A ... KC_C:
// case KC_D:  // computed just above
// case KC_E:  // computed just above
    case KC_F ... KC_N:
// case KC_O:  // computed just above
    case KC_P ... KC_R:
// case KC_S:  // computed just above
    case KC_T ... KC_Z:
    case KC_SPC:
    case KC_1 ... KC_3: write_app_name(keycode); break;
  } // switch(keycode)

} // void call_app_with_keycode(uint16_t keycode)
  
//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_Y (VOL_8)                                                     //
//             [_POWR] KC_O (VOL_1)                                                     //
//             [_POWR] KC_V (SHUT_S)                                                    //
//                                                                                      //
//             [_POWR] KC_M (BRIGHT_1)                                                  //
//                                                                                      //
// VOLUME SET TO LEVEL x FUNCTION (USED AS A _POWR KEYCODE AND INTO SHUT DOWN AS WELL)  //
// BRIGHT SET TO LEVEL y FUNCTION                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void volumeSetToLevel(uint8_t volume) {
  for (uint8_t i = 0; i < MAX_VOLUME ; i++)
    {
      tap_code(KC__VOLDOWN);
    }
  for (uint8_t i = 0; (i < MAX_VOLUME) & (i < volume ); i++)
    {
      tap_code(KC__VOLUP);
    }
}

void brightSetToLevel(uint8_t bright) {
  for (uint8_t i = 0; i < MAX_BRIGHT; i++)
    {
      tap_code(KC_SLCK);
    }
  for (uint8_t i = 0; (i < MAX_BRIGHT) & (i < bright); i++)
    {
      tap_code(KC_PAUS);
    }
}
//
// [functions] [_powr] kc_y (vol_8)                                                     //
//             [_powr] kc_o (vol_1)                                                     //
//             [_powr] kc_v (shut_s)                                                    //
//                                                                                      //
//             [_powr] kc_m (bright_1)                                                  //
//                                                                                      //
// volume set to level x function (used as a _powr keycode and into shut down as well)  //
// bright set to level y function                                                       //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  m y    f u n c t i o n s                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] L_TH_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

  // waiting_for_success();

#if defined(RGBLIGHT_ENABLE)
  rgblight_enable_noeeprom(); // switch on LEDs to allow us seeing the reset LEDs flashing
#elif defined(BACKLIGHT_ENABLE)
  backlight_enable();
#endif
  // waiting_for_success();

#if defined(RGBLIGHT_ENABLE)
  flashing_RGB_LEDs(5, RGB_MY_WHITE, RGB_MY_RED);
#elif defined(BACKLIGHT_ENABLE)
  flashing_BCK_LEDs(5, BL_RESE, BL_MIN);
#endif

  reset_keyboard();
}
//
//                                                                                      //
// [functions] [_powr] kc_r (my_reset)                                                  //
// [functions] [_dflt] l_th_4 /*(TH_R4_POWR_LEDS)*/                                     //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////

