#include "main.h"

/**
 * largest_number - returns the largest f 3 numbers
 *
 * @a: first number
 * @b: second nmber
 * @c: third number
 *
 * Retun: largest_number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
