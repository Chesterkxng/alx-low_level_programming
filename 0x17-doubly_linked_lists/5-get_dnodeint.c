#include "lists.h"
/**
 * get_dnodeint_at_index - node at index
 * @head: dlistint
 * @index: searched index
 * Return: a pointer to the searched node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
