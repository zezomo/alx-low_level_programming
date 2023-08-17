#include <stdlib.h>
#include "main.h"

/**
 * sum_them_all - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 * 
 * @separator: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @n: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef fn
 *
 * Return: number of words
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nu;
	unsigned int i;

	va_start(nu, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nu, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nu);

}
