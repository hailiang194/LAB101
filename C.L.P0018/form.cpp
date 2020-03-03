#include "form.h"


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

void getFileName(char *filename, char *msg)
{
    __fpurge(stdin);
    printf("%s", msg);
    fgets(filename, MAX_LENGTH, stdin);
    filename[strlen(filename) - 1] = '\0';
}

void displayMenu()
{
    printf("1) Read file\n");
    printf("2) Copy files\n");
    printf("3) Merge two files\n");
    printf("4) List files in a directory\n");
    printf("5) Delete file\n");
    printf("6) Exit\n");
}

void mainForm()
{
    CLEAR_SCREEN;
    displayMenu();

    int option = 0;
    char prompt[] = "Choice features: ";
    while(!promptUser(&option, prompt, 1, 6));

    switch (option)
    {
    case READ_FILE_OPTION:
        catForm();
        break;
    case COPY_FILES_OPTION:
        cpyForm();
        break;
    case MERGE_TWO_FILES_OPTION:
        mergeForm();
        break;
    case LIST_FILES_OPTION:
        dirForm();
        break;
    case DEL_FILE_OPTION:
        rmForm();
        break;
    case EXIT_OPTION:
        exit(EXIT_SUCCESS);
        break;
    }

    __fpurge(stdin);
    getchar();
}

void catForm()
{
    char filename[MAX_LENGTH] = "";
    char prompt[MAX_LENGTH] = 
    "Enter the name of file you wish to see: ";
    getFileName(filename, prompt);
    
    printf("\n");

    cat(filename);

    printf("\n");
}

void cpyForm()
{
    char src[MAX_LENGTH] = "";
    char srcPrompt[MAX_LENGTH] = 
    "Enter name of file to copy: ";

    getFileName(src, srcPrompt);

    char des[MAX_LENGTH] = "";
    char desPrompt[MAX_LENGTH] = 
    "Enter name of target file: ";

    getFileName(des, desPrompt);

    if(cpy(src, des) == TRUE)
    {
        printf("Copy files successfully!\n");
    }
    else
    {
        printf("Copy fail!\n");
    }

}

void mergeForm()
{
    char src1[MAX_LENGTH] = "";
    char src1Prompt[MAX_LENGTH] = 
    "Enter name of first file: ";

    getFileName(src1, src1Prompt);

    char src2[MAX_LENGTH] = "";
    char src2Prompt[MAX_LENGTH] = 
    "Enter name of second file: ";

    getFileName(src2, src1Prompt);

    char des[MAX_LENGTH] = "";
    char desPrompt[MAX_LENGTH] = 
    "Enter name of file which will store contents of two files: ";

    getFileName(des, desPrompt);

    if(merge(src1, src2, des) == TRUE)
    {
        printf("Two files were merged into %s file successfully!\n", des);
    }
    else
    {
        printf("Merge fail!\n");
    }

}

void dirForm()
{
    printf("\n");
    dir();
    printf("\n");
}

void rmForm()
{
    char filename[MAX_LENGTH] = "";
    char prompt[MAX_LENGTH] = 
    "Enter name of file you wish to delete: ";

    getFileName(filename, prompt);

    if(rm(filename) == 0)
    {
        printf("%s file deleted successfully!\n", filename);
    }
    else
    {
        printf("Delete file fail!\n");
    }
    
}