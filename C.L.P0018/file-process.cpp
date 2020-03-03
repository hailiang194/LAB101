#include "file-process.h"

void dir()
{
    struct dirent *child;

    DIR *currentDir = opendir(".");
    if(currentDir == NULL)
    {
        printf("Can\'t open this directory");
        return;
    }

    while((child = readdir(currentDir)) != NULL)
    {
        printf("%s\n", child -> d_name);
    }

    closedir(currentDir);
}

int cat(char *filename)
{
    FILE * f = fopen(filename, "r");

    if(f == NULL)
    {
        printf(UNABLE_READ_FILE(filename));
        return FALSE;
    }

    while(!feof(f))
    {
        char line[MAX_LENGTH];

        fgets(line,MAX_LENGTH , f);
        printf("%s", line);
    }

    printf("\n");

    fclose(f);

    return TRUE;
}

int cpy(char *src, char *des)
{
    FILE *srcFile = fopen(src, "r");

    if(srcFile == NULL)
    {
        printf(UNABLE_READ_FILE(src));
        return FALSE;
    }

    FILE *desFile = fopen(des, "w");

    while(!feof(srcFile))
    {
        char srcLine[MAX_LENGTH];

        fgets(srcLine, MAX_LENGTH, srcFile);
        fprintf(desFile, "%s", srcLine);
    }

    fclose(desFile);

    fclose(srcFile);

    return TRUE;
}

int merge(char *src1, char *src2, char *des)
{
    if(cpy(src1, des) == FALSE)
        return FALSE;

    FILE * nextSrcFile = fopen(src2, "r");

    if(nextSrcFile == NULL)
    {
        printf(UNABLE_READ_FILE(src2));
        return FALSE;
    }


    FILE *desFile = fopen(des, "a");
    fputs("\n", desFile);
    while(!feof(nextSrcFile))
    {
        char srcLine[MAX_LENGTH];

        fgets(srcLine, MAX_LENGTH, nextSrcFile);
        fprintf(desFile, "%s", srcLine);
    }

    fclose(nextSrcFile);

    return TRUE;
}

int rm(char *filename)
{
    return remove(filename);
}