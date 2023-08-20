#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @separator: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @n: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *st;
	va_list arg;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);

	while (i--)
		printf("%s%s", (st = va_arg(arg, char *) ? st : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(arg);
}

