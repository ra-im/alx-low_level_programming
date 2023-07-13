#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings..
 *
 * @s1: first string to be displated after concatenation.
 * @s2: secpnd string to be displayed after concatenation.
 * @n: number ofbytes of strig s@ to be concatenated.
 *
 * Return: NULL - (failure); otherwise, return a
 *	pointer to te newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length_1 = 0, length_2 = 0, i = 0, j = 0;
	char *new_str;

	while (s1 && s1[length_1])
		length_1++;
	while (s2 && s2[length_2])
		length_2++;

	if (n < length_2)
		new_str = malloc(sizeof(char) * (length_1 + n + 1));
	else
		new_str = malloc(sizeof(char) * (length_1 + length_2 + 1));

	if (!new_str)
		return (NULL);

	while (i < length_1)
	{
		new_str[i] = s1[i];
		i++;
	}

	while (n < length_2 && i < (length_1 + n))
		new_str[i++] = s2[j++];

	while (n >= length_2 && i < (length_1 + length_2))
		new_str[i++] = s2[j++];

	new_str[i] = '\0';

	return (new_str);
}

