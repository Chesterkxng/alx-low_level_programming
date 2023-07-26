#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * _strncpy(char *dest, char *src, int n) - Entry point.
 * Description: a function that concatenates two strings
 * @dest : destination
 * @src : source
 * @n : integer
 *
 * Return: void.
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
