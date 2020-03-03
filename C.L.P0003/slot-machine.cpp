#include "slot-machine.h"

void setupSlotMachine(slotMachine_t *machine)
{
	srand(time(NULL));
	for(int i = 0; i < NUM_DIGITS; i++)
		DIGITS_ACCESS[i] = 0;	
}

void newCombination(slotMachine_t *machine)
{
	for(int i = 0; i < NUM_DIGITS; i++)
	{
		DIGITS_ACCESS[i] = rand() % 10;
	}
}

char * getCombination(slotMachine_t machine)
{
	// + 1 for '\0'
	char * com = (char *)calloc(NUM_DIGITS + 1, sizeof(char));

	for(int i = 0; i < NUM_DIGITS; i++)
		com[i] = DIGITS[i] + '0';

	com[NUM_DIGITS] = '\0';

	return com;
}

int isCom3(slotMachine_t machine)
{
	return ((DIGITS[0] == DIGITS[1]) && (DIGITS[1] == DIGITS[2]));
}

int isCom2(slotMachine_t machine)
{	
	if(isCom3(machine))
		return FALSE;

	return ((DIGITS[0] == DIGITS[1]) ||
		(DIGITS[1] == DIGITS[2]) ||
		(DIGITS[0] == DIGITS[2]));
}

double getPrize(int result)
{
	if(result == LOSE)
		return 0;
	if(result == WIN_MODE_COM_3)
		return WIN_COM_3;
	if(result == WIN_MODE_COM_2)
		return WIN_COM_2;
}

int getResult(slotMachine_t machine)
{
	if(isCom3(machine))
		return WIN_MODE_COM_3;
	if(isCom2(machine))
		return WIN_MODE_COM_2;

	return LOSE;
}
