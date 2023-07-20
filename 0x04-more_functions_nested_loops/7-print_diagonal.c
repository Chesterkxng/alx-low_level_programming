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
	diagonal(n);
}

/**
 * diagonal - Entry point
 * Description: a program that display the desired diagonal
 * @n: input
 * Return: void
 */
void diagonal(int n)
{
	int i;

	if (n > 0)
	{

		for (i = 1 ; i <= n; i++)
		{
			int k;

			for (k = i; k > 0; k--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
