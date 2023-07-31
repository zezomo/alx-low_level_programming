#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s1 :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * @s2 :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfs
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int e;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			e = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (e);
}
