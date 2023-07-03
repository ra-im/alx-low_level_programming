#include "main.h"

/**
 * _memcpy - Copies memory area.
 *
 * @dest: destination of copied memory area.
 * @src: source of copied memory area.
 * @n: number of bytes of copied memory area.
 *
 * Return: ponter to dest.
 */

char *_memcpy(char dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter]
	}

	return (dest);
}

