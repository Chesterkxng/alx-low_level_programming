#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - Entry point
 * Description: function copies n bytes from memory area
 * src to memory area dest
 * @dest : a pointer to a string(dest)
 * @src :a pointerto a string(src)
 * @n : integer
 *
 * Return: a pointer to a string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *address = dest;

	i = 0;


	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (address);
}
