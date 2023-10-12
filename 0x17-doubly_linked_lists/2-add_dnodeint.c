#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of
 * a dlistint_t
 * @head: pointer to dlistint
 * @n : to add in new_node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (!head || !*head)
		new_node->next = NULL;
	else
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
	}
	*head =  new_node;
	return (*head);
}
