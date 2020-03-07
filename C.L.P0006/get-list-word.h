#ifndef GET_LIST_WORD_H
	#define GET_LIST_WORD_H

#include "constant.h"

#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

//read a file and store it line-by-line
class ReadLines
{
	private:
		char _filename[MAX_LENGTH];
		std::vector<char *> _lines;

	public:
		ReadLines(const char *filename);
		~ReadLines();
		bool read();
		char * getLinesAt(int pos);
		int getLength();

};
#endif