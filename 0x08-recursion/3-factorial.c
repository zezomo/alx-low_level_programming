#include "main.h"
#include <stdio.h>

/**
 * factorial - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @n : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0) {
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	else 
	{
		return n * factorial(n-1);
	}

}

