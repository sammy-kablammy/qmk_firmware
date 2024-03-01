#include QMK_KEYBOARD_H

// oh my god this file is such a mess now 💀💀💀

// #define _BASE_LAYER 0
// #define _LOWER_LAYER 1
// #define _RAISE_LAYER 2
// #define _ADJUST_LAYER 3

// #define COMBO_STRICT_TIMER
// #define COMBO_TERM 40 // default is 50

// https://precondition.github.io/home-row-mods
// #define TAPPING_TERM 200 // default is 200
// #define QUICK_TAP_TERM 0 // fix 'aa' causing 'aaaaaaaaa' instead of 'a<Shift>'
// #define PERMISSIVE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS // this is discouraged

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_mit(KC_Q, KC_W, KC_F, KC_P, KC_G, KC_NO, KC_NO, KC_J, KC_L, KC_U, KC_Y, KC_BSPC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_NO, KC_NO, KC_H, KC_N, KC_E, KC_I, KC_O, LGUI_T(KC_Z), LALT_T(KC_X), KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_K, KC_M, KC_COMM, RALT_T(KC_DOT), RGUI_T(KC_SLSH), KC_NO, KC_NO, KC_NO, MO(1), KC_LSFT, KC_NO, LCTL_T(KC_SPC), MO(2), KC_NO, KC_NO, KC_NO),
	[1] = LAYOUT_planck_mit(KC_8, KC_7, KC_6, KC_5, KC_NO, KC_NO, KC_NO, OSM(MOD_LGUI), KC_LBRC, KC_RBRC, LCTL(KC_SPC), KC_DEL, KC_4, KC_3, KC_2, KC_1, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT, KC_ESC, KC_TAB, KC_9, KC_0, KC_NO, KC_NO, KC_NO, OSM(MOD_LALT), KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_planck_mit(KC_8, KC_7, KC_6, KC_5, KC_NO, KC_NO, KC_NO, OSM(MOD_LGUI), KC_LBRC, KC_RBRC, LCTL(KC_SPC), KC_DEL, KC_4, KC_3, KC_2, KC_1, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT, KC_ESC, KC_TAB, KC_9, KC_0, KC_NO, KC_NO, KC_NO, OSM(MOD_LALT), KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT_planck_mit(KC_F1, KC_F2, KC_F3, KC_F4, TG(3), KC_NO, KC_NO, KC_NO, RGB_VAI, RGB_M_P, RGB_HUI, KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_M_R, RGB_HUD, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_M_SW, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

/* some notes on combos:
 * qw and qt interfere. you'll try to type 't and end up typing w<tab> or <tab>w
 * same thing applies to right hand. y; and n; interfere.
 * also, don't try to make combos using z if z is actually LGUI_T(KC_Z). that
 * would be silly.
 */

// some more unused combos
// fp
// wp

const uint16_t PROGMEM _combo_qw[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM _combo_qf[] = {KC_Q, KC_F, COMBO_END};
const uint16_t PROGMEM _combo_qp[] = {KC_Q, KC_P, COMBO_END};
// const uint16_t PROGMEM _combo_qt[] = {KC_Q, KC_T, COMBO_END};
// const uint16_t PROGMEM _combo_zx[] = {KC_Z, KC_X, COMBO_END};
// const uint16_t PROGMEM _combo_zv[] = {KC_Z, KC_V, COMBO_END};
const uint16_t PROGMEM _combo_sv[] = {KC_S, KC_V, COMBO_END};
const uint16_t PROGMEM _combo_cv[] = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM _combo_xv[] = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM _combo_nui[] = {KC_N, KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM _combo_nuy[] = {KC_N, KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM _combo_luy[] = {KC_L, KC_U, KC_Y, COMBO_END};
// const uint16_t PROGMEM _combo_nuysemi[] = {KC_N, KC_U, KC_Y, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM _combo_nuybackspace[] = {KC_N, KC_U, KC_Y, KC_BACKSPACE, COMBO_END};
const uint16_t PROGMEM _combo_nuyo[] = {KC_N, KC_U, KC_Y, KC_O, COMBO_END};
const uint16_t PROGMEM _combo_rft[] = {KC_R, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_wft[] = {KC_W, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_qwft[] = {KC_Q, KC_W, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_awft[] = {KC_A, KC_W, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_commadot[] = {KC_COMMA, RALT_T(KC_DOT), COMBO_END};
// const uint16_t PROGMEM _combo_ysemi[] = {KC_Y, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM _combo_ybackspace[] = {KC_Y, KC_BACKSPACE, COMBO_END};
// const uint16_t PROGMEM _combo_nsemi[] = {KC_N, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM _combo_mcomma[] = {KC_M, KC_COMMA, COMBO_END};
// const uint16_t PROGMEM _combo_mslash[] = {KC_M, KC_SLASH, COMBO_END};
// const uint16_t PROGMEM _combo_zxcv[] = {KC_Z, KC_X, KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM _combo_mcommadotslash[] = {KC_M, KC_COMMA, KC_DOT, KC_SLASH, COMBO_END};
const uint16_t PROGMEM _combo_12[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM _combo_34[] = {KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM _combo_56[] = {KC_5, KC_6, COMBO_END};
const uint16_t PROGMEM _combo_5678[] = {KC_5, KC_6, KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM _combo_4325[] = {KC_4, KC_3, KC_2, KC_5, COMBO_END};
const uint16_t PROGMEM _combo_4321[] = {KC_4, KC_3, KC_2, KC_1, COMBO_END};
const uint16_t PROGMEM _combo_4320[] = {KC_4, KC_3, KC_2, KC_0, COMBO_END};
// const uint16_t PROGMEM _combo_meio[] = {KC_Z, KC_X, KC_C, KC_V, COMBO_END};

combo_t key_combos[] = {
    COMBO(_combo_qw, KC_QUOTE),
    COMBO(_combo_qf, KC_GRAVE),
    COMBO(_combo_qp, KC_DOUBLE_QUOTE),
    // COMBO(_combo_qt, KC_TAB),
    // COMBO(_combo_zx, KC_GRAVE),
    // COMBO(_combo_zv, KC_DQUO),
    COMBO(_combo_sv, KC_UNDERSCORE),
    COMBO(_combo_cv, KC_CIRC),
    // COMBO(_combo_xv, KC_SEMICOLON),
    COMBO(_combo_nui, KC_EXCLAIM),
    COMBO(_combo_nuy, KC_PLUS),
    COMBO(_combo_luy, KC_SEMICOLON),
    // COMBO(_combo_nuysemi, KC_EQUAL),
    COMBO(_combo_nuybackspace, KC_EQUAL),
    COMBO(_combo_nuyo, KC_PIPE),
    COMBO(_combo_rft, KC_AT),
    COMBO(_combo_wft, KC_MINS),
    COMBO(_combo_qwft, KC_EQUAL),
    COMBO(_combo_awft, KC_AMPERSAND),
    COMBO(_combo_commadot, KC_TILDE),
    // COMBO(_combo_ysemi, KC_BACKSLASH),
    COMBO(_combo_ybackspace, KC_BACKSLASH),
    // COMBO(_combo_nsemi, KC_DQUO),
    COMBO(_combo_mcomma, KC_DOLLAR),
    // COMBO(_combo_mslash, KC_SEMICOLON),
    // COMBO(_combo_zxcv, KC_LGUI),
    // COMBO(_combo_mcommadotslash, KC_LALT),
    COMBO(_combo_12, KC_ASTR),
    COMBO(_combo_34, KC_HASH),
    COMBO(_combo_56, KC_PERCENT),
    COMBO(_combo_5678, TG(3)),
    COMBO(_combo_4325, KC_VOLU),
    COMBO(_combo_4321, KC_MPLY),
    COMBO(_combo_4320, KC_VOLD),
};
