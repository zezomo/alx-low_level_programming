#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @a : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{

		for (j = 0; j < 8; j++)
			putchar(a[i][j]);

		putchar('\n');
	}
}
