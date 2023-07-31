#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @dest : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @src : d faw g agh fgweafadfas fw agagw fawd adf afwf af
 *
 * @n : dafgawd afaw g gafawdawdada dagaw ga gafgwa rfafawfa
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
