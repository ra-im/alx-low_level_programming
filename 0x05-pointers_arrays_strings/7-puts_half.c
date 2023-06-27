#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: string whose half is to be printed.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int counter, i, n;

	counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}

	if (counter % 2 == 0)
	{
		for (i = counter / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (counter % 2 != 0)
	{
		for (n = (counter - 1) / 2; n < counter - 1; n++)
		{
			_putchar(str[n+1]);
		}
	}

	_putchar('\n');
}

