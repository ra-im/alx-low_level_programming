#include "main.h"

/**
 * is_prime_number - Returns 1 if the input integer is a prime number;
 *			otherwise,  return 0.
 *
 * @n: integer to be considered.
 *
 * Return: 1 if n is a prime number; otherwise retrun 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime(n, n - 1));
}

/**
 * is_prime - Determines if a number is a prime.
 *
 * @n: number to be considered.
 * @divisor: divisor of the number n.
 *
 * Return: 1 if n is a prime number; otherwise 0.
 */

int is_prime(int n, int divisor)
{
	if (divisor == 1)
		return (1);

	if (divisor > 0 && n % divisor == 0)
		return (0);

	result = is_prime(n, divisor - 1);

	return (result);
}

