#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <termios.h>

#define TRUE 1
#define FALSE 0

#define MAX_LENGTH 256
#define NUM_ALPHABET 26

#define ENTER 13
#define ESC 27

#define SHOW_FREQUENCES(freq,isShowed) \
{ \
    for(int i = 0; i < NUM_ALPHABET; i++) \
        if((isShowed) && freq[i] != 0) \
        { \
            printf("%3c ", i + 'a'); \
        } \
    printf("\n"); \
    for(int i = 0; i < NUM_ALPHABET; i++) \
        if((isShowed) && freq[i] != 0) \
        { \
            printf("%3d ", freq[i]); \
        } \
    printf("\n"); \
} 

int getch();

bool inputString(char *s, char *msg, const int LENGTH);

int * getFrequencesOfCharacter(char *s);
int getMax(int *a, int n);

void update()
{
    char s[MAX_LENGTH] = "";
    char inputPrompt[] = "Please enter string: ";
    while (!inputString(s, inputPrompt, MAX_LENGTH))
    {
        printf("Unvalid string. Please enter it again.\n");
    }

    int *freq = getFrequencesOfCharacter(s);

    printf("Times of appearance for each character:\n");
    SHOW_FREQUENCES(freq, TRUE);

    int max = getMax(freq, NUM_ALPHABET);
    printf("Characters that appears the most:\n");
    SHOW_FREQUENCES(freq, (freq[i] == max));

    free(freq);
}

int main()
{
    while(TRUE)
    {
        update();
        char choise = 0;
        
        while((choise != ENTER) && (choise != ESC))
        {
            printf("Do you wish to continue? (Enter for yes, Esc for no)\n");
            choise = getch();
        }

        switch(choise)
        {
            case ENTER:
                break;
            case ESC:
                exit(EXIT_SUCCESS);
        }
    }
    return 0;
}

int getch(){

    int                 ret;
    struct termios      back;
    struct termios      tmp;
    int fd =            0;      //stdin

    tcgetattr(fd, &back);       // a backup
    tcgetattr(fd, &tmp);

    // code get from man page
    tmp.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP
                   | INLCR | IGNCR | ICRNL | IXON);
    tmp.c_oflag &= ~OPOST;
tmp.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);

    tmp.c_cflag &= ~(CSIZE | PARENB);
    tmp.c_cflag |= CS8;
    // endof man page

    // apply configuration
    tcsetattr(fd, TCSANOW, &tmp);

    ret=getchar();

    // reset back the configuration
    tcsetattr(fd, TCSANOW, &back);

    return ret;
}




bool inputString(char *s, char *msg, const int LENGTH)
{
    __fpurge(stdin);
    printf("%s", msg);

    //remove space at the leadding of string
    char temp = ' ';
    do
    {
        temp = getchar();
        if (temp == '\n')
        {
            strcpy(s, "");
            return false;
        }
    } while (isspace(temp));
    s[0] = temp;

    fgets(&s[1], LENGTH - 1, stdin);

    if (s[strlen(s) - 1] != '\n')
        return false;

    s[strlen(s) - 1] = '\0';
    //remove trailing space
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (isspace(s[i]))
            s[i] = '\0';
        else
            break;
    }

    return true;
}

int * getFrequencesOfCharacter(char *s)
{
    int *freq = (int *)calloc(NUM_ALPHABET, sizeof(int));

    for(char *c = s; *c != '\0'; c++)
    {
        if(!isalnum(*c))
            continue;

        freq[tolower(*c) - 'a']++;
    }

    return freq;
}

int getMax(int *a, int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}
