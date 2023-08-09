#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);
/**
 * *argstostr - Entry point
 * Description: Write a function that print all the arguments.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, noc;

	noc = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		noc += _strlen(av[i]);
	str = (char *)malloc((noc + ac + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
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
