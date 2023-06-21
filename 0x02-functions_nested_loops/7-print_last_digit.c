#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @number: Number whose last digit is to be printed.
 *
 * Description: Prints the last digit of a number.
 *
 * Return: Always last-digit (success).
 */

int print_last_digit(int number)
{
	int last_digit;

	if (number < 0)
		number = -number;

	last_digit = number % 10;

	_putchar(last_digit);

	return (last_digit);
}
