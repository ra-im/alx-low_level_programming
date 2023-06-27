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

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
	}

	_putchar('\n');
}
