#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two stringss.
 *
 * @s1: initial string to be displayed afer concatenation.
 * @s2: second string to be displayed after concarenation.
 *
 * Return: pointer to the newly allocated space in memory
 *		which contains the contents of the newly
 *		concatenated string, and null terminated;
 *		otherwise, returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int m, n, i, j;
	char new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; I++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str_ptr = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	for (m = 0, n= 0; m < (i + j + 1); m++)
	{
		if (m < i)
			new_str[m] = s1[m];
		else
			new_str[m] = s2[n++];
	}

	return (new_str);
}

