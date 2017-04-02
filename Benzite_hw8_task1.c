/*
 * =====================================================================================
 *
 *       Filename:  Benzite_hw8_task1.c
 *       	Usage:  ./Benzite_hw8_task1.c
 *    Description: Task 1
 *
 *        Version:  1.0
 *        Created:  03/23/2017 04:21:25 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kyle Webb (), kylewebbear@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */
#include <string.h>		/* String Functions */

/* Function Prototypes */
void Usage(char ** info);
void StringIn(char str1[], char str2[]);

/* Main Program */
int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		Usage(&argv[1]); //error function
		exit(1);
	}
	StringIn(argv[1], argv[2]);

	return 0;
}

/* Function Defenitions */
void Usage(char ** info)
{
	char str1[] = "--help";
	if(strcmp(*info, str1) == 0)
	{
		printf("\nHelp Information Requested\n");
	}
	else
	{
		printf("\nMissing required parameters.\n");
	}
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n\n");
	return;
}
void StringIn(char str1[], char str2[])
{
	if (strstr(str1, str2)== NULL) //if strings dont have matchs
	{
		printf("<%s> Not found in <%s>\n", str2, str1);
		printf("Returning string <(NULL)>\n");
	}
	else //if strings have matches
	{
		printf("<%s> found in <%s>\n", str2, str1);
		printf("Returning string <%s>\n", strstr(str1, str2));
	}
	return;
}
