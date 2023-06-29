#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: first string to display after concatenation.
 * @src: second string to display after concatenation.
 * @n: number of bytes to be used from the src file at most.
 *
 * Return: dest (concatenated string)
 */

char *_strncat(char *dest, char *c, int n)
{
	int counter_1, counter_2;

	for (counter_1 = 0; dest[counter_1] != '\0'; counter_1++)
		;

	for (counter_2 = 0; src[counter_2] != '\0' && n > 0;
			counter_2++, counter_1++, n--)
	{
		dest[counter_1] = src[counter_2];
	}

	return (dest);
}
