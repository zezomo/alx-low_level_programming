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
	int k;
	int n;

	for (k = 0; k < 8; k++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[k][n]);
		_putchar('\n');
	}

}
