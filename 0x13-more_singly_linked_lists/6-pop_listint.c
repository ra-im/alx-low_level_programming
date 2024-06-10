#include "lists.h"

/**
 * pop_listint - deletes the head node of a singly linked list
 *
 * @head: head of the list
 *
 * Return: head node data, other wise 0 if empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (!*head || !head)
		return (0);

	node_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node_data);
}
