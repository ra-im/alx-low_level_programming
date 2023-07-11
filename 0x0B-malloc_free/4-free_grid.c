#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * freee_grid - frees a 2-dimensional grid previosly created
 *		by the alloc_grid function.
 *
 * @grid: array grid.
 * @height: height of array grid.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

