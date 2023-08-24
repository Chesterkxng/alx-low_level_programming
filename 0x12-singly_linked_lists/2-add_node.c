#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *add_node - a function that adds
 * an element of a list_t list
 * @head: pointer to pointer
 * @str: string
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strdp;
	int size;
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	strdp = strdup(str);
	size = strlen(str);
	if (strdp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdp;
	new_node->len = size;
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
