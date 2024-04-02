#include QMK_KEYBOARD_H

enum layers {
    _OSU = 0,
    _ADJ
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_OSU] = LAYOUT(
                   RGB_TOG, KC_NO,             RGB_MOD, RGB_RMOD,
       KC_A, KC_S, KC_D, KC_F, KC_BSPC, KC_SPC, KC_J, KC_K, KC_L, KC_SCLN
    )
};