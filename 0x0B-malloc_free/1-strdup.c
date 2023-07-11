#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter.
 *
 * @str: string to be considered.
 *
 * Return: NULL -if str = ull or insufficient memory; otherwise,
 *	returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i, j;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_str = malloc(i * sizeof(*new_str) + 1);

	if (new_str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		new_str[j] = str[j];

	new_str[j] = '\0';

	return (new_str);
}

