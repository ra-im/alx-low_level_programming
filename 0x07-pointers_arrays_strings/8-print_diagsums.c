#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the suim of two diagonals
 * of a squarematrix of integers.
 *
 * @a: square matrix of integers.
 * @size: size of the square matrix.
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int counter;
	unsigned int sum, square;

	square = size * size;
	sum = 0;

	for (counter = 0;
			counter < square;
			counter++)
	{
		if (counter % (size + 1) == 0)
		{
			sum += a[counter];
		}
	}

	printf("%d, ", sum);

	sum = 0;

	for (counter = 0;
			counter < square;
			counter++)
	{
		if (counter % (size - 1) == 0 &&
				counter != (square - 1) &&
				counter != 0)
		{
			sum += a[counter];
		}
	}

	printf("%d\n", sum);
}

