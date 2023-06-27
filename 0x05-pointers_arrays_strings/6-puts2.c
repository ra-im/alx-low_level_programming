#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *		starting with the first character,
 *		followed by a new line.
 *
 * @str: String whose charaxter is to be printed.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int counter;

	counter = 0;

	while (counter != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}

		counter++;
	}

	_putchar('\n');
}
