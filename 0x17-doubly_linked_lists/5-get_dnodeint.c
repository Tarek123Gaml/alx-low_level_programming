#include "lists.h"

/**
 * get_dnodeint_at_index - return index node
 *
 * @head: head of list
 * @index: index of node
 *
 * Return: return node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (temp && (index))
	{
		temp = temp->next;
		index--;
	}
	if (index > 1)
		return (NULL);
	else
		return (temp);
}
