#include "main.h"

/**
 * _islower - function to check if character is lowercase dwad
 *
 * @c : check input
 *i
 * Return: Always 0 if not lowercase 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
