#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sum all the args
 * @n: first arg
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list toadd;
	int sum;
	unsigned int i;

	i = 0;
	sum = 0;

	va_start(toadd, n);
	if (n == 0)
	{
		va_end(toadd);
		return (0);
	}
	while (i < n)
	{
		int x = va_arg(toadd, int);

		sum += x;
		i++;
	}
	va_end(toadd);
	return (sum);
}
