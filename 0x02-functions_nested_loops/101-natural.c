#include "main.h"
#include <stdio.h>
void print_divider_3_5(void);

/**
 * print_sum - a program that print the sum of all (3 or 5)
 * multiples less than input.
 *
 * Return: 0 (Success)
 */

int main(void)
{
      	print_divider_3_5();
	return (0);
}

/**
 * print_divider_3_5 - a program that print the waited result
 * is a 3 or 5 multiple
 * Return : void
 */
void print_divider_3_5(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 || i % 5)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
