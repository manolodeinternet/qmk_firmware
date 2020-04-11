/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

// DEFINED AT REV2 FOLDER:
/* USB Device descriptor parameter */
// #define VENDOR_ID       0xFEED
// #define PRODUCT_ID      0x3060
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    /u/crystalhand
// #define PRODUCT         Rental Car
// #define DESCRIPTION     A split ergonomic keyboard for the adventerous makers

// #define ONESHOT_TAP_TOGGLE        2
// #define ONESHOT_TIMEOUT           3000







// #define SIMPLE_30_LAYOUT







#ifndef CONFIG_H
#define CONFIG_H





#define TAPPING_TERM 150 // 300
#define TAPPING_TOGGLE 1

#include "config_common.h"

#ifdef SUBPROJECT_rev1
    #include "rev1/config.h"
#endif
#ifdef SUBPROJECT_rev2
    #include "rev2/config.h"
#endif

#endif
