#include "main.h"

/**
 * _strlen_recursion - a function that return the length
 * of the string
 * @s: a pointer that point to a char
 * Return: the length of the string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
