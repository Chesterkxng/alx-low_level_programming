#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *get_nodeint_at_index - a function that do what his name said
 * @head: pointer to pointer
 * @index: searched index
 * Return: a pointer to that listint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int checker = 0;

	while (head != NULL && checker <= index)
	{
		if (checker == index)
			return (head);
		checker++;
		head = head->next;
	}
	return (NULL);
}
