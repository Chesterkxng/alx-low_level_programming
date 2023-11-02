#include "hash_tables.h"
/**
 * hash_table_create -  a function that create a hsh table
 * @size: size of the hashtable
 * Return: pointer to the hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t) * size);
	if (!new_ht)
		return (NULL);
	return (new_ht);
}
