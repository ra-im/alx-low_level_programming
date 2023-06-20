#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Prints the alphabet, in lowercase,
 *		followed by a new line.
 *
 * Return: Always void (success).
 */

void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a', letter <= 'z', letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return void;
}
