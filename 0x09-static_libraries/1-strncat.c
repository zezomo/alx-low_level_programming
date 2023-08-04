#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @dest :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * @src :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * @n : efgwggwegeetg hhrhrherhw eryhwe wefwefwefefFefrffef
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int s1, s2;

	s1 = 0;

	while (dest[s1])
		s1++;

	for (s2 = 0; s2 < n && src[s2] ; s2++)
		dest[s1 + s2] = src[s2];

	dest[s1 + s2] = '\0';
	return (dest);
}
