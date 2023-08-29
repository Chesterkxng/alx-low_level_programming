#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_listint_safe - a function that print safely
 * the listint_t list
 * @head: pointer the listint_t list
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0, checker;
	const listint_t *prev = NULL, *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)(temp), temp->n);
		prev = head;
		temp = temp->next;
		size++;
		checker = 0;
		while (checker < size)
		{
			if (temp == prev)
			{
				printf("-> [%p] %d\n", (void *)(temp), temp->n);
				return (size);
			}
			checker++;
			prev = prev->next;
		}
		if (head == NULL)
			exit(98);
	}
	return (size);
}
