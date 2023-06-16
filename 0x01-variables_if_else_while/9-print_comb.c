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
	int number = 0;

	while (number <= 9)
	{
		putchar(number + 48);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++number;
	}

	putchar('\n');

	return (0);
}
