/*
Copyright 2021 CapsUnlocked

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
#include QMK_KEYBOARD_H

// Keymap definitions for norwegian space cadet
#define LSPO_KEY KC_8
#define RSPC_KEY KC_9

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_tkl_iso(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SLCK, KC_PAUS,

    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_DEL,   KC_END, KC_PGDN,
    MO(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,
    KC_LSPO, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSPC,            KC_UP,
    KC_LCPO, KC_LGUI, KC_LAPO,                   KC_SPC,                             KC_RAPC, KC_APP,  KC_RCPC,   MO(1),            KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [1] = LAYOUT_tkl_iso(
    RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          RGB_M_P, RGB_M_B, RGB_M_R,

    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUI, RGB_SAI, RGB_VAI,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          RGB_HUD, RGB_SAD, RGB_VAD,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_CAPS,          _______,
    _______, _______, _______,                   _______,                            _______, _______, _______, _______,          RGB_RMOD,RGB_TOG, RGB_MOD
  ),
  [2] = LAYOUT_tkl_iso(
     _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_COMM,           KC_P7,    KC_P8,    KC_P9,

    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_COMM, _______,  KC_P4,    KC_P5,    KC_P6,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_COMM,           KC_P1,    KC_P2,    KC_P3,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_COMM, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            KC_P0,              KC_P0,
    _______, _______, _______,                   _______,                            _______, _______, _______, _______,           _______,  _______,  _______
  ),
};
