#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * rev_string - Entry point
 * Description:  a program that return a reverse screen
 * string
 * @s: given string
 * Return: the reverse sting
 */
void rev_string(char *s)
{
	int i, j;

	char c;

	i = 0;

	j = _strlen(s) - 1;

	while (i < j)
	{
		c = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = c;
		i++;
		j--;
	}
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
