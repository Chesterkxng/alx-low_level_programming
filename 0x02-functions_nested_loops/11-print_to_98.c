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
	if (n > 0)
	{
		if (n >= 98)
		{

			for (n; n >= 98; n--)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		else if (n < 98)
		{
			for (n; n <= 98; n++)
			{
				if (n < 10)
				{

					_putchar(n % 10 + '0');
				}
				else if (n >= 10)
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
