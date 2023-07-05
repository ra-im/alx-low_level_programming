#include "main.h"

int is_pal(char *s, int start, int end);
int strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome or not.
 *
 * @s: string to be considered.
 *
 * Return: 1 is s is astring; otherwise 0.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);

	response = is_pal(s, 0, strlen_recursion(s));

	return (response);
}

/**
 * is_pal - Recursively checks if a string is palindrome.
 *
 * @s: string to be considered.
 * @start: beginning of string.
 * @end: ending of string.
 *
 * Returns: 1 if string is palindrome, otherwise 0.
 */

int is_pal(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
		return (0);

	if (start >= end)
		return (1);

	result = is_pal(s, start + 1, end - 1);

	return (result);
}

/**
 * strlen_recursion - Returns the lenth of a string.
 *
 * @s: String to be considered.
 *
 * Return: length of the string s.
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	_strlen = 1 + strlen_recursion(s + 1);

	return (_strlen);
}

