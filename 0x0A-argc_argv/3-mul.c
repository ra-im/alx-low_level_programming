#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication of two numbers,
 *		followed by a new line.
 *
 * @argc: number of arguments supplied.
 * @argv: array of arguments.
 *
 * Return: 0 - if there are two arguments supplied;
 *         otherwise, return 1.
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
