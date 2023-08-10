#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Entry point
 * Description: a function that print all the arguments.
 * @b: number of bites
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
