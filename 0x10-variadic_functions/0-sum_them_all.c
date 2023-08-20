#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @n: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = n, c = 0;

	va_list arg;

	if (!n)
		return (0);
	va_start(arg, n);

	while (i--)
		c += va_arg(arg, int);
	va_end(arg);
	return (c);
}

