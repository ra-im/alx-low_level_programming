#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints the alphabet, 10 times,
 *		in lowercase,
 *		followed by a new line.
 *
 * Return: Always void (success).
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int no_of_times = 1;

	while (no_of_times <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		
		++no_of_times;

		putchar('\n');
	}
}
