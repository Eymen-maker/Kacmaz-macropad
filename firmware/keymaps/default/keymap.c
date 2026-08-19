#include QMK_KEYBOARD_H
#include "sendstring_turkish_q.h"   // for Turkish-Q OS layout

enum custom_keycodes {
    MY_MACRO = SAFE_RANGE 
}; // isim tanimliyor 

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) { 
        case MY_MACRO:
            if (record->event.pressed) { // birakinca
                SEND_STRING("Hello, my name is Eymen." SS_TAP(X_ENTER)); 
            }
            return false;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
    [0] = LAYOUT(
        KC_1, KC_2, KC_3,
        MY_MACRO, KC_5, KC_6
    )
}; 
