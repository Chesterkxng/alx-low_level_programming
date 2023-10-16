#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - Entry point.
 * Description: a function that concatenates two strings
 * @dest : destination
 * @src : source
 * @n : integer
 *
 * Return: the desired output.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
