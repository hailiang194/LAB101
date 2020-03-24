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

#define ENTER 13
#define ESC 27


int getch();

bool inputString(char *s, char *msg, const int LENGTH);

void strcpy_reverse(char *src, char *des, int index);

void update();

int main()
{
    while(TRUE)
    {
        update();
        char choise = 0;
        
        while((choise != ENTER) && (choise != ESC))
        {
            printf("Press any key to continue(Esc for exit)\n");
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

void strcpy_reverse(char *src, char *des, int index)
{
    if(index == -1)
        return;

    int desSize = strlen(des);
    des[desSize] = src[index];
    des[desSize + 1] = '\0';
    strcpy_reverse(src, des, index - 1);
}

void update()
{
    char s[MAX_LENGTH] = "";
    char inputPrompt[] = "Please enter any string: ";
    while (!inputString(s, inputPrompt, MAX_LENGTH))
    {
        printf("Unvalid string. Please enter it again.\n");
    }

    char reverse[MAX_LENGTH] = "";
    strcpy_reverse(s, reverse, strlen(s) - 1);
    printf("%s\n", reverse);

}