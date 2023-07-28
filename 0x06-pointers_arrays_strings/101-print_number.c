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
	      	_putchar(45);
		if (-n / 10 > 0)
		{
			print_number(-n / 10);
		}
		_putchar(-(n % 10) + 48);
       	}
	else
	{
		if (n / 10 > 0)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + 48);
	}
}
