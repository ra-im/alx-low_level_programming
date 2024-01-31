#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n)
 * of a dlistint_t linked list
 *
 * @head: head of the list
 *
 * Return: sum of all data (n)
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr_node = head;

	while (curr_node != NULL)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}

	return (sum);
}
