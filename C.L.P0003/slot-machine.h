#ifndef SLOT_MACHINE_H
	#define SLOT_MACHINE_H

#include <stdlib.h>
#include <time.h>

#include "constant.h"
#define DIGITS_ACCESS (machine -> digits)
#define DIGITS (machine.digits)

typedef struct SLOT_MACHINE
{
	unsigned int digits[NUM_DIGITS];
}slotMachine_t;

//setup slot machine
void setupSlotMachine(slotMachine_t *machine);
//set new combination for slot machine
void newCombination(slotMachine_t *machine);
//get combination
char * getCombination(slotMachine_t machine);
//check if this combination is combination 3 of kind
int isCom3(slotMachine_t machine);
//check if this combination is combination 2 of kind
int isCom2(slotMachine_t machine);
//get reward
double getPrize(int result);
//get result
int getResult(slotMachine_t machine);
#endif
