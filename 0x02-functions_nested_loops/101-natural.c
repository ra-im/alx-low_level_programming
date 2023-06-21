#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of all multiples
 *		of '3' and '5' below '1024' (excluded),
 *		followed by a new line.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int i;

	int long sum_of_multiples_of_3;
	int long sum_of_multiples_of_5;
	int long total_sum;

	sum_of_multiples_of_3 = 0;
	sum_of_multiples_of_5 = 0;
	total_sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 5) == 0)
		{
			sum_of_multiples_of_5 = sum_of_multiples_of_5 + i;
		} else if ((i % 3) == 0)
		{
			sum_of_multiples_of_3 = sum_of_multiples_of_3 + i;
		}
	}
	total_sum = sum_of_multiples_of_5 + sum_of_multiples_of_3;
	printf("%ld\n", total_sum);
	return (0);
}

