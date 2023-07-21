#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */


void print_to_98(int n)
{
	int c;

	if (n > 98)
		for (c=0; c < 98; c--)
			printf("%d, ", c);
	else
		for (c=0; c > 0; c++)
			printrf("%d, ", c);
	printf("98\n");




}
