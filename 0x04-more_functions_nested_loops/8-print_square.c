#include "main.h"
#include <stdio.h>

/**
 * print_square - Entry point
 * Description:  a program that prints a n squareof  # + new lines
 * @size : input
 * Return: void
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
