#include "main.h"
#include <stdio.h>

int number_of_digits(int n);

/**
 * print_times_table - Write a function that prints times table from 0 to 15.
 * @n: times table integer limit
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{

		for (i = 0; i <= n; i++)
		{
			printf("0,");
			for (j = 1; j <= n; j++)
			{
				int res, digits;

				res = i * j;

				digits = number_of_digits(res);

				for (k = 0; k < (4 - digits); k++)
				{
					printf(" ");
				}

				if (j != n)
				{
					printf("%d,", res);
				}
				else
				{
					printf("%d\n", res);
				}
			}
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}

/**
 * number_of_digits - count the number of digit of an integer
 * @n: input integer
 * Return: the number of digit of the input
 */

int number_of_digits(int n)
{
	int k, count;

	k = n;

	count = 0;

	do {
		k /= 10;
		count++;
	} while (k != 0);
	return (count);
}
