#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: double linked list
 * @idx: wanted index
 * @n: data to add
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *next, *temp;
	unsigned int i = 0;

	if (idx == 0 || (!*h || !h))
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	temp = *h;
	while (temp)
	{
		next = temp->next;
		if (i == idx - 1 && next)
		{
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = next;
			return (new_node);
		}
		else if (i == idx - 1 && !next)
			return (add_dnodeint_end(h, n));
		temp = temp->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
