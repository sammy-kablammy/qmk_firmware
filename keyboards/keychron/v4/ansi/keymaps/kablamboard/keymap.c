#include QMK_KEYBOARD_H

// clang-format off

enum layers {
    _LAYER_TYPING,
    _LAYER_GAMING,
    _LAYER_FKEYS,
    _LAYER_MISC
};

enum my_keycodes {
  _Q = SAFE_RANGE,
  _W,
  _E,
  _R,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_LAYER_TYPING] = LAYOUT_60_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, _Q,   _W,   _E,   _R,   KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, LT(3,KC_BSLS), MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[_LAYER_GAMING] = LAYOUT_60_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, LT(3,KC_BSLS), MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[_LAYER_FKEYS] = LAYOUT_60_ansi(KC_GRAVE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_NO, KC_NO, KC_NO, KC_NO),
	[_LAYER_MISC] = LAYOUT_60_ansi(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F13, RGB_VAI, RGB_M_P, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_TRNS, RGB_TOG, RGB_M_R, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, RGB_VAD, RGB_M_SW, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_LCTL, KC_LGUI, KC_LALT, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case _Q:
    (record->event.pressed) ? register_code(KC_Q) : unregister_code(KC_Q);
    return false;
  case _W:
    (record->event.pressed) ? register_code(KC_W) : unregister_code(KC_W);
    return false;
  case _E:
    (record->event.pressed) ? register_code(KC_E) : unregister_code(KC_E);
    return false;
  case _R:
    (record->event.pressed) ? register_code(KC_R) : unregister_code(KC_R);
    return false;
  default:
    return true; // Process all other keycodes normally
  }
}

const uint16_t PROGMEM _combo_qw[] = {_Q, _W, COMBO_END};
const uint16_t PROGMEM _combo_qe[] = {_Q, _E, COMBO_END};
const uint16_t PROGMEM _combo_qr[] = {_Q, _R, COMBO_END};

combo_t key_combos[] = {
  COMBO(_combo_qw, KC_QUOTE),
  COMBO(_combo_qe, KC_GRAVE),
  COMBO(_combo_qr, KC_DOUBLE_QUOTE),
};
