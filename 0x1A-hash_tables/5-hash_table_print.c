#include "hash_tables.h"
/**
 * hash_table_print - a function that print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cursor;
	unsigned long int index;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		cursor = ht->array[index];
		while (cursor)
		{
			printf("'%s': '%s', ", cursor->key, cursor->value);
			if (!(cursor->next))
			{
				printf("'%s': '%s'", cursor->key, cursor->value);
				break;
			}
			cursor = cursor->next;
		}
	}
	printf("}\n");
}
