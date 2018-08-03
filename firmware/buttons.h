/*
 * buttons.h
 *
 * Created: 03.08.2018 14:30:30
 *  Author: schwarzwald
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_

#include <stdbool.h>

void buttons_init(void);
bool buttons_isPressed(int index);

#endif /* BUTTONS_H_ */