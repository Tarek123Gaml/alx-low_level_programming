#include "lists.h"

/**
 * delete_nodeint_at_index - function that delit postion
 *
 * @head: head of list
 * @index: postion delited
 *
 * Return: -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previus = *head;

	if (!*head || !head)
		return (-1);

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (index != 0)
		{
			previus = current;
			current = current->next;
			index--;
		}
		previus->next = current->next;
		free(current);
		return (1);
	}
}
