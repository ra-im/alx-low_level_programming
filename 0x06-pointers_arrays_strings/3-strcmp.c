#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: string to be compared with another.
 * @s2: sring to be compared with another.
 *
 * Return: int (the difference between their ascii).
 */

int _strcmp(char *s1, char *s2)
{
	int counter;

	for (counter = 0;
			s1[counter] != '\0' && s2[counter] != '\0';
			counter++)
	{
		if (s1[counter != s2[counter])
		{
			return (s1[counter - s2[counter]);
		}
	}

	return (0);
}

