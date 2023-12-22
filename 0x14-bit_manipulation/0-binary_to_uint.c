#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: char
 *
 * Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedNumber = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b !='1')
			return (0);

		convertedNumber = convertedNumber * 2 + (*b - '0');
		b++;
	}

	return convertedNumber;
}
