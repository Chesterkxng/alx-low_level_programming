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
	fibonacci_even();
	return (0);
}
/**
 * fibonacci_even - Entry point.
 * Description: a function that prints the fibonnaci
 * Numbers n=50
 *
 * Return: the desired dest.
 */

void fibonacci_even(void)
{
	long int fib1, fib2, fib3, sum;

	fib1 = 1;
	fib2 = 2;
	sum = fib2;

	while (fib3 < 4000000)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (fib3 % 2 == 0)
		{
			sum = sum + fib3;
		}
	}
	print_digits(sum);
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
