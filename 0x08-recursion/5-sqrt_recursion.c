#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @n : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @v : dfawdwda dwd af fawffawf wfa fwa fawf wfawf awfwafawf dawd
 *
 * Return: Always 0.
 */

int root(int n, int v);

int _sqrt_recursion(int n)
{

	return (root(n, 1));
}

/**
 * root - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @v : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @n : afefafa f af agf awf faw dfaffwafawf  faw faw fw awf
 *
 * Return: Always 0.
 */
int root(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
	{
	return (root(n, v + 1));
	}
	else
		return (-1);
}
