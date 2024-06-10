#include "lists.h"

/**
 * free_listint - frees a singly linked list
 *
 * @head: head of the list
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		/*get the next node head*/
		temp = head->next;
		/*free the current node head*/
		free(head);
		/*set head to be the neext node*/
		head = temp;
	}
}
