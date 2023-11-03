#include "hash_tables.h"
/**
 * hash_table_delete - a function that delete a hshtable
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cursor, *temp;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		cursor = ht->array[index];
		while (cursor)
		{
			temp = cursor;
			cursor = cursor->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
