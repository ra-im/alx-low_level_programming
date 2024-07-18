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
	size_t prev, curr, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (prev = curr = 0; curr < size && array[curr] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);

	curr = curr < size - 1 ? curr : size - 1;
	for (; prev < curr && array[prev] < value; prev++)
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
		return ((int)prev);

	return (-1);
}
