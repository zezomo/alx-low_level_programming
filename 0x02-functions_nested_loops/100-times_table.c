#include "main.h"

/**
 * print_times_table - check the code.ds aw wd w dadwdawdwda
 *
 * @n :WdfWDW DWA DWD WAWDWDADW DA d
 *
 * Return: Always 0.
 */


void print_times_table(int n)
{
	int row, cul, cell;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{

			_putchar(48);
			for (cul = 1; cul <= n; cul++)
			{
				_putchar(',');
				_putchar(' ');

				cell = row * cul;

				if (cell <= 9)
					_putchar(' ');
				if (cell <= 99)
					_putchar(' ');
				if (cell >= 100)
					_putchar((cell / 100) + 48);
					_putchar((cell / 10) + 48);
				else if (cell <= 99 && cell >= 10)
					_putchar((cell / 10) + 48);

			_putchar((cell % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
