#include <stdio.h>
#include <time.h>

#include "get-list-word.h"
#include "game.h"
#include "game-process.h"
#include "scence.h"
#include "constant.h"

int main()
{
	//set randomize generator
	srand(time(NULL));

	//get file that store puzzle words
	char hangmanPath[MAX_LENGTH] = "";
	char pathPrompt[] = "What file stores the puzzle words?\n";
	Scence::inputString(hangmanPath, pathPrompt, MAX_LENGTH);

	ReadLines words(hangmanPath);
	if(!words.read())
	{
		printf("Unable to read %s.", hangmanPath);
		return 0;
	}

	while(true)
	{
		Scence::menu(words);
	}
	return 0;
}