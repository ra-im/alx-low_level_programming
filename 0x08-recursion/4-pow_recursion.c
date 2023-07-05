#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the poer of y.
 *
 * @x: the base number.
 * @y: the exponent number.
 *
 * Return: int res (the value of x raised to the poer of y).
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	res = x * _pow_recursion(x, y - 1);

	return (res);
}
