#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _strlen - Entry point
 * Description:	 a program that return the length of a given
 * char
 * @s: given char
 * Return: the number of characters
 */
int _strlen(const char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * print_separator - a program that print the separator
 * @separator: separator
 * Return: void
 */
void print_separator(const char *separator)
{
	int i, n;

	n = _strlen(separator);
	for (i = 0; i < n; i++)
		_putchar(separator[i]);
}
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
/**
 * print_numbers - function that print all the numbers with a
 * separator given
 * @separator: separator
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int x;

	va_start(numbers, n);

	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(numbers, int);
		print_number(x);
		if (separator != NULL)
			print_separator(separator);
	}
	x = va_arg(numbers, int);

	print_number(x);
	_putchar('\n');
}
