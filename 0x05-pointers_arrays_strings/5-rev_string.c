#include "main.h"
#include <stdio.h>

int _strlen(char *s);
void print_rev(char *s);
void _puts(char *str);

/**
 * rev_string - a function that print a string and its reverse.
 * @s : String
 * Return: void.
 */
void rev_string(char *s)
{
	_puts(s);
	print_rev(s);
}


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

	length = _strlen(s) - 1;

	while (length  > 0)
	{
		_putchar(s[length]);
		length--;
		if (length == 0)
		{
			_putchar(s[0]);
		}
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
/**
 * _puts - a function that print a string.
 * @str : String
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
