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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strn[i] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			conter++;
		}
	}

	return (counter)
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
	int i, j, k, length, words, start, end;
	char **matrix, *temp

	words = word_counter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1 ));
	if (matrix == NULL)
		return (NULL);

	length = 0;
	while (*(str + length))
		length++;

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			j = 0;
			if (j)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (j + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[k] = temp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

