#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry point
 *
 * @integer: The integer whose absolute
 *		value is to be calculated.
 *
 * Description: Computes the absolute value of an integer.
 *
 * Return: Always 0 (success).
 */

int _abs(int integer)
{
	if (integer < 0)
	{
		return (-integer);
	}
	return (integer);
}
