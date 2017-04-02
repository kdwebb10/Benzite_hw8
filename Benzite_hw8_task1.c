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

/* Function Prototypes */
void Usage(void);

/* Main Program */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		Usage();
		exit(1);
	}

	return 0;
}

/* Function Defenitions */
void Usage(void)
{
	printf("Missing required parameters.\n");
	printf("Usage ./task1 <str1> <str2>\n");
	printf("Program checks if str2 is part of str1\n");
	return;
}

