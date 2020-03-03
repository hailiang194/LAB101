#ifndef FORM_H
    #define FORM_H

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#include "contant.h"
#include "file-process.h"

//Clear screen code
#define CLEAR_SCREEN printf("\033[2J\033[H")

//options for menu
#define READ_FILE_OPTION 1
#define COPY_FILES_OPTION 2
#define MERGE_TWO_FILES_OPTION 3
#define LIST_FILES_OPTION 4
#define DEL_FILE_OPTION 5
#define EXIT_OPTION 6


//get user input
int promptUser(int &n, char *msg, const int MIN, const int MAX);

//get user input that is filename
void getFileName(char *filename, char *msg);

//show the menu
void displayMenu();

//main form
void mainForm();

//read file form
void catForm();

//copy files form
void cpyForm();

//merge files form
void mergeForm();

//show all sub-folder and files in current folder form
void dirForm();

//remove form
void rmForm();
#endif