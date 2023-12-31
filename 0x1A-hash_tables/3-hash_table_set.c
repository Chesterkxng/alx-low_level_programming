#include "hash_tables.h"
/**
 * node_init - create a new node
 * @key: key
 * @value: value
 * Return: pointer or NULL
 */
hash_node_t *node_init(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	if (!(new_node->key))
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!(new_node->value))
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *cursor;
	unsigned long int index;

	if (!ht || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	cursor = ht->array[index];
	while (cursor)
	{
		if (strcmp(cursor->key, key) == 0)
		{
			cursor->value = strdup(value);
			if (cursor->value == NULL)
				return (0);
			return (1);
		}
		cursor =  cursor->next;
	}
	new_node = node_init(key, value);
	new_node->next =  ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
