/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

// clang-format off

enum layers {
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC, LT(3,KC_BSLS), MO(2), KC_8, KC_4, KC_2, KC_1, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_0, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT_60_ansi(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_60_ansi(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_60_ansi(QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F13, RGB_VAI, RGB_M_P, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_TRNS, RGB_TOG, RGB_M_R, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, RGB_VAD, RGB_M_SW, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_NO, KC_NO, KC_LALT, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO)
};


// ----- combos -----
const uint16_t PROGMEM combo_backtick[] =     {KC_Z , KC_X, COMBO_END};
const uint16_t PROGMEM combo_tilde[] =        {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_backslash[] =    {KC_Z, KC_V, COMBO_END};

const uint16_t PROGMEM combo_num3[] =    {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo_num5[] =    {KC_1, KC_4, COMBO_END};
const uint16_t PROGMEM combo_num6[] =    {KC_2, KC_4, COMBO_END};
const uint16_t PROGMEM combo_num7[] =    {KC_1, KC_2, KC_4, COMBO_END};
const uint16_t PROGMEM combo_num9[] =    {KC_1, KC_8, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_backtick,     KC_GRAVE),
    COMBO(combo_tilde,        KC_TILDE),
    COMBO(combo_backslash,    KC_BACKSLASH),

    COMBO(combo_num3,    KC_3),
    COMBO(combo_num5,    KC_5),
    COMBO(combo_num6,    KC_6),
    COMBO(combo_num7,    KC_7),
    COMBO(combo_num9,    KC_9),
};
