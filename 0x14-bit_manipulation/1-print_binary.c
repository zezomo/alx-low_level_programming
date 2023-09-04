#include "main.h"

/**
 * print_binary - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @n: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, printed = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');

}
