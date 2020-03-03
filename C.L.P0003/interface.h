#ifndef INTERFACE_H
	#define INTERFACE_H

#include <stdio.h>
#include <limits.h>
#include <stdio_ext.h>
#include "player.h"
#include "slot-machine.h"
#include "constant.h"

//Clear screen code
#define CLEAR_SCREEN printf("\033[2J\033[H")

//Option that user will choose in game
#define PLAY_GAME 1
#define SAVE_GAME 2
#define CASH_OUT 3

//get user input
int promptUser(int *n, char * msg, const int MIN, const int MAX);

//show menu on screen
void displayMenu(player_t player);

//main game scene
void scene(player_t *player, slotMachine_t *machine);

//scene when user play game
void gameScence(player_t *player, slotMachine_t *machine);

//scene when user save game
void saveScence(player_t *player, slotMachine_t *machine);

//scence when user cash out
void cashOutScence(player_t *player, slotMachine_t *machine);
#endif
