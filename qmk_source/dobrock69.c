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
#include "debug.h"
#include "print.h"
#include "stm32l072xx.h"

#include "dobrock69.h"

#include "ch.h"
#include "chtrace.h"
#include "chvt.h"
#include "hal.h"
#include "hal_pal.h"

void keyboard_post_init_kb(void) {
#ifdef EEPROM_ENABLE
    if (!eeconfig_is_enabled()) {
        eeconfig_init();
    }
#endif  // EEPROM_ENABLE

    debug_enable   = true;
    debug_matrix   = true;
    debug_keyboard = false;
    debug_mouse    = false;

#ifdef TEST_AUDIO_PIN_OUTPUT
    setPinOutput(A4);
    setPinOutput(A5);
    for (uint32_t i = 0; i < 2000; ++i) {
        writePinHigh(A4);
        writePinLow(A5);
        wait_ms(1);
        writePinLow(A4);
        writePinHigh(A5);
        wait_ms(1);
    }
#endif  // TEST_AUDIO_PIN_OUTPUT
}

void chibi_system_halt_hook(const char* reason) {
    // re-route to QMK toolbox...
    // uprintf("system halting: %s\n", reason);
}

void chibi_system_trace_hook(void* tep) {
    // re-route to QMK toolbox...
    // uprintf("trace\n");
}

void chibi_debug_check_hook(const char* func, const char* condition, int value) {
    // re-route to QMK toolbox...
    // uprintf("%s debug check failure: (%s) == %s\n", func, condition, value ? "true" : "false");
    // ...and hard-loop fail
    while (1) {
    }
}

void chibi_debug_assert_hook(const char* func, const char* condition, int value, const char* reason) {
    // re-route to QMK toolbox...
    // uprintf("%s debug assert (%s) failure: (%s) == %s\n", func, reason, condition, value ? "true" : "false");
    // ...and hard-loop fail
    while (1) {
    }
}
