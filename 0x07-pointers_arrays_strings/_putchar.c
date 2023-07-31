#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 * Descrubtion: using Size function
 *
 * Return: Always 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
