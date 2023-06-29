#include "main.h"

/**
 * reverse_array - Reversese the content of a n array of integers.
 *
 * @a: an array of integers
 * @n: number of array elements to swap.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int counter;
	int tmp;

	for (counter = 0;
			counter < (n / 2);
			counter++)
	{
		tmp = a[counter];
		a[counter] = a[n - counter - 1];
		a[n - counter - 1] = tmp;
	}
}
