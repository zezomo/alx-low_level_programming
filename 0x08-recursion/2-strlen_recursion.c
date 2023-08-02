#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int c;

	if (*s > '\0')
	{
		c += _strlen_recursion(s + 1) + 1;
	}
	return (c);
}
