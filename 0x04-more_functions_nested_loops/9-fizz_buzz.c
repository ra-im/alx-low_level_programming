#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 *
 * Description: Prints the numbers from 1 to 100,
 *		followed by a new line, but for the
 *		multiples of 3, print 'fizz'; for the
 *		multiples of 5, print 'buzz'; and for the
 *		multiples of both 3 and 5, print 'fizzbuzz'.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}

