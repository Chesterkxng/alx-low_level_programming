#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: double linked list
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t NofN;

	for (NofN = 0; h; NofN++)
	{
		printf("%d\n", h->n);
		h =  h->next;
	}
	return (NofN);
}
