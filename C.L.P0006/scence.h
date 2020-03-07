#ifndef SCENCE_H
    #define SCENCE_H

#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <ctype.h>
#include "get-list-word.h"
#include "game.h" 
#include "game-process.h"
#include "constant.h"

#define HIDDEN_CHAR '_'

class Scence
{
    public:
        static bool inputChar(char &c, char *msg);
        static bool inputString(char *s, char *msg, const int LENGTH);

        static void menu(ReadLines &words);
        static void mainGame(ReadLines &words);
        static void gameOver(Game &game, StatusFlag status);
};
#endif