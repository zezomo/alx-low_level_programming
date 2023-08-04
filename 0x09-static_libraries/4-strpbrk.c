#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @accept : d faw g agh fgweafadfas fw agagw fawd adf afwf af
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *q;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				q = &s[i];
				return (q);
			}
			j++;
		}
		i++;
	}
	return (0);
}
