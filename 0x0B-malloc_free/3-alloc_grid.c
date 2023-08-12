#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @width : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @height : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **sel, i, j;
	sel = malloc(sizeof(*sel) * height);

	if (width <= 0 || height <= 0 || *sel == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			sel[i] = malloc(sizeof(**sel) * width);

			if (sel[i] == 0)
			{
				while (i--)
					free(sel[i]);
				free(sel);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				sel[i][j] = 0;
			
		}
	}
	return (sel);
}
