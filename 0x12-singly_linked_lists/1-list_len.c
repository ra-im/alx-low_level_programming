#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the numbe of elemnts in a lined list_t list.
 *
 * @h: pointer to linked list of type list_t.
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

