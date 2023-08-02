#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @n : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

int v = 1;

int _sqrt_recursion(int n)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
	{
		v = v + 1;
		return (_sqrt_recursion(n));
	} else
		return (-1);
}

