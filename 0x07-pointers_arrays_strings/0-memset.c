#include "main.h"

/**
 * _memset: Fils the first 'n' bytes of the memory area pointed to by 's',
 *		with the constant byte 'b'.
 *
 * @s: Ponter tothe memory area.
 * @b: constant byte.
 * @n: number of the memory areato be filled.
 *
 * Return: s (pointer to the memoryarea).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}

	return (s);
}

