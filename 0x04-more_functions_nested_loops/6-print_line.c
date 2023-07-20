#include "main.h"
#include <stdio.h>

/**
 * print_line - Entry point
 * Description:  a program that print n times the underscore
 * characters
 * @n: input integer
 *
 */
void print_line(int n)
{
       	int i;

	for (i = 0; i < n; i++)
	{
   		_putchar(95);
	}
	_putchar('\n');
}
