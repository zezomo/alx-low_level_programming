#include "main.h"
#include <stdio.h>

/**
 * print_array - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @a :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * @n : adfwfw afgawf wadfa f wfaf wfdaw wd dawd eaegesgegeg
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");

}

