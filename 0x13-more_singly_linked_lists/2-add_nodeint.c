#include "lists.h"

/**
 * add_nodeint - add new node in the beginning
 *
 * @head: head of list
 * @n: new node data
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
