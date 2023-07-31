#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @a : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @size : d faw g agh fgweafadfas fw agagw fawd adf afwf af
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}

}
