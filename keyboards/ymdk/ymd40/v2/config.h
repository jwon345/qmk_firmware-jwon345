/* Copyright 2021 James Young (@noroadsleft)
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

// #include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

// #define MOUSEKEY_INTERIA
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_INTERVAL 8
// #define MOUSEKEY_MAX_SPEED 15
// #define MOUSEKEY_TIME_TO_MAX 100
// #define MOUSEKEY_FRICTION 20
// #define MOUSEKEY_MOVE_DELTA 1

// #define MOUSEKEY_INITIAL_SPEED 10

// #define MK_3_SPEED




// #define MOUSEKEY_DELAY 0


#define MK_MOMENTARY_ACCEL
#define MK_KINETIC_SPEED

#define MOUSEKEY_INVERVAL 8 // -> how smooth.. refresh rate
#define MOUSEKEY_MOVE_DELTA 8 // -> acceleration i guess
#define MOUSEKEY_INITIAL_SPEED 250 // -> initial speed
#define MOUSEKEY_BASE_SPEED 1250 // -> end speed in default mode
#define MOUSEKEY_DECELERATED_SPEED 100 // this one is unused
#define MOUSEKEY_ACCELERATED_SPEED 2500 // this is the shift key modifier speed -> acl2

// #define MK_KINETIC_MOUSE_MAXS 32
// #define MK_KINETIC_MOUSE_ACCN 40
// #define MK_KINETIC_MOUSE_FRIC 18
// #define MK_KINETIC_MOUSE_DRAG 18

// #define USB_POLLING_INTERVAL_MS 5


/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { D0, B3, B2, B1 }
#define MATRIX_COL_PINS { F1, F0, B0, C7, F4, F5, F6, F7, D4, D6, B4, D7 }

#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN B7
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 3

#if defined(RGBLIGHT_ENABLE)
    #define RGB_DI_PIN E2
    #define RGBLED_NUM 8
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_LIMIT_VAL 150 /* The maximum brightness level */
    #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#endif
