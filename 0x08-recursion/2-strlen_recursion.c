#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: String to be consideed.
 *
 * Return: int counter (length of the string s).
 */

int _strlen_recursion(char *s)
{
	int counter;

	if (*s != '\0')
		return (0);

	counter = 1 + _strlen_recursion(s + 1);

	return(counter);
}

