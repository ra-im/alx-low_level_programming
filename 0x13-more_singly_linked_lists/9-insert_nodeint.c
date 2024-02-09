#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 *
 * @head: list head
 * @idx: list's indexed position
 * @n: node data
 *
 * Return: address of new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	for (i = 0; temp && 1 < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;

			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
