#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, follwed by a new line.
 *
 * @separator: string to be printed between numbers.
 * @n: number of the function's inteeger argumentnts.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list int_params;
	unsigned int i;

	va_start(int_params, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(int_params, int));

		if (i < (n - 1) && separator != NULL)
			printf("%c", *separator);
	}

	va_end(int_params);

	printf("\n");
}

