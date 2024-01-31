#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the
 * end of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @n: data to be added to the new node
 *
 * Return: dlistint_t, address to the new node,
 * or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = *head;

	/*update the next h*/
	if (*head != NULL)
		(*head)->next = new_node;

	*head = new_node;

	return (new_node);
}
