#include "main.h"
#include <stdio.h>

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

	while (s[count] != "")
	{
		count++;
	}
	return (count);
}
