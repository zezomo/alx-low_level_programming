#include "main.h"

/***
 * _islower - function to chech if character is lowercase
 *
 * @c : check input
 *
 * Return: Always 0 if not lowercase 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
