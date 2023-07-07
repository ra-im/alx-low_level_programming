#include "main.h"

/**
 * _isdigit - Checks for a digit, from 0 to 9.
 * @c: digit to be checked.
 * Return: (1) if c is a digit, (0)  otherwise.
 */

int _isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

