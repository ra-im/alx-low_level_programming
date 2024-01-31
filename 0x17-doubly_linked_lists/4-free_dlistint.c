#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 *
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = head;
	dlistint_t *next_node;

	while (curr_node != NULL)
	{
		/*save reference to the next node */
		next_node = curr_node->next;
		free(curr_node); /*free current node*/
		curr_node = next_node; /*move on to the next node*/
	}
}
