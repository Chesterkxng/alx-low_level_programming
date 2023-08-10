#include "main.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
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
	_memset(p, 0, nmemb * size);
	return (p);
}
/**
 * *_memset - Entry point
 * Description: function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s : a point to a string
 * @b : substitution string
 * @n : integer
 *
 * Return: a pointer to a string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
