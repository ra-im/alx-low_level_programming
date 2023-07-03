#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Seaches a string for any set of bytes.
 *
 * @s: String to be considered.
 * @accept: String whose bytes are to be compared.
 *
 * Return: A pointer to the byte in the string s that
 * matches one of the bytes in the string accept; otherwise
 * returns NULL if  no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int counter_1, counter_2;

	for (counter_1 = 0; *s != '\0'; counter_1++)
	{
		for (counter_2 = 0;
				accept[counter_2] != '\0';
				counter_2++)
		{
			if (*s == accept[counter_2])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

