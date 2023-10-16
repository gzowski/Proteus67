// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum custom_layer {
    _QWERTY,
    _LOWER,
    _RAISE,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x14
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_ESC , 			KC_ESC , KC_6   , KC_7   , KC_8   , KC_9   , KC_0    , KC_ESC ,
	KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , 			KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
	KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , 			KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , 			KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_LGUI , KC_ALT , KC_SPC , KC_R , _______			KC_COMM , KC_ESC , KC_BSPC , KC_ , KC_ESC , _______ , _______
);
    [_LOWER] = LAYOUT_5x14
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_ESC ,                  KC_ESC , KC_6   , KC_7   , KC_8   , KC_9   , KC_0    , KC_ESC ,
        KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC ,                  KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC ,                  KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC ,                  KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_LGUI , KC_ALT , KC_SPC , KC_R , _______                    KC_COMM , KC_ESC , KC_BSPC , KC_ , KC_ESC , _______ , _______
);
    [_RAISE] = LAYOUT_5x14
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_ESC ,                  KC_ESC , KC_6   , KC_7   , KC_8   , KC_9   , KC_0    , KC_ESC ,
        KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC ,                  KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC ,                  KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC ,                  KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC , KC_ESC  , KC_ESC ,
        KC_ESC , KC_ESC , KC_LGUI , KC_ALT , KC_SPC , KC_R , _______                    KC_COMM , KC_ESC , KC_BSPC , KC_ , KC_ESC , _______ , _______
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_LOWER] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),  },
    [_RAISE] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),  }
};
#endif
