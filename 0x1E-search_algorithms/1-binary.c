#include "search_algos.h"

/**
 * binary_search - Searches for an item in an array of integer using the
 * BINARY SEARCH ALGORITHM.
 *
 * @array: pointer to the first element in the array to be searched
 * @size: number of elements in the array
 * @value: the value to e searched for
 *
 * Return: index of the found item, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, leftIndex, rightIndex;

	if (array == NULL)
	{
		return (-1);
	}

	for (leftIndex = 0, rightIndex = size - 1; rightIndex >= leftIndex;)
	{
		printf("Searching in array: ");

		for (index = leftIndex; index < rightIndex; index++)
		{
			printf("%d, ", array[index]);
		}

		printf("%d\n", array[index]);

		index = leftIndex + (rightIndex - leftIndex) / 2;

		if (value == array[index])
		{
			return (index);
		}

		if (array[index] > value)
		{
			rightIndex = index - 1;
		}

		leftIndex = index + 1;
	}

	return (-1);
}
