#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a singly linked list
 *
 * @head: head of the list
 * @index: nth index
 *
 * Return: nth node, otherwise null if non exists
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t node_data;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;

		i++;
	}

	node_data = head;

	return (node_data);
}
