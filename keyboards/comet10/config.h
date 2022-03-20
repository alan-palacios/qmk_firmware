// Copyright 2022 Alan Palacios (@AlanPL)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "config_common.h"

#define CATERINA_BOOTLOADER
/* USB Device descriptor parameter */
#define VENDOR_ID       0x4816 /* "CT" */
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Alan Palacios
#define PRODUCT         Comet10

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5

/* key direct pins */
#define DIRECT_PINS { \
    {C6, D7, E6, B4, B5}, \
    {F7, B1, B3, B2, B6} \
}
#define UNUSED_PINS

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap 
#define LOCKING_SUPPORT_ENABLE
*/

/* Locking resynchronize hack 
#define LOCKING_RESYNC_ENABLE

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
*/

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
