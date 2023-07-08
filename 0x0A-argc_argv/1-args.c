#include <stdio.h>

/**
 * main - prints the number of argumets pssed into it.
 *
 * @argc: number of arguments supplied.
 * @argv: array of arguments.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

