#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
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

	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, int);
		printf("%d", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
