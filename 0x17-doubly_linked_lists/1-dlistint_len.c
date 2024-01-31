#include "lists.h"

/**
 * dlistint_len - returns the number of element
 * in a linked `dlistint_t` list.
 * @h: dlistint_t double linked list
 * Return: size_t number of elements in h
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
