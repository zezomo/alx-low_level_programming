#include "main.h"
#include <stdio.h>

/**
 * _memset - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @b :d d faw g agh fgweafadfas fw agagw fawd adf afwf af
 *
 * @n : dsda  dafgawd afaw g gafawda daagaw ga gafgwa rfafawfa
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
