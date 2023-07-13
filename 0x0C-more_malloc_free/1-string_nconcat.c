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
	char *new_str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		new_str = malloc(sizeof(char) * (len1 + n + 1));
	else
		new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!new_str)
		return (NULL);

	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		new_str[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		new_str[i++] = s2[j++];

	new_str[i] = '\0';

	return (new_str);
}

