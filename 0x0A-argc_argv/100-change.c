#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints te minimum number of coins
 *		to make change for a n amount of money.
 *
 * @argc: number of arguments supplied.
 * @argv: array of arguments.
 *
 * Return: 0 - (success); other wise 1, if
 *	the number of arguments supplied is not exactly 1.
 */

int main(int argc, char *argv[])
{
	int i, num, min_coin;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	min_coin = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			min_coin++;
			num -= coins[i];
		}
	}

	printf("%d\n", min_coin);
	return (0);
}

