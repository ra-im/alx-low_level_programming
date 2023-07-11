#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 *
 * @width: width of array.
 * @height: heigh of array.
 *
 * Return: NULL - if width or height is 0 or negative (on failure);
 *		otherwise returns a pointer to a 2-dim array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **pointer;

	if (width < 1 || height < 1 || width + height < 2)
		return (NULL);

	pointer = malloc(height * sizeof(*pointer));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(width * sizeof(**pointer));

		if (pointer[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(pointer[i]);

			free(pointer);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	}

	return (pointer);
}

