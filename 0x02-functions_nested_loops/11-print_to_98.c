#include "main.h"

/**
 * print_to_98- Write a function print all the number from the given
 * number to 98.
 *
 * @n : integer
 *
 * Return: int
 */

void print_to_98(int n)
{

	while (n <= 98)
	{
		int d;
		int u;

		if (n >= 10)
		{
			d = n / 10;
			_putchar(d + '0');
		}
		u = n % 10;

		_putchar(u + '0');
       		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
