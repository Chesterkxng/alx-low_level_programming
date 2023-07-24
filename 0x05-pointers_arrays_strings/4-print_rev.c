#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * print_rev - Entry point
 * Description:  a program that reverse print a
 * string
 * @s: given string
 * Return: the reverse sting
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s);

	while (s[length - 1] != '\0')
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
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
