#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 *		starting with 1 and 2,
 *		followed by a new line.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int i, fib_1, fib_2;
	unsigned long int j1, j2, k1, k2;

	fib_1 = 1;
	fib_2 = 2;

	printf("%d", fib_1);

	for (i = 1; i < 91; i++)
	{
		printf(", %d", fib_2);
		fib_2 = fib_2 + fib_1;
		fib_1 = fib_2 - fib_1;
	}

	j1 = fib_1 / 1000000000;
	j2 = fib_1 % 1000000000;
	k1 = fib_2 / 1000000000;
	k2 = fib_2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
