// Copyright 2024  Evgeny Kapusta (@ryodeushii)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "ansi.h"
#include QMK_KEYBOARD_H
#include "common/config/config.h"

enum custom_user_keycodes {
    RGB_DIM_KEEP_IND = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// layer Mac
[0] = LAYOUT_ansi_84(
	KC_ESC, 	KC_BRID,  	KC_BRIU,  	MAC_TASK, 	MAC_SEARCH, MAC_VOICE,  MAC_DND,    KC_MPRV,  	KC_MPLY,  	KC_MNXT, 	KC_MUTE, 	KC_VOLD, 	KC_VOLU, 	MAC_PRTA,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC,				KC_BSLS,	KC_PGDN,
	KC_LCTL,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	KC_LSFT,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	KC_UP,		KC_END,
	KC_LCTL,	KC_LALT,	KC_LGUI,								KC_SPC, 							KC_RGUI,	MO(1),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),

// layer Mac Fn
[1] = LAYOUT_ansi_84(
	_______, 	KC_F1,  	KC_F2,  	KC_F3, 		KC_F4,  	KC_F5,  	KC_F6,  	KC_F7,  	KC_F8,  	KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 	MAC_PRT,	TG(7),	_______,
	_______, 	LNK_BLE1,  	LNK_BLE2,  	LNK_BLE3,  	LNK_RF,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 	_______,	            _______,
	_______, 	DT_DOWN,   	DT_PRNT,   DT_UP   ,   	_______,   	_______,   	DEBOUNCE_PRESS_DEC,   	DEBOUNCE_PRESS_SHOW,   	DEBOUNCE_PRESS_INC,   	TOG_DEEP_SLEEP,  	TOG_USB_SLP,   	DEV_RESET,	SLEEP_MODE, BAT_SHOW,	            _______,
	KC_CAPS,	SLEEP_TIMEOUT_DEC,   	SLEEP_TIMEOUT_SHOW,   	SLEEP_TIMEOUT_INC,  	_______,   	_______,   	DEBOUNCE_RELEASE_DEC,	DEBOUNCE_RELEASE_SHOW,   	DEBOUNCE_RELEASE_INC,   	_______,  	_______,	_______, 	_______,	                            _______,
	_______,				_______,   	_______,   	RGB_TEST,  	_______,    _______,   	MO(5),	MO(4), 		RM_SPDD,	RM_SPDU,	RGB_DIM_KEEP_IND,	_______,	            RM_VALU,    _______,
	_______,	_______,	_______,						_______, 							_______,	MO(1),   	_______,				RM_NEXT,	RM_VALD,    RM_HUEU),

// layer win
[2] = LAYOUT_ansi_84(
	KC_ESC, 	KC_F1,  	KC_F2,  	KC_F3, 		KC_F4,  	KC_F5,  	KC_F6,  	KC_F7,  	KC_F8,  	KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 	KC_PSCR,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC,				KC_BSLS,	KC_PGDN,
	KC_LCTL,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	KC_LSFT,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	KC_UP,		KC_END,
	KC_LCTL,	KC_LGUI,	KC_LALT,								KC_SPC, 							KC_RALT,	MO(3),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),

// layer win Fn
[3] = LAYOUT_ansi_84(
	_______, 	KC_BRID,  	KC_BRIU,  	_______, 	    _______,  	_______,  	_______,  	KC_MPRV,  	KC_MPLY,  	KC_MNXT, 	KC_MUTE, 	KC_VOLD, 	KC_VOLU, 	KC_PSCR,	TG(7),	_______,
	_______, 	LNK_BLE1,  	LNK_BLE2,  	LNK_BLE3,  	LNK_RF,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 	_______,	            _______,
	_______, 	DT_DOWN,   	DT_PRNT,   DT_UP   ,   	_______,   	_______,   	DEBOUNCE_PRESS_DEC,   	DEBOUNCE_PRESS_SHOW,   	DEBOUNCE_PRESS_INC,   	TOG_DEEP_SLEEP,  	TOG_USB_SLP,   	DEV_RESET,	SLEEP_MODE, BAT_SHOW,	            _______,
	KC_CAPS,	SLEEP_TIMEOUT_DEC,   	SLEEP_TIMEOUT_SHOW,   	SLEEP_TIMEOUT_INC,  	_______,   	_______,   	DEBOUNCE_RELEASE_DEC,	DEBOUNCE_RELEASE_SHOW,   	DEBOUNCE_RELEASE_INC,   	_______,  	_______,	_______, 	_______,	                            _______,
	_______,				_______,   	_______,   	RGB_TEST,  	_______,    _______,   	MO(5),	MO(4), 		RM_SPDD,	RM_SPDU,	RGB_DIM_KEEP_IND,	_______,	            RM_VALU,    _______,
	_______,	_______,	_______,						_______, 							_______,	MO(3),		_______,				RM_NEXT,    RM_VALD,	RM_HUEU),

// layer 4
[4] = LAYOUT_ansi_84(
	_______, 	_______,  	_______,  	_______, 	_______,  	_______,  	_______,  	_______,  	_______,  	_______, 	_______, 	_______, 	_______, 	_______,	_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______,	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,	_______, 	 						_______,	_______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	_______,	_______, 	SIDE_SPD,	SIDE_SPI,	_______,	_______,	            SIDE_VAI,   _______,
	_______,	_______,	_______,						_______, 							_______,	MO(4),   	_______,				SIDE_MOD,	SIDE_VAD,   SIDE_HUI),

// layer 5
[5] = LAYOUT_ansi_84(
	_______, 	_______,  	_______,  	_______, 	_______,  	_______,  	_______,  	_______,  	_______,  	_______, 	_______, 	_______, 	_______, 	_______,	_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______,	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,	_______, 	 						_______,	_______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	_______,	_______, 	AMBIENT_SPD,	AMBIENT_SPI,	_______,	_______,	            AMBIENT_VAI,   _______,
	_______,	_______,	_______,						_______, 							_______,	MO(5),   	_______,				AMBIENT_MOD,	AMBIENT_VAD,   AMBIENT_HUI),


// layer 6
[6] = LAYOUT_ansi_84(
	_______, 	_______,  	_______,  	_______, 	_______,  	_______,  	_______,  	_______,  	_______,  	_______, 	_______, 	_______, 	_______, 	_______,	_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______,	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,	_______, 	 						_______,	_______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	_______,	_______, 	_______,	_______,	_______,	_______,	            _______,   _______,
	_______,	_______,	_______,						_______, 							_______,	_______,   	_______,				_______,	_______,   _______),

// layer 7
[7] = LAYOUT_ansi_84(
	_______, 	_______,  	_______,  	_______, 	_______,  	_______,  	_______,  	_______,  	_______,  	_______, 	_______, 	_______, 	_______, 	_______,	_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
    _______, MT(MOD_LGUI,KC_A), MT(MOD_LALT,KC_S), MT(MOD_LCTL,KC_D), MT(MOD_LSFT,KC_F), _______, _______, MT(MOD_LSFT | MOD_RSFT,KC_J), MT(MOD_LCTL | MOD_RCTL,KC_K), MT(MOD_LALT | MOD_RALT,KC_L), MT(MOD_LGUI | MOD_RGUI,KC_SCLN), _______, _______, _______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	_______,	_______, 	_______,	_______,	_______,	_______,	            _______,   _______,
	_______,	_______,	_______,						_______, 							_______,	_______,   	_______,				_______,	_______,   _______),

};
// clang-format on

#define HRM_LAYER 7
#define HRM_FLASH_MS 1500

static uint32_t hrm_flash_timer  = 0;
static bool     hrm_flash_active = false;
static bool     hrm_init_done    = false;

// Toggle home row mods ON by default, without triggering the toggle flash
void keyboard_post_init_user(void) {
    layer_on(HRM_LAYER);
    hrm_init_done = true;
}

// Start the home row flash whenever the home row mods layer changes state
layer_state_t layer_state_set_user(layer_state_t state) {
    if (hrm_init_done && layer_state_cmp(state, HRM_LAYER) != layer_state_is(HRM_LAYER)) {
        hrm_flash_timer  = timer_read32();
        hrm_flash_active = true;
    }
    return state;
}

static void hrm_set_color(uint8_t row, uint8_t col) {
    if (layer_state_is(HRM_LAYER)) {
        user_set_rgb_color(get_led_index(row, col), 0x00, 0x80, 0x00);
    } else {
        user_set_rgb_color(get_led_index(row, col), 0x80, 0x00, 0x00);
    }
}

bool rgb_matrix_indicators_user(void) {
    if (hrm_flash_active) {
        if (timer_elapsed32(hrm_flash_timer) < HRM_FLASH_MS) {
            // A S D F and J K L ;
            for (uint8_t col = 1; col <= 4; col++) {
                hrm_set_color(3, col);
            }
            for (uint8_t col = 7; col <= 10; col++) {
                hrm_set_color(3, col);
            }
        } else {
            hrm_flash_active = false;
        }
    }

    // show home row mods state on the TG(HRM_LAYER) key (Ins) while Fn is held
    if (layer_state_is(1) || layer_state_is(3)) {
        hrm_set_color(0, 15);
    }

    return true;
}

// Permissive hold only for the shift keys (F / J) so capitals stay fast.
// For the other home row mods it turns opposite-hand rolls like "ay" or
// "sp" into GUI+y / Alt+p, so they rely on the tapping term instead.
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
        case MT(MOD_LSFT | MOD_RSFT, KC_J):
            return true;
        default:
            return false;
    }
}

static uint8_t saved_rgb_mode = 0;
static hsv_t   saved_rgb_hsv;
static bool    rgb_dimmed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == RGB_DIM_KEEP_IND) {
        if (record->event.pressed) {
            if (!rgb_dimmed) {
                saved_rgb_mode = rgb_matrix_get_mode();
                saved_rgb_hsv  = rgb_matrix_get_hsv();
                rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
                rgb_matrix_sethsv_noeeprom(0, 0, 0);
                rgb_dimmed = true;
            } else {
                rgb_matrix_mode_noeeprom(saved_rgb_mode);
                rgb_matrix_sethsv_noeeprom(saved_rgb_hsv.h, saved_rgb_hsv.s, saved_rgb_hsv.v);
                rgb_dimmed = false;
            }
        }
        return false;
    }
    return true;
}
