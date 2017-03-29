/*
 * =====================================================================================
 *
 *       Filename:  vulcan_task1.c
 *    Description:  takes two strings and checks sees if they have similarities and then returns another string
 *
 *        Created:  03/26/2017 01:47:22 AM
 *         Author:  Christopher Bowen (), christopherbowen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

#define SIZE 81
/* Function Prototypes */
void Usage(char *argv[]);
char StringIn(char *arg1[], char *arg2[]);
/* Main Program */
int main(int argc, char *argv[])
{
	//first check and see if they insert the right amount of parameters
	//if not call Usage
	if(strcmp(argv[1], "--help")==0)
	{
		Usage(argv);
	}
	if(argc != 3)
	{
		Usage(argv);
	}
	//define two strings which are my two strings i will use later in StringIn
	char first[SIZE];
	strcpy(first, argv[1]);

	char second[SIZE];
	strcpy(second, argv[2]);
	
	StringIn(first, second);
//	printf("%s\n", output);
	return 0;
}


/* Function Defenitions */
void Usage(char *argv[])
{
	if(strcmp(argv[1], "--help")==0)
	{
		printf("Help information\n");
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n");
	}
	else
	{
		printf("Missing required parameters\n");
		printf("./task1 <str1><str2>\n");
		printf("Program checks if str2 is part of str1\n");
	}
	return;
}

char StringIn(char *arg1[], char *arg2[])
{
	int num= (arg2[0]);
	char output= strchr(arg1, num);
	return output;
}



