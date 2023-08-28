#include "lists.h"

/**
 * print_listint - that function print nodes
 *
 * @h: head of the node
 *
 * Return: count of the nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	listin_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
