#include "main.h"
#include <stdio.h>

void print_digits(long int n);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci_98();
	return (0);
}
/**
 * fibonacci_98 - Entry point.
 * Description: a function that prints the fibonnaci
 * Numbers n=98
 *
 * Return: the desired dest.
 */

void fibonacci_98(void)
{
	long int fib1, fib2, fib3;
	int i;

	fib1 = 1;
	fib2 = 2;
	print_digits(fib1);
	_putchar(',');
	_putchar(' ');
	print_digits(fib2);
	i = 2;
	while (i < 96)
	{
		fib3 = fib1 + fib2;
		_putchar(',');
		_putchar(' ');
		print_digits(fib3);
		fib1 = fib2;
		fib2 = fib3;
		i++;
	}
	_putchar('\n');
}

/**
 * print_digits - function prints the digits of an integer.
 * @n: The number.
 * Return: void
 */

void print_digits(long int n)
{
	if (n / 10)
	{
		print_digits(n / 10);
	}
	if (n % 10 > 0)
	{
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('0' + (-(n % 10)));
	}
}
