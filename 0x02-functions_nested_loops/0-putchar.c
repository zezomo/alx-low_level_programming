#include "main.h"

/**
 * main - entry point
 *
 * Descrubtion: using Size function
 *
 * Return: Always 0
*/

int main(void)
{
	char arr[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(arr[ch]);
	_putchar('\n');
	return (0);
}
