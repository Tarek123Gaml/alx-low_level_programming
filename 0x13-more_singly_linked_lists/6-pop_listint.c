#include "lists.h"

/**
 * pop_listint - delit first element
 *
 * @head: head of list
 *
 * Return: number
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	(*head) = temp;

	return (num);
}
