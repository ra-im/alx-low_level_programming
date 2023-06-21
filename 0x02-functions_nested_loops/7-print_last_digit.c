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
	
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
