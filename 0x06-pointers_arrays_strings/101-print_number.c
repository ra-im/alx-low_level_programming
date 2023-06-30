#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: integer character string.
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int _n;

	if (n < 0)
	{
		_n = -n;
		_putchar('-');
	}
	else
	{
		_n = n;
	}

	if (_n / 10)
	{
		print_number(_n /10);
	}

	_putchar((_n % 10) + '0');
}

