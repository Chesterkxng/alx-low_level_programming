#include "main.h"
#include <stdio.h>

void print_digits(void);

/**
 * more_numbers - Entry point
 * Description:  a program that prints 10 times all the numbers
 * from 0 to 14 followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_digits();
		_putchar('\n');
	}
}

/**
 * print_digits - Entry point
 * Description: a program that display a number of 2 digits
 * Return: void
 */
void print_digits(void)
{
	int i;

	for (i = 0 ; i < 15; i++)
	{
		if (i / 10 != 0)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
	}
}
