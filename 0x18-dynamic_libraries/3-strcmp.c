#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Entry point.
 * Description: a function compare two strings
 * @s1 : first char
 * @s2 : second char
 *
 * Return: the desired output.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
