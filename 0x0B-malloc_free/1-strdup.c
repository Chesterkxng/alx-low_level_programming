#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);
/**
 * *_strdup - Entry point
 * Description: Write a function that return a pointer to
 * the copy of the given char.
 * @str: input
 * Return: null or pointer to array
 */
char *_strdup(char *str)
{
	char *p_2_c;

	unsigned int i, n;

	i = 0;

	n = _strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	p_2_c = (char *)malloc(sizeof(char) * (n + 1));

	if (p_2_c == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		p_2_c[i] = str[i];
		i++;
	}
	p_2_c[i] = '\0';
	return (p_2_c);
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
