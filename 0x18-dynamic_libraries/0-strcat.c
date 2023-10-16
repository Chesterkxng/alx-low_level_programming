#include "main.h"
#include <stdio.h>
/**
 * *_strcat - Entry point.
 * Description: a function that concatenates two strings
 * @dest : destination
 * @src : source
 *
 * Return: the concatenated dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	k = 0;

	i = _strlen(dest);

	j = _strlen(src);

	while (k <= j)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';

	return (dest);
}
