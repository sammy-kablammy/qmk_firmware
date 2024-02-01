// https://docs.qmk.fm/#/feature_rgb_matrix?id=custom-rgb-matrix-effects

// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(sam_dual)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// NOTE: you can use RGM_MATRIX_LED_COUNT to see how many LEDs there
// are on the keyboard

static uint8_t shade;
static bool decrement;
static void sam_dual_init(effect_params_t* params) {
  shade = 1;
  decrement = false;
}
static bool sam_dual_run(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  if (shade == 255) {
      decrement = true;
  } else if (shade == 0) {
      decrement = false;
  }

  if (decrement) {
    for (uint8_t i = 2; i < RGB_MATRIX_LED_COUNT - 1; i++) {
      rgb_matrix_set_color(i, 0x00, 0x00, shade);
    }
    shade--;
  } else {
    for (uint8_t i = 2; i < RGB_MATRIX_LED_COUNT - 1; i++) {
      rgb_matrix_set_color(i, 0x00, 0x00, shade);
    }
    shade++;
  }
  return rgb_matrix_check_finished_leds(led_max);
}
static bool sam_dual(effect_params_t* params) {
  if (params->init) sam_dual_init(params);
  return sam_dual_run(params);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
