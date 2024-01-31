#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: proposed index of the list
 *
 * Return: 1 on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	/*at index 0*/
	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;

			free(temp);
			return (1);
		}
		return (-1);
	}

	/*at index > list length*/
	if (*head == NULL && index > 0)
		return (-1);

	while (index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);

	return (1);
}
