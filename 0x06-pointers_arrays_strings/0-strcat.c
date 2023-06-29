#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * dest: First string to display after concatenation.
 * src: Second string to display after concatenation.
 *
 * Return: dest (concatenated string)
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
