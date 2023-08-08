#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);
/**
 * *str_concat - Entry point
 * Description: Write a function that return a pointer to
 * the copy of the given char.
 * @s1: input
 * @s2: input
 * Return: null or pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	char *p_2_c;

	unsigned int i, j, n1, n2;

	i = 0;

	j = 0;

	n1 = 0;

	n2 = 0;

	if (s1 != NULL)
	{
		n1 = _strlen(s1);

	}
	if (s2 != NULL)
	{
		n2 = _strlen(s2);
	}
	p_2_c = (char *)malloc(sizeof(char) * (n1 + n2 + 1));

	if (p_2_c == NULL)
	{
		return (NULL);
	}
	while (i < n1)
	{
		p_2_c[i] = s1[i];
		i++;
	}
	while (j < n2)
	{
		p_2_c[i + j] = s2[j];
		j++;
	}
	p_2_c[i + j] = '\0';
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
