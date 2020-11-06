 /* Copyright 2020 t-miyajima
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT( /* Base */
        KC_ESC, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSPC,
        KC_PGUP, KC_LCTL, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_ENT,
        KC_PGDN, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_TAB, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT,
        KC_F10, KC_F9, KC_LALT, KC_LCMD, LT(1, KC_SPC), KC_BSPC, KC_BSPC, KC_SPC, KC_RCMD, KC_PGUP, KC_UP, KC_PGDN,
        KC_F7, KC_F2, KC_MPLY, G(KC_A), G(KC_C), G(KC_V), KC_ENT, KC_ENT, G(KC_Z), SCMD(KC_Z), SCMD(KC_4), KC_LEFT, KC_DOWN, KC_RGHT,
        KC_F),
    LAYOUT( /* Layer 1 */
        KC_TRNS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_TRNS,
        KC_PGDN, KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_F3, KC_F4, KC_F5, KC_F6, KC_F8, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F15, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, SCMD(A(KC_V)), KC_TRNS, KC_TRNS, G(KC_C), G(KC_V), KC_TRNS, KC__VOLDOWN, KC_F14, KC__VOLUP,
        KC_TRNS),    
};
