#include "main.h"

/**
 * print_rev - Prints a string in reverse, followe by a new line.
 *
 * @s: string to be printed in reverse.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int counter_1, counter_2, string_length;

	counter_1 = -1;

	/* calculate the length of the string */
	while (s[counter_1] != '\0')
	{
		counter_1++;
	}

	string_length = counter_1;

	/* loop over the string for the last element to the first */
	/* using the string_length */
	for (counter_2 = string_length;
			counter_2 >= 0;
			counter_2--)
	{
		_puchar(s[counter_2]);
	}

	_putchar('\n');
}

