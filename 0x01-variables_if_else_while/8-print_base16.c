#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *		followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char hexadecimal_number;

	for (hexadecimal_number = '0'; hexadecimal_number <= '9'; hexadecimal_number++)
	{
		putchar(hexadecimal_number);
	}

	for (hexadecimal_number = 'a'; hexadecimal_number <= 'f'; hexadecimal_numbber++)
	{
		putchar(hexadecimal_number);
	}

	putchar('\n');

	return (0);
}
