#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers..
 *
 * @min: minimm interger inculded in the array.
 * @max: maximum integer included in the array.
 *
 * Return: NULL - if min > max or malloc failure;
 *	otherwise, returns the pointer to the
 *	newly created array.
 */

int *array_range(int min, int max)
{
	int i, arr_size, *pointer;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;

	pointer = malloc(sizeof(int) * arr_size);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pointer[i] = min++;

	return (pointer);
}

