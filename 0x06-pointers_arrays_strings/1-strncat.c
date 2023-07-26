#include "main.h"
#include <stdio.h>

/**
 * _strncat(char *dest, char *src, int n) - Entry point.
 * Description: a function that concatenates two strings
 * @dest : destination
 * @src : source
 * @n: number of Bytes
 * Return: void.
 */
char *_strncat(char *dest, char *src, int n)
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
/**
 * _strlen - Entry point
 * Description:  a program that return the length of a given
 * char
 * @s: given char
 * Return: the number of characters
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
