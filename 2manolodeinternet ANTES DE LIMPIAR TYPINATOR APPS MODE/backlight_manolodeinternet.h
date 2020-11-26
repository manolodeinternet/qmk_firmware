// #pragma once
// #include QMK_KEYBOARD_H

#include "manolodeinternet.h"

// [GHERKIN_SCOPE]
uint8_t gherkinBacklightLevel;
uint8_t gherkinBacklightLevelBeforeCapsLock;
// [gherkin_scope]

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (HRESET)                                                    //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void flashing_BCK_LEDs(uint8_t times, uint8_t bl_level_1, uint8_t bl_level_2);
// __attribute__((weak)) void reset_my_keyboard_function(void);
//                                                                                      //
// [functions] [_powr] kc_r (hreset)                                                    //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////
