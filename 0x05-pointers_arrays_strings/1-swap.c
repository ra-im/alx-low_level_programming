#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 *
 * @a: integer to be swapped.
 * @b: integer to be swapped.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int temporary_value;

	temporary_value = *b;
	*b = *a;
	*a = temporary_value;
}
