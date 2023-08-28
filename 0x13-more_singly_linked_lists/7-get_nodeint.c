#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 *
 * @head: head of list
 * @index: number node we need
 *
 * Return: node nth
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	unsigned int i = 0;

	while (temp && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
