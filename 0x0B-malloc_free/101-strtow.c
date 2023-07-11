#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * word_counter - counts the no. of words in a string.
 *
 * @strn: string tio be considered.
 *
 * Return: numbr of words.
 */

int word_counter(char *strn)
{
	int counter, i, flag;

	counter = 0;
	flag = 0;

	for (i = 0; strn[i] != '\0'; i++)
	{
		if (strn[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			counter++;
		}
	}

	return (counter);
}

/**
 * strtow - splits a string into words.
 *
 * @str: string to be considered.
 *
 * Return: NULL - if str == NULL or str == "" (failure);
 *	returns pointer to an array of strings(words).
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}

