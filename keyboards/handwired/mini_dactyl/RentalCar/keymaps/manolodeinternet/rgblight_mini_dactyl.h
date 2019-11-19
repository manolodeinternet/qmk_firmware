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


/*              RGB MY COLORS             */

#define RGB_MY_EMPTY        0x00, 0x00, 0x00
#define RGB_MY_WHITE        0xFF, 0xFF, 0xFF
#define RGB_MY_RED          0xFF, 0x00, 0x00
#define RGB_MY_CORAL        0xFF, 0x7C, 0x4D
#define RGB_MY_ORANGE       0xFF, 0x80, 0x00
#define RGB_MY_GOLDENROD    0xD9, 0xA5, 0x21
#define RGB_MY_GOLD         0xFF, 0xD9, 0x00
#define RGB_MY_YELLOW       0xFF, 0xFF, 0x00
#define RGB_MY_CHARTREUSE   0x80, 0xFF, 0x00
#define RGB_MY_GREEN        0x00, 0xFF, 0x00
#define RGB_MY_SPRINGGREEN  0x00, 0xFF, 0x80
#define RGB_MY_TURQUOISE    0x47, 0x6E, 0x6A
#define RGB_MY_TEAL         0x00, 0x80, 0x80   // it matches to hsv
#define RGB_MY_CYAN         0x00, 0xFF, 0xFF
#define RGB_MY_AZURE        0x99, 0xF5, 0xFF
#define RGB_MY_BLUE         0x00, 0x00, 0xFF
#define RGB_MY_PURPLE       0x7A, 0x00, 0xFF
#define RGB_MY_MAGENTA      0xFF, 0x00, 0xAA  // 0xFF, 0x00, 0xFF
#define RGB_MY_PINK         0xFF, 0x00, 0xFF  // 0xFF, 0x80, 0xBF


/*            HSV MY COLORS            */

#define HSV_MY_EMPTY          0,   0,   0 //(  0°,   0%,   0%)✔︎
#define HSV_MY_WHITE          0,   0, 255 //(  0°,   0%, 100%)✔︎
#define HSV_MY_RED            0, 255, 255 //(  0°, 100%, 100%)✔︎
#define HSV_MY_ORANGE_RED    11, 255, 255 //( 16°, 100%, 100%)✔︎
//🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

#define HSV_MY_CORAL          0, 120, 240 //(  0°,  47%,  94%)✔︎
#define HSV_MY_CORAL_2        0, 166, 255 //(  0°,  65%, 100%)✔︎
#define HSV_MY_ORANGE        28, 255, 255 //( 39°, 100%, 100%)✔︎
#define HSV_MY_GOLDENROD     30, 218, 218
#define HSV_MY_GOLD          36, 255, 255 //( 51°, 100%, 100%)✔︎
#define HSV_MY_YELLOW        43, 255, 255 //( 60°, 100%, 100%)✔︎
#define HSV_MY_LIGHT_YELLOW  43, 128, 255 //( 60°,  50%, 100%)✔︎
#define HSV_MY_DARK_KHAKI    40, 110, 189 //( 56°,  43%,  74%)✔︎
#define HSV_MY_CHARTREUSE    64, 255, 255
#define HSV_MY_LIME          85, 255, 255 //(120°, 100%, 100%)✔︎
#define HSV_MY_GREEN         85, 255, 128 //(120°, 100%,  50%)✔︎
#define HSV_MY_OLIVE         43, 255, 128 //( 60°, 100%,  50%)✔︎





#define HSV_MY_SPRINGGREEN  106, 255, 255
#define HSV_MY_TURQUOISE    123,  90, 112
#define HSV_MY_TEAL         128, 255, 128 //(180°, 100%,  50%)✔︎
#define HSV_MY_AZURE        132, 102, 255
#define HSV_MY_CYAN         128, 255, 255 //(180°, 100%, 100%)✔︎
#define HSV_MY_LIGHT_SKY_BLUE 144, 117, 250 //(203°, 46%,  98%)✔︎
#define HSV_MY_BLUE         170, 255, 255 //(240°, 100%, 100%)✔︎
#define HSV_MY_NAVY         170, 255, 128 //(240°, 100%,  50%)✔︎
#define HSV_MY_PREV_PURPLE  213, 255, 178//(300°, 100%,  70%)
#define HSV_MY_PURPLE       213, 255, 128//(300°, 100%,  50%)✔︎
#define HSV_MY_MAGENTA      213, 255, 255//(300°, 100%, 100%)✔︎
#define HSV_MY_LIGHT_PINK   234, 128, 255//(330°,  50%, 100%)✔︎
#define HSV_MY_PINK         234, 255, 255//(330°, 100%, 100%)✔︎

 




// [manolodeinternet]
void setRGB_range(uint8_t r, uint8_t g, uint8_t b, uint8_t start, uint8_t end);
// [manolodeinternet]


/*
#define HSV_MY_EMPTY          0,   0,   0//(0°,0%,0%)
#define HSV_MY_WHITE          0,   0, 255//(0°,0%,100%) 
#define HSV_MY_RED            0, 255, 255//(0°,100%,100%)   
#define HSV_MY_CORAL          0, 160, 230  // 50, 255, 255  // 16, 178, 255  // 11, 176, 255
#define HSV_MY_ORANGE        33, 219, 237  // 33, 86.0%, 93.0%  // 28, 255, 255
#define HSV_MY_GOLDENROD     30, 218, 218
#define HSV_MY_GOLD          36, 255, 255
#define HSV_MY_YELLOW        57, 255, 255  // 43, 255, 255
#define HSV_MY_CHARTREUSE    64, 255, 255
#define HSV_MY_GREEN         85, 255, 255//(120°,100%,50%)  
#define HSV_MY_SPRINGGREEN  106, 255, 255
#define HSV_MY_TURQUOISE    123,  90, 112
#define HSV_MY_TEAL         180, 255, 128//(180°,100%,50%)  // 128, 255, 128
#define HSV_MY_CYAN         180, 255, 255  // 128, 255, 255
#define HSV_MY_AZURE        132, 102, 255
#define HSV_MY_BLUE         170, 255, 255//(240°,100%,100%)     //240, 255, 255  // 170, 255, 255
// #define HSV_MY_PURPLE       300, 140, 160  // 245, 255,  79  // 269, 255, 255  // 191, 255, 255
// #define HSV_MY_MAGENTA      320, 255, 255  // 300, 255, 255  // 213, 255, 255
// #define HSV_MY_PINK         300, 255, 255  // 330, 127, 255  // 234, 128, 255
#define HSV_MY_PURPLE       212, 255, 178//(300°,100%,50%) // 300, 140, 160  // 245, 255,  79  // 269, 255, 255  // 191, 255, 255
#define HSV_MY_MAGENTA      320, 255, 255//(300°,100%,100%)     // 300, 255, 255  // 213, 255, 255
#define HSV_MY_PINK         300, 255, 255  // 330, 127, 255  // 234, 128, 255
*/