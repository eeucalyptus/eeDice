/*
 * main.c
 *
 * Created: 03.08.2018 14:18:56
 *  Author: schwarzwald
 */ 

#include "display.h"
#include "random.h"

#include <avr/io.h>

int main() {
	random_init();
	display_init();
	buttons_init();
	
	while(1) {
		
	}
	return 0;
}