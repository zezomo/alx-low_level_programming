#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @haystack : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @needle : d faw g agh fgweafadfas fw agagw fawd adf afwf af
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);

}
