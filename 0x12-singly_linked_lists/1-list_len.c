#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - a function that return
 * the number of elements of a list_t list
 * @h: pointer
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	unsigned long size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
