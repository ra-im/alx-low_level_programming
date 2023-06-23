#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Size of d triangle.
 * Return: void
 */

void print_triangle(int size)
{
	/* for zero or negative tringle size */
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		/* for positive triangle size */
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

