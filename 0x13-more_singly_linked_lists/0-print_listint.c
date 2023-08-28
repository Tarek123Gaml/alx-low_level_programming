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
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
