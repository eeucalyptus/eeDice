/*
 * random.h
 *
 * Created: 03.08.2018 14:19:59
 *  Author: schwarzwald
 */ 


#ifndef RANDOM_H_
#define RANDOM_H_

void random_init(void);
int random_get(void);
int random_getMod(void);
void random_increaseMod(void);

#endif /* RANDOM_H_ */