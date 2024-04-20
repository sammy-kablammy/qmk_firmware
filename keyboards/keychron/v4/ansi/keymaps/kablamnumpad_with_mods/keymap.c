#include QMK_KEYBOARD_H

// clang-format off

// the keychron v4 has a switch on the back that changes the base layer. the mac
// setting is layer zero, the windows setting is layer 1.
enum layers {
    _LAYER_TYPING,
    _LAYER_GAMING,
    _LAYER_FKEYS,
    _LAYER_NUMPAD,
    _LAYER_MISC
};

// some theory behind this keyboard layout:
// i want the base layer to function properly for games. this means that all
// keys should fire when the key is pressed and not have to wait for the key to
// be released. this rules out combos, mod-tap, and tons of other features.
// to work around this, i only ever create combos consisting of custom keycodes.
// in the event of a normal combo-less keypress, these custom keycodes will
// simply register or unregister their

enum my_keycodes {
  _Q = SAFE_RANGE, _W, _E, _R,
  _A, _S, _D, _F,
  _C, _V,

  _U, _I, _O, _P,
  _J, _K, _L, _SEMICOLON,
  _M, _COMMA,

  _1, _2, _3, _4, _5, _6, _7, _8,
};

// NOTE: you can use the 'column -t' command to arrange each layer into columns
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_LAYER_TYPING] = LAYOUT_60_ansi(
    KC_ESC,   KC_1,          KC_2,               KC_3,    KC_4,     KC_5,     KC_6,   KC_7,    KC_8,      KC_9,            KC_0,             KC_MINS,  LT(_LAYER_NUMPAD,KC_EQL),  KC_BSPC,
    KC_TAB,   _Q,            _W,                 _E,      _R,       KC_T,     KC_Y,   _U,      _I,        _O,              _P,               KC_LBRC,  KC_RBRC,                   LT(_LAYER_MISC,KC_BSLS),
    KC_LCTL,  _A,            _S,                 _D,      _F,       KC_G,     KC_H,   _J,      _K,        _L,              _SEMICOLON,       KC_QUOT,  KC_ENT,
    KC_LSFT,  LGUI_T(KC_Z),  LALT_T(KC_X),       LCTL_T(KC_C),    KC_V,     KC_B,     KC_N,   KC_M,    LCTL_T(KC_COMMA),  RALT_T(KC_DOT),  RGUI_T(KC_SLSH),  KC_DEL,
    KC_LALT,  KC_LGUI,       MO(_LAYER_NUMPAD),  KC_SPC,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT
  ),
  [_LAYER_GAMING] = LAYOUT_60_ansi(
    KC_ESC,            KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,   KC_7,    KC_8,     KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
    KC_TAB,            KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,   KC_U,    KC_I,     KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  LT(_LAYER_MISC,KC_BSLS),
    MO(_LAYER_FKEYS),  KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,   KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT,
    KC_LSFT,           KC_Z,     KC_X,     KC_C,    KC_V,     KC_B,     KC_N,   KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  KC_DEL,
    KC_LCTL,           KC_LGUI,  KC_LALT,  KC_SPC,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT
  ),
  [_LAYER_FKEYS] = LAYOUT_60_ansi(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,     KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,   KC_F12,   KC_NO,
    KC_TAB,   KC_Q,     KC_W,     KC_E,      KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_LBRC,  KC_RBRC,  KC_TRNS,
    KC_TRNS,  KC_A,     KC_S,     KC_D,      KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_K,   KC_L,    KC_NO,    KC_NO,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,      KC_V,   KC_B,   KC_N,   KC_M,   KC_NO,  KC_NO,  KC_NO,   KC_NO,
    KC_LCTL,  KC_LGUI,  KC_LALT,  KC_SPACE,  KC_NO,  KC_NO,  KC_NO,
  ),
  [_LAYER_NUMPAD] = LAYOUT_60_ansi(
    KC_ESC,   KC_F1,         KC_F2,         KC_F3,   KC_F4,    KC_F5,    KC_F6,  KC_F7,   KC_F8,     KC_F9,           KC_F10,           KC_F11,   KC_F12,   KC_BSPC,
    KC_TAB,   _8,            _7,            _6,      _5,       KC_T,     KC_Y,   _U,      _I,        _O,              _P,               KC_LBRC,  KC_RBRC,  LT(_LAYER_MISC,KC_BSLS),
    KC_TRNS,  _4,            _3,            _2,      _1,       KC_G,     KC_H,   _J,      _K,        _L,              _SEMICOLON,       KC_QUOT,  KC_ENT,
    KC_LSFT,  LGUI_T(KC_Z),  LALT_T(KC_X),  KC_C,    KC_V,     KC_B,     KC_N,   KC_M,    KC_COMMA,  RALT_T(KC_DOT),  RGUI_T(KC_SLSH),  KC_DEL,
    KC_LALT,  KC_LGUI,       KC_LALT,       KC_SPC,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT
  ),
  [_LAYER_MISC] = LAYOUT_60_ansi(
    QK_BOOT,  KC_NO,     KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_F13,
    RGB_VAI,  RGB_M_P,   RGB_HUI,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_PSCR,  KC_NO,    KC_NO,    KC_TRNS,
    RGB_TOG,  RGB_M_R,   RGB_HUD,  KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_VOLU,
    RGB_VAD,  RGB_M_SW,  KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_VOLD,
    KC_NO,    KC_NO,     KC_LALT,  KC_MPLY,  KC_NO,  KC_NO,  KC_NO,  KC_NO
  )
};

// this is absolutely monstrous
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
  case _A:
    (record->event.pressed) ? register_code(KC_A) : unregister_code(KC_A);
    return false;
  case _S:
    (record->event.pressed) ? register_code(KC_S) : unregister_code(KC_S);
    return false;
  case _D:
    (record->event.pressed) ? register_code(KC_D) : unregister_code(KC_D);
    return false;
  case _F:
    (record->event.pressed) ? register_code(KC_F) : unregister_code(KC_F);
    return false;
  case _C:
    (record->event.pressed) ? register_code(KC_C) : unregister_code(KC_C);
    return false;
  case _V:
    (record->event.pressed) ? register_code(KC_V) : unregister_code(KC_V);
    return false;
  case _U:
    (record->event.pressed) ? register_code(KC_U) : unregister_code(KC_U);
    return false;
  case _I:
    (record->event.pressed) ? register_code(KC_I) : unregister_code(KC_I);
    return false;
  case _O:
    (record->event.pressed) ? register_code(KC_O) : unregister_code(KC_O);
    return false;
  case _P:
    (record->event.pressed) ? register_code(KC_P) : unregister_code(KC_P);
    return false;
  case _J:
    (record->event.pressed) ? register_code(KC_J) : unregister_code(KC_J);
    return false;
  case _K:
    (record->event.pressed) ? register_code(KC_K) : unregister_code(KC_K);
    return false;
  case _L:
    (record->event.pressed) ? register_code(KC_L) : unregister_code(KC_L);
    return false;
  case _SEMICOLON:
    (record->event.pressed) ? register_code(KC_SEMICOLON) : unregister_code(KC_SEMICOLON);
    return false;
  case _M:
    (record->event.pressed) ? register_code(KC_M) : unregister_code(KC_M);
    return false;
  case _COMMA:
    (record->event.pressed) ? register_code(KC_COMMA) : unregister_code(KC_COMMA);
    return false;
  case _1:
    (record->event.pressed) ? register_code(KC_1) : unregister_code(KC_1);
    return false;
  case _2:
    (record->event.pressed) ? register_code(KC_2) : unregister_code(KC_2);
    return false;
  case _3:
    (record->event.pressed) ? register_code(KC_3) : unregister_code(KC_3);
    return false;
  case _4:
    (record->event.pressed) ? register_code(KC_4) : unregister_code(KC_4);
    return false;
  case _5:
    (record->event.pressed) ? register_code(KC_5) : unregister_code(KC_5);
    return false;
  case _6:
    (record->event.pressed) ? register_code(KC_6) : unregister_code(KC_6);
    return false;
  case _7:
    (record->event.pressed) ? register_code(KC_7) : unregister_code(KC_7);
    return false;
  case _8:
    (record->event.pressed) ? register_code(KC_8) : unregister_code(KC_8);
    return false;
  default:
    return true; // Process all other keycodes normally
  }
}

// numpad combos

const uint16_t PROGMEM _combo_1234[] = {_1, _2, _3, _4, COMBO_END};
const uint16_t PROGMEM _combo_123[] = {_1, _2, _3, COMBO_END};
const uint16_t PROGMEM _combo_12[] = {_1, _2, COMBO_END};
const uint16_t PROGMEM _combo_13[] = {_1, _3, COMBO_END};
const uint16_t PROGMEM _combo_14[] = {_1, _4, COMBO_END};
const uint16_t PROGMEM _combo_16[] = {_1, _6, COMBO_END};
const uint16_t PROGMEM _combo_17[] = {_1, _7, COMBO_END};
const uint16_t PROGMEM _combo_18[] = {_1, _8, COMBO_END};
const uint16_t PROGMEM _combo_234[] = {_2, _3, _4, COMBO_END};
const uint16_t PROGMEM _combo_23[] = {_2, _3, COMBO_END};
const uint16_t PROGMEM _combo_34[] = {_3, _4, COMBO_END};
const uint16_t PROGMEM _combo_45[] = {_4, _5, COMBO_END};
const uint16_t PROGMEM _combo_46[] = {_4, _6, COMBO_END};
const uint16_t PROGMEM _combo_47[] = {_4, _7, COMBO_END};
const uint16_t PROGMEM _combo_567[] = {_5, _6, _7, COMBO_END};
const uint16_t PROGMEM _combo_56[] = {_5, _6, COMBO_END};
const uint16_t PROGMEM _combo_57[] = {_5, _7, COMBO_END};
const uint16_t PROGMEM _combo_58[] = {_5, _8, COMBO_END};
const uint16_t PROGMEM _combo_67[] = {_6, _7, COMBO_END};
const uint16_t PROGMEM _combo_68[] = {_6, _8, COMBO_END};
const uint16_t PROGMEM _combo_78[] = {_7, _8, COMBO_END};

// left hand combos

const uint16_t PROGMEM _combo_qe[] = {_Q, _E, COMBO_END};
const uint16_t PROGMEM _combo_qr[] = {_Q, _R, COMBO_END};
const uint16_t PROGMEM _combo_wr[] = {_W, _R, COMBO_END};
const uint16_t PROGMEM _combo_dv[] = {_D, _V, COMBO_END};
const uint16_t PROGMEM _combo_sef[] = {_S, _E, _F, COMBO_END};
const uint16_t PROGMEM _combo_wef[] = {_W, _E, _F, COMBO_END};
const uint16_t PROGMEM _combo_qwef[] = {_Q, _W, _E, _F, COMBO_END};
const uint16_t PROGMEM _combo_awef[] = {_A, _W, _E, _F, COMBO_END};

// right hand combos

const uint16_t PROGMEM _combo_jil[] = {_J, _I, _L, COMBO_END};
const uint16_t PROGMEM _combo_jio[] = {_J, _I, _O, COMBO_END};
const uint16_t PROGMEM _combo_uio[] = {_U, _I, _O, COMBO_END};
const uint16_t PROGMEM _combo_jiop[] = {_J, _I, _O, _P, COMBO_END};
const uint16_t PROGMEM _combo_jiosemi[] = {_J, _I, _O, _SEMICOLON, COMBO_END};
const uint16_t PROGMEM _combo_commadot[] = {_COMMA, RALT_T(KC_DOT), COMBO_END};

combo_t key_combos[] = {

  // numpad combos

  COMBO(_combo_12, KC_0),
  COMBO(_combo_123, KC_PLUS),
  COMBO(_combo_1234, KC_EQUAL),
  COMBO(_combo_13, KC_TILDE),
  COMBO(_combo_14, KC_UNDERSCORE),
  COMBO(_combo_16, KC_RIGHT_PAREN),
  COMBO(_combo_17, KC_RIGHT_CURLY_BRACE),
  COMBO(_combo_18, KC_RIGHT_BRACKET),
  COMBO(_combo_23, KC_ASTERISK),
  COMBO(_combo_234, KC_MINUS),
  COMBO(_combo_34, KC_9),
  COMBO(_combo_45, KC_LEFT_BRACKET),
  COMBO(_combo_46, KC_LEFT_CURLY_BRACE),
  COMBO(_combo_47, KC_LEFT_PAREN),
  COMBO(_combo_56, KC_DOLLAR),
  COMBO(_combo_567, KC_PERCENT),
  COMBO(_combo_57, KC_GRAVE),
  COMBO(_combo_58, KC_DOUBLE_QUOTE),
  COMBO(_combo_67, KC_HASH),
  COMBO(_combo_68, KC_QUOTE),
  COMBO(_combo_78, KC_CIRCUMFLEX),

  // non-numpad combos
  COMBO(_combo_qe, KC_QUOTE),
  COMBO(_combo_qr, KC_DOUBLE_QUOTE),
  COMBO(_combo_wr, KC_GRAVE),
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
  COMBO(_combo_commadot, KC_TILDE),
  // COMBO(_combo_op, KC_BACKSLASH),

};
