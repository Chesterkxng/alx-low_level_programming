#include "main.h"
#include <stdio.h>

void diagonal(int n);

/**
 * print_diagonal - Entry point
 * Description:  a program that prints n times  \ + new lines
 * @n : input
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; ++j)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
