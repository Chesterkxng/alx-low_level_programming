#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *reverse_listint - a function that do what his name said
 * @head: pointer to pointer
 * Return: a pointer to that listint_t list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prec = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prec;
		prec = (*head);
		(*head) = next;
	}
	*head = prec;
	return (*head);
}
