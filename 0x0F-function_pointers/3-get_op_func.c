#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 *		to perform the operation asked by the user.
 *		You’re not allowed to declare any other function.
 *
 * @s: operator passed as argument to the program.
 *
 * Return: pointer to the function that corresponds
 *		to the operator given as a parameter.
 *		otherwise, return NULL - if s does not
 *		match any of the expected operators.
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}

