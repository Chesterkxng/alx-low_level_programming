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
	fibonacci();
	return (0);
}
/**
 * fibonacci Entry point.
 * Description: a function that prints the fibonnaci
 * Numbers n=50
 *
 * Return: the desired dest.
 */

void fibonacci(void)
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
	while (i < 50)
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
	_putchar('0' + n % 10);
}
