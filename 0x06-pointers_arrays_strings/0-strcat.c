#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: First string to display after concatenation.
 * @src: Second string to display after concatenation.
 *
 * Return: dest (concatenated string)
 */

char *_strcat(char *dest, char *src)
{
	int counter_1, counter_2;

	for (counter_1 = 0; dest[counter_1] != '\0'; counter_1++)
		;

	for (counter_2 = 0; src[counter_2] != '\0'; counter_2++)
	{
		dest[counter_1] = src[counter_2];
		counter_1++;
	}

	dest[counter_1] = '\0';
	return (dest);
}
