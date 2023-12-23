#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number flipping from.
 * @m: number flipping to.
 * Return: number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int xor;

	i = 0;
	xor = n ^ m;

	while (xor != 0)
	{
		xor &= (xor - 1);
		i++;
	}

	return (i);
}
