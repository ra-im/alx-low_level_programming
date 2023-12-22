#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be considered
 * @index: index to be returned
 * Return: index, or -1 if error ocured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	index = n >> index;

	return (index & 1);
}
