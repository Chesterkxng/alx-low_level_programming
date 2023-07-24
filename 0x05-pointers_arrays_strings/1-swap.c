#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 * Description: a function that swap two integers
 * @a : first integer
 * @b : second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k, l;

	k = *a;

	l = *b;

	*a = l;

	*b = k;
}
