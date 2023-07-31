#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @co : awdw dawdaw f faw aeg ag gae waafwdfawfawf afaw da
 *
 * Return: Always 0.
 */

char *string_toupper(char *co)
{
	int i;

	for (i = 0; co[i] != '\0'; i++)
	{
		if (co[i] >= 97 && co[i] <= 122)
		{
			co[i] = co[i] - 32;
		}
	}

	return (co);
}
