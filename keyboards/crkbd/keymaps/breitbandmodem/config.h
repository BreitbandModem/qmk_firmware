/*
This is the c configuration file for the keymap

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

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

// milliseconds to differentiate between tab and hold
#define TAPPING_TERM 200 // default 200

// prevent normal rollover of alphas from accedentally triggering mods
// #define IGNORE_MOD_TAP_INTERRUPT

// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// you may change this to a "TAPPING_FORCE_HOLD_PER_KEY" option
#define TAPPING_FORCE_HOLD

enum corne_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _NAV,
  _ADJUST
};

// layers

#define ADJUST MO(_ADJUST)
#define LSPACE LT(_LOWER, KC_SPACE)
#define RSPACE LT(_LOWER, KC_SPACE)
#define MBSPC LT(_RAISE, KC_BSPC)
#define MENTER LT(_RAISE, KC_ENTER)

// home row mods

// _QWERTY
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#undef SFT_T
#define SFT_F LSFT_T(KC_F)

#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

// _LOWER
#define SFT_RBRC RSFT_T(KC_RBRC)
#define GUI_LBRC RGUI_T(KC_LBRC)
#define ALT_MINS LALT_T(KC_MINS)
#define CTL_EQL CTL_T(KC_EQL)

// #define ALT
#define GUI_QUOT RGUI_T(KC_QUOT)

// _RAISE
#define GUI_F1 LGUI_T(KC_F1)
#define ALT_CAPS LALT_T(CAPS_WORD)
#define CTL_ESC LCTL_T(KC_ESC)
#define SFT_TAB LSFT_T(KC_TAB)

#define GUI_F12 RGUI_T(KC_F12)

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
