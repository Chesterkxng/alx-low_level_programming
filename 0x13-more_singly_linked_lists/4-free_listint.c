#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - a function that free a listint list
 * @head: pointer to pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *this;

	while(head != NULL)
	{
		this = head;
		head = head->next;
		free(this);
	}
}
