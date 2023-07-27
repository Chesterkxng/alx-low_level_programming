#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 * Description: a program that prints an integer
 * @n : integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -(n);
		_putchar(45);
	}
	while (n / 10 != 0)
	{
		_putchar(n / 10 + '0');
		n = n / 10;
	}
	_putchar(n % 10 + '0');
}
