#include "game-process.h"

bool GameProcess::isWrongGuess(Game &game, char alpha)
{
    char * word = game.getWord();


    for(int i = 0; i < strlen(word); i++)
    {
        if(tolower(word[i]) == alpha)
            return false;
    }

    return true;
}

void GameProcess::missLife(Game &game)
{
    game.setLife(game.getLife() - 1);
}

bool GameProcess::isHiddenChar(Game &game, char alpha)
{
    if(game.hasSelected(alpha))
    {
        return false;
    }

    char *word = game.getWord();

    for(int i = 0; i < strlen(word); i++)
    {
        if(alpha == word[i])
            return true;
    }

    return false;
}

bool GameProcess::isDuplicatedSelection(Game &game, char alpha)
{
    if(!(isalpha(alpha) && (islower(alpha))))
    {
        return false;
    }

    return game.hasSelected(alpha);
}

bool GameProcess::isLose(Game &game)
{
    return (game.getLife() == 0);
}

bool GameProcess::isVictory(Game &game)
{
    char * word = game.getWord();

    for(int i = 0; i < strlen(word); i++)
    {
        if(!isalpha(word[i]))
            continue;

        if(!game.hasSelected(tolower(word[i])))
            return false;
    }

    return true;
}

StatusFlag GameProcess::getGameState(Game &game)
{
    if(GameProcess::isLose(game))
    {
        return LOSE;
    }
    else if(GameProcess::isVictory(game))
    {
        return WIN;
    }

    return PLAYING;
}