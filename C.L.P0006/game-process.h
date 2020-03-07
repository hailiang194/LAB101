#ifndef GAME_PROCESS_H
    #define GAME_PROCESS_H

#include "game.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

enum StatusFlag {LOSE, PLAYING, WIN};

class GameProcess
{
    public:
        static bool isWrongGuess(Game &game, char alpha);
        static void missLife(Game &game);
        static bool isHiddenChar(Game &game, char alpha);

        static bool isDuplicatedSelection(Game &game, char alpha);
        static bool isLose(Game &game);
        static bool isVictory(Game &game);

        static StatusFlag getGameState(Game &game);

};

#endif