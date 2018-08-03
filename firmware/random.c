/*
 * random.c
 *
 * Created: 03.08.2018 14:20:57
 *  Author: schwarzwald
 */ 

#include "random.h"

int random_mod;

void random_init() {
	// TODO Init timer
	// TODO Read mod from eeprom
	
}

int random_get(int mod) {
	// TODO get timer
	int timer_value = 0;
	int timer_mod = timer_value % mod;
	return timer_mod;
}

int random_getMod(void) {
	return random_mod;
}

void random_increaseMod(void) {
	random_mod = ++random_mod % 100;
	// TODO write mod to eeprom
}