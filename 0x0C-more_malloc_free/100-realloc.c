#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - Entry point
 * Description: a function thatre allocates memory bloc.
 * @ptr: old pointer
 * @old_size: int
 * @new_size: int
 * Return: pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *caster;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr ==	NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	caster = ptr;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = caster[i];
	free(ptr);
	return (new_ptr);
}
