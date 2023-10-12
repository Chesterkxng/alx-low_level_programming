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
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	temp = *h;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
