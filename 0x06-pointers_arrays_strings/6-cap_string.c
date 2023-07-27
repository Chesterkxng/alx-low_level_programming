#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * *cap_string - Entry point.
 * Description: a function that capitilize
 * @s: string
 *
 *
 * Return: the desired output.
 */
char *cap_string(char *s)
{
	int i, j, n;

	char ponc[] = {',', ';', '.', '\n', ' ', '\t', '(', ')', '{', '}'};

	i = 0;

	j = 0;

	n = _strlen(s);

	while (i <= n)
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == ponc[j] &&
			    (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
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
