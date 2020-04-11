/* Copyright 2018 Jack Humbert
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

// ======================================================
// Next error will occurrs...

// /Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.c:24:11: error: unknown type name 'rgblight_config_t'
   // extern rgblight_config_t rgblight_config;      // without this line, it doesn't recognize rgblight_config
   //        ^~~~~~~~~~~~~~~~~

// ...if we omit next line:
// ------------------------------------------------------





#include "rgblight_mini_dactyl.h"






// It's not necesary full path:
// #include "/Users/navarro/qmk_firmware/quantum/rgblight.h"
// ======================================================
//

// It's included in the keymap.c file
// #include "rgblight_mini_dactyl.h"
// It's not necesary full path:
// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.h"
//

   extern rgblight_config_t rgblight_config;      // without this line, it doesn't recognize rgblight_config
// extern rgblight_config_t rgblight_config;      // without this line, it doesn't recognize rgblight_config

// [manolodeinternet]
void setrgb_range(uint8_t r, uint8_t g, uint8_t b, uint8_t start, uint8_t end) {
  if (!rgblight_config.enable || start < 0 || start >= end || end > RGBLED_NUM) { return; }

  for (uint8_t i = start; i < end; i++) {
    led[i].r = r;
    led[i].g = g;
    led[i].b = b;
  }
}
// [manolodeinternet]
