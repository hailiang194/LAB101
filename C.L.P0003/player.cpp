#include "player.h"


void setupPlayer(player_t *player)
{
	SCORE = DEFAULT_SETUP_MONEY;
}

void newGame(player_t *player)
{
	SCORE -= NEW_GAME_COST;
}


void playerWin(player_t *player, double prize)
{
	SCORE += prize;
	exportMoney(player);
}

int isOutOfMoney(player_t player)
{
	//because we just need 2 digit after decimal point
	return ((int)((player.score) * 100) - 0 == 0);
}

void exportMoney(player_t *player)
{
	FILE *file = fopen(MONEY_STORE_PATH, "w");

	fprintf(file, "%.2lf", SCORE);

	fclose(file);
}

void importMoney(player_t *player)
{
	FILE *money;
	money = fopen(MONEY_STORE_PATH, "r");

	if(money == NULL)
	{
		SCORE = DEFAULT_SETUP_MONEY;
		return;
	}

	double score = 0.0;
	fscanf(money, "%lf", &score);
	SCORE = score;
	fclose(money);
}