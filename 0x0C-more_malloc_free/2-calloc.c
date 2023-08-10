#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * *_calloc - Entry point
 * Description: a function allocates memory for an array of nmemb
 * elements of size.
 * @nmemb: int
 * @size: int
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	return (p);
}
