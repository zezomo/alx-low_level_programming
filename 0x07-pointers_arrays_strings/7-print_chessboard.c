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
	int ia;
	int ja;

	for (ia = 0; ia < 8; ia++)
	{
		for (ja = 0; ja < 8; ja++)
			_putchar(a[ia][ja]);
		_putchar('\n');
	}

}
