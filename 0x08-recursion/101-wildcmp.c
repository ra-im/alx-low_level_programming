#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if the string
 *		can be considered to be identical;
 *		otherwise, return 0.
 *
 * @s1: one of the strings tobe compared.
 * @s2: one of the strings to be considered.
 *
 * Return: 1 if the strings can be considered identical;
 *		otherwise, return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);

	if (*s1 == *s2)
	{
		int response;

		response = wildcmp(s1 + 1, s2 + 1);

		return(response);
	}

	if (*s2 == '*')
	{
		int result_1, result_2;

		result_1 = wildcmp(s1, s2 + 1);
		result_2 = wildcmp(s1 + 1, s2);

		return (result_1, result_2);
	}

	return (0);
}

