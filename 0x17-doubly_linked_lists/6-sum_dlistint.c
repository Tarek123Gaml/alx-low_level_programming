#include "lists.h"

/**
 * sum_dlistint - function culcolate sum of data node
 *
 * @head: head list
 *
 * Return: return sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
