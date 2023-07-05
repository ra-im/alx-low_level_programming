#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: number to be considred.
 *
 * Return: int sqrt (square root of a natural number).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1, n));
	}
}

/**
 * finf_sqrt - (helper function) finfs the square root
 *
 * @n: number to be considered
 * @start: squar root steing point.
 * @stop: square root end point.
 *
 * Return: square root of the number n.
 */

int find_sqrt(int n, int start, int stop)
{
	int mid_point;

	if (start <= stop)
	{
		int mid_point = (start + stop) / 2;

		if (mid_point == n / mid_point)
		{
			return (mid_point);
		}
		else if (mid_point < n / mid_point)
		{
			return (find_sqrt(n, mid_point + 1, stop));
		}
		else
		{
			return (find_sqrt(n, start, mid_point -1));
		}
	}
	else
	{
		return (stop);
	}
}

