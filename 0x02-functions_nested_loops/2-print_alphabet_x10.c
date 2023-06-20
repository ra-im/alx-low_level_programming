#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Prints the alphabet, 10 times,
 *		in lowercase,
 *		followed by a new line.
 *
 * Return: Always void (success).
 */

void print_alphabet(void)
{
	char letter = 'a';
	int no_of_times = 10;

	while (no_of_times <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}

	putchar('\n');
	}
}
