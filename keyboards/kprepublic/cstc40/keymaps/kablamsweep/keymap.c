#include QMK_KEYBOARD_H

// #define _BASE_LAYER 0
// #define _LOWER_LAYER 1
// #define _RAISE_LAYER 2
// #define _ADJUST_LAYER 3

// #define COMBO_STRICT_TIMER
#define COMBO_TERM 50

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_planck_mit(KC_Q, KC_W, KC_F, KC_P, KC_G, KC_NO, KC_NO, KC_J, KC_L, KC_U, KC_Y, KC_SCLN,
                        KC_A, KC_R, KC_S, KC_T, KC_D, KC_NO, KC_NO, KC_H, KC_N, KC_E, KC_I, KC_O,
                        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                        KC_NO, KC_NO, KC_NO, MO(1), KC_LSFT, KC_NO, LCTL_T(KC_SPC), MO(2), KC_NO, KC_NO, KC_NO),
[1] = LAYOUT_planck_mit(KC_8, KC_7, KC_6, KC_5, KC_PERC, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO,
                        KC_4, KC_3, KC_2, KC_1, KC_CIRC, KC_NO, KC_NO, KC_DLR, KC_LPRN, KC_RPRN, KC_LT, KC_GT,
                        KC_NO, KC_NO, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_HASH, KC_ASTR,
                        KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, MO(3), KC_NO, KC_NO, KC_NO),
[2] = LAYOUT_planck_mit(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), KC_BSPC,
                        KC_HOME, KC_NO, KC_NO, KC_END, KC_PGUP, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT,
                        KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_ESC, KC_TAB, KC_NO, KC_DEL,
                        KC_NO, KC_NO, KC_NO, MO(3), KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO),
[3] = LAYOUT_planck_mit(RGB_VAI, RGB_M_P, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                        RGB_TOG, RGB_M_R, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                        RGB_VAD, RGB_M_SW, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                        KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

const uint16_t PROGMEM _combo_qw[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM _combo_qt[] = {KC_Q, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_zx[] = {KC_Z, KC_Z, COMBO_END};
const uint16_t PROGMEM _combo_sv[] = {KC_S, KC_V, COMBO_END};
const uint16_t PROGMEM _combo_nui[] = {KC_N, KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM _combo_nuy[] = {KC_N, KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM _combo_nuysemi[] = {KC_N, KC_U, KC_Y, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM _combo_nuyo[] = {KC_N, KC_U, KC_Y, KC_O, COMBO_END};
const uint16_t PROGMEM _combo_rft[] = {KC_R, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_wft[] = {KC_W, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_qwft[] = {KC_Q, KC_W, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_awft[] = {KC_A, KC_W, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM _combo_commadot[] = {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM _combo_ysemi[] = {KC_Y, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM _combo_nsemi[] = {KC_N, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM _combo_zxcv[] = {KC_Z, KC_X, KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM _combo_mcommadotslash[] = {KC_M, KC_COMMA, KC_DOT, KC_SLASH, COMBO_END};
const uint16_t PROGMEM _combo_12[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM _combo_78[] = {KC_7, KC_8, COMBO_END};
combo_t key_combos[] = {
    COMBO(_combo_qw, KC_DQUO),
    COMBO(_combo_qt, KC_TAB),
    COMBO(_combo_zx, KC_GRAVE),
    COMBO(_combo_sv, KC_UNDERSCORE),
    COMBO(_combo_nui, KC_EXCLAIM),
    COMBO(_combo_nuy, KC_PLUS),
    COMBO(_combo_nuysemi, KC_EQUAL),
    COMBO(_combo_nuyo, KC_PIPE),
    COMBO(_combo_rft, KC_AT),
    COMBO(_combo_wft, KC_MINS),
    COMBO(_combo_qwft, KC_EQUAL),
    COMBO(_combo_awft, KC_AMPERSAND),
    COMBO(_combo_commadot, KC_TILDE),
    COMBO(_combo_ysemi, KC_BACKSLASH),
    COMBO(_combo_nsemi, KC_DQUO),
    COMBO(_combo_zxcv, KC_LGUI),
    COMBO(_combo_mcommadotslash, KC_LALT),
    COMBO(_combo_12, KC_0),
    COMBO(_combo_78, KC_9),
};
