#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: string to be considered.
 * @accept: String whose characters are to be compared to s, for a match.
 *
 * Return: The number of bytes in the initial segment of s,
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter_1, counter_2;
	int result, matched;

	result = 0;

	for (counter_1 = 0; s[counter_1] != '\0'; counter_1++)
	{
		matched = 0;

		for (counter_2 = 0; accept[counter_2] != '\0';
				counter_2++)
		{
			if (s[counter_1] == accept[counter_2])
			{
				result++;
				matched = 1;
			}
		}

		if (matched == 0)
		{
			return (result);
		}
	}

	return (0);
}

