#include "main.h"

/**
 * times_table - check the code feefe  f efe ggegegrrg hr hrh 4e
 *
 * Return: Always 0.
 */


void times_table(void)
{
	int row, cul, cell;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (cul = 0; cul <= 9; cul++)
		{
			_putchar(',');
			_putchar(' ');

			cell = row * cul;

			if (cell <= 9)
				_putchar(' ');
			else
				_putchar((cell / 10) + 48);

			_putchar((cell % 10) + 48);
		}
		_putchar('\n');
	}


}
