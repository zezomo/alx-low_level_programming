#include "main.h"

/**
 * main - entry point
 *
 * Descrubtion: using Size function description found for function print_alphabet
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
