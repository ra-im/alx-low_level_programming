#include "variadic_functionsh"

/**
 * sum_them_all - sums up all it's parameters.
 *
 * @n: number of arguments to be summed up.
 *
 * Return: 0 - if n == 0; otherwise,
 *	return the sum of all it's parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	int params_sum = 0;

	if (n == 0)
		return (0);

	va_start(params, n);

	for (i = 0; i < n; i++)
		params_sum += va_arg(params, int);

	va_end(params);

	return (params_sum);
}

