#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_nodeint_at_index - a function that do what his name said
 * @head: pointer to pointer
 * @index: searched index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *this;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		this = *head;
		*head = (*head)->next;
		free(this);
	}
	this = *head;
	while (this != NULL && i < index - 1)
	{
		this = this->next;
		i++;
	}
	if (this == NULL || this->next == NULL)
		return (-1);
	next = this->next;
	this->next = next->next;
	free(next);
	return (1);
}
