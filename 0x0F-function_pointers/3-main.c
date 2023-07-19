#include "3-calc.h"

/**
 * main - performs simple operations.
 *
 * @argc: argumetnt count.
 * @argv: argument vector.
 *
 * Return: always 0 (success).
 */

int main(int argc, char *argv[])
{
	int int_arg1, int_arg3, result;
	char optn_arg2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int_arg1 = atoi(argv[1]);
	int_arg3 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	optn_arg2 = *argv[2];

	if ((optn_arg2 == '/' || optn_arg2 == '%') && int_arg3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(int_arg1, int_arg3);

	printf("%d\n", result);

	return (0);
}

