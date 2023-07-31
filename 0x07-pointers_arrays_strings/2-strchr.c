#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @cc : d faw g agh fgweafadfas fw agagw fawd adf afwf af
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
