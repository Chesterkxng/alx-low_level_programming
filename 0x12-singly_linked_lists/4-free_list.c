#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - a function free list_t list
 * @head: pointer to pointer
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
	      	free(head->str);
		free(head);
		head = head->next;
	}
}
