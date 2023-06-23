#include "main.h"

/**
 * print_diagonal - Draws  a diagonal line in the terminal.
 * @n: number of times character '\' should be printed.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		/* for column */
		for (i = 0; i < n; i++)
		{
			/* for row */
			for (j = 0; j < n; j++)
			{
				/* displays diagonal */
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
