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

#pragma once

/*              RGB COLORS             */
#define RGB_EMPTY        0x00, 0x00, 0x00
#define RGB_WHITE        0xFF, 0xFF, 0xFF
#define RGB_RED          0xFF, 0x00, 0x00
#define RGB_CORAL        0xFF, 0x7C, 0x4D
#define RGB_ORANGE       0xFF, 0x80, 0x00
#define RGB_GOLDENROD    0xD9, 0xA5, 0x21
#define RGB_GOLD         0xFF, 0xD9, 0x00
#define RGB_YELLOW       0xFF, 0xFF, 0x00
#define RGB_CHARTREUSE   0x80, 0xFF, 0x00
#define RGB_GREEN        0x00, 0xFF, 0x00
#define RGB_SPRINGGREEN  0x00, 0xFF, 0x80
#define RGB_TURQUOISE    0x47, 0x6E, 0x6A
#define RGB_TEAL         0x00, 0x80, 0x80   // it matches to hsv
#define RGB_CYAN         0x00, 0xFF, 0xFF
#define RGB_AZURE        0x99, 0xF5, 0xFF
#define RGB_BLUE         0x00, 0x00, 0xFF
#define RGB_PURPLE       0x7A, 0x00, 0xFF
#define RGB_MAGENTA      0xFF, 0x00, 0xAA  // 0xFF, 0x00, 0xFF
#define RGB_PINK         0xFF, 0x00, 0xFF  // 0xFF, 0x80, 0xBF

/*            HSV COLORS            */
#define HSV_EMPTY          0,   0,   0
#define HSV_WHITE          0,   0, 255
#define HSV_RED            0, 255, 255
#define HSV_CORAL          0, 160, 230  // 50, 255, 255  // 16, 178, 255  // 11, 176, 255
#define HSV_ORANGE        33, 219, 237  // 28, 255, 255  // 33, 86.0%, 93.0%
#define HSV_GOLDENROD     30, 218, 218
#define HSV_GOLD          36, 255, 255
#define HSV_YELLOW        57, 255, 255  // 43, 255, 255
#define HSV_CHARTREUSE    64, 255, 255
#define HSV_GREEN         85, 255, 255
#define HSV_SPRINGGREEN  106, 255, 255
#define HSV_TURQUOISE    123,  90, 112
#define HSV_TEAL         180, 255, 128  // 128, 255, 128
#define HSV_CYAN         180, 255, 255  // 128, 255, 255
#define HSV_AZURE        132, 102, 255
#define HSV_BLUE         240, 255, 255  // 170, 255, 255
#define HSV_PURPLE       300, 140, 160  // 245, 255,  79  // 269, 255, 255  // 191, 255, 255
#define HSV_MAGENTA      320, 255, 255  // 213, 255, 255  // 300, 255, 255  // 
#define HSV_PINK         300, 255, 255  // 330, 127, 255  // 234, 128, 255

// [manolodeinternet]
void setrgb_range(uint8_t r, uint8_t g, uint8_t b, uint8_t start, uint8_t end);
// [manolodeinternet]
