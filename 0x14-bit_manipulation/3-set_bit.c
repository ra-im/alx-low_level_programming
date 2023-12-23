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
	unsigned long int bit;

	if (index >= 64)
		return (-1);

	for (bit = 1; index > 0; index--, bit *= 2)
		;

	*n += bit;

	return (-1);
}
