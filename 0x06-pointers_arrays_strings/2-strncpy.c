#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: destination of coiped string.
 * @src: string to be copied.
 * @n: number of times to copy string.
 *
 * Return: dest (copie string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0;
			src[counter] != '\0' && counter < n;
			counter++)
	{
		dest[counter] = src[counter];
	}

	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}

	return (dest);
}

