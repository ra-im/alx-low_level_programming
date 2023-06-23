#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: integer to be printed
 */

void print_nmber(int n)
{
	unsigned int int_num;

	if (int_num < 0)
	{
		int_num = -n;
		_putchar('-');
	} else
	{
		int_num = n;
	}

	if (int_num / 10)
	{
		print_number(int_num / 10);
	}

	_putchar((int_num % 10) + '0');
}
