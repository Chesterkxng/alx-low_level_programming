#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the beginning of
 * a dlistint_t
 * @head: pointer to dlistint
 * @n : to add in new_node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cursor, *prev;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!head || !*head)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (*head);
	}
	else
	{
		cursor = *head;
		while (cursor)
		{
			prev = cursor;
			cursor = cursor->next;
		}
		new_node->prev = prev;
		prev->next = new_node;
	}
	return (new_node);
}
