#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: Prints the 9 times table,
 *		starting with 0.
 *
 * Return: Always void (success).
 */

void times_table(void)
{
	int row, column, value;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			value = row * column;
			if (column == 0)
			{
				_putchar(value + '0');
			}

			if (value < 10 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(value + '0');
			} else if (value >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((value / 10) + '0');
				_putchar((value	% 10) + '0');
			}
		}
		_putchar('\n');
	}
}
