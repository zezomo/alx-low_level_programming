#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * low - aefwfa fgaefgwafmafngaknfn fkamnwf;amnfawmnfmafam
 *
 * del - afawfa fga g awe ghae ga gaw g ga gaw aga gff
 *
 * @c : da dw daf fg faw fa fa fwf afwfafawff adf
 *
 * Return: Always 0.
 */

int low(char c)
{
	return (c >= 97 && c <= 122);

}
int del(char c)
{
	int i;
	char dela[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12 ; i++)
		if (c == dela[i])
			return (1);
	return (0);

}

char *cap_string(char *s)
{
	char *p = s;
	int f = 1;

	while (*s)
	{
		if (del(*s))
			f = 1;
		else if (low(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++;
	}
	return (p);
}
