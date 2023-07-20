#include "main.h"
#include <stdio.h>

/**
 * print_triangle - display triangle.
 * @size : size
 * Return: void.
 */

void print_triangle(int size)
{
	int i, j, k, limit;

	k = 0;

	for (i = 1; i <= size; i++)
	{
		space = size - k;
		for (j = 1; j <= size; j++)
		{
			if (j < space)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		k = k + 1;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
