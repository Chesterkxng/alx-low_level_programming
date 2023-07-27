#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * *leet - Entry point.
 * Description: a function encode a strinf
 * @s: string
 *
 *
 * Return: the desired output.
 */
char *leet(char *s)
{
	int i, j, n;

	char spe_char[10][2] = {{'a', '4'}, {'A', '4'},
			       {'e', '3'}, {'E', '4'},
			       {'o', '0'}, {'O', '0'},
			       {'t', '7'}, {'T', '7'},
			       {'l', '1'}, {'L', '1'}};

	i = 0;

	j = 0;

	n = _strlen(s) - 1;

	while (i <= n)
	{
		j = 0;

		while (j < 11)
		{
			if (s[i] == spe_char[j][0])
			{
				s[i] = spe_char[j][1];
			}
			j++;
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
