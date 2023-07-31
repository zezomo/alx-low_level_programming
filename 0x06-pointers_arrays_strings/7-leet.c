#include "main.h"
#include <stdio.h>

/**
 * leet - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @c : da dw daf fg faw faf adf
 *
 * Return: Always 0.
 */

char *leet(char *c)
{
	char *co = c;
	char kay[] = {'A', 'E', 'O', 'T', 'L'};
	char v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(kay) / sizeof(char); i++)
		{
			if (*c == kay[i] || *c == kay[i] + 32)
			{
				*c = 48 + v[i];
			}
		}
		c++;
	}
	return (co);

}
