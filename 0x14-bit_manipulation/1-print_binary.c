#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary rep. of a number.
 * @n: number to be converted to binary
 * Return: void.
*/

void print_binary(unsigned long int n)
{
	int rs;
	unsigned long int i;

	for (i = n, rs = 0; (i >>= 1) > 0; rs++)
		;

	for (; rs >= 0; rs--)
	{
		if ((n >> rs) & 1)
			printf("1");
		else
			printf("0");
	}
}
