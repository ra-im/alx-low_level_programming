#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of
 * a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index on the list
 *
 * Return: nth node of the list, otherwise
 * NULL if index does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr_node = head;

	while (curr_node != NULL)
	{
		if (i == index)
			return (curr_node);

		curr_node = curr_node->next;
		i++;
	}

	return (NULL);
}
