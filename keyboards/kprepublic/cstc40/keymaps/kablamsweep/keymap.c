#include QMK_KEYBOARD_H

// #define _BASE_LAYER 0
// #define _LOWER_LAYER 1
// #define _RAISE_LAYER 2
// #define _ADJUST_LAYER 3
//
// #define _C_LEFT LCTL(KC_LEFT)
// #define _C_RIGHT LCTL(KC_RIGHT)

#define COMBO_STRICT_TIMER

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_mit(KC_Q, KC_W, KC_F, KC_P, KC_G, KC_NO, KC_NO, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, KC_R, KC_S, KC_T, KC_D, KC_NO, KC_NO, KC_H, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, MO(1), LSFT_T(KC_ESC), KC_NO, LCTL_T(KC_SPC), MO(2), KC_NO, KC_NO, KC_NO),
	[1] = LAYOUT_planck_mit(KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PERC, KC_NO, KC_NO, KC_PIPE, KC_7, KC_8, KC_9, KC_PLUS, KC_CIRC, KC_HASH, KC_LPRN, KC_RPRN, KC_DLR, KC_NO, KC_NO, KC_EQL, KC_4, KC_5, KC_6, KC_0, KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_1, KC_2, KC_3, KC_MINS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, MO(3), KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_planck_mit(KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, OSM(MOD_LALT), KC_HOME, KC_UP, KC_END, KC_VOLU, KC_F5, KC_F6, KC_F7, KC_F8, KC_PSCR, KC_NO, KC_NO, OSM(MOD_LGUI), KC_LEFT, KC_DOWN, KC_RGHT, KC_MPLY, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_NO, KC_NO, KC_LGUI, LCTL(KC_LEFT), KC_NO, LCTL(KC_RGHT), KC_VOLD, KC_NO, KC_NO, KC_NO, MO(3), KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_planck_mit(RGB_VAI, RGB_M_P, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, RGB_TOG, RGB_M_R, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN3, RGB_VAD, RGB_M_SW, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

// ----- right hand combos -----
const uint16_t PROGMEM cmb_qw[] =       {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM cmb_qp[] =       {KC_Q, KC_P, COMBO_END};
const uint16_t PROGMEM cmb_qf[] =       {KC_Q, KC_F, COMBO_END};
const uint16_t PROGMEM cmb_zx[] =       {KC_Z ,KC_X, COMBO_END};
const uint16_t PROGMEM cmb_zc[] =       {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM cmb_zv[] =       {KC_Z, KC_V, COMBO_END};
// ----- left hand combos -----
const uint16_t PROGMEM cmb_lsemi[] =    {KC_L, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM cmb_ysemi[] =    {KC_Y, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM cmb_commadot[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM cmb_neio[] =     {KC_N, KC_E, KC_I, KC_O, COMBO_END};
// ----- unused combos -----
// const uint16_t PROGMEM cmb_nsemi[] =    {KC_N, KC_SEMICOLON, COMBO_END};
// qt for tab doesn't work. it messes up qw for '
// const uint16_t PROGMEM cmb_qt[] =       {KC_Q, KC_T, COMBO_END};

combo_t key_combos[] = {
    // right hand
    COMBO(cmb_qw,       KC_QUOTE),
    COMBO(cmb_qp,       KC_DEL),
    COMBO(cmb_qf,       KC_TAB),
    COMBO(cmb_zx,       KC_GRAVE),
    COMBO(cmb_zc,       KC_CIRC),
    COMBO(cmb_zv,       KC_BACKSLASH),
    // left hand
    COMBO(cmb_lsemi,    KC_BSPC),
    COMBO(cmb_ysemi,    KC_DOUBLE_QUOTE),
    COMBO(cmb_commadot, KC_TILDE),
    COMBO(cmb_neio,     KC_ENT),
};
