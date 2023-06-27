#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 *
 * @dest: pointer to the buffer to be copied, pointed to by *dest.
 * @src: pointer to the string to be copied, pointed to by *src.
 *
 * Return: char (the pointer to dest).
 */

char *_strcpy(char *dest, char *src)
{
	int string_length, counter_1, counter_2;

	counter_1 = 0;

	while (src[counter_1] != '\0')
	{
		counter_1++;
	}

	string_length = counter_1;

	for (counter_2 = 0; counter_2 < string_length; counter_2++)
	{
		dest[counter_2] = src[counter_2];
	}

	dest[counter_2] = '\0';

	return (dest);
}
