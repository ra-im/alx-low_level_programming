#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str: String to be printed.
 *
 * Return: void.
 */

void _puts(char *str)
{
	int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);

		counter++;
	}

	_putchar('\n');
}
