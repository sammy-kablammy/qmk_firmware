#include QMK_KEYBOARD_H

#define COMBO_STRICT_TIMER

#define _BASE_LAYER 0
#define _LOWER_LAYER 1
#define _RAISE_LAYER 2
#define _ADJUST_LAYER 3

#define _C_LEFT LCTL(KC_LEFT)
#define _C_RIGHT LCTL(KC_RIGHT)

#define _ESC_SFT LSFT_T(KC_ESC)
#define _SPC_CTL LCTL_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE_LAYER] = LAYOUT_planck_mit(
    KC_ESC,   KC_Q,      KC_W,     KC_F,     KC_P,     KC_G,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_BSPC,
    KC_TAB,   KC_A,      KC_R,     KC_S,     KC_T,     KC_D,     KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_ENT,
    KC_LSFT,  KC_Z,      KC_X,     KC_C,     KC_V,     KC_B,     KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_DEL,
    XXXXXXX,  XXXXXXX,   KC_LGUI,  MO(1),   _ESC_SFT,      XXXXXXX,       _SPC_CTL,  MO(2),    KC_LALT,  XXXXXXX,  XXXXXXX
),
[_LOWER_LAYER] = LAYOUT_planck_mit(
    _______,  KC_EXLM,   KC_AT,    KC_LCBR,  KC_RCBR,  KC_PERC,  KC_PIPE,  KC_7,     KC_8,     KC_9,     KC_PLUS,  _______,
    _______,  KC_CIRC,   KC_HASH,  KC_LPRN,  KC_RPRN,  KC_DLR,   KC_EQL,   KC_4,     KC_5,     KC_6,     KC_0,     _______,
    _______,  KC_AMPR,   KC_ASTR,  KC_LBRC,  KC_RBRC,  XXXXXXX,  KC_UNDS,  KC_1,     KC_2,     KC_3,     KC_MINS,  _______,
    XXXXXXX,  XXXXXXX,   _______,  _______,  _______,       XXXXXXX,       _______,  MO(3),    _______,  XXXXXXX,  XXXXXXX
),
[_RAISE_LAYER] = LAYOUT_planck_mit(
    _______,  KC_F1,     KC_F2,    KC_F3,    KC_F4,    XXXXXXX,  XXXXXXX,  KC_HOME,  KC_UP,    KC_END,   KC_VOLU,  _______,
    _______,  KC_F5,     KC_F6,    KC_F7,    KC_F8,    XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_MPLY,  _______,
    _______,  KC_F9,     KC_F10,   KC_F11,   KC_F12,   KC_F13,   KC_PSCR,  _C_LEFT,  XXXXXXX,  _C_RIGHT, KC_VOLD,  _______,
    XXXXXXX,  XXXXXXX,   _______,  MO(3),    _______,       XXXXXXX,       _______,  _______,  _______,  XXXXXXX,  XXXXXXX
),
[_ADJUST_LAYER] = LAYOUT_planck_mit(
    RGB_VAI,  RGB_M_P,   RGB_HUI,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_WH_U,  XXXXXXX,
    RGB_TOG,  RGB_M_R,   RGB_HUD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_BTN3,  XXXXXXX,
    RGB_VAD,  RGB_M_SW,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_WH_D,  XXXXXXX,
    XXXXXXX,  XXXXXXX,   XXXXXXX,  _______,  XXXXXXX,       XXXXXXX,       XXXXXXX,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX
)};

// ----- combos -----
const uint16_t PROGMEM combo_single_quote[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_double_quote[] = {KC_Y, KC_SEMICOLON, COMBO_END};
const uint16_t PROGMEM combo_backtick[] =     {KC_Z , KC_X, COMBO_END};
const uint16_t PROGMEM combo_tilde[] =        {KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_backslash[] =    {KC_Z, KC_V, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_single_quote, KC_QUOTE),
    COMBO(combo_double_quote, KC_DOUBLE_QUOTE),
    COMBO(combo_backtick,     KC_GRAVE),
    COMBO(combo_tilde,        KC_TILDE),
    COMBO(combo_backslash,    KC_BACKSLASH),
};
