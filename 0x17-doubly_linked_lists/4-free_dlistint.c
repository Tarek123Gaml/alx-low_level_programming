#include "lists.h"

/**
 * free_dlistint - function with one argument
 * @head: pointer to linked list
 *
 * Description: free linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
