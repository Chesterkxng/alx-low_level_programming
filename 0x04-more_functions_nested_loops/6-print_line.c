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
       	int i;

	for (i = 0; i < n; i++)
	{
       		_putchar(98);
	}
	_putchar('\n');
}
