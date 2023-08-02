#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
