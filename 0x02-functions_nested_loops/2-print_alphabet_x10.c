#include "main.h"
/**
 * print_alphabet_x10 - function to repet a to z ten time
*/


void print_alphabet_x10(void)
{
	int ln, ch;

	for (ln = 0; ln <= 9; ln++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}




}
