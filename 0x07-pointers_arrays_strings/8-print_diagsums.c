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
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

