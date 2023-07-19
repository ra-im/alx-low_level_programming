#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array..
 *
 * @array: pointer to the array being considered.
 * @size: size of the array being considered.
 * @action: pointer to the function need for the execution.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

