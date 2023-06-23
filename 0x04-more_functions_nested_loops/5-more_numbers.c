#include "main.h"

/**
 * more_numbers - Prints the numbers ten tims (from 0 to 14)
 * followed by a line.
 */

void more_numbers(void)
{
	int i, j;

	/* number of lins to print */
	for (i = 0; i < 10; i++)
	{
		/* numbers to print (from 0 to 14) */
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		/* new line */
		_putchar('\n');
	}
}
