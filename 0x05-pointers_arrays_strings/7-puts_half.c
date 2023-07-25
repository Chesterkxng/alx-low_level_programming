#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * puts_half - Entry point
 * Description:  a program that print a half of a
 * string
 * @str: given string
 * Return: the reverse sting
 */
void puts_half(char *str)
{
	int i, length;

	length = _strlen(s);

	if (n % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}
	while (i <= length)
	{
		_putchar(str[i]);
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
