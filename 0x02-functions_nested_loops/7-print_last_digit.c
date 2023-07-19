#include "main.h"

/**
 * print_last_digit - functio nswd d wdw d gfwf wdf wdf
 *
 * @n : efde  f f efg fg qg 
 *
 * Return: Always 0.
 */


int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	_putchar(ld + '0');
	return (ld);



}
