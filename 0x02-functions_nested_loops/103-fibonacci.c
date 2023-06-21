#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the total_sum of even valued terms,
 *		in the fibonacci sequence,
 *		followed by a new line.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int i;
	unsigned long int fib_1, fib_2, fib_next, total_sum;

	fib_1 = 1;
	fib_2 = 2;
	total_sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (fib_1 < 4000000 && (fib_1 % 2) == 0)
		{
			total_sum = total_sum + fib_1;
		}
		fib_next = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fib_next;
	}

	printf("%lu\n", total_sum);

	return (0);

