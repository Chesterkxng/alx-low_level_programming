#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that print all the strings with a
 * separator given
 * @separator: separator
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
