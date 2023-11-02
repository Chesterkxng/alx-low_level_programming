#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cursor;

	if (!ht || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	cursor = ht->array[index];
	while (cursor)
	{
		if (strcmp(cursor->key, key) == 0)
			return (cursor->value);
		cursor = cursor->next;
	}
	return (NULL);
}
