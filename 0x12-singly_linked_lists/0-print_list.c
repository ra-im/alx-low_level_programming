#include <stdio.h>
#include "main.h"

/**
 * print_list: prints all d elements of a list_t list.
 *
 * @h: pointer to th list of type list_t.
 *
 * Return: [0] (nil) - if str is NULL; OTHERWISE,
 *		returns the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t print_count = 0;

	while (h)
	{
		if (!h->str)
			printd("[0] (nil)\n");
		else
			printf("[%u] %s \n", h->len, h->str);

		h = h->next;
		print_count++;
	}

	return (print_count);
}

