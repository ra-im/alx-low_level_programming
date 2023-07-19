#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: pointer to the considered array.
 * @size: size of the considered array.
 * @cmp: pointer to the search function.
 *
 * Return: index of the first element for which
 *	the 'cmp functiondoes not return 0, otherwise;
 *	return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

