#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: Prints the 'n' times table, starting with 0.
 *
 * @n: The number whose times table is to be printed.
 *
 * Return: Always void (success).
 */

void print_times_table(int n)
{
	int row, column, value;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				value = row * column;
				if (column == 0)
				{
					_putchar(value + '0');
				} else if (value < 10 && column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(value + '0');
				} else if (value >= 10 && value < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
				} else if (value >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((value / 100) + '0');
					_putchar(((value / 10) % 10) + '0');
					_putchar((value % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
