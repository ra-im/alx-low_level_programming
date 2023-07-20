#include <stdio.h>
#include <stdlib.h>

/**
 * main - (Entrypoint) prints it's own opcodes.
 *
 * @argc: arguments count.
 * @argv: arguments vector.
 *
 * Return: always 0 (success).
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arg_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arg_arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arg_arr[i]);
			break;
		}
		printf("%02hhx ", arg_arr[i]);
	}
	return (0);
}

