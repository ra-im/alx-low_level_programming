#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 *		followed by a new line.
 *
 * @a: Array to be frinted.
 * @n: Number of elements of the array to be printed.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		if (counter == 0)
		{
			printf("%d", a[counter]);
		}
		else
		{
			printf(", %d", a[counter]);
		}
	}

	printf("\n");
}

