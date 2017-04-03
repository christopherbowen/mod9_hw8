/*
 * =====================================================================================
 *
 *       Filename:  vulcan_task2.c
 *       	Usage:  ./vulcan_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/30/2017 04:27:38 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Andrew Little (), andrewlittle@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>

/* Function Prototypes */
void Usage(char *argv[]);
void GetOptions(char *argv[]);
void PrintOption(char argv);
/* Main Program */
int main(int argc, char *argv[])
{
	
	if((argc < 1 && strcmp(argv[1], "--help")==0) || argc != 1)
	{
		Usage(argv);
	}
	return 0;
}


/* Function Defenitions */
void Usage(char *argv[])
{
	
	if(strcmp(argv[1], "--help")==0)
	{
		printf("Help Information\n"
		printf("Usage ./task2 [-p | -u | -l]\n");
	}
		else
	{	
		printf("Missing or wrong number of parameters\n");
		printf("Usage ./task2 [-p | -u | -l]\n");
	}
}

void GetOptions(char *argv[])
{
	int i;
	while(i = 0; *argv[i] != '\0'; i++)
	if(*argv[] == '-p')
	{
		*argv[i] = *argv[i];
	}
	else if( *argv[] == '-u')
	{
		*argv[i] = toupper(*argv[i]);
	}
	else if( *argv[] == '-u')
		*argv[i] = tolower(*argv[i]);
}
