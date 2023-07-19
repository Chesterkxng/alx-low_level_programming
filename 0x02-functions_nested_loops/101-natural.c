#include "main.h"

int is_divide(int n);

/**
 * print_sum - a program that print the sum of all (3 or 5)
 * multiples less than input.
 *
 * @n : input integer
 * Return: the sum
 */

int print_sum(int n)
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < n < 1024; i++)
	{
		j = is_divide(i);
		if (j == 1)
		{
			sum = sum + j;
		}
	}
	return (sum);
}

/**
 * is_divide - a program that tells that if the integer
 * is a 3 or 5 multiple
 * @n : input integer
 * Return : 1 (if multiple)
 *          0 (if not)
 */
int is_divide(int n)
{
	if (n % 3 || n % 5)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
