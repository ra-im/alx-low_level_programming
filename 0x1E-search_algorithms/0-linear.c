#include "search_algos.h"

/**
 * linear_search - Searches for an item in an array of integer using the
 * LINEAR SEARCH ALGORITHM.
 *
 * @array: pointer to the first element in the array to be searched
 * @size: number of elements in the array
 * @value: the value to e searched for
 *
 * Return: index of the found item, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
	{
		return (-1);
	}

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%u] = [%d]\n", index, array[index]);

		if (value == array[index])
		{
			return (index);
		}
	}

	return (-1);
}
