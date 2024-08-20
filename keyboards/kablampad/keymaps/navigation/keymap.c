#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x4(
        KC_ESCAPE,   KC_MS_BTN1,  KC_MS_BTN2,  KC_ENTER,
        KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_UP,    KC_MS_RIGHT,
        KC_LEFT,     KC_DOWN,     KC_UP,       KC_RIGHT
    )
};
