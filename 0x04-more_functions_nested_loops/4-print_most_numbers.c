#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Entry point
 * Description:  a program that print all the numbers
 * from 0 to 9 except 2 and 4 followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (n != 2 || n != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
