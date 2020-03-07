#ifndef GAME_H
    #define GAME_H

#include <string.h>
#include <ctype.h>
#include "constant.h"

#define MAX_LIFE 5

class Game
{
    private:
        char _word[MAX_LENGTH];
        int  _life;
        //store that is which characters has been selected
        bool _hasSelected[26];
    

    public:
        Game(char *word, int life = MAX_LIFE);
        Game(char *word, bool *hasSelected, int life = MAX_LIFE);

        char * getWord();

        int getLife();
        void setLife(int life);

        //check if alpha has been selected or not
        bool hasSelected(char alpha);
        //select alpha
        void select(char alpha);

};

#endif