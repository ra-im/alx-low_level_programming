#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: Character to be checked.
 *
 * Description: Checks for alphabetic character.
 *
 * Return: Always 0 (success).
 */

int _isalpha(int c)
{
	return ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'));
}

