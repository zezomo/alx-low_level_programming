#include "main.h"

/**
 * print_to_98 - dcw dwd wd wdw dw dwdw wdheck the code
 *
 * @n :dwd wqd WD ADW DW DAWED DFW AWD FW FAW F
 *
 * Return: Always 0.
 */


void print_to_98(int n)
{
	int c;

	if (n > 98)
		for (c = n; c > 98; c--)
			printf("%d, ", c);
	else
		for (c = n; c < 98; c++)
			printf("%d, ", c);
	printf("98\n");




}
