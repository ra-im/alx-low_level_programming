#include "lists.h"

/**
 * sum_listint - sums up all the data(n) of a listint_t singly linked list
 *
 * @head: list head
 *
 * Return: sum, otherwise 0 if empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
