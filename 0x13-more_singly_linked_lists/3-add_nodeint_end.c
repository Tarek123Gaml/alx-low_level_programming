#include "lists.h"

/**
 * add_nodeint_end - add new node at end
 *
 * @head: head of list
 * @n: new data node
 *
 * Return: new element address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
