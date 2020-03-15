#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <limits.h>
#include <string.h>

#define MAX_LENGTH 256

#define TRUE 1
#define FALSE 0

int promptUser(int *n, char *msg, const int MIN, const int MAX);

void swap(int *a, int *b);
void quicksort(int *a, int start, int end);
void insert(int *a, int *n, int appendValue);

void show(int *a, int n);

int main()
{
    int n = 0;
    char arrayLengthPrompt[] = "Please enter size of array: ";
    while(!promptUser(&n, arrayLengthPrompt, INT_MIN, INT_MAX))
    {
        printf("Unvalid value of length. Please enter again.\n");
    }

    int *a = (int *)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
    {
        char elementPrompt[MAX_LENGTH] = "";
        sprintf(elementPrompt, "Enter element[%d]: ", i);
        while(!promptUser(&a[i], elementPrompt, INT_MIN, INT_MAX))
        {
            printf("Unvalid value of element value. Please enter again.\n");
        }
    }

    quicksort(a, 0, n - 1);
    printf("The array after sorting:\n");
    show(a, n);

    int appendValue = 0;
    char appendPrompt[] = "Please enter new value: ";
    while(!promptUser(&appendValue, appendPrompt, INT_MIN, INT_MAX))
    {
        printf("Unvalid value of append value. Please enter again.\n");
    }

    insert(a, &n, appendValue);
    printf("New array:\n");
    show(a, n);

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

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int *a, int start, int end)
{
    if(start >= end)
        return;

    int left = start + 1;
    int right = end;

    while(left <= right)
    {
        while(left <= right && a[left] <= a[start])
            left++;
        
        while(left <= right && a[right] > a[start])
            right--;

        if(left < right)
        {
            swap(&a[left], &a[right]);
            left++;
            right--;
        }
    }

    swap(&a[start], &a[right]);
    quicksort(a, start, right - 1);
    quicksort(a, right + 1, end);
}

void insert(int *a, int *n, int appendValue)
{
    (*n)++;
    a = (int *)realloc(a, (*n) * sizeof(int));

    int i = 0;
    for(i = *n - 1; i >= 1; i--)
    {
        a[i] = a[i - 1];
        if(a[i] <= appendValue)
        {
            break;
        }
    }

    a[i] = appendValue;
}

void show(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
}