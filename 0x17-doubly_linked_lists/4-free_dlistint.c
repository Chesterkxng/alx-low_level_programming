#include "lists.h"
/**
 * free_dlistint - free dlistint
 * @head: listint
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
