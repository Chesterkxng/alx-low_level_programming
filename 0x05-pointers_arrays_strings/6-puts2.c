#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * puts2 - Entry point
 * Description:  a program that print the desired string
 * string
 * @str: given string
 * Return: the desired string
 */
void puts2(char *str)
{
	int i, length;

	length = _strlen(s) - 1;

	i = 0;

	while(i <= length)
	{
		_putchar(str[length]);
		i = i + 2;
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
