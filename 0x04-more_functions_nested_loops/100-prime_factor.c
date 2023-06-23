#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of
 *		the number '612852475143', followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	lont int number;
	int long max_prime;
	long int i;

	number = 612852475143;
	max_prime = -1;

	while (number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (number % i == 0)
		{
			max_prime = i;
			n /= i;
		}
	}

	if (n > 2)
		max_prime = number;

	printf("%ld\n", max_prime);

	return (0);
}

