#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s: adfwfw afgawf wadfa f wfaf wfdaw wd dawd eaegesgegeg
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int j, i;
	char tmp;

	for (j = 0; s[j] != '\n', ++j)
		;
	for (i = 0; i < j; i = j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}

}
