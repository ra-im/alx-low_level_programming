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

	for (number = 0; number < 10; number++)
	{
		putchar(number);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
