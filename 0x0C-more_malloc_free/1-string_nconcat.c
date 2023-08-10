#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * *string_nconcat - Entry point
 * Description: a function that concatenates 2 strings.
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, n1, n2;
	char *concat;

	n1 = 0;
	n2 = 0;
	if (s1 != NULL)
		n1 = _strlen(s1);
	if (s2 != NULL)
		n2 = _strlen(s2);
	if (n > n2)
		n = n2;
       	concat = malloc(sizeof(char) * (n1 + n + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
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
		count++;
	return (count);
}
