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

// the keychron v4 has a switch on the back that changes the base layer. the mac
// setting is layer zero, the windows setting is layer 1.
enum layers {
    _LAYER_GAMING,
    _LAYER_TYPING,
    _LAYER_FUNCTIONKEYS,
    _LAYER_MISC
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_LAYER_GAMING] = LAYOUT_60_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, LT(3,KC_BSLS), MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[_LAYER_TYPING] = LAYOUT_60_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, LT(3,KC_BSLS), MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, LGUI_T(KC_Z), LALT_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_TRNS, RALT_T(KC_DOT), RGUI_T(KC_SLSH), KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[_LAYER_FUNCTIONKEYS] = LAYOUT_60_ansi(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[_LAYER_MISC] = LAYOUT_60_ansi(QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F13, RGB_VAI, RGB_M_P, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_TRNS, RGB_TOG, RGB_M_R, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, RGB_VAD, RGB_M_SW, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_NO, KC_NO, KC_LALT, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO)
};

const uint16_t PROGMEM _combo_qw[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM _combo_qe[] = {KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM _combo_qr[] = {KC_Q, KC_R, COMBO_END};
const uint16_t PROGMEM _combo_dv[] = {KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM _combo_sef[] = {KC_S, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM _combo_jil[] = {KC_J, KC_I, KC_L, COMBO_END};
const uint16_t PROGMEM _combo_wef[] = {KC_W, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM _combo_jio[] = {KC_J, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM _combo_uio[] = {KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM _combo_qwef[] = {KC_Q, KC_W, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM _combo_jiop[] = {KC_J, KC_I, KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM _combo_awef[] = {KC_A, KC_W, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM _combo_jiosemi[] = {KC_J, KC_I, KC_O, KC_SEMICOLON, COMBO_END};
// const uint16_t PROGMEM _combo_op[] = {KC_O, KC_P, COMBO_END};

combo_t key_combos[] = {
  COMBO(_combo_qw, KC_QUOTE),
  COMBO(_combo_qe, KC_GRAVE),
  COMBO(_combo_qr, KC_DOUBLE_QUOTE),
  COMBO(_combo_dv, KC_UNDERSCORE),
  COMBO(_combo_sef, KC_AT),
  COMBO(_combo_jil, KC_EXCLAIM),
  COMBO(_combo_wef, KC_MINS),
  COMBO(_combo_jio, KC_PLUS),
  COMBO(_combo_uio, KC_SEMICOLON),
  COMBO(_combo_qwef, KC_EQUAL),
  COMBO(_combo_jiop, KC_EQUAL),
  COMBO(_combo_awef, KC_AMPERSAND),
  COMBO(_combo_jiosemi, KC_PIPE),
  // COMBO(_combo_op, KC_BACKSLASH),
};

// disable combos on the gaming layer. don't want any accidental symbols being
// pressed.
// this doesn't work right now. idk.
bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
  switch (combo_index) {
    // case _combo_some_combo:
    default:
      if (layer_state_is(_LAYER_GAMING)) {
          return false;
      }
  }
  return true;
}
