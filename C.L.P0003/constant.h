#ifndef CONSTANT_H
	#define CONSTANT_H

//for boolean value
#define TRUE 1
#define FALSE 0

//money data path
#define MONEY_STORE_PATH "./money.txt"

//money player has when they start new game
#define DEFAULT_SETUP_MONEY 10.0

//cost player have to pay for new game
#define NEW_GAME_COST 0.25

//prize player gain with combination 2 of a kind
#define WIN_COM_2 0.50
//this one for combination 3 of a kind
#define WIN_COM_3 10.0

//mode of winning
#define LOSE 0 
#define WIN_MODE_COM_2 2// Combination 2 of a kind
#define WIN_MODE_COM_3 3// Combination 3 of a kind

//number of digits in slot machine
#define NUM_DIGITS 3

#endif
