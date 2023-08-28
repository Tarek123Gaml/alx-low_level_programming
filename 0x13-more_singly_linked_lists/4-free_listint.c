#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: head of node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
