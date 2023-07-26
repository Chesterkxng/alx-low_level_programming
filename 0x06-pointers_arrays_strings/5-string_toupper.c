#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * *string_toupper - Entry point.
 * Description: a function that return the Upper of
 * a given string
 * @s : input string
 *
 * Return: the desired output.
 */
char *string_toupper(char *s)
{
	int i, n;

	n = _strlen(s);

	i = 0;

	while (i <= n)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
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
