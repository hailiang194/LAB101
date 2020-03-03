#include <stdio.h>
#include <stdlib.h>

#include "slot-machine.h"
#include "player.h"
#include "interface.h"
#include "constant.h"

int main()
{
	//setup
	player_t player;
	slotMachine_t machine;

	setupPlayer(&player);
	importMoney(&player);
	setupSlotMachine(&machine);
	//update
	while(TRUE)
	{
		scene(&player, &machine);
	}	
	return 0;
}
