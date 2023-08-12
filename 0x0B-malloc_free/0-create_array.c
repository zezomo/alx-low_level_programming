#include "main.h"
#include <stdio.h>

/**
 * create_array - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @size : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @c : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ch = (char*)malloc(size);

	if (ch == 0 || size == 0)
		return (0);

	while (size--)
		ch[size] = c;

	return (ch);

}
