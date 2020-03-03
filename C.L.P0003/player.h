#ifndef PLAYER_H
	#define PLAYER_H

#include <stdio.h>
#include <stdlib.h>
#include "constant.h"

#define SCORE (player -> score)

typedef struct PLAYER
{
	double score;
} player_t;

//setup new player
void setupPlayer(player_t *player);

//play new game
void newGame(player_t *player);

//action when player win
void playerWin(player_t *player, double prize);

//check if player is out of money
int isOutOfMoney(player_t player);

//import money from file
void importMoney(player_t *player);

//export money to file
void exportMoney(player_t *player);
#endif
