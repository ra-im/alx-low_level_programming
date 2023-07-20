#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_params;
	char *str_param;
	unsigned int i;

	va_start(str_params, n);

	for (i = 0; i < n; i++)
	{
		str_param = va_arg(strings, char *);

		if (str_param == NULL)
			printf("(nil)");
		else
			printf("%s", str_param);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str_params);
}

