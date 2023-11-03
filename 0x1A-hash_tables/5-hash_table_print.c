#include "hash_tables.h"
/**
 * hash_table_print - a function that print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cursor;
	unsigned long int index, comma = 0;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		cursor = ht->array[index];
		while (cursor)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", cursor->key, cursor->value);
			comma = 1;
			cursor = cursor->next;
		}
	}
	printf("}\n");
}
