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
	/* creating va_list to store the variable argument list */
	va_list int_params;
	unsigned int i;

	/* initializing valist for n number of arguments */
	va_start(int_params, n);

	/* loop through va_list n times */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(int_params, unsigned int));

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* free va_list */
	va_end(int_params);

	printf("\n");
}

