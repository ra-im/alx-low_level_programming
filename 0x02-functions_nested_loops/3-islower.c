#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Checks for lowercase character.
 *
 * Return: Always 0 (success).
 */

int _islower(int c)
{
	return (c <= 'z' && c >= 'a');
}
