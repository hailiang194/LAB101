#include "scence.h"

bool Scence::inputChar(char &c, char *msg)
{
    __fpurge(stdin);
    printf("%s", msg);
    c = getchar();

    return true;
}

bool Scence::inputString(char *s, char *msg, const int LENGTH)
{
    __fpurge(stdin);
    printf("%s", msg);

    //remove space at the leadding of string
    char temp = ' ';
    do
    {
        temp = getchar();
        if(temp == '\n')
        {
            strcpy(s, "");
            return false;
        }
    } while (isspace(temp));
    s[0] = temp;


    fgets(&s[1], LENGTH - 1, stdin);

    if(s[strlen(s) - 1] != '\n')
        return false;

    s[strlen(s) - 1] = '\0';
    //remove trailing space
    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        if(isspace(s[i]))
            s[i] = '\0';
        else
            break;
        
    }

    return true;
}

void Scence::menu(ReadLines &words)
{
    char prompt[] = "Would you like to play hangman (yes, no)?\n";
    char option[4] = ""; //because yes need 4 char

    inputString(option, prompt, 4);

    //convert option to lowercase
    for(int i = 0; i < strlen(option); i++)
    {
        option[i] = tolower(option[i]);
    }

    if(strcmp(option, "yes") == 0)
    {
        mainGame(words);
    }
    else if(strcmp(option, "no"))
    {
        return;
    }
    else
    {
        exit(EXIT_SUCCESS);
    }
    
}

void Scence::mainGame(ReadLines &words)
{
    int randPos = rand() % words.getLength();

    Game game(words.getLinesAt(randPos));

    char *word = game.getWord();

    StatusFlag status = PLAYING;

    while(status == PLAYING)
    {
        printf("Your currently have %d incorrect guesses\n", MAX_LIFE - game.getLife());
        printf("Here is your puzzle:\n");
        for(int i = 0; i < strlen(word); i++)
        {
            if(game.hasSelected(word[i]))
                printf("%c ", toupper(word[i]));
            else
                printf("%c ", HIDDEN_CHAR);
        }

        printf("\n");

        char guess = ' ';
        char guessPrompt[] = "Please enter your guess.\n";
        inputChar(guess, guessPrompt);

        if(GameProcess::isWrongGuess(game, guess))
        {
            printf("Sorry, that letter is NOT in the puzzle.\n");
            GameProcess::missLife(game);
        }
        else if(GameProcess::isDuplicatedSelection(game, guess))
        {
            printf("Sorry, you have guessed that letter already.\n");
        }
        else //user guess a letter in the puzzle
        {
            printf("Congratulations, you guessed a letter in the puzzle!\n");
        }

        game.select(guess);

        status = GameProcess::getGameState(game);

    }


}

void Scence::gameOver(Game &game, StatusFlag status)
{
    switch(status)
    {
        case WIN:
            printf("Congratuations! You got the correct word, ");
            break;
        case LOSE:
            printf("Sorry, you have made %d incorrect guesses, you lose.\n", MAX_LIFE - game.getLife());
            printf("The correct word was");
            break;
    }

    char *word = game.getWord();

    for(int i = 0; i < strlen(word); i++)
    {
        printf("%c", toupper(word[i]));
    }
    printf("\n");
}