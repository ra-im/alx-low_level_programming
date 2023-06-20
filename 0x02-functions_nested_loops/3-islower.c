#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: Character to be checked.
 *
 * Description: Checks for lowercase character.
 *
 * Return: Always 0 (success).
 */

int _islower(int c)
{
	return (c <= 'z' && c >= 'a');
}
