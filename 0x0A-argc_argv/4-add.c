#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers,
 *		followed by a new line.
 *
 * @argc: number of arguments supplied.
 * @argv: array of arguments.
 *
 * Return: 0 (success); otherwise 1, i one of the number
 *		contains symbols that are not digits.
 */

int main(int argc, char *argv[])
{
	int i, j, num, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}

