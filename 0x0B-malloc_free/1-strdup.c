#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @str : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i, cell;


	if (str == NULL)
		return (NULL);

	for (cell = 0; str[cell] != '\0'; cell++)
		;

	char *ch = malloc(cell * sizeof(*str) + 1);

	if (ch == 0)
		return (NULL);
	else
	{
		for (i = 0; i < cell; i++)
			 ch[i] = str[i];
	}
	return (ch);
}
