#include "main.h"
#include <stdio.h>

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
