#include "get-list-word.h"

ReadLines::ReadLines(const char *filename)
{
        strcpy(this -> _filename, filename);
}

ReadLines::~ReadLines()
{
        _lines.clear();
}

bool ReadLines::read()
{
        FILE *inputFile = fopen(this -> _filename, "r");

        if(inputFile == NULL)
        {
                return false;
        }

        while(!feof(inputFile))
        {
                char * line = (char *)calloc(MAX_LENGTH, sizeof(char));

                fgets(line, MAX_LENGTH, inputFile);

                char *lastChar = &line[strlen(line) - 1];
                if(*lastChar == '\n')
                {
                        *lastChar = '\0';
                }

                (this -> _lines).push_back(line);
        }

        fclose(inputFile);

        return true;
}

char * ReadLines::getLinesAt(int pos)
{
        if((pos < 0) || (pos >= (this -> _lines).size()))
        {
                return NULL;
        }

        return (this -> _lines)[pos];
}

int ReadLines::getLength()
{
        return (this -> _lines).size();
}
/*
vector<string> readline(string dir)
{

        
        //list DataLine
        vector<string> lstDataLine;

        //Read data in *.inp file
        ifstream inputFile;
        inputFile.open(dir);

        if(inputFile.fail())
        {
                return lstDataLine;
        }


        while(true)
        {

                char temp[100] = "";

                inputFile.getline(temp, 100, '\n');

                if(!inputFile.good())
                        break;

                string data = temp;


                lstDataLine.push_back(data);

        }

        inputFile.close();      

        return lstDataLine;
}

vector<string> getListWords()
{
	string wordDir = WORD_LIST_DIR;
	return readline(wordDir);
}

int getRandom(int n)
{
        srand((unsigned)time(0)); 
        int randNum;
        randNum = rand() % n;

        return randNum; 
}

string getRandomWord(vector<string> lstWord)
{
        return lstWord[getRandom(lstWord.size())];
}
*/