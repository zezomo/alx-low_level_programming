#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @str: adfwfw afgawf wadfa f wfaf wfdaw wd dawd eaegesgegeg
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar(str[i]);
}
