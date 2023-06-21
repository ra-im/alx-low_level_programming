#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 *		starting with 1 and 2,
 *		followed by a new line.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	long int i, first_fib_num, second_fib_num, next_fib_num;

	first_fib_num = 1;

	second_fib_num = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (first_fib_num != 20365011074)
		{
			printf("%ld, ", first_fib_num);
		} else
		{
			printf("%ld\n", first_fib_num);
		}
		next_fib_num = first_fib_num + second_fib_num;
		first_fib_num = second_fib_num;
		second_fib_num = next_fib_num;
	}
	return (0);
}

