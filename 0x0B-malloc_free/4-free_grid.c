#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @grid : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @height : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
