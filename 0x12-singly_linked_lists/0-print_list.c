#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - a function that prints
 * all the elements of a list_t list
 * @h: pointer
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
