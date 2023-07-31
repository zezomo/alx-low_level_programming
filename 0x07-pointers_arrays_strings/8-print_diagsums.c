#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @a : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @size : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

