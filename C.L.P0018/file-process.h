#ifndef FILE_PROCESS_H
    #define FILE_PROCESS_H 

//for directory
#include <dirent.h>
#include <stdio.h>

#include "contant.h"

//show all files and child folders in current directory
void dir();

//show the content in file f
//return TRUE if success, otherwise FALSE
int cat(char * filename);

//copy the content from src to des
//return TRUE if success, otherwise FALSE
int cpy(char *src, char *des);

//merge the content of src1 and src2 and copy it to des
//return TRUE if success, otherwise FALSE
int merge(char *src1, char *src2, char *des);

//remove file f
//return 0 if it is sucess, otherwise nonzero
int rm(char *filename);

#endif