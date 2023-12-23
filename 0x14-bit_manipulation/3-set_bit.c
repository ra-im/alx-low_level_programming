#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer whose bit index is to be reassigned.
 * @index: index of integer bit
 * Return: 1 or -1 (if error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp, bits;

	bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
		return (-1);

	temp = 1UL << index;
	*n |= temp;

	return (1);
}
