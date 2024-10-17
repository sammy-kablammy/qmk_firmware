// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    LAYER_BASE_COLEMAK,
    LAYER_BASE_QWERTY,
    LAYER_BASE_GRAPHITE,
    LAYER_NAVIGATION,
    LAYER_NUMBERS,
    LAYER_TOP,
};

// i normally don't like home row mods because the timing is weird. but in this
// case, since i have a terminal-based workflow, combining LALT and ESC should
// be perfectly fine since it's basically how terminals work anyway.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_BASE_COLEMAK] = LAYOUT_34_and_encoder(
        KC_Q,  KC_W,  KC_F,  KC_P,  KC_G,  /**/  KC_J,  KC_L,  KC_U,      KC_Y,    KC_COLON,
        KC_A,  KC_R,  KC_S,  KC_T,  KC_D,  /**/  KC_H,  KC_N,  KC_E,      KC_I,    KC_O,
        KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  /**/  KC_K,  KC_M,  KC_COMMA,  KC_DOT,  KC_SLASH,
        /**/  /**/  LALT_T(KC_ESC),  MO(LAYER_NUMBERS),  KC_LSFT,  KC_MPLY,  KC_SPC,  MO(LAYER_NAVIGATION),  KC_LCTL
    ),
    [LAYER_BASE_QWERTY] = LAYOUT_34_and_encoder(
        KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  /**/  KC_Y,  KC_U,  KC_I,      KC_O,    KC_P,
        KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  /**/  KC_H,  KC_J,  KC_K,      KC_L,    KC_COLON,
        KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  /**/  KC_N,  KC_M,  KC_COMMA,  KC_DOT,  KC_SLASH,
        /**/  /**/  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    // consider using home row mods for graphite
    [LAYER_BASE_GRAPHITE] = LAYOUT_34_and_encoder(
        KC_B,  KC_L,  KC_D,  KC_W,  KC_Z,  /**/  KC_COLON,  KC_F,  KC_O,      KC_U,    KC_J,
        KC_N,  KC_R,  KC_T,  KC_S,  KC_G,  /**/  KC_Y,      KC_H,  KC_A,      KC_E,    KC_I,
        KC_Q,  KC_X,  KC_M,  KC_C,  KC_V,  /**/  KC_K,      KC_P,  KC_COMMA,  KC_DOT,  KC_SLASH,
        /**/  /**/  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [LAYER_NAVIGATION] = LAYOUT_34_and_encoder(
        XXXXXXX,  XXXXXXX,  KC_AT,        KC_PERCENT,  KC_LALT,  /**/  KC_LALT,  KC_TAB,         KC_DQUO,   KC_DELETE,  KC_BACKSPACE,
        KC_CIRC,  KC_HASH,  KC_ASTERISK,  KC_DOLLAR,   XXXXXXX,  /**/  KC_LEFT,  KC_DOWN,        KC_UP,     KC_RIGHT,   KC_ENTER,
        KC_HOME,  KC_PGDN,  KC_PGUP,      KC_END,      KC_LGUI,  /**/  KC_LGUI,  KC_UNDERSCORE,  KC_QUOTE,  KC_GRAVE,   KC_TILDE,
        /**/  /**/  KC_TRNS,  MO(LAYER_TOP),  KC_TRNS,  KC_BTN3,  KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
    [LAYER_NUMBERS] = LAYOUT_34_and_encoder(
        KC_8,     KC_7,     KC_6,  KC_5,  KC_PLUS,   /**/   XXXXXXX,  KC_AMPR,  KC_PIPE,  XXXXXXX,  KC_BSLS,
        KC_4,     KC_3,     KC_2,  KC_1,  KC_EQL,    /**/   XXXXXXX,  KC_LPRN,  KC_RPRN,  KC_EXLM,  KC_COLON,
        KC_LBRC,  KC_RBRC,  KC_9,  KC_0,  KC_MINUS,  /**/   XXXXXXX,  KC_LCBR,  KC_RCBR,  KC_GT,    XXXXXXX,
        /**/  /**/  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(LAYER_TOP),  KC_TRNS
    ),
    [LAYER_TOP] = LAYOUT_34_and_encoder(
        KC_F1,  KC_F2,   KC_F3,   KC_F4,   XXXXXXX,  /**/  XXXXXXX,  XXXXXXX,                 XXXXXXX,                XXXXXXX,                  XXXXXXX,
        KC_F5,  KC_6,    KC_F7,   KC_F8,   XXXXXXX,  /**/  XXXXXXX,  DF(LAYER_BASE_COLEMAK),  DF(LAYER_BASE_QWERTY),  DF(LAYER_BASE_GRAPHITE),  XXXXXXX,
        KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_F13,   /**/  XXXXXXX,  XXXXXXX,                 XXXXXXX,                XXXXXXX,                  XXXXXXX,
        /**/  /**/  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
    )
};

const uint16_t PROGMEM combo_commadot[] = { KC_COMMA, KC_DOT, COMBO_END };
combo_t key_combos[] = {
    COMBO(combo_commadot, KC_SEMICOLON),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    // this keyboard only has one encoder, but you would normally have to check
    // which encoder is receiving input:
    // if (index == 0) { }

    switch (get_highest_layer(layer_state)) {
        case LAYER_BASE_COLEMAK: // (fall through)
        case LAYER_BASE_QWERTY: // (fall through)
        case LAYER_BASE_GRAPHITE:
            if (clockwise) {
                tap_code_delay(KC_VOLU, 10);
            } else {
                tap_code_delay(KC_VOLD, 10);
            }
            break;
        case LAYER_NAVIGATION:
            if (clockwise) {
                tap_code_delay(KC_WH_D, 10);
            } else {
                tap_code_delay(KC_WH_U, 10);
            }
            break;
    }
    return false;
}
