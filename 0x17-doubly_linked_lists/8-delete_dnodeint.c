#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: double linked list.
 * @index: Index.
 * Return: 1 or -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = *head;
	if (index == 0)
	{
		if (temp)
		{
			*head = temp->next;
			if (*head)
				(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		return (-1);
	}
	for (i = 0; i < index && temp; i++)
		temp = temp->next;
	if (i == index && temp)
	{
		if (temp->next)
			(temp->next)->prev = temp->prev;
		if (temp->prev)
			(temp->prev)->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
