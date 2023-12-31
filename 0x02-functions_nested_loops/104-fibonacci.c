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
	char fib1[50];
	char fib2[50];

	fib1 = {'1'};
	fib2 = {'2'};

	printf("1, 2");
	i = 2;
	while (i < 98)
	{
		char fibp[50];
		sprintf(fibp, "%lu", atoi(fib1) + atoi(fib2));
		printf(", %s", fibp);
		fib1 = fib2;
		fib2 = fibp;
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
	if (n / 10 > 0)
	{
		print_digits(n / 10);
	}
	_putchar('0' + n % 10);
}
