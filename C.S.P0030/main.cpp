#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <limits.h>
#include <string.h>

#define MAX_LENGTH 256

#define TRUE 1
#define FALSE 0

int promptUser(int *n, char *msg, const int MIN, const int MAX);

int isOdd(int num);

int isEven(int num);

int getSum(int *a, int n, int(*isAdded)(int));

int main()
{
    printf("Sum Even Odd program\n");

    int n = 0;
    char numPrompt[] = "Enter a number of element n=";
    while(!promptUser(&n, numPrompt, 0, 10))
    {
        printf("Unvalid number. Please enter it again.\n");
    }

    int *a = (int *)calloc(n, sizeof(int));

    printf("Input elements:\n");
    for(int i = 0; i < n; i++)
    {
        char elementPrompt[MAX_LENGTH] = "";
        sprintf(elementPrompt, "\tElement %d=", (i + 1));
        while(!promptUser(&a[i], elementPrompt, INT_MIN, INT_MAX))
        {
            printf("\tUnvalid element value. Please enter it again.\n");
        }
    }

    int sumOdd = getSum(a, n, isOdd);
    int sumEven = getSum(a, n, isEven);
    printf("Sum of Even=%d\n", sumEven);
    printf("Sum of Odd=%d\n", sumOdd);

    free(a);

    return 0;
}


int promptUser(int *n, char *msg, const int MIN, const int MAX)
{
    __fpurge(stdin);
	char temp;
	printf("%s", msg);


	if(scanf("%d%c", n, &temp) == 2)
	{
		if((temp == '\n') && ((*n >= MIN) && (*n <= MAX)))
			return TRUE;
	}


	return FALSE;
}

int isOdd(int num)
{
    return (num % 2 == 1);
}

int isEven(int num)
{
    return (num % 2 == 0);
}

int getSum(int *a, int n, int(*isAdded)(int))
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(isAdded(a[i]))
            sum += a[i];
    }

    return sum;
}