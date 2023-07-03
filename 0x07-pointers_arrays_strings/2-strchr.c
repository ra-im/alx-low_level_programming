#include "main.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: String to be considered.
 * @c: Character in the string.
 *
 * return: pointer to the first occurence of the character c in the string;
 *		otherwise, NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}

