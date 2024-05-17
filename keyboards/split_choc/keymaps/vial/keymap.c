#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: QWERTY
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |Ctrl/Esc|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |Ctrl/' "|
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  | [ {  |CapsLk|  |F-keys|  ] } |   N  |   M  | ,  < | . >  | /  ? | RShift |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |Adjust| LGUI | LAlt/| Space| Nav  |  | Sym  | Space| AltGr| RGUI | Menu |
 *                        |      |      | Enter|      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [0] = LAYOUT(
     KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,   KC_T ,                                        KC_Y,   KC_U ,  KC_I ,   KC_O ,  KC_P,
     KC_A ,  KC_S   ,  KC_D  ,   KC_F ,   KC_G ,                                        KC_H,   KC_J ,  KC_K ,   KC_L ,KC_SCLN,
     KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,   KC_B ,  KC_N,   KC_M ,KC_COMM, KC_DOT ,KC_SLSH,
                                 KC_DELETE, KC_LALT, KC_LSFT, KC_ENTER, KC_TAB, KC_SPC ,KC_BSPC, KC_RGUI
    ),

    [1] = LAYOUT(
     KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,   KC_T ,                                        KC_Y,   KC_U ,  KC_I ,   KC_O ,  KC_P,
     KC_A ,  KC_S   ,  KC_D  ,   KC_F ,   KC_G ,                                        KC_H,   KC_J ,  KC_K ,   KC_L ,KC_SCLN,
     KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,   KC_B ,  KC_N,   KC_M ,KC_COMM, KC_DOT ,KC_SLSH,
                                 KC_DELETE, KC_LALT, KC_LSFT, KC_ENTER, KC_TAB, KC_SPC ,KC_BSPC, KC_RGUI
    ),

    [2] = LAYOUT(
     KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,   KC_T ,                                        KC_Y,   KC_U ,  KC_I ,   KC_O ,  KC_P,
     KC_A ,  KC_S   ,  KC_D  ,   KC_F ,   KC_G ,                                        KC_H,   KC_J ,  KC_K ,   KC_L ,KC_SCLN,
     KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,   KC_B ,  KC_N,   KC_M ,KC_COMM, KC_DOT ,KC_SLSH,
                                 KC_DELETE, KC_LALT, KC_LSFT, KC_ENTER, KC_TAB, KC_SPC ,KC_BSPC, KC_RGUI
    ),

    [3] = LAYOUT(
     KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,   KC_T ,                                        KC_Y,   KC_U ,  KC_I ,   KC_O ,  KC_P,
     KC_A ,  KC_S   ,  KC_D  ,   KC_F ,   KC_G ,                                        KC_H,   KC_J ,  KC_K ,   KC_L ,KC_SCLN,
     KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,   KC_B ,  KC_N,   KC_M ,KC_COMM, KC_DOT ,KC_SLSH,
                                 KC_DELETE, KC_LALT, KC_LSFT, KC_ENTER, KC_TAB, KC_SPC ,KC_BSPC, KC_RGUI
    )
};