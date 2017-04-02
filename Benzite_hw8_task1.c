/*
 * =====================================================================================
 *
 *       Filename:  Benzite_hw8_task1.c
 *       	Usage:  ./Benzite_hw8_task1.c
 *    Description:  
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
void Usage(void);
void StringIn(char str1[], char str2[]);

/* Main Program */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		Usage(); //error function testing argv 1
		exit(1);
	}
	StringIn(argv[1], argv[2]);

	return 0;
}

/* Function Defenitions */
void Usage(void)
{
	char *info;
	char str1[7] = "--help";
	if(strcmp(*info, str1) == 0)
	{
		printf("Help Information Requested\n");
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n");
	}
	else
	{
		printf("Missing required parameters.\n");
		printf("Usage ./task1 <str1> <str2>\n");
		printf("Program checks if str2 is part of str1\n");
	}
	return;
}
void StringIn(char str1[], char str2[])
{
	if (strstr(str1, str2)== NULL) //strstr compares string to string
	{
		printf("<%s> Not found in <%s>\n", str2, str1);
		printf("Returning string <(NULL)>\n");
	}
	else
	{
		printf("<%s> found in <%s>\n", str2, str1);
		printf("Returning string <%s>\n", strstr(str1, str2));
	}
	return;
}
