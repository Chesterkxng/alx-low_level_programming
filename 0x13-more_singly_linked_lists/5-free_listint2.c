#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2 - a function free listint_t list
 * @head: pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *this;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	this = *head;
	while (this != NULL)
	{
		next = this->next;
		free(this);
		this = next;
	}
	*head = NULL;
}
