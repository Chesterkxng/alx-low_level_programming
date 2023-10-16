#include "main.h"

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
