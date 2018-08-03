/*
 * display.c
 *
 *  Created on: 10.01.2018
 *      Author: schwarzwald
 */

#include "display.h"

#include <stdint.h>
#include <stdbool.h>
#include <EFM8BB1.h>

SBIT(SRCLK, 0x80, 0 ); /* Port 0 bit 0 */
SBIT(SROUT, 0x80, 1 ); /* Port 0 bit 1 */
SBIT(SRSER, 0x80, 2 ); /* Port 0 bit 2 */

inline void display_shift_delay() {
	for(int i=0; i < 100; i++) {
		NOP();
	}
}

void display_init(void) {
	SRCLK = 0;
	SROUT = 0;
	SRSER = 0;

	P0MDOUT |= 0x07;
	XBR2 = 0x40;
}

void display_shift_out(uint16_t data) {
	for(int i = 0; i < 16; i++) {
		SRCLK = 0;
		display_shift_delay();
		SRSER = data & 1;
		SRCLK = 1;
		display_shift_delay();

		data = data >> 1;
	}
	SRCLK = 0;
	display_shift_delay();
	SROUT = 1;
	display_shift_delay();
	SROUT = 0;
}

void display_set_digits(uint8_t left_digit, bool left_dot, uint8_t right, bool right_dot) {

}
