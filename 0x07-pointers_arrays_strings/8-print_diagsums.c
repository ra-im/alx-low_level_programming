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
	unsigned int sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;

	for (counter = 0;
			counter < size;
			counter++)
	{
		sum_1 = sum_1 + a[(size * i) + i];
		sum_2 = sum_2 + a[(size * (i +1)) - (i + 1)];
	}

	printf("%d, %d\n", sum_1, sum_2)
}

