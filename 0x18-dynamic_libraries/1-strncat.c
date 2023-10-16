#include "main.h"
#include <stdio.h>
/**
 * *_strncat - Entry point.
 * Description: a function that concatenates two strings
 * @dest : destination
 * @src : source
 * @n : integer
 *
 * Return: the desired dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	k = 0;

	i = _strlen(dest);

	j = _strlen(src);

	if (n > j)
	{
		n = j;
	}
	while (k < n)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';

	return (dest);
}
