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
	unsigned int i = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
