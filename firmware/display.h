/*
 * display.h
 *
 *  Created on: 10.01.2018
 *      Author: schwarzwald
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <stdint.h>
#include <stdbool.h>

void display_init(void);
void display_set_digits(uint8_t left_digit, bool left_dot, uint8_t right, bool right_dot);

#endif /* DISPLAY_H_ */
