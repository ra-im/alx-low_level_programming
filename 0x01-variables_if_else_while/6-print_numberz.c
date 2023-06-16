#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers
 *		of base 10, starting from 0,
 *		followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int numbers;

	for(numbers = 0; numbers <= 9; numbers++)
	{
		putchar('0' + numbers);
	}

	putchar('\n');

	return (0);
}
