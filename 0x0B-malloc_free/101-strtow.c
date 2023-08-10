#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);
/**
 * **strtow - Entry point
 * Description: Write a function that print all the word without space.
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	char **string;
	int low, i, j, k, l;

	low = 0;
	i = 0;
	j = 0;

	if (str == NULL || str = "")
		return (NULL);
	string = (char *)malloc(sizeof(char *));

	if (str == NULL)
		return NULL;
	while (i <= _strlen(str))
	{
		while (str[i] != " ")
			low++;
		if (low != 0)
		{
			string[j] = (char *)malloc(sizeof(char) * low);
			if (string[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(string[k]);
				free(string);
				return (NULL);
			}
			low = 0;
			j++;
		}
		i++;
	}
	j = 0;
	for (i = 0; l = 0; i <= k; i++)
	{
		for (j = 0; str[j] != " "; j++; l++)
			string[i][j] = str[l];
		string[i][j + 1] = '\0';
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
		count++;
	return (count);
}
