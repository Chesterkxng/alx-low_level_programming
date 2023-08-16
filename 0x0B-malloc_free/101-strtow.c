#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);
int numofwords(char *s);
char *_strncpy(char *dest, char *src, int n);
/**
 * **strtow - Entry point
 * Description: Write a function that print all the word without space.
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	char **string;
	int now, low, i, j, k;
	char *ptr;

	low = 0;
	i = 0;
	j = 0;
	now = numofwords(str);

	if (!str)
		return (NULL);
	string = malloc(sizeof(char *) * (now + 1));

	if (!string)
		return (NULL);
	while (i <= _strlen(str))
	{
		if (str[i] != 32 && str[i] != '\0')
			low++;
		else
		{
			if (low != 0)
			{
				string[j] = malloc(sizeof(char) * (low + 1));
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
		}
		i++;
	}
	j = 0;
	i = 0;
	low = 0;
	while (i <= _strlen(str))
	{
		if (str[i] != 32 && str[i] != '\0')
			low++;
		else
		{
			if (low != 0)
			{
				ptr = str + (i - low);
				_strncpy(string[j], ptr, low);
				j++;
				low = 0;
			}
		}
		i++;
		if (i == _strlen(str))
		{
			if (low != 0)
			{
				ptr = str + (i - low);
				_strncpy(string[j], ptr, low);
				j++;
				low = 0;
			}

		}
	}
	string[j] = NULL;
	return (string);
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
/**
 * numofwords - entry point
 * Description: counting number of word in a sentence
 * @s: pointer to char
 * Return: int
 */
int numofwords(char *s)
{
	int num, low, i;

	low = 0;
	num = 0;
	i = 0;
	while (i <= _strlen(s))
	{
		if (s[i] != 32 && s[i] != '\0')
			low++;
		else
		{
			if (low != 0)
			{
				num++;
				low = 0;
			}
		}
		if (i == _strlen(s))
		{
			if (low != 0)
				num++;
		}
		i++;
	}
	return (num);
}
/**
 * *_strncpy - Entry point.
 * Description: a function that concatenates two strings
 * @dest : destination
 * @src : source
 * @n : integer
 *
 * Return: the desired output.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
