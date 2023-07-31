#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @dest :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * @src :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int s1, s2;

	s1 = 0;

	while (dest[s1])
		s1++;

	for (s2 = 0; src[s2] ; s2++)
		dest[s1] = src[s2];
	return (dest);
}
