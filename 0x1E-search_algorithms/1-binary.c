#include "search_algos.h"

/**
 * recursively_search - recursively searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the found item, otherwise -1.
 */
int recursively_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", array[index]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursively_search(array, half, value));

	half++;

	return (recursively_search(array + half, size - half, value) + half);
}

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
	int index;

	index = recursively_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
