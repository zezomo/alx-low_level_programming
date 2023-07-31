#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @a :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * @n :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}


}
