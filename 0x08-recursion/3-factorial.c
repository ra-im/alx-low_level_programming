#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: Number to be considered.
 *
 * Return: int fact (factorial of the number n).
 */

int factorial(int n)
{
	int fact;

	if (n == 0 || n == 1)
		return (1);

	if (n < 0)
		return (-1);

	fact = n * factorial(n - 1);

	return (fact);
}
