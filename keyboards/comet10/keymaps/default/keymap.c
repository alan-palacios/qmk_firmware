#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │ 1 │ 2 │ 3 │ 4 │ 5 │
     * ├───┼───┼───┼───┼───┤
     * │ 6 │ 7 │ 8 │ 9 │ 0 │
     * └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x5(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,
        KC_G,    KC_H,    KC_I,    KC_J,    KC_K
    )
};
