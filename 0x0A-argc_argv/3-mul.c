#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbrs.
 *
 * @argc: umber of argumets supplied.
 * @argv: array of arguments.
 *
 * Return: always 0 (success); therwise 1.
 */

int main(int argc, char *argv[])
{
	int a, b, mul;
	
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);

	return (0);
}

