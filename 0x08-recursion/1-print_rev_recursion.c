#include "main.h"

/**
 * _print_rev_recursion - reverse print a given string followed
 * by a new line
 * @s: a pointer that point to a char
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
