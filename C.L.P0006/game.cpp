#include "game.h"

Game::Game(char *word, int life)
{
    strcpy((this -> _word), word);
    (this -> _life) = life;

    for(int i = 0; i < 26; i++)
    {
        (this -> _hasSelected)[i] = false;
    }
}

Game::Game(char *word, bool *hasSelected, int life)
{
    strcpy((this -> _word), word);
    (this -> _life) = life;

    for(int i = 0; i < 26; i++)
    {
        (this -> _hasSelected)[i] = hasSelected[i];
    }
}

char * Game::getWord()
{
    return (this -> _word);
}

int Game::getLife()
{
    return (this -> _life);
}

void Game::setLife(int life)
{
    (this -> _life) = life;
}

void Game::select(char alpha)
{
    if(!isalpha((int)alpha))
    {
        return;
    }

    alpha = tolower(alpha);

    (this -> _hasSelected)[(int)(alpha - 'a')] = true;
}

bool Game::hasSelected(char alpha)
{
    if(!isalpha((int)alpha))
    {
        return false;
    }

    alpha = tolower(alpha);

    return (this -> _hasSelected)[(int)(alpha - 'a')];
}