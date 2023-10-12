#include "lists.h"
/**
 * dlistint_len - function that prints all the elements of a dlistint_t list.
 * @h: double linked list
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t NofN;

	for (NofN = 0; h; NofN++)
		h =  h->next;
	return (NofN);
}
