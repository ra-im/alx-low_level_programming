#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: Finds and prints the largest prime factor
 *		of the number 612852475143.
 * Return: 0
 */

int main(void)
{
	int max_prime;
	long num = 612852475143;

	for (max_prime = (int) sqrt(num); max_prime > 2; max_prime++)
	{
		if (num % max_prime == 0)
		{
			printf("%d\n", max_prime);
			break;
		}
	}

	return (0);
}
