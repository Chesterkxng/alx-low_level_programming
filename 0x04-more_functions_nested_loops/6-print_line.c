#include "main.h"
#include <stdio.h>

/**
 * print_line - Entry point
 * Description:  a program that print n times the underscore
 * characters
 * @n : input integer
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else {
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
