#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: head of the list
 * @n: element of the new node
 *
 * Return: address of the new node, otherwise NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(listint_t));
	/* return null if there is no new node */
	if (!new_node)
		return (NULL);

	/*declare struct values of new_node*/
	new_node->n = n;
	new_node->next = NULL;

	/*if the list head is null, then the
	becomes the new_node*/
	if (*head  == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*otherwise, while temp = head is not null,*/
	/* we keep traveersing till the next node is null */
	while (temp->next)
		temp = temp->next;

	/* assign the next node to the new node */
	temp->next = new_node;

	return (new_node);
}
