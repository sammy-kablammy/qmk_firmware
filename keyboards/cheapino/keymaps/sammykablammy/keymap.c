#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_3(KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_BSPC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LGUI, MO(1), KC_LSFT, LCTL_T(KC_SPC), MO(2), KC_LALT),
	[1] = LAYOUT_split_3x5_3(KC_8, KC_7, KC_6, KC_5, KC_VOLU, KC_NO, KC_TILD, KC_PERC, KC_AMPR, KC_PIPE, KC_4, KC_3, KC_2, KC_1, KC_MPLY, KC_CIRC, KC_ASTR, KC_HASH, KC_DLR, KC_BSLS, KC_UNDS, KC_MINS, KC_EQL, KC_PLUS, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS),
	[2] = LAYOUT_split_3x5_3(KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_HOME, KC_END, KC_NO, KC_BSPC, KC_ESC, KC_TAB, KC_LPRN, KC_RPRN, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT, KC_EXLM, KC_AT, KC_LT, KC_GT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x5_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM _combo_12[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM _combo_34[] = {KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM _combo_qw[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM _combo_qp[] = {KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM _combo_commadot[] = {KC_COMMA, KC_DOT, COMBO_END};
combo_t key_combos[] = {
  COMBO(_combo_12, KC_0),
  COMBO(_combo_34, KC_9),
  COMBO(_combo_qw, KC_QUOTE),
  COMBO(_combo_qp, KC_DQUO),
  COMBO(_combo_commadot, KC_SEMICOLON),
};
