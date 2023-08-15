#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free all the memory
 * @d: dog struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
