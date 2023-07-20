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
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
