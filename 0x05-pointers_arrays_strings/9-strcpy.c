#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @dest :f afwf afawfaff gawg gawg g agaw g ssfafgagawgawggsgsfsf
 *
 * @src : adfwfw afgawf wadfa f wfaf wfdaw wd dawd eaegesgegeg
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
