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
	char *array;
	int i, bytes;

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

	array = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}

		printf("%02hhx ", arr[i]);
	}

	return (0);
}

