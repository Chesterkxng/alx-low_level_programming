#include "main.h"
void print_digits(int n);

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
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			print_digits(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			print_digits(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
/**
 * print_digits - print digits of the given number
 * @n : integer
 * Return : void
 *
 */
void print_digits(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_putchar(n % 10 + '0');
		print_digits(n / 10);

	}
}
