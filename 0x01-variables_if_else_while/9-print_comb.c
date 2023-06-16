#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the possible combinations
 *		of single-digit number.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	putchar('0');

	for (number = 1; number <= 9; number++)
	{
		putchar(',');

		putchar(' ')

		putchar('0' + number);
	}

	return (0);
}
