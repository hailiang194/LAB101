#include "interface.h"

int promptUser(int *n,char * msg, const int MIN, const int MAX)
{
	__fpurge(stdin);
	char temp;
	printf("%s", msg);

	if(scanf("%d%c", n, &temp) == 2)
	{
		if((temp == '\n') && ((*n >= MIN) && (*n <= MAX)))
			return TRUE;
	}


	return FALSE;
}

void displayMenu(player_t player)
{
	printf("You have %.2lf\n", player.score);
	printf("Choose one of the following question\n");
	printf("1) Play the slot machine.\n");
	printf("2) Save game.\n");
	printf("3) Cast out.\n");
}

void scene(player_t *player, slotMachine_t *machine)
{
	CLEAR_SCREEN;
	displayMenu(*player);
	int choise = 0;
	char prompt[] = ">> ";
	while(!promptUser(&choise, prompt, 1, 3))
		continue;
	switch(choise)
	{
		case PLAY_GAME:
			gameScence(player, machine);
			break;
		case SAVE_GAME:
			saveScence(player, machine);
			break;
		case CASH_OUT:
			cashOutScence(player, machine);
	}

		
}

void gameScence(player_t *player, slotMachine_t *machine)
{
	newGame(player);
	if(isOutOfMoney(*player))
	{
		printf("No money, no honey! See you later");
		remove(MONEY_STORE_PATH);
		exit(EXIT_SUCCESS);
	}

	newCombination(machine);
	char * com = getCombination(*machine);
	printf("The slot machine shows %s\n", com);
	free(com);
	

	int result = getResult(*machine);
	double prize = getPrize(result);
	if(result != LOSE)
		printf("You win at the prize %.2lf!\n", prize);
	else
		printf("Sorry you don't win anything!\n");
	playerWin(player, prize);
	getchar();
}

void saveScence(player_t *player, slotMachine_t *machine)
{
	exportMoney(player);
	printf("Your money had saved!");
	getchar();
}

void cashOutScence(player_t *player, slotMachine_t *machine)
{
	printf("Thank you for playing! You end with %.2lf\n", player -> score);
	remove(MONEY_STORE_PATH);
	exit(EXIT_SUCCESS);
}
