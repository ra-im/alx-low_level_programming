#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * JUMP SEARCH.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: index of the found item, oterwise -1
 */
int jump_search(int *array, size_t size, int value)
{

	size_t prev = 0;
	size_t curr = 0;
	size_t index = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (curr < size && array[curr] < value)
	{
		printf("value checked array[%ld] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	/*Perform linear search in the block defined by prev and curr*/
	for (index = prev; index < size && index <= curr; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}

	return (-1);
}
