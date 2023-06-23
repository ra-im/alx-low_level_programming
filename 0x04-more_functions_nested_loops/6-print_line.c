#include "main.h"

/**
 * print_line - Draws a straight horizontal line in the terminal.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int value;

		for (value = 1; value <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
