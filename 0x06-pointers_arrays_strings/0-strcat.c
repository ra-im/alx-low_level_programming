#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * dest: String in which the other strings concatenate (appends) to.
 * src: String to be concatenated (to be appended).
 *
 * Return: char (concatenated string)
 */

char *_strcat(char *dest, char *src)
{
	int counter_1, counter_2;

	counter_1 = 0;
	counter_2 = 0;

	while (dest[counter_1] != '\0')
	{
		counter_1++;
	}

	while (src[counter_2] != '\0')
	{
		dest[counter_1] = src[counter_2];

		counter_1++;
		counter_2++;
	}

	dest[counter_1] = '\0';

	return (dest);
}
