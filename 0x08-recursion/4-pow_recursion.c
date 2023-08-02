#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @x : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @y : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
