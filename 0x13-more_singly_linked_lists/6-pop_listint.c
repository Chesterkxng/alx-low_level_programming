#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * pop_listint - a function that free a listint list
 * @head: pointer to pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int del_int;
	listint_t *this;

	if (*head == NULL || head == NULL)
		return (0);
	this = *head;
	del_int = this->n;
	*head = this->next;
	free(this);
	return (del_int);
}
