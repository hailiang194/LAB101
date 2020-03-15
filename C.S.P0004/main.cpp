#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

#define TRUE 1
#define FALSE 0

#define MAX_LENGTH 256
#define NUM_ALPHABET 26

bool inputChar(char *s, char *msg);
bool inputString(char *s, char *msg, const int LENGTH);

int * getFrequencesOfCharacter(char *s);
int getMax(int *a, int n);

int showAll(int *a, int index);

int showMax(int *a, int index);

void show(int *a, int n, int (*showed)(int* a, int index));

int main()
{
    char s[MAX_LENGTH] = "";
    char inputPrompt[] = "Please enter string: ";
    while (!inputString(s, inputPrompt, MAX_LENGTH))
    {
        printf("Unvalid string. Please enter it again.\n");
    }

    int *freq = getFrequencesOfCharacter(s);
    
    printf("Times of appearance for each character:\n");
    show(freq, NUM_ALPHABET, showAll);

    printf("---------------------------------\n");
    printf("Characters that appears the most:\n");
    show(freq, NUM_ALPHABET, showMax);

    free(freq);
    return 0;
}

bool inputChar(char *c, char *msg)
{
    __fpurge(stdin);
    printf("%s", msg);
    *c = getchar();

    return true;
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

int showAll(int *a, int index)
{
    return TRUE;
}

int showMax(int *a, int index)
{
    static int max = getMax(a, NUM_ALPHABET);

    return (a[index] == max);
}

void show(int *a, int n, int (*showed)(int* a, int index))
{
    for (int i = 0; i < n; i++)
    {
        if(showed(a, i) && a[i] > 0)
            printf("%3c ", i + 'a');
    }

    printf("\n");
    
    for(int i = 0; i < n; i++)
    {
        if(showed(a, i) && a[i] > 0)
            printf("%3d ", a[i]);
    }

    printf("\n");
}