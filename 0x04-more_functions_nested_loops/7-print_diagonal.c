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
	int j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			diagonal(j);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * diagonal - Entry point
 * Description: a program that display the desired diagonal
 * @n: input
 * Return: void
 */
void diagonal(int n)
{
	int k;

	for (k = n; k >= 0; k--)
	{
		_putchar(' ');
	}
	_putchar(92);
}
