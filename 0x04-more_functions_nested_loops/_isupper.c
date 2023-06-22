#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: Character to be checked.
 * Return: "1", if c is uppercase; "0" otherwise.
 */

int _isupper(int c)
{
	return (c <= 'Z' && c >= 'A');
}
