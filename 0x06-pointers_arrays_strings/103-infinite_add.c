#include "main.h"

/**
 * rev_string - reverses an array.
 *
 * @n: integer parameter elements of the the array.
 *
 * Return:  0.
 */

void rev_string(char *n)
{
	int counter_1 = 0;
	int counter_2 = 0;
	char temp;

	while (*(n + counter_1) != '\0')
	{
		counter_1++;
	}

	counter_1--;

	for (counter_2 = 0;
			counter_2 < counter_1;
			counter_2++, counter_1--)
	{
		temp = *(n + counter_2);
		*(n + counter_2) = *(n + counter_1);
		*(n + counter_1) = temp;
	}
}

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: one of the two numbers to be added.
 * @n2: one of the two numbers to be added.
 * @r: buffer that the fuction will use to store result.
 * @size_r: size of the buffer.
 *
 * Return: r (if the result can be stored); 0 otherwise.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

