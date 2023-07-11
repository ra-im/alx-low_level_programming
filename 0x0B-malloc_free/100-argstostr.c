#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: argument countt.
 * @av: argument vectr.
 *
 * Return: poinyter to a new string; otherwise NULL (failuer).
 */

char *argstostr(int ac, char **av)
{
	char *conc_arg;
	int i, j, k, arr_size;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	arr_size = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arr_size++;
			j++;
		}

		arr_size++;
		i++;
	}

	conc_arg = malloc((arr_size * sizeof(char)) + 1);

	if (conc_arg == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			conc_arg[k] = av[i][j];
			j++;
			k++;
		}

		conc_arg[k] = '\n';
		i++;
		k++;
	}

	conc_arg[k] = '\0';

	return (conc_arg);
}

