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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s+1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}

