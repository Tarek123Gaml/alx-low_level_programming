#include "lists.h"

/**
 * add_dnodeint - function with two arguments
 * @head: pointer to double linked list
 * @n: data for each node
 *
 * Description: adds a new node at the beginning
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if(!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;

	if(*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		if(*head)
			(*head)->prev = new;
		*head = new;
	}
	return (new);
}
